using System;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using System.IO;
using Unity.Appodeal.Xcode;
using Unity.Appodeal.Xcode.PBX;
using UnityEditor;
using UnityEditor.Callbacks;
using UnityEngine;

namespace Appodeal.Unity.Editor
{
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "AssignNullToNotNullAttribute")]
    [SuppressMessage("ReSharper", "UnusedVariable")]
    [SuppressMessage("ReSharper", "UnusedMember.Local")]
    public class iOSPostprocessUtils : MonoBehaviour
    {
        private const string suffix = ".framework";
        private static string absoluteProjPath;
        private const string minVersionToEnableBitcode = "10.0";

        [PostProcessBuildAttribute(41)]
        private static void updatePod(BuildTarget target, string buildPath)
        {
            if (target != BuildTarget.iOS) return;
            using (var sw = File.AppendText(buildPath + "/Podfile"))
            {
                sw.WriteLine("\nsource 'https://github.com/CocoaPods/Specs.git'");
                sw.WriteLine("use_frameworks!");
            }
        }

        private static readonly string[] frameworkList =
        {
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
            "EventKitUI",
            "EventKit",
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
            "VideoToolbox",
            "WatchConnectivity",
            "WebKit"
        };

        private static readonly string[] weakFrameworkList =
        {
            "CoreMotion",
            "WebKit",
            "Social"
        };

        private static readonly string[] platformLibs =
        {
            "libc++.dylib",
            "libz.dylib",
            "libsqlite3.dylib",
            "libxml2.2.dylib"
        };

        public static void PrepareProject(string buildPath)
        {
            Debug.Log("preparing your xcode project for appodeal");
            var projPath = Path.Combine(buildPath, "Unity-iPhone.xcodeproj/project.pbxproj");
            absoluteProjPath = Path.GetFullPath(buildPath);
            var project = new PBXProject();
            project.ReadFromString(File.ReadAllText(projPath));
            var unityiPhone = project.TargetGuidByName("Unity-iPhone");

#if UNITY_2019_3
            var unityFramework = project.TargetGuidByName("UnityFramework");
            AddProjectFrameworks(frameworkList, project, unityFramework, false);
            AddProjectFrameworks(weakFrameworkList, project, unityFramework, true);
            AddProjectLibs(platformLibs, project, unityFramework);
            project.AddBuildProperty(unityFramework, "OTHER_LDFLAGS", "-ObjC");
            project.AddBuildProperty(unityFramework, "LIBRARY_SEARCH_PATHS", "$(SRCROOT)/Libraries");
#endif

            AddProjectFrameworks(frameworkList, project, unityiPhone, false);
            AddProjectFrameworks(weakFrameworkList, project, unityiPhone, true);
            AddProjectLibs(platformLibs, project, unityiPhone);
            project.AddBuildProperty(unityiPhone, "OTHER_LDFLAGS", "-ObjC");

            //Major Xcode version version should be the same as that used by the native SDK developers.
            var xcodeVersion = AppodealUnityUtils.getXcodeVersion();
            if (xcodeVersion == null ||
                AppodealUnityUtils.compareVersions(xcodeVersion, minVersionToEnableBitcode) >= 0)
            {
                project.SetBuildProperty(unityiPhone, "ENABLE_BITCODE", "YES");
#if UNITY_2019_3
                project.SetBuildProperty(unityFramework, "ENABLE_BITCODE", "YES");
#endif
            }
            else
            {
                project.SetBuildProperty(unityiPhone, "ENABLE_BITCODE", "NO");
#if UNITY_2019_3
                project.SetBuildProperty(unityFramework, "ENABLE_BITCODE", "NO");
#endif
            }

            project.AddBuildProperty(unityiPhone, "LIBRARY_SEARCH_PATHS", "$(SRCROOT)/Libraries");
            project.AddBuildProperty(unityiPhone, "LIBRARY_SEARCH_PATHS", "$(TOOLCHAIN_DIR)/usr/lib/swift/$(PLATFORM_NAME)");
            project.AddBuildProperty(unityiPhone, "ALWAYS_EMBED_SWIFT_STANDARD_LIBRARIES", "YES");
            project.AddBuildProperty(unityiPhone, "LD_RUNPATH_SEARCH_PATHS", "@executable_path/Frameworks");
            project.SetBuildProperty(unityiPhone, "SWIFT_VERSION", "4.0");
#if UNITY_2019_3 
            project.AddBuildProperty(unityFramework, "LIBRARY_SEARCH_PATHS", "$(SRCROOT)/Libraries");
            project.AddBuildProperty(unityFramework, "LIBRARY_SEARCH_PATHS", "$(TOOLCHAIN_DIR)/usr/lib/swift/$(PLATFORM_NAME)");
            project.AddBuildProperty(unityFramework, "ALWAYS_EMBED_SWIFT_STANDARD_LIBRARIES", "YES");
            project.AddBuildProperty(unityFramework, "LD_RUNPATH_SEARCH_PATHS", "@executable_path/Frameworks");
            project.AddBuildProperty(unityFramework, "CLANG_ENABLE_MODULES", "YES");
            project.SetBuildProperty(unityFramework, "SWIFT_VERSION", "4.0");
#endif

            //Adapters are archived in order not to exceed the 100 Mb limit on GitHub
            //Some users use GitHub with Unity Cloud Build
            var apdFolder = "Adapters";
            var appodealPath = Path.Combine(Application.dataPath, "Appodeal");
            var adaptersPath = Path.Combine(appodealPath, apdFolder);
            if (Directory.Exists(adaptersPath))
            {
                foreach (var file in Directory.GetFiles(adaptersPath))
                {
                    if (!Path.GetExtension(file).Equals(".zip")) continue;
                    Debug.Log("unzipping:" + file);
                    AddAdaptersDirectory(apdFolder, project, unityiPhone);
#if UNITY_2019_3
                        AddAdaptersDirectory(apdFolder, project, unityFramework);
#endif
                }
            }

            File.WriteAllText(projPath, project.WriteToString());
        }

        private static void AddProjectFrameworks(IEnumerable<string> frameworks, PBXProject project, string target, bool weak)
        {
            foreach (var framework in frameworks)
            {
                if (!project.ContainsFramework(target, framework))
                {
                    project.AddFrameworkToProject(target, framework + suffix, weak);
                }
            }
        }

        private static void AddProjectLibs(IEnumerable<string> libs, PBXProject project, string target)
        {
            foreach (var lib in libs)
            {
                var libGUID = project.AddFile("usr/lib/" + lib, "Libraries/" + lib, PBXSourceTree.Sdk);
                project.AddFileToBuild(target, libGUID);
            }
        }

        private static void CopyAndReplaceDirectory(string srcPath, string dstPath)
        {
            if (Directory.Exists(dstPath))
            {
                Directory.Delete(dstPath);
            }

            if (File.Exists(dstPath))
            {
                File.Delete(dstPath);
            }

            Directory.CreateDirectory(dstPath);

            foreach (var file in Directory.GetFiles(srcPath))
            {
                if (!file.Contains(".meta"))
                {
                    File.Copy(file, Path.Combine(dstPath, Path.GetFileName(file)));
                }
            }

            foreach (var dir in Directory.GetDirectories(srcPath))
            {
                CopyAndReplaceDirectory(dir, Path.Combine(dstPath, Path.GetFileName(dir)));
            }
        }

        private static void AddAdaptersDirectory(string path, PBXProject proj, string targetGuid)
        {
            if (path.EndsWith("__MACOSX", StringComparison.CurrentCultureIgnoreCase))
                return;

            if (path.EndsWith(".framework", StringComparison.CurrentCultureIgnoreCase))
            {
                proj.AddFileToBuild(targetGuid, proj.AddFile(path, path));
                var tmp = Utils.FixSlashesInPath(string.Format("$(PROJECT_DIR)/{0}",
                    path.Substring(0, path.LastIndexOf(Path.DirectorySeparatorChar))));
                proj.AddBuildProperty(targetGuid, "FRAMEWORK_SEARCH_PATHS", tmp);
                return;
            }

            if (path.EndsWith(".bundle", StringComparison.CurrentCultureIgnoreCase))
            {
                proj.AddFileToBuild(targetGuid, proj.AddFile(path, path));
                return;
            }

            var libPathAdded = false;
            var headPathAdded = false;

            var realDstPath = Path.Combine(absoluteProjPath, path);
            foreach (var filePath in Directory.GetFiles(realDstPath))
            {
                var fileName = Path.GetFileName(filePath);

                if (fileName.EndsWith(".DS_Store", StringComparison.Ordinal))
                    continue;

                proj.AddFileToBuild(targetGuid,
                    proj.AddFile(Path.Combine(path, fileName), Path.Combine(path, fileName)));
                if (!libPathAdded && fileName.EndsWith(".a", StringComparison.Ordinal))
                {
                    proj.AddBuildProperty(targetGuid, "LIBRARY_SEARCH_PATHS",
                        Utils.FixSlashesInPath(string.Format("$(PROJECT_DIR)/{0}", path)));
                    libPathAdded = true;
                }

                if (headPathAdded || !fileName.EndsWith(".h", StringComparison.Ordinal)) continue;
                proj.AddBuildProperty(targetGuid, "HEADER_SEARCH_PATHS",
                    Utils.FixSlashesInPath(string.Format("$(PROJECT_DIR)/{0}", path)));
                headPathAdded = true;
            }

            foreach (var subPath in Directory.GetDirectories(realDstPath))
            {
                AddAdaptersDirectory(Path.Combine(path, Path.GetFileName(subPath)), proj, targetGuid);
            }
        }
    }
}