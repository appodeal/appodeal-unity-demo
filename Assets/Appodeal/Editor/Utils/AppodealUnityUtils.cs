using UnityEditor;
using UnityEngine;
using System.Reflection;
using System;
using System.Collections.Generic;
using System.Xml;
using System.Text.RegularExpressions;
using System.IO;
using System.Diagnostics;
using System.Diagnostics.CodeAnalysis;
using System.Linq;

namespace AppodealAds.Unity.Editor.Utils
{
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "ShiftExpressionRealShiftCountIsZero")]
    [SuppressMessage("ReSharper", "ConditionIsAlwaysTrueOrFalse")]
    public static class AppodealUnityUtils
    {
        private const string UNITY_ANDROID_VERSION_ENUM_PREFIX = "AndroidApiLevel";
        private const BindingFlags PublicStaticFlags = BindingFlags.Public | BindingFlags.Static;
        public const string KeySkAdNetworkItems = "SKAdNetworkItems";
        public const string KeySkAdNetworkID = "SKAdNetworkIdentifier";
        public const string GADApplicationIdentifier = "GADApplicationIdentifier";
        public const string NSUserTrackingUsageDescriptionKey = "NSUserTrackingUsageDescription";
        public const string NSUserTrackingUsageDescription = "This identifier will be used to deliver personalized ads to you";
        
        public const string GADApplicationIdentifierDefaultKey = "ca-app-pub-3940256099942544~1458002511";


        [Flags]
        public enum AndroidArchitecture
        {
            invalid = 0,
            armv7 = 1 << 0,
            arm64 = 1 << 1,
            x86 = 1 << 2,
        }

        #region SKAdNetworkIdentifiers

        public static readonly List<string> SKAdNetworkIdentifiers = new List<string>
        {
            "4pfyvq9l8r.skadnetwork",
            "6g9af3uyq4.skadnetwork",
            "4fzdc2evr5.skadnetwork",
            "cg4yq2srnc.skadnetwork",
            "v72qych5uu.skadnetwork",
            "mlmmfzh3r3.skadnetwork",
            "c6k4g5qg8m.skadnetwork",
            "g28c52eehv.skadnetwork",
            "hs6bdukanm.skadnetwork",
            "prcb7njmu6.skadnetwork",
            "m8dbw4sv7c.skadnetwork",
            "9nlqeag3gk.skadnetwork",
            "u679fj5vs4.skadnetwork",
            "yclnxrl5pm.skadnetwork",
            "4468km3ulz.skadnetwork",
            "t38b2kh725.skadnetwork",
            "7ug5zh24hu.skadnetwork",
            "rx5hdcabgc.skadnetwork",
            "5lm9lj6jb7.skadnetwork",
            "9rd848q2bz.skadnetwork",
            "7rz58n8ntl.skadnetwork",
            "ejvt5qm6ak.skadnetwork",
            "275upjj5gd.skadnetwork",
            "9t245vhmpl.skadnetwork",
            "44jx6755aq.skadnetwork",
            "tl55sbb4fm.skadnetwork",
            "2u9pt9hc89.skadnetwork",
            "8s468mfl3y.skadnetwork",
            "klf5c3l5u5.skadnetwork",
            "ppxm28t8ap.skadnetwork",
            "uw77j35x4d.skadnetwork",
            "mtkv5xtk9e.skadnetwork",
            "3rd42ekr43.skadnetwork",
            "ludvb6z3bs.skadnetwork",
            "wg4vff78zm.skadnetwork",
            "737z793b9f.skadnetwork",
            "ydx93a7ass.skadnetwork",
            "mls7yz5dvl.skadnetwork",
            "w9q455wk68.skadnetwork",
            "p78axxw29g.skadnetwork",
            "6xzpu9s2p8.skadnetwork",
            "523jb4fst2.skadnetwork",
            "ggvn48r87g.skadnetwork",
            "3sh42y64q3.skadnetwork",
            "f38h382jlk.skadnetwork",
            "24t9a8vw3c.skadnetwork",
            "cj5566h2ga.skadnetwork",
            "cstr6suwn9.skadnetwork",
            "wzmmz9fp6w.skadnetwork",
            "zmvfpc5aq8.skadnetwork",
            "feyaarzu9v.skadnetwork",
            "n9x2a789qt.skadnetwork",
            "5a6flpkh64.skadnetwork",
            "glqzh8vgby.skadnetwork",
            "424m5254lk.skadnetwork",
            "5l3tpt7t6e.skadnetwork",
            "gta9lk7p23.skadnetwork",
            "av6w8kgt66.skadnetwork",
            "s39g8k73mm.skadnetwork",
            "lr83yxwka7.skadnetwork",
            "kbd757ywx3.skadnetwork",
            "22mmun2rn5.skadnetwork",
            "su67r6k2v3.skadnetwork",
            "4w7y6s5ca2.skadnetwork",
            "dzg6xy7pwj.skadnetwork",
            "y45688jllp.skadnetwork",
            "hdw39hrw9y.skadnetwork",
            "4dzt52r2t5.skadnetwork",
            "5tjdwbrq8w.skadnetwork",
            "32z4fx6l9h.skadnetwork",
            "x44k69ngh6.skadnetwork",
            "pwa73g5rt2.skadnetwork",
            "v9wttpbfk9.skadnetwork",
            "n38lu8286q.skadnetwork",
            "2fnua5tdw4.skadnetwork",
            "3qy4746246.skadnetwork",
            "n6fk4nfna4.skadnetwork",
            "k674qkevps.skadnetwork",
            "y2ed4ez56y.skadnetwork",
            "ecpz2srf59.skadnetwork",
            "e5fvkxwrpn.skadnetwork",
            "zq492l623r.skadnetwork",
            "hjevpa356n.skadnetwork",
            "3qcr597p9d.skadnetwork",
            "r26jy69rpl.skadnetwork",
            "578prtvx9j.skadnetwork",
            "f73kdq92p3.skadnetwork",
            "8m87ys6875.skadnetwork",
            "488r3q3dtq.skadnetwork",
            "97r2b46745.skadnetwork",
            "52fl2v3hgk.skadnetwork",
            "m5mvw97r93.skadnetwork",
            "89z7zv988g.skadnetwork",
            "hb56zgv37p.skadnetwork",
            "rvh3l7un93.skadnetwork",
            "f7s53z58qe.skadnetwork",
            "238da6jt44.skadnetwork",
            "v79kvwwj4g.skadnetwork",
            "gta8lk7p23.skadnetwork"
        };

        #endregion

        public static string getApplicationId()
        {
            var appId = typeof(PlayerSettings).GetProperty("applicationIdentifier", PublicStaticFlags);
            if (appId == null) appId = typeof(PlayerSettings).GetProperty("bundleIdentifier", PublicStaticFlags);
            var bundleId = (string) appId?.GetValue(null, null);
            return bundleId;
        }

        public static bool isGradleEnabled()
        {
            var isGradleEnabledVal = false;
            var androidBuildSystem =
                typeof(EditorUserBuildSettings).GetProperty("androidBuildSystem", PublicStaticFlags);
            if (androidBuildSystem == null) return isGradleEnabledVal;
            var gradle = Enum.Parse(androidBuildSystem.PropertyType, "Gradle");
            isGradleEnabledVal = androidBuildSystem.GetValue(null, null).Equals(gradle);

            return isGradleEnabledVal;
        }

        public static bool isGradleAvailable()
        {
            var androidBuildSystem =
                typeof(EditorUserBuildSettings).GetProperty("androidBuildSystem", PublicStaticFlags);
            return androidBuildSystem != null;
        }

        public static void enableGradleBuildSystem()
        {
            var androidBuildSystem =
                typeof(EditorUserBuildSettings).GetProperty("androidBuildSystem", PublicStaticFlags);
            if (androidBuildSystem == null) return;
            var gradle = Enum.Parse(androidBuildSystem.PropertyType, "Gradle");
            androidBuildSystem.SetValue(null, gradle, null);
        }

        public static string absolute2Relative(string absolutepath)
        {
            var relativepath = absolutepath;
            if (absolutepath.StartsWith(Application.dataPath, StringComparison.Ordinal))
            {
                relativepath = "Assets" + absolutepath.Substring(Application.dataPath.Length);
            }

            return relativepath;
        }

        public static string relative2Absolute(string relativepath)
        {
            var absolutepath = relativepath;
            if (!relativepath.StartsWith(Application.dataPath, StringComparison.Ordinal))
            {
                absolutepath = Application.dataPath + absolutepath.Substring("Assets".Length);
            }

            return absolutepath;
        }

        public static int getAndroidMinSDK()
        {
            var minSdkVersion = VersionFromAndroidSDKVersionsEnum(
                PlayerSettings.Android.minSdkVersion.ToString());
            return minSdkVersion;
        }

        public static int getAndroidTargetSDK()
        {
            var property = typeof(PlayerSettings.Android).GetProperty("targetSdkVersion");
            var target = -1;
            if (property != null)
                target = VersionFromAndroidSDKVersionsEnum(Enum.GetName(property.PropertyType,
                    property.GetValue(null, null)));
            if (target == -1)
                target = GetLatestInstalledAndroidPlatformVersion();
            return target;
        }

        private static int VersionFromAndroidSDKVersionsEnum(string enumName)
        {
            if (enumName.StartsWith(UNITY_ANDROID_VERSION_ENUM_PREFIX))
            {
                enumName = enumName.Substring(UNITY_ANDROID_VERSION_ENUM_PREFIX.Length);
            }

            if (enumName == "Auto")
            {
                return -1;
            }

            int versionVal;
            int.TryParse(enumName, out versionVal);
            return versionVal;
        }

        private static int GetLatestInstalledAndroidPlatformVersion()
        {
            var androidSDKPath = EditorPrefs.GetString("AndroidSdkRoot");
            if (string.IsNullOrEmpty(androidSDKPath)) return -1;

            var platforms = Directory.GetDirectories(Path.Combine(androidSDKPath, "platforms"), "*",
                SearchOption.TopDirectoryOnly);
            var buildToolsRegex = new Regex(@"android-(\d+)$", RegexOptions.Compiled);

            return platforms
                .Select(platform => buildToolsRegex.Match(platform))
                .Select(match => int.Parse(match.Groups[1].Value))
                .Concat(new[] {0}).Max();
        }

        public static AndroidArchitecture getAndroidArchitecture()
        {
            var targetArchitectures =
                typeof(PlayerSettings.Android).GetProperty("targetArchitectures");
            var arch = AndroidArchitecture.invalid;
            if (targetArchitectures != null)
            {
                var armv7 = Enum.Parse(targetArchitectures.PropertyType, "ARMv7");
                var armv7_int = (int) Convert.ChangeType(armv7, typeof(int));
                var arm64 = Enum.Parse(targetArchitectures.PropertyType, "ARM64");
                var arm64_int = (int) Convert.ChangeType(arm64, typeof(int));
                var x64 = Enum.Parse(targetArchitectures.PropertyType, "X86");
                var x64_int = (int) Convert.ChangeType(x64, typeof(int));
                var currentArch = targetArchitectures.GetValue(null, null);
                var currentArch_int = (int) Convert.ChangeType(currentArch, typeof(int));
                if ((currentArch_int & armv7_int) == armv7_int) arch |= AndroidArchitecture.armv7;
                if ((currentArch_int & arm64_int) == arm64_int) arch |= AndroidArchitecture.arm64;
                if ((currentArch_int & x64_int) == x64_int) arch |= AndroidArchitecture.x86;
            }
            else
            {
                targetArchitectures = typeof(PlayerSettings.Android).GetProperty("targetDevice");
                if (targetArchitectures == null) return arch;
                var currentDevice = targetArchitectures.GetValue(null, null);
                var armv7 = Enum.Parse(targetArchitectures.PropertyType, "ARMv7");
                var x64 = Enum.Parse(targetArchitectures.PropertyType, "x86");
                var fat = Enum.Parse(targetArchitectures.PropertyType, "FAT");
                if (currentDevice.Equals(armv7)) arch = AndroidArchitecture.armv7;
                else if (currentDevice.Equals(x64)) arch = AndroidArchitecture.x86;
                else if (currentDevice.Equals(fat)) arch = AndroidArchitecture.armv7 | AndroidArchitecture.x86;
            }

            return arch;
        }

        public static string combinePaths(params string[] paths)
        {
            var result = paths[0];
            for (var i = 1; i < paths.Length; i++)
            {
                result = Path.Combine(result, paths[i]);
            }

            return result;
        }

        public static int compareVersions(string v1, string v2)
        {
            var re = new Regex(@"\d+(\.\d+)+");
            var match1 = re.Match(v1);
            var match2 = re.Match(v2);
            return new Version(match1.ToString()).CompareTo(new Version(match2.ToString()));
        }

        public static Texture2D makeColorTexture(int width, int height, Color color)
        {
            var colors = new Color [width * height];
            for (var i = 0; i < colors.Length; ++i)
                colors[i] = color;

            var retval = new Texture2D(width, height);
            retval.SetPixels(colors);
            retval.Apply();
            return retval;
        }

        public static XmlNode XmlFindChildNode(XmlNode parent, string name)
        {
            var curr = parent.FirstChild;
            while (curr != null)
            {
                if (curr.Name.Equals(name))
                {
                    return curr;
                }

                curr = curr.NextSibling;
            }

            return null;
        }

        public static XmlElement XmlCreateTag(XmlDocument doc, string tag)
        {
            var permissionElement = doc.CreateElement(tag);
            return permissionElement;
        }

        public static string FixSlashesInPath(string path)
        {
            return path?.Replace('\\', '/');
        }

        public static string getXcodeVersion()
        {
            string profilerOutput = null;
            try
            {
                var p = new Process
                {
                    StartInfo = new ProcessStartInfo("system_profiler", "SPDeveloperToolsDataType | grep \"Xcode:\"")
                    {
                        CreateNoWindow = false, RedirectStandardOutput = true, UseShellExecute = false
                    }
                };
                p.Start();
                p.WaitForExit();
                profilerOutput = p.StandardOutput.ReadToEnd();
                var re = new Regex(@"Xcode: (?<version>\d+(\.\d+)+)");
                var m = re.Match(profilerOutput);
                if (m.Success) profilerOutput = m.Groups["version"].Value;
            }
            catch (Exception e)
            {
                UnityEngine.Debug.LogError(e.Message);
            }

            return profilerOutput;
        }
    }
}