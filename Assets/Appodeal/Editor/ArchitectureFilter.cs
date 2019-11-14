using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using System.IO;
using System;

public class ArchitectureFilter
{
	private readonly static string JNI_SAFE_PATH = AppodealUnityUtils.combinePaths (Application.dataPath, "Appodeal", "InternalResources", "jni");
	private static Dictionary<AppodealUnityUtils.AndroidArchitecture, string> archDict = new Dictionary<AppodealUnityUtils.AndroidArchitecture, string>
	{
		{ AppodealUnityUtils.AndroidArchitecture.arm64, "arm64-v8a" },
		{ AppodealUnityUtils.AndroidArchitecture.x86, "x86" },
		{ AppodealUnityUtils.AndroidArchitecture.armv7, "armeabi-v7a" }
	};
	public static void prepareBuild ()
	{
		setSelectedArchitectures (AppodealUnityUtils.getAndroidArchitecture ());
	}

	private static void setSelectedArchitectures (AppodealUnityUtils.AndroidArchitecture arch)
	{
		if (arch == AppodealUnityUtils.AndroidArchitecture.invalid) {
			EditorUtility.DisplayDialog ("Architecture problems were found in the project", "For some reason it isn't possible to define selected architectures. Please check your settings. You also can check architectures manually", "Ok");
			return;
		}

		HashSet<AppodealUnityUtils.AndroidArchitecture> selectedArches = new HashSet<AppodealUnityUtils.AndroidArchitecture> ();
		foreach (AppodealUnityUtils.AndroidArchitecture a in Enum.GetValues (typeof (AppodealUnityUtils.AndroidArchitecture))) {
			if ((arch & a) > 0) selectedArches.Add (a);
		}
		string androidNativeDir = AppodealUnityUtils.combinePaths (Application.dataPath, "Plugins", "Android");
		string [] nativeLibs = Directory.GetDirectories (androidNativeDir);
		bool needToUpdateAssets = false;
		bool dialogWasShown = false;
		foreach (string libPath in nativeLibs) {

			string dir = Path.GetFileName (libPath); //tricky thing. GetDirectoryName returns "Android", directory which contains current directory
			Dictionary<AppodealUnityUtils.AndroidArchitecture, string> archFullPaths = new Dictionary<AppodealUnityUtils.AndroidArchitecture, string> ();
			Dictionary<AppodealUnityUtils.AndroidArchitecture, string> archSafeFullPaths = new Dictionary<AppodealUnityUtils.AndroidArchitecture, string> ();
			HashSet<AppodealUnityUtils.AndroidArchitecture> presentedArches = new HashSet<AppodealUnityUtils.AndroidArchitecture> ();
			HashSet<AppodealUnityUtils.AndroidArchitecture> savedArches = new HashSet<AppodealUnityUtils.AndroidArchitecture> ();
			foreach (AppodealUnityUtils.AndroidArchitecture a in Enum.GetValues (typeof (AppodealUnityUtils.AndroidArchitecture))) {
				if (a == AppodealUnityUtils.AndroidArchitecture.invalid) continue;
				string fullPath = AppodealUnityUtils.combinePaths (androidNativeDir, dir, "libs", archDict [a]);
				string safePath = AppodealUnityUtils.combinePaths (JNI_SAFE_PATH, dir);
				archFullPaths.Add (a, fullPath);
				archSafeFullPaths.Add (a, safePath);
				if (Directory.Exists (fullPath)) presentedArches.Add (a);
				if (Directory.Exists (AppodealUnityUtils.combinePaths (safePath, archDict [a]))) savedArches.Add (a);
			}

			if (presentedArches.Count == 0 && savedArches.Count == 0) continue; //library doesn't use native code

			foreach (AppodealUnityUtils.AndroidArchitecture a in Enum.GetValues (typeof (AppodealUnityUtils.AndroidArchitecture))) {
				if (a == AppodealUnityUtils.AndroidArchitecture.invalid) continue;
				if (selectedArches.Contains (a) != presentedArches.Contains (a)) {
					if (presentedArches.Contains (a)) {
						if (!Directory.Exists (archSafeFullPaths [a])) Directory.CreateDirectory (archSafeFullPaths [a]);
						Directory.Move (archFullPaths [a], AppodealUnityUtils.combinePaths (archSafeFullPaths [a], archDict [a]));
						needToUpdateAssets = true;
					} else {
						if (savedArches.Contains (a)) {
							Directory.Move (AppodealUnityUtils.combinePaths (archSafeFullPaths [a], archDict [a]), archFullPaths [a]);
							needToUpdateAssets = true;
						} else {
							string message = "Plugin " + dir + " doesn't support the following architecture: " + archDict [a] + ". Building with this plugin can lead to crashes on devices with unsupported architectures.";
							EditorUtility.DisplayDialog ("Architecture problems were found in the project", message, "Ok");
							dialogWasShown = true;
						}
					}
				}
			}
		}
		if (needToUpdateAssets) AssetDatabase.Refresh (ImportAssetOptions.ForceUpdate);
		if (!dialogWasShown) EditorUtility.DisplayDialog ("Appodeal Notification", "Filtering finished. All possible problems resolved.", "Ok");
	}
}
