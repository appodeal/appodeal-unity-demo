using System.Collections;
using System.IO;
using Unity.Appodeal.Xcode.PBX;
using UnityEditor;
using UnityEngine;

public class AppodealAssetsPostProcess : AssetPostprocessor {

	public static string[] Plugins = new string[] {
		"appodeal-adcolony",
		"appodeal-amazon",
		"appodeal-applovin",
		"appodeal-appodeal-inmobi",
		"appodeal-chartboost",
		"appodeal-facebook",
		"appodeal-inmobi",
		"appodeal-ironsource",
		"appodeal-mintegral",
		"appodeal-mytarget",
		"appodeal-startapp",
		"appodeal-tapjoy",
		"appodeal-unityads",
		"appodeal-vungle",
		"appodeal-yandex-metrica",
		"appodeal-yandex-mobileads",
		"appodeal"
	};

	static void OnPostprocessAllAssets (string[] importedAssets, string[] deletedAssets, string[] movedAssets, string[] movedFromAssetPaths) {

#if UNITY_5
		foreach (string plugin in Plugins) {
			string fullpath = Utils.FixSlashesInPath ("Assets/Plugins/Android/" + plugin);
			if (File.Exists (fullpath)) {
				PluginImporter pluginImporter = AssetImporter.GetAtPath (fullpath) as PluginImporter;
				if (!pluginImporter.GetCompatibleWithPlatform (BuildTarget.Android)) {
					pluginImporter.SetCompatibleWithPlatform (BuildTarget.Android, true);
				}
			}
		}

		string path = Utils.FixSlashesInPath ("Assets/Plugins/Ionic.Zip.Unity.dll");
		if (File.Exists (path)) {
			PluginImporter ionicPluginImporter = AssetImporter.GetAtPath (path) as PluginImporter;
			if (!ionicPluginImporter.GetCompatibleWithEditor ()) {
				ionicPluginImporter.SetCompatibleWithEditor (true);
			}
		}
#endif
	}

	public static void reimportFolder (string path) {
		string[] files = Directory.GetFiles (path, "*", SearchOption.AllDirectories);
		foreach (string file in files) {
			if (file.EndsWith (".DS_Store", System.StringComparison.Ordinal)) {
				continue;
			} else if (file.EndsWith (".meta", System.StringComparison.Ordinal)) {
				continue;
			} else {
				AssetDatabase.ImportAsset (Utils.FixSlashesInPath (file));
			}
		}
	}
}