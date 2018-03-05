using System;
using System.Collections.Generic;
using UnityEditor;

#if UNITY_ANDROID
[InitializeOnLoad]
public class AppodealDependencies : AssetPostprocessor {
	
	public static object svcSupport;
	
	static AppodealDependencies() {
		RegisterDependencies();
	}

	public static void RegisterDependencies() {
		RegisterAndroidDependencies();
	}

	public static void RegisterAndroidDependencies() {
		Type playServicesSupport = Google.VersionHandler.FindClass(
			"Google.JarResolver", "Google.JarResolver.PlayServicesSupport");
		if (playServicesSupport == null) {
			return;
		}
		svcSupport = svcSupport ?? Google.VersionHandler.InvokeStaticMethod(
			playServicesSupport, "CreateInstance",
			new object[] {
				"GooglePlayGames",
				EditorPrefs.GetString("AndroidSdkRoot"),
				"ProjectSettings"
			});

		Google.VersionHandler.InvokeInstanceMethod(
			svcSupport, "DependOn",
			new object[] {
				"com.google.android.gms",
				"play-services-ads",
				"9.8" },
			namedArgs: new Dictionary<string, object>() {
				{"packageIds", new string[] { "extra-google-m2repository" } }
			});

		Google.VersionHandler.InvokeInstanceMethod(
			svcSupport, "DependOn",
			new object[] {
				"com.google.android.gms",
				"play-services-location",
				"9.8" },
			namedArgs: new Dictionary<string, object>() {
				{"packageIds", new string[] { "extra-google-m2repository" } }
			});

		Google.VersionHandler.InvokeInstanceMethod(
			svcSupport, "DependOn",
			new object[] { "com.android.support", "support-v4", "25.2.0" },
			namedArgs: new Dictionary<string, object>() {
				{"packageIds", new string[] { "extra-android-m2repository" } }
			});
	}

	// Handle delayed loading of the dependency resolvers.
	private static void OnPostprocessAllAssets(
		string[] importedAssets, string[] deletedAssets,
		string[] movedAssets, string[] movedFromPath) {
		foreach (string asset in importedAssets) {
			if (asset.Contains("JarResolver")) {
				RegisterDependencies();
				break;
			}
		}
	}
}
#endif