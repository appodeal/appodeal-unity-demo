using System;
using System.IO;
using System.Text;
using Unity.Appodeal.Xcode;
using Unity.Appodeal.Xcode.PBX;
using UnityEditor;
using UnityEditor.Callbacks;
using UnityEngine;

namespace Appodeal.Unity.Editor.iOS {

	public class iOSPostprocessUtils : MonoBehaviour {
		static string suffix = ".framework";
		static string absoluteProjPath;
		static string minVersionToEnableBitcode = "10.0";
		
		[Obsolete]
		[PostProcessBuild]
		public static void ChangeXcodePlist(BuildTarget buildTarget, string pathToBuiltProject) {
 
			if (buildTarget == BuildTarget.iOS) {
       
				// Get plist
				string plistPath = pathToBuiltProject + "/Info.plist";
				PlistDocument plist = new PlistDocument();
				plist.ReadFromString(File.ReadAllText(plistPath));
       
				// Get root
				PlistElementDict rootDict = plist.root;
       
				// Change value of CFBundleVersion in Xcode plist
				var buildKey = "GADApplicationIdentifier";
				rootDict.SetString(buildKey,"ca-app-pub-3940256099942544~1458002511");
       
				// Write to file
				File.WriteAllText(plistPath, plist.WriteToString());
			}
		}

		static string[] frameworkList = new string[] {
			"AdSupport",
			"AudioToolbox",
			"AVFoundation",
			"CFNetwork",
			"CoreFoundation",
			"CoreGraphics",
			"CoreImage",
			"CoreLocation",
			"CoreMedia",
			"CoreMotion",
			"CoreTelephony",
			"CoreText",
			"EventKit",
			"EventKitUI",
			"GLKit",
			"ImageIO",
			"JavaScriptCore",
			"MediaPlayer",
			"MessageUI",
			"MobileCoreServices",
			"QuartzCore",
			"SafariServices",
			"Security",
			"Social",
			"StoreKit",
			"SystemConfiguration",
			"Twitter",
			"UIKit",
			"QuartzCore",
			"WebKit",
			"WatchConnectivity",
			"VideoToolbox"
		};

		static string[] weakFrameworkList = new string[] {
			"CoreMotion",
			"WebKit",
			"Social"
		};

		static string[] platformLibs = new string[] {
			"libc++.dylib",
			"libz.dylib",
			"libsqlite3.dylib",
			"libxml2.2.dylib"
		};

		public static void PrepareProject (string buildPath) {
			Debug.Log ("preparing your xcode project for appodeal");
			string projPath = Path.Combine (buildPath, "Unity-iPhone.xcodeproj/project.pbxproj");
			absoluteProjPath = Path.GetFullPath (buildPath);
			PBXProject project = new PBXProject ();
			project.ReadFromString (File.ReadAllText (projPath));
			string target = project.TargetGuidByName ("Unity-iPhone");

			AddProjectFrameworks (frameworkList, project, target, false);
			AddProjectFrameworks (weakFrameworkList, project, target, true);
			AddProjectLibs (platformLibs, project, target);
			project.AddBuildProperty (target, "OTHER_LDFLAGS", "-ObjC");

			//Major Xcode version version should be the same as that used by the native SDK developers.
			string xcodeVersion = AppodealUnityUtils.getXcodeVersion ();
			if (xcodeVersion == null || AppodealUnityUtils.compareVersions (xcodeVersion, minVersionToEnableBitcode) >= 0) {
				project.SetBuildProperty (target, "ENABLE_BITCODE", "YES");
			} else {
				project.SetBuildProperty (target, "ENABLE_BITCODE", "NO");
			}

			project.AddBuildProperty (target, "LIBRARY_SEARCH_PATHS", "$(SRCROOT)/Libraries");

			//Adapters are archived in order not to exceed the 100 Mb limit on GitHub
			//Some users use GitHub with Unity Cloud Build
			string apdFolder = "Adapters";
			string appodealPath = Path.Combine (Application.dataPath, "Appodeal");
			string adaptersPath = Path.Combine (appodealPath, apdFolder);
			if (Directory.Exists (adaptersPath)) {
				foreach (string file in Directory.GetFiles (adaptersPath)) {
					if (Path.GetExtension (file).Equals (".zip")) {
						Debug.Log ("unzipping:" + file);
						ExtractZip (file, Path.Combine (absoluteProjPath, apdFolder));
						AddAdaptersDirectory (apdFolder, project, target);
					}
				}
			}

			File.WriteAllText (projPath, project.WriteToString ());
		}

