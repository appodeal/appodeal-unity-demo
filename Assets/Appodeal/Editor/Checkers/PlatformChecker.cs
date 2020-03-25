using System;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using System.IO;
using System.Linq;
using Appodeal.Unity.Editor;
using UnityEditor;

namespace AppodealAds.Unity.Editor.Checkers
{
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "ExpressionIsAlwaysNull")]
    public class PlatformChecker : CheckingStep
    {
        public enum platforms
        {
            any,
            android,
            ios,
            editor
        }

        private readonly Dictionary<string, platforms> NATIVE_PLUGINS = new Dictionary<string, platforms>
        {
            {"Assets/Plugins/Android/*", platforms.android}
        };

        public override string getName()
        {
            return "Platform and Architecture Settings";
        }

        public override bool isRequiredForPlatform(BuildTarget target)
        {
            return target == BuildTarget.Android || target == BuildTarget.iOS;
        }

        public override List<FixProblemInstruction> check()
        {
            var fixInstructions = new List<FixProblemInstruction>();
            foreach (var plugin in NATIVE_PLUGINS)
            {
                var absolutePluginPath = AppodealUnityUtils.relative2Absolute(plugin.Key);
                var isFile = File.Exists(absolutePluginPath);
                var isDirectory = Directory.Exists(absolutePluginPath);
                var isAllDirectoryContent = absolutePluginPath.EndsWith("/*", false, null);
                if (!isFile && !isDirectory && !isAllDirectoryContent)
                {
                    var desc = "File or directory " + plugin.Key +
                               " does not exist. You should try to reimport Appodeal plugin.";
                    var instr = new FixProblemInstruction(desc, false);
                    fixInstructions.Add(instr);
                    continue;
                }

                if (isFile || isDirectory)
                {
                    var instr = checkAndGetInstruction(plugin.Key, plugin.Value);
                    if (instr != null) fixInstructions.Add(instr);
                }

                if (isAllDirectoryContent)
                {
                    fixInstructions.AddRange(AppodealAssetsPostProcess.Plugins
                        .Select(folder => AppodealUnityUtils.combinePaths("Assets", "Plugins", "Android", folder))
                        .Select(pluginPath => checkAndGetInstruction(pluginPath, plugin.Value))
                        .Where(instr => instr != null));
                }
            }

            return fixInstructions;
        }

        private FixProblemInstruction checkAndGetInstruction(string relativePath, platforms platform)
        {
            EnablePluginForPlatform instr = null;
            var imp = AssetImporter.GetAtPath(relativePath) as PluginImporter;
            if (imp == null) return instr;
            var isChecked = false;
            switch (platform)
            {
                case platforms.any:
                    isChecked = imp.GetCompatibleWithAnyPlatform();
                    break;
                case platforms.editor:
                    isChecked = imp.GetCompatibleWithEditor();
                    break;
                case platforms.android:
                    isChecked = imp.GetCompatibleWithPlatform(BuildTarget.Android);
                    break;
                case platforms.ios:
                    isChecked = imp.GetCompatibleWithPlatform(BuildTarget.iOS);
                    break;
            }

            if (isChecked) return instr;
            var desc = "Plugin " + relativePath + " should be enabled for platform: " + platform.ToString() +
                       ".\n";
            if (relativePath.Contains(AppodealUnityUtils.combinePaths("Assets", "Plugins", "Android")))
                desc +=
                    "If you won't to exclude this network from your game, don't forget to add Appodeal.disableNetwork(networkname) before initialization.";
            instr = new EnablePluginForPlatform(desc, true, relativePath, platform);

            return instr;
        }
    }

    internal class EnablePluginForPlatform : FixProblemInstruction
    {
        private readonly string pluginPath;
        private readonly PlatformChecker.platforms platform;

        public EnablePluginForPlatform(string description, bool autoresolve, string relativePluginPath,
            PlatformChecker.platforms platform) : base(description, autoresolve)
        {
            pluginPath = relativePluginPath;
            this.platform = platform;
        }

        public override void fixProblem()
        {
            var imp = AssetImporter.GetAtPath(pluginPath) as PluginImporter;
            switch (platform)
            {
                case PlatformChecker.platforms.any:
                    if (imp != null) imp.SetCompatibleWithAnyPlatform(true);
                    break;
                case PlatformChecker.platforms.editor:
                    if (imp != null) imp.SetCompatibleWithEditor(true);
                    break;
                case PlatformChecker.platforms.android:
                    if (imp != null) imp.SetCompatibleWithPlatform(BuildTarget.Android, true);
                    break;
                case PlatformChecker.platforms.ios:
                    if (imp != null) imp.SetCompatibleWithPlatform(BuildTarget.iOS, true);
                    break;
                default:
                    throw new ArgumentOutOfRangeException();
            }
        }
    }
}