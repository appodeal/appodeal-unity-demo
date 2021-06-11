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

        #region Optional Android Permissions

        public const string CoarseLocation = "android.permission.ACCESS_COARSE_LOCATION";
        public const string FineLocation = "android.permission.ACCESS_FINE_LOCATION";
        public const string ExternalStorageWrite = "android.permission.WRITE_EXTERNAL_STORAGE";
        public const string AccessWifiState = "android.permission.ACCESS_WIFI_STATE";
        public const string Vibrate = "android.permission.VIBRATE";
        
        #endregion

        [Flags]
        public enum AndroidArchitecture
        {
            invalid = 0,
            armv7 = 1 << 0,
            arm64 = 1 << 1,
            x86 = 1 << 2,
        }

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