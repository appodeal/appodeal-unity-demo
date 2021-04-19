using System;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using System.IO;
using System.Linq;
using System.Text.RegularExpressions;
using UnityEditor;
using UnityEngine;
using AppodealAds.Unity.Editor.Utils;


namespace AppodealAds.Unity.Editor.Checkers
{
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "UnusedVariable")]
    [SuppressMessage("ReSharper", "UnusedMember.Local")]
    [SuppressMessage("ReSharper", "UnusedType.Global")]
    public class PlayServicesChecker : CheckingStep
    {
        private readonly Dictionary<string, HashSet<string>> requiredServices = new Dictionary<string, HashSet<string>>
        {
            {"play-services-ads", new HashSet<string>()},
            {"play-services-location", new HashSet<string>()},
            {"play-services-gcm", new HashSet<string>()}
        };

        private const string MIN_SUPPORTED_PLAY_SERVICES_VERSION = "15.0.0";

        public override string getName()
        {
            return "Play Services Dependencies";
        }

        public override bool isRequiredForPlatform(BuildTarget target)
        {
            return target == BuildTarget.Android;
        }

        public override List<FixProblemInstruction> check()
        {
            var instructions = new List<FixProblemInstruction>();
            var reAar = new Regex(@"play-services.+-(?<version>\d+\.\d+(\.\d+)*)");

            var aarFiles = getPlayServicesAarFiles();
            foreach (var file in aarFiles)
            {
                foreach (var service in requiredServices.Keys)
                {
                    if (!file.Contains(service)) continue;
                    var m = reAar.Match(file);
                    if (m.Success) requiredServices[service].Add(m.Value);
                    else
                    {
                        var instr = new FixProblemInstruction(
                            "Play service without specified version found. " +
                            "Please specify version to be able to resolve possible conflicts automatically." + file,
                            false);
                        instructions.Add(instr);
                        return instructions;
                    }
                }
            }

            var absentServices = new HashSet<string>();
            var allVersions = new HashSet<string>();
            foreach (var service in requiredServices)
            {
                if (service.Value.Count == 0)
                {
                    absentServices.Add(service.Key);
                }

                allVersions.UnionWith(service.Value);
            }

            var deps = new DependenciesParser(getAllDependenciesFiles());
            absentServices.RemoveWhere(s => deps.foundServices.Contains(s));
            if (absentServices.Count > 0)
            {
                var absent = string.Join(",", absentServices.ToArray());
                var instr =
                    new FixProblemInstruction("Some required Play Services are absent in your project: " + absent,
                        false);
                instructions.Add(instr);
                return instructions;
            }

            var allVersionsInDependencies = new HashSet<string>();
            foreach (var kv in deps.playServicesVersions)
            {
                if (kv.Value.Count > 1)
                {
                    var instr = new FixProblemInstruction(
                        "Two or more different versions of play services are presented in " +
                        kv.Key + ". Please contact the plugin developers to clarify what version is required.", false);
                    instructions.Add(instr);
                    return instructions;
                }

                allVersionsInDependencies.UnionWith(kv.Value);
            }

            switch (allVersions.Count)
            {
                case 0:
                {
                    switch (allVersionsInDependencies.Count)
                    {
                        case 0:
                        {
                            var instr = new FixProblemInstruction(
                                "There is no Google Play Services in the project. It's a essential condition if you want to use Appodeal plugin. Please visit our web site to get more information.",
                                false);
                            instructions.Add(instr);
                            return instructions;
                        }
                        case 1:
                            break;
                    }

                    break;
                }
                case 2:
                    break;
                default:
                {
                    if (allVersions.Count > 2)
                    {
                        var instr = new FixProblemInstruction(
                            "There are three or more different versions of google play services " +
                            "in your project: " + allVersions + ". It's not possible to resolve this conflict automatically. " +
                            "Try to update all plugins in your project and run the checker again.", false);
                        instructions.Add(instr);
                        return instructions;
                    }

                    break;
                }
            }
            
            return instructions;
        }

        private bool isPlayServicesResolverAvailable()
        {
            return Directory.Exists(
                AppodealUnityUtils.relative2Absolute(Path.Combine("Assets", "PlayServicesResolver")));
        }

        private static string[] getAllDependenciesFiles()
        {
            var deps = new List<string>();
            deps.AddRange(Directory.GetFiles(Application.dataPath, "*Dependencies.xml", SearchOption.AllDirectories));
            deps.AddRange(Directory.GetFiles(Application.dataPath, "*.gradle", SearchOption.AllDirectories));
            return Array.FindAll(deps.ToArray(), isMeaningfulForDependenciesCheck);
        }

        private static IEnumerable<string> getPlayServicesAarFiles()
        {
            var aars = new List<string>();
            aars.AddRange(Directory.GetFiles(Application.dataPath, "*play-services*.aar", SearchOption.AllDirectories));
            return aars.ToArray();
        }

        private static bool isMeaningfulForDependenciesCheck(string filePath)
        {
            return !filePath.Contains("InternalResources");
        }

        private bool isPlayServicesRelatedAar(string filePath)
        {
            return filePath.Contains("play-services");
        }

        private static string getAppodealDependenciesFile()
        {
            var files = Directory.GetFiles(Application.dataPath, "AppodealDependencies.xml",
                SearchOption.AllDirectories);
            return files.Length == 1 ? files[0] : null;
        }
    }

    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "UnusedVariable")]
    internal class DependenciesParser
    {
        public readonly Dictionary<string, HashSet<string>> playServicesVersions = new Dictionary<string, HashSet<string>>();
        public readonly HashSet<string> foundServices = new HashSet<string>();

        public DependenciesParser(IEnumerable<string> files)
        {
            parse(files);
        }

        private void parse(IEnumerable<string> filesToCheck)
        {
            var re = new Regex(@"com\.google\.android\.gms(?<name>:.*:|.*,\s+.*"""")+(?<version>\d+\.\d+(\.\d+)*)");
            foreach (var file in filesToCheck)
            {
                var fulltext = File.ReadAllText(file);
                var matches = re.Matches(fulltext);
                foreach (Match m in matches)
                {
                    if (!m.Success) continue;
                    var currentVersion = m.Groups["version"].Value;
                    foundServices.Add(m.Groups["name"].Value.Trim(':'));
                    if (!playServicesVersions.ContainsKey(file))
                    {
                        var v = new HashSet<string> {m.Groups["version"].Value};
                        playServicesVersions.Add(file, v);
                    }
                    else
                    {
                        playServicesVersions[file].Add(m.Groups["version"].Value);
                    }
                }
            }
        }
    }

    public class RunJarResolver : FixProblemInstruction
    {
        public RunJarResolver() : base("", true)
        {
        }
    }
}