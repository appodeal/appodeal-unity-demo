using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text.RegularExpressions;
using UnityEditor;
using UnityEngine;

namespace AppodealAds.Unity.Editor.Checkers {
	public class PlayServicesChecker : CheckingStep {
		private Dictionary<string, HashSet<string>> requiredServices = new Dictionary<string, HashSet<string>> { { "play-services-ads", new HashSet<string> () },
			{ "play-services-location", new HashSet<string> () },
			{ "play-services-gcm", new HashSet<string> () }
		};
		private const string MIN_SUPPORTED_PLAY_SERVICES_VERSION = "12.0.0";
		override public string getName () {
			return "Play Services Dependencies";
		}

		public override bool isRequiredForPlatform (BuildTarget target) {
			if (target == BuildTarget.Android) return true;
			return false;
		}

		public override List<FixProblemInstruction> check () {
			List<FixProblemInstruction> instructions = new List<FixProblemInstruction> ();
			string appodealDependenciesFile = getAppodealDependenciesFile ();
			Regex reAar = new Regex (@"play-services.+-(?<version>\d+\.\d+(\.\d+)*)");

			string[] aarFiles = getPlayServicesAarFiles ();
			foreach (string file in aarFiles) {
				foreach (string service in requiredServices.Keys) {
					if (file.Contains (service)) {
						Match m = reAar.Match (file);
						if (m.Success) requiredServices[service].Add (m.Value);
						else {
							FixProblemInstruction instr = new FixProblemInstruction ("Play service without specified version found. " +
								"Please specify version to be able to resolve possible conflicts automatically." + file, false);
							instructions.Add (instr);
							return instructions;
						}
					}
				}
			}
			HashSet<string> absentServices = new HashSet<string> ();
			HashSet<string> allVersions = new HashSet<string> ();
			foreach (KeyValuePair<string, HashSet<string>> service in requiredServices) {
				if (service.Value.Count == 0) {
					absentServices.Add (service.Key);
				}
				allVersions.UnionWith (service.Value);
			}

			DependenciesParser deps = new DependenciesParser (getAllDependenciesFiles ());
			absentServices.RemoveWhere (s => deps.foundServices.Contains (s));
			if (absentServices.Count > 0) {
				string absent = string.Join (",", absentServices.ToArray ());
				FixProblemInstruction instr = new FixProblemInstruction ("Some required Play Services are absent in your project: " + absent, false);
				instructions.Add (instr);
				return instructions;
			}

			HashSet<string> allVersionsInDependencies = new HashSet<string> ();
			foreach (KeyValuePair<string, HashSet<string>> kv in deps.playServicesVersions) {
				if (kv.Value.Count > 1) {
					FixProblemInstruction instr = new FixProblemInstruction ("Two or more different versions of play services are presented in " +
						kv.Key + ". Please contact the plugin developers to clarify what version is required.", false);
					instructions.Add (instr);
					return instructions;
				}
				allVersionsInDependencies.UnionWith (kv.Value);
			}

			if (allVersions.Count == 0) {
				if (allVersionsInDependencies.Count == 0) {
					FixProblemInstruction instr = new FixProblemInstruction ("There is no Google Play Services in the project. It's a essential condition if you want to use Appodeal plugin. Please visit our web site to get more information.", false);
					instructions.Add (instr);
					return instructions;
				} else if (allVersionsInDependencies.Count == 1) { //and at least some of required services are in xml

				}
				//Надо узнать, есть ли зависимости в градле и правильные ли они или xml прежде чем что-то предлагать
				//В xml - ресолвим
				//В градл - вообще все норм (при условии отсуствия конфликтов)

			} else if (allVersions.Count == 2) {
				//1 Зависимости от разных xml (если один из них - AppodealDependencies, то меняем в нем; если нет, то придется ограничится предупреждением)
				//2 Одни - зависимость от xml, другие просто положены каким-то плагином (Если есть AppodealDependencies, то меняем в нем? иначе предупреждение)
				//3 Все напрямую распространялись плагинами (предупреждение)
			} else if (allVersions.Count > 2) {
				FixProblemInstruction instr = new FixProblemInstruction ("There are three or more different versions of google play services " +
					"in your project: " + allVersions + ". It's not possible to resolve this conflict automatically. " +
					"Try to update all plugins in your project and run the checker again.", false);
				instructions.Add (instr);
				return instructions;
			}

			//What if aar file is a result of JarResolver work? We can change version in resolver and aar version will be changed too
			//On the other hand, it can be just an aar. And we can't change anything in this case.

			return instructions;
		}

		private bool isPlayServicesResolverAvailable () {
			return Directory.Exists (AppodealUnityUtils.relative2Absolute (Path.Combine ("Assets", "PlayServicesResolver")));
		}

		private string[] getAllDependenciesFiles () {
			List<string> deps = new List<string> ();
			deps.AddRange (Directory.GetFiles (Application.dataPath, "*Dependencies.xml", SearchOption.AllDirectories));
			deps.AddRange (Directory.GetFiles (Application.dataPath, "*.gradle", SearchOption.AllDirectories));
			return Array.FindAll<string> (deps.ToArray (), isMeaningfulForDependenciesCheck);
		}

		private string[] getPlayServicesAarFiles () {
			List<string> aars = new List<string> ();
			aars.AddRange (Directory.GetFiles (Application.dataPath, "*play-services*.aar", SearchOption.AllDirectories));
			//return Array.FindAll<string>(aars.ToArray(), isPlayServicesRelatedAar);
			return aars.ToArray ();
		}

		private bool isMeaningfulForDependenciesCheck (string filePath) {
			return !filePath.Contains ("InternalResources");
		}

		private bool isPlayServicesRelatedAar (string filePath) {
			return filePath.Contains ("play-services");
		}

		private string getAppodealDependenciesFile () {
			string[] files = Directory.GetFiles (Application.dataPath, "AppodealDependencies.xml", SearchOption.AllDirectories);
			return files.Length == 1 ? files[0] : null;
		}
	}

	class DependenciesParser {
		public Dictionary<string, HashSet<string>> playServicesVersions = new Dictionary<string, HashSet<string>> ();
		public HashSet<string> foundServices = new HashSet<string> ();
		public DependenciesParser (string[] files) {
			parse (files);
		}

		private void parse (string[] filesToCheck) {
			Regex re = new Regex (@"com\.google\.android\.gms(?<name>:.*:|.*,\s+.*"""")+(?<version>\d+\.\d+(\.\d+)*)");
			foreach (string file in filesToCheck) {
				string fulltext = File.ReadAllText (file);
				MatchCollection matches = re.Matches (fulltext);
				foreach (Match m in matches) {
					if (m.Success) {
						string currentVersion = m.Groups["version"].Value;
						foundServices.Add (m.Groups["name"].Value.Trim (':'));
						if (!playServicesVersions.ContainsKey (file)) {
							HashSet<string> v = new HashSet<string> ();
							v.Add (m.Groups["version"].Value);
							playServicesVersions.Add (file, v);
						} else {
							playServicesVersions[file].Add (m.Groups["version"].Value);
						}
					}
				}
			}
		}

	}

	public class RunJarResolver : FixProblemInstruction {
		public RunJarResolver () : base ("", true) {

		}
	}
}