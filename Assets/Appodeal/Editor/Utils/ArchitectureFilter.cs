using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using System.IO;
using System;
using System.Diagnostics.CodeAnalysis;

namespace AppodealAds.Unity.Editor.Utils
{
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    public static class ArchitectureFilter
    {
        private static readonly string JNI_SAFE_PATH =
            AppodealUnityUtils.combinePaths(Application.dataPath, "Appodeal", "InternalResources", "jni");

        private static readonly Dictionary<AppodealUnityUtils.AndroidArchitecture, string> archDict =
            new Dictionary<AppodealUnityUtils.AndroidArchitecture, string>
            {
                {AppodealUnityUtils.AndroidArchitecture.arm64, "arm64-v8a"},
                {AppodealUnityUtils.AndroidArchitecture.x86, "x86"},
                {AppodealUnityUtils.AndroidArchitecture.armv7, "armeabi-v7a"}
            };

        public static void PrepareBuild()
        {
            setSelectedArchitectures(AppodealUnityUtils.getAndroidArchitecture());
        }

        private static void setSelectedArchitectures(AppodealUnityUtils.AndroidArchitecture arch)
        {
            if (arch == AppodealUnityUtils.AndroidArchitecture.invalid)
            {
                EditorUtility.DisplayDialog("Architecture problems were found in the project",
                    "For some reason it isn't possible to define selected architectures. Please check your settings. You also can check architectures manually",
                    "Ok");
                return;
            }

            var selectedArches =
                new HashSet<AppodealUnityUtils.AndroidArchitecture>();
            foreach (AppodealUnityUtils.AndroidArchitecture a in Enum.GetValues(
                typeof(AppodealUnityUtils.AndroidArchitecture)))
            {
                if ((arch & a) > 0) selectedArches.Add(a);
            }

            var androidNativeDir = AppodealUnityUtils.combinePaths(Application.dataPath, "Plugins", "Android");
            var nativeLibs = Directory.GetDirectories(androidNativeDir);
            var needToUpdateAssets = false;
            var dialogWasShown = false;
            foreach (var libPath in nativeLibs)
            {
                var
                    dir = Path.GetFileName(libPath);
                var archFullPaths =
                    new Dictionary<AppodealUnityUtils.AndroidArchitecture, string>();
                var archSafeFullPaths =
                    new Dictionary<AppodealUnityUtils.AndroidArchitecture, string>();
                var presentedArches =
                    new HashSet<AppodealUnityUtils.AndroidArchitecture>();
                var savedArches =
                    new HashSet<AppodealUnityUtils.AndroidArchitecture>();
                foreach (AppodealUnityUtils.AndroidArchitecture a in Enum.GetValues(
                    typeof(AppodealUnityUtils.AndroidArchitecture)))
                {
                    if (a == AppodealUnityUtils.AndroidArchitecture.invalid) continue;
                    var fullPath = AppodealUnityUtils.combinePaths(androidNativeDir, dir, "libs", archDict[a]);
                    var safePath = AppodealUnityUtils.combinePaths(JNI_SAFE_PATH, dir);
                    archFullPaths.Add(a, fullPath);
                    archSafeFullPaths.Add(a, safePath);
                    if (Directory.Exists(fullPath)) presentedArches.Add(a);
                    if (Directory.Exists(AppodealUnityUtils.combinePaths(safePath, archDict[a]))) savedArches.Add(a);
                }

                if (presentedArches.Count == 0 && savedArches.Count == 0) continue;

                foreach (AppodealUnityUtils.AndroidArchitecture a in Enum.GetValues(
                    typeof(AppodealUnityUtils.AndroidArchitecture)))
                {
                    if (a == AppodealUnityUtils.AndroidArchitecture.invalid) continue;
                    if (selectedArches.Contains(a) == presentedArches.Contains(a)) continue;
                    if (presentedArches.Contains(a))
                    {
                        if (!Directory.Exists(archSafeFullPaths[a]))
                            Directory.CreateDirectory(archSafeFullPaths[a]);
                        Directory.Move(archFullPaths[a],
                            AppodealUnityUtils.combinePaths(archSafeFullPaths[a], archDict[a]));
                        needToUpdateAssets = true;
                    }
                    else
                    {
                        if (savedArches.Contains(a))
                        {
                            Directory.Move(AppodealUnityUtils.combinePaths(archSafeFullPaths[a], archDict[a]),
                                archFullPaths[a]);
                            needToUpdateAssets = true;
                        }
                        else
                        {
                            var message = "Plugin " + dir + " doesn't support the following architecture: " +
                                          archDict[a] +
                                          ". Building with this plugin can lead to crashes on devices with unsupported architectures.";
                            EditorUtility.DisplayDialog("Architecture problems were found in the project", message,
                                "Ok");
                            dialogWasShown = true;
                        }
                    }
                }
            }

            if (needToUpdateAssets) AssetDatabase.Refresh(ImportAssetOptions.ForceUpdate);
            if (!dialogWasShown)
                EditorUtility.DisplayDialog("Appodeal Notification",
                    "Filtering finished. All possible problems resolved.",
                    "Ok");
        }
    }
}