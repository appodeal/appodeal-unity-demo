using UnityEngine;
using System.Collections;
using System.IO;

using UnityEditor;
using Unity.Appodeal.Xcode.PBX;

public class AppodealAssetsPostProcess : AssetPostprocessor {

	#if UNITY_5_5 || UNITY_5_4
	private static string[] Plugins = new string[] {
		"adcolony",
		"appodeal",
		"inmobi",
		"startapp",
		"ogury",
		"applovin",
		"yandex-metrica"
	};
	#endif

	static void OnPostprocessAllAssets(string[] importedAssets, string[] deletedAssets, string[] movedAssets, string[] movedFromAssetPaths) {

		#if UNITY_4_1 || UNITY_4_2 || UNITY_4_3 || UNITY_4_4 || UNITY_4_5 || UNITY_4_6 || UNITY_4_7 || UNITY_5_5 || UNITY_5_4
		foreach(string importedAsset in importedAssets) {
			if(importedAsset.Equals(importedAssets[importedAssets.Length - 1])) {
				if(Directory.Exists(Utils.FixSlashesInPath("Assets/Plugins/Android/appodeal/assets")) && !Directory.Exists(Utils.FixSlashesInPath("Assets/Plugins/Android/assets"))) {
					if (EditorUtility.DisplayDialog("Appodeal Unity", "We have detected that you're using Unity" + Application.unityVersion + " and it can't compile android assets from library folder so Assets/Plugins/Android/appodeal/assets folder should be moved into Android folder.", "Move it for me", "Leave it there"))
					{
						Directory.Move(Utils.FixSlashesInPath("Assets/Plugins/Android/appodeal/assets"), Utils.FixSlashesInPath("Assets/Plugins/Android/assets"));
						reimportFolder(Utils.FixSlashesInPath("Assets/Plugins/Android/assets"));
						reimportFolder(Utils.FixSlashesInPath("Assets/Plugins/Android/appodeal"));
					}
				}
			}
		}
		#endif

		#if UNITY_4_1 || UNITY_4_2 || UNITY_4_3 || UNITY_4_4 || UNITY_4_5 || UNITY_4_6 || UNITY_4_7
		if(File.Exists(Utils.FixSlashesInPath("Assets/Appodeal/SampleAndroidManifest.xml")) && !File.Exists(Utils.FixSlashesInPath("Assets/Plugins/Android/AndroidManifest.xml"))) {
			FileUtil.CopyFileOrDirectory(Utils.FixSlashesInPath("Assets/Appodeal/SampleAndroidManifest.xml"), Utils.FixSlashesInPath("Assets/Plugins/Android/AndroidManifest.xml"));
		}
		#endif

		#if UNITY_5_5 || UNITY_5_4
		foreach(string plugin in Plugins) {
			string fullpath = Utils.FixSlashesInPath("Assets/Plugins/Android/" + plugin);
			if(File.Exists(fullpath)) {
				PluginImporter pluginImporter = AssetImporter.GetAtPath(fullpath) as PluginImporter;
				if(!pluginImporter.GetCompatibleWithPlatform(BuildTarget.Android)) {
					pluginImporter.SetCompatibleWithPlatform(BuildTarget.Android, true);
				}
			}
		}

		string path = Utils.FixSlashesInPath("Assets/Plugins/Ionic.Zip.Unity.dll");
		if(File.Exists(path)) {
			PluginImporter ionicPluginImporter = AssetImporter.GetAtPath(path) as PluginImporter;
			if(!ionicPluginImporter.GetCompatibleWithEditor()) {
				ionicPluginImporter.SetCompatibleWithEditor(true);
			}
		}
		#endif

	}

	public static void reimportFolder(string path) {
		string[] files = Directory.GetFiles(path, "*", SearchOption.AllDirectories);
		foreach(string file in files) {
			if (file.EndsWith(".DS_Store")) {
				continue;
			} else if (file.EndsWith(".meta")) {
				continue;
			} else {
				AssetDatabase.ImportAsset(Utils.FixSlashesInPath(file));
			}
		}
	}
}