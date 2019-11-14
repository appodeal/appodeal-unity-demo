using System.Collections.Generic;
using System.IO;
using UnityEditor;

namespace AppodealAds.Unity.Editor.Checkers {

	public class PlatformChecker : CheckingStep {
		public enum platforms { any, android, ios, editor }
		private Dictionary<string, platforms> NATIVE_PLUGINS = new Dictionary<string, platforms> { { "Assets/Plugins/Ionic.Zip.Unity.dll", platforms.any },
			{ "Assets/Plugins/iOS/Appodeal.framework", platforms.ios },
			{ "Assets/Plugins/Android/*", platforms.android }
		};

		override public string getName () {
			return "Platform and Architecture Settings";
		}

		public override bool isRequiredForPlatform (BuildTarget target) {
			if (target == BuildTarget.Android || target == BuildTarget.iOS) return true;
			return false;
		}

		override public List<FixProblemInstruction> check () {
			List<FixProblemInstruction> fixInstructions = new List<FixProblemInstruction> ();
			foreach (KeyValuePair<string, platforms> plugin in NATIVE_PLUGINS) {
				string absolutePuginPath = AppodealUnityUtils.relative2Absolute (plugin.Key);
				bool isFile = File.Exists (absolutePuginPath);
				bool isDirectory = Directory.Exists (absolutePuginPath);
				bool isAllDirectoryContent = absolutePuginPath.EndsWith ("/*", false, null);
				if (!isFile && !isDirectory && !isAllDirectoryContent) {
					string desc = "File or directory " + plugin.Key + " does not exist. You should try to reimport Appodeal plugin.";
					FixProblemInstruction instr = new FixProblemInstruction (desc, false);
					fixInstructions.Add (instr);
					continue;
				}
				if (isFile || isDirectory) {
					FixProblemInstruction instr = checkAndGetInstruction (plugin.Key, plugin.Value);
					if (instr != null) fixInstructions.Add (instr);
				}
				if (isAllDirectoryContent) {
					//string[] nativeAndroidPlugins = Directory.GetFileSystemEntries(absolutePuginPath.TrimEnd("/*".ToCharArray()));
					foreach (string folder in AppodealAssetsPostProcess.Plugins) {
						string pluginPath = AppodealUnityUtils.combinePaths ("Assets", "Plugins", "Android", folder);
						FixProblemInstruction instr = checkAndGetInstruction (pluginPath, plugin.Value);
						if (instr != null) fixInstructions.Add (instr);
					}
				}
			}
			return fixInstructions;
		}

		private FixProblemInstruction checkAndGetInstruction (string relativePath, platforms platform) {
			EnablePluginForPlatform instr = null;
			PluginImporter imp = AssetImporter.GetAtPath (relativePath) as PluginImporter;
			if (imp == null) return instr;
			bool isChecked = false;
			switch (platform) {
				case platforms.any:
					isChecked = imp.GetCompatibleWithAnyPlatform ();
					break;
				case platforms.editor:
					isChecked = imp.GetCompatibleWithEditor ();
					break;
				case platforms.android:
					isChecked = imp.GetCompatibleWithPlatform (BuildTarget.Android);
					break;
				case platforms.ios:
					isChecked = imp.GetCompatibleWithPlatform (BuildTarget.iOS);
					break;
			}
			if (!isChecked) {
				string desc = "Plugin " + relativePath + " should be enabled for platform: " + platform.ToString () + ".\n";
				if (relativePath.Contains (AppodealUnityUtils.combinePaths ("Assets", "Plugins", "Android"))) desc += "If you wan't to exclude this network from your game, don't forget to add Appodeal.disableNetwork(networkname) before initialization.";
				instr = new EnablePluginForPlatform (desc, true, relativePath, platform);
			}
			return instr;
		}
	}

	class EnablePluginForPlatform : FixProblemInstruction {
		private string pluginPath;
		private PlatformChecker.platforms platform;
		public EnablePluginForPlatform (string description, bool autoresolve, string relativePluginPath, PlatformChecker.platforms platform) : base (description, autoresolve) {
			this.pluginPath = relativePluginPath;
			this.platform = platform;
		}
		public override void fixProblem () {
			PluginImporter imp = AssetImporter.GetAtPath (pluginPath) as PluginImporter;
			switch (platform) {
				case PlatformChecker.platforms.any:
					imp.SetCompatibleWithAnyPlatform (true);
					break;
				case PlatformChecker.platforms.editor:
					imp.SetCompatibleWithEditor (true);
					break;
				case PlatformChecker.platforms.android:
					imp.SetCompatibleWithPlatform (BuildTarget.Android, true);
					break;
				case PlatformChecker.platforms.ios:
					imp.SetCompatibleWithPlatform (BuildTarget.iOS, true);
					break;
			}
		}
	}
}