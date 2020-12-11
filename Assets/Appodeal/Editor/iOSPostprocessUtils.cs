using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using System.IO;
using System.Text.RegularExpressions;
using UnityEditor;
using UnityEditor.Callbacks;
using UnityEditor.iOS.Xcode;
using UnityEngine;

namespace Appodeal.Unity.Editor
{
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "AssignNullToNotNullAttribute")]
    [SuppressMessage("ReSharper", "UnusedVariable")]
    [SuppressMessage("ReSharper", "UnusedMember.Local")]
    [SuppressMessage("ReSharper", "UnusedParameter.Local")]
    public class iOSPostprocessUtils : MonoBehaviour
    {
        private const string suffix = ".framework";
        private const string minVersionToEnableBitcode = "10.0";
        public static bool isCustomBuild = false;

        [PostProcessBuildAttribute(41)]
        private static void updatePod(BuildTarget target, string buildPath)
        {
            if (target != BuildTarget.iOS) return;
            if (string.IsNullOrEmpty(PlayerSettings.iOS.targetOSVersionString)) return;
            if (isCustomBuild)
            {
                var plistPath = buildPath + "/Info.plist";
                var plist = new PlistDocument();
                plist.ReadFromString(File.ReadAllText(plistPath));
                var rootDict = plist.root;
                const string buildKey = "GADApplicationIdentifier";
                rootDict.SetString(buildKey, "ca-app-pub-3940256099942544~1458002511");
                File.WriteAllText(plistPath, plist.WriteToString());
            }

            ReplaceInFile(buildPath + "/Podfile", $"platform :ios, '{PlayerSettings.iOS.targetOSVersionString}'",
                "platform :ios, '10.0'\nuse_frameworks!");
            
#if UNITY_2019_3_OR_NEWER
            ReplaceInFile(buildPath + "/Podfile", "target 'UnityFramework' do", "def all_deps");
 
            using (var sw = File.AppendText(buildPath + "/Podfile"))
            {
                sw.WriteLine("\ntarget 'UnityFramework' do");
                sw.WriteLine("  all_deps");
                sw.WriteLine("end");
 
                sw.WriteLine("\ntarget 'Unity-iPhone' do");
                sw.WriteLine("  all_deps");
                sw.WriteLine("end");
 
                sw.WriteLine("\npost_install do |installer|");
                sw.WriteLine("  project = installer.pods_project");
                sw.WriteLine("  project.targets.each do |target|");
                sw.WriteLine("    target.build_configurations.each do |config|");
                sw.WriteLine("      config.build_settings['ENABLE_BITCODE'] = 'YES'");
                sw.WriteLine("    end");
                sw.WriteLine("  end");
                sw.WriteLine("end");
            }
#endif
        }

        private static void ReplaceInFile(
            string filePath, string searchText, string replaceText)
        {
            string contentString;
            using (var reader = new StreamReader(filePath))
            {
                contentString = reader.ReadToEnd();
                reader.Close();
            }

            contentString = Regex.Replace(contentString, searchText, replaceText);

            using (var writer = new StreamWriter(filePath))
            {
                writer.Write(contentString);
                writer.Close();
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
            var projectPath = PBXProject.GetPBXProjectPath(buildPath);
            var project = new PBXProject();

            project.ReadFromString(File.ReadAllText(projectPath));

#if UNITY_2019_3_OR_NEWER
           var target = project.GetUnityMainTargetGuid();
#else
            var target = project.TargetGuidByName("Unity-iPhone");
#endif

            AddProjectFrameworks(frameworkList, project, target, false);
            AddProjectFrameworks(weakFrameworkList, project, target, true);
            AddProjectLibs(platformLibs, project, target);
            project.AddBuildProperty(target, "OTHER_LDFLAGS", "-ObjC");

            var xcodeVersion = AppodealUnityUtils.getXcodeVersion();
            if (xcodeVersion == null ||
                AppodealUnityUtils.compareVersions(xcodeVersion, minVersionToEnableBitcode) >= 0)
            {
                project.SetBuildProperty(target, "ENABLE_BITCODE", "YES");
            }
            else
            {
                project.SetBuildProperty(target, "ENABLE_BITCODE", "NO");
            }

            project.AddBuildProperty(target, "LIBRARY_SEARCH_PATHS", "$(SRCROOT)/Libraries");
            project.AddBuildProperty(target, "LIBRARY_SEARCH_PATHS", "$(TOOLCHAIN_DIR)/usr/lib/swift/$(PLATFORM_NAME)");
#if UNITY_2019_3_OR_NEWER
            project.AddBuildProperty(target, "ALWAYS_EMBED_SWIFT_STANDARD_LIBRARIES", "NO");
#else
            project.AddBuildProperty(target, "ALWAYS_EMBED_SWIFT_STANDARD_LIBRARIES", "YES");
#endif
            project.AddBuildProperty(target, "LD_RUNPATH_SEARCH_PATHS", "@executable_path/Frameworks");
            project.SetBuildProperty(target, "SWIFT_VERSION", "4.0");

            File.WriteAllText(projectPath, project.WriteToString());
        }

        private static void AddProjectFrameworks(IEnumerable<string> frameworks, PBXProject project, string target,
            bool weak)
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
    }
}