		static void MacOSUnzip (string source, string dest) {
			try {
				System.Diagnostics.ProcessStartInfo startInfo = new System.Diagnostics.ProcessStartInfo () {
					FileName = "unzip",
						Arguments = "\"" + source + "\"" + " -d " + "\"" + dest + "\"",
				};
				startInfo.RedirectStandardOutput = true;
				startInfo.RedirectStandardError = true;
				startInfo.UseShellExecute = false;
				System.Diagnostics.Process proc = new System.Diagnostics.Process () { StartInfo = startInfo, };
				StringBuilder standardOutput = new StringBuilder ();
				StringBuilder errorOutput = new StringBuilder ();
				while (!proc.HasExited) {
					standardOutput.Append (proc.StandardOutput.ReadToEnd ());
					errorOutput.Append (proc.StandardError.ReadToEnd ());
				}
				standardOutput.Append (proc.StandardOutput.ReadToEnd ());
				errorOutput.Append (proc.StandardError.ReadToEnd ());
				Debug.Log (standardOutput);
				Debug.Log (errorOutput);
			} catch (Exception e) {
				Debug.Log (e.Message);
				ExtractZip (source, dest);
			}
		}

		protected static void AddProjectFrameworks (string[] frameworks, PBXProject project, string target, bool weak) {
			foreach (string framework in frameworks) {
				if (!project.ContainsFramework (target, framework)) {
					project.AddFrameworkToProject (target, framework + suffix, weak);
				}
			}
		}

		protected static void AddProjectLibs (string[] libs, PBXProject project, string target) {
			foreach (string lib in libs) {
				string libGUID = project.AddFile ("usr/lib/" + lib, "Libraries/" + lib, PBXSourceTree.Sdk);
				project.AddFileToBuild (target, libGUID);
			}
		}

		static void CopyAndReplaceDirectory (string srcPath, string dstPath) {
			if (Directory.Exists (dstPath)) {
				Directory.Delete (dstPath);
			}
			if (File.Exists (dstPath)) {
				File.Delete (dstPath);
			}

			Directory.CreateDirectory (dstPath);

			foreach (var file in Directory.GetFiles (srcPath)) {
				if (!file.Contains (".meta")) {
					File.Copy (file, Path.Combine (dstPath, Path.GetFileName (file)));
				}
			}

			foreach (var dir in Directory.GetDirectories (srcPath)) {
				CopyAndReplaceDirectory (dir, Path.Combine (dstPath, Path.GetFileName (dir)));
			}
		}

		static void ExtractZip (string filePath, string destFolder) {
			using (Ionic.Zip.ZipFile zip = Ionic.Zip.ZipFile.Read (filePath)) {
				foreach (Ionic.Zip.ZipEntry z in zip) {
					z.Extract (destFolder, Ionic.Zip.ExtractExistingFileAction.OverwriteSilently);
				}
			}
		}

		static void AddAdaptersDirectory (string path, PBXProject proj, string targetGuid) {
			if (path.EndsWith ("__MACOSX", StringComparison.CurrentCultureIgnoreCase))
				return;

			if (path.EndsWith (".framework", StringComparison.CurrentCultureIgnoreCase)) {
				proj.AddFileToBuild (targetGuid, proj.AddFile (path, path));
				string tmp = Utils.FixSlashesInPath (string.Format ("$(PROJECT_DIR)/{0}", path.Substring (0, path.LastIndexOf (Path.DirectorySeparatorChar))));
				proj.AddBuildProperty (targetGuid, "FRAMEWORK_SEARCH_PATHS", tmp);
				return;
			} else if (path.EndsWith (".bundle", StringComparison.CurrentCultureIgnoreCase)) {
				proj.AddFileToBuild (targetGuid, proj.AddFile (path, path));
				return;
			}

			string fileName;
			bool libPathAdded = false;
			bool headPathAdded = false;

			string realDstPath = Path.Combine (absoluteProjPath, path);
			foreach (var filePath in Directory.GetFiles (realDstPath)) {
				fileName = Path.GetFileName (filePath);

				if (fileName.EndsWith (".DS_Store", StringComparison.Ordinal))
					continue;

				proj.AddFileToBuild (targetGuid, proj.AddFile (Path.Combine (path, fileName), Path.Combine (path, fileName), PBXSourceTree.Source));
				if (!libPathAdded && fileName.EndsWith (".a", StringComparison.Ordinal)) {
					proj.AddBuildProperty (targetGuid, "LIBRARY_SEARCH_PATHS", Utils.FixSlashesInPath (string.Format ("$(PROJECT_DIR)/{0}", path)));
					libPathAdded = true;
				}

				if (!headPathAdded && fileName.EndsWith (".h", StringComparison.Ordinal)) {
					proj.AddBuildProperty (targetGuid, "HEADER_SEARCH_PATHS", Utils.FixSlashesInPath (string.Format ("$(PROJECT_DIR)/{0}", path)));
					headPathAdded = true;
				}
			}

			foreach (var subPath in Directory.GetDirectories (realDstPath)) {
				AddAdaptersDirectory (Path.Combine (path, Path.GetFileName (subPath)), proj, targetGuid);
			}
		}
	}
}