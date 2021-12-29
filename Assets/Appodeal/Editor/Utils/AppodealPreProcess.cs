// ReSharper disable All

#if UNITY_ANDROID
using System;
using System.IO;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Xml;
using System.Xml.Linq;
using AppodealAds.Unity.Editor.Checkers;
using AppodealAds.Unity.Editor.InternalResources;
using AppodealAds.Unity.Editor.Utils;
using UnityEditor;
using UnityEditor.Android;
using UnityEditor.Build;
#if UNITY_2018_1_OR_NEWER
using UnityEditor.Build.Reporting;
using UnityEngine.Android;
#endif
using UnityEngine;

namespace Appodeal.Unity.Editor.Utils
{
    public class AppodealPreProcess :
#if UNITY_2018_1_OR_NEWER
        IPreprocessBuildWithReport
#else
        IPreprocessBuild
#endif
    {
        #region Constants

        //Templates in Unity Editor Data folder
        private const string gradleDefaultTemplatePath = "PlaybackEngines/AndroidPlayer/Tools/GradleTemplates";
        public const string manifestDefaultTemplatePath = "PlaybackEngines/AndroidPlayer/Apk/AndroidManifest.xml";

        //Paths without leading Assets folder
        public const string androidPluginsPath = "Plugins/Android";
        public const string gradleTemplateName = "mainTemplate.gradle";
        public const string manifestTemplateName = "AndroidManifest.xml";
        public const string appodealTemplatesPath = "Appodeal/InternalResources";
        private const string appodealDexesPath = "Assets/Plugins/Android/appodeal/assets/dex";

        //Gradle search lines
        public const string GRADLE_GOOGLE_REPOSITORY = "google()";
        public const string GRADLE_GOOGLE_REPOSITORY_COMPAT = "maven { url \"https://maven.google.com\" }";
        public const string GRADLE_DEPENDENCIES = "**DEPS**";
        public const string GRADLE_APP_ID = "**APPLICATIONID**";
        public const string GRADLE_USE_PROGUARD = "useProguard";
        public const string GRADLE_MULTIDEX_DEPENDENCY_WO_VERSION = "androidx.multidex:multidex:";
        public const string GRAFLE_DEFAULT_CONFIG = "defaultConfig";
        public const string COMPILE_OPTIONS = "compileOptions {";
        public const string GRADLE_JAVA_VERSION_1_8 = "JavaVersion.VERSION_1_8";
        public const string GRADLE_SOURCE_CAPABILITY = "sourceCompatibility ";
        public const string GRADLE_TARGET_CAPATILITY = "targetCompatibility ";

        //Gradle add lines
        public const string GRADLE_IMPLEMENTATION = "implementation ";
        public const string GRADLE_MULTIDEX_DEPENDENCY = "'androidx.multidex:multidex:2.0.1'";
        public const string GRADLE_MULTIDEX_ENABLE = "multiDexEnabled true";

        //Manifest add lines
        public const string manifestMutlidexApp = "androidx.multidex.MultiDexApplication";

        #endregion

#if UNITY_2018_1_OR_NEWER
        public void OnPreprocessBuild(BuildReport report)
#else
        public void OnPreprocessBuild(BuildTarget target, string path)
#endif

        {
            var manifestPath = Path.Combine(Application.dataPath,
                "Plugins/Android/appodeal.androidlib/AndroidManifest.xml");

            var androidManifest = new AndroidManifest(manifestPath);

            AddOptionalPermissions(manifestPath, androidManifest);
            AddAdmobAppId(manifestPath, androidManifest);
            EnableMultidex(manifestPath, androidManifest);

            androidManifest.Save();
        }

        private void EnableMultidex(string manifestPath, AndroidManifest androidManifest)
        {
#if UNITY_2019_3_OR_NEWER
            if(CheckContainsMultidex(manifestPath, manifestMutlidexApp))
            {
                androidManifest.RemoveMultiDexApplication();
            }
#else

            if (AppodealSettings.Instance.AndroidMultidex)
            {
                if (PlayerSettings.Android.minSdkVersion < AndroidSdkVersions.AndroidApiLevel21)
                {
                    androidManifest.AddMultiDexApplication();

                    if (EditorUserBuildSettings.activeBuildTarget == BuildTarget.Android)
                    {
                        if (!AppodealUnityUtils.isGradleEnabled())
                        {
                            new EnableGradle().fixProblem();
                        }

                        var customGradeScript = GetCustomGradleScriptPath();
                        if (string.IsNullOrEmpty(customGradeScript) || !File.Exists(customGradeScript))
                        {
                            if (File.Exists(getDefaultGradleTemplate()))
                            {
                                new CopyGradleScriptAndEnableMultidex().fixProblem();
                            }
                        }
                        else
                        {
                            var settings = new ImportantGradleSettings(customGradeScript);
                            if (!settings.isMultiDexAddedCompletely())
                            {
                                new EnableMultidexInGradle(customGradeScript).fixProblem();
                            }

                            if (!settings.isJavaVersionIncluded())
                            {
                                new EnableJavaVersion(customGradeScript).fixProblem();
                            }
                        }
                    }
                }
            }
            else
            {
                androidManifest.RemoveMultiDexApplication();
            }
#endif
        }

        private void AddAdmobAppId(string path, AndroidManifest androidManifest)
        {
            if (File.Exists(Path.Combine(Application.dataPath, "Plugins/Android/AndroidManifest.xml"))
                && CheckContainsAppId(Path.Combine(Application.dataPath, "Plugins/Android/AndroidManifest.xml")))
            {
                if (File.Exists(path) && CheckContainsAppId(path))
                {
                    androidManifest.RemoveAdmobAppId();
                    Debug.LogWarning(
                        $"AdmobAppId has already been added to {Path.Combine(Application.dataPath, "Plugins/Android/AndroidManifest.xml")}" +
                        "\nRemoving duplicate from internal Appodeal AndroidManifest.xml file.");
                    return;
                }
                else if (!string.IsNullOrEmpty(AppodealSettings.Instance.AdMobAndroidAppId))
                {
                    Debug.LogWarning(
                        $"AdmobAppId has already been added to {Path.Combine(Application.dataPath, "Plugins/Android/AndroidManifest.xml")}" +
                        "\nThe value you set up via 'Appodeal/Appodeal Settings' tool will be ignored.");
                    return;
                }
                else
                {
                    return;
                }
            }

            if (!File.Exists("Assets/Appodeal/Editor/NetworkConfigs/GoogleAdMobDependencies.xml"))
            {
                if (File.Exists(path) && CheckContainsAppId(path))
                {
                    androidManifest.RemoveAdmobAppId();
                }
                Debug.LogWarning(
                    "Missing Admob config (Assets/Appodeal/Editor/NetworkConfigs/GoogleAdMobDependencies.xml). Admob App Id won't be added.");
                return;
            }

            if (!File.Exists(path))
            {
                Debug.LogError(
                    $"Missing internal AndroidManifest {path}." +
                    "\nAdmob App ID can't be added. The app may crash on startup!");
                return;
            }

            if (string.IsNullOrEmpty(AppodealSettings.Instance.AdMobAndroidAppId))
            {
                if (CheckContainsAppId(path))
                {
                    androidManifest.RemoveAdmobAppId();
                }
                Debug.LogError(
                    $"Admob App ID is not set via 'Appodeal/Appodeal Settings' tool." +
                    "\nThe app may crash on startup!");
            }
            else
            {
                if (!AppodealSettings.Instance.AdMobAndroidAppId.StartsWith("ca-app-pub-"))
                {
                    Debug.LogError(
                        "Incorrect value. The app may crash on startup." +
                        "\nPlease enter a valid AdMob App ID via 'Appodeal/Appodeal Settings' tool.");
                }

                if (CheckContainsAppId(path))
                {
                    androidManifest.ChangeAdmobAppId(AppodealSettings.Instance.AdMobAndroidAppId);
                }
                else
                {
                    androidManifest.AddAdmobAppId(AppodealSettings.Instance.AdMobAndroidAppId);
                }
            }
        }

        private void AddOptionalPermissions(string manifestPath, AndroidManifest androidManifest)
        {
            if (AppodealSettings.Instance.AccessCoarseLocationPermission)
            {
                if (!CheckContainsPermission(manifestPath, AppodealUnityUtils.CoarseLocation))
                {
                    androidManifest.SetPermission(AppodealUnityUtils.CoarseLocation);
                }
            }
            else
            {
                if (CheckContainsPermission(manifestPath, AppodealUnityUtils.CoarseLocation))
                {
                    androidManifest.RemovePermission(AppodealUnityUtils.CoarseLocation);
                }
            }

            if (AppodealSettings.Instance.AccessFineLocationPermission)
            {
                if (!CheckContainsPermission(manifestPath, AppodealUnityUtils.FineLocation))
                {
                    androidManifest.SetPermission(AppodealUnityUtils.FineLocation);
                }
            }
            else
            {
                if (CheckContainsPermission(manifestPath, AppodealUnityUtils.FineLocation))
                {
                    androidManifest.RemovePermission(AppodealUnityUtils.FineLocation);
                }
            }

            if (AppodealSettings.Instance.WriteExternalStoragePermission)
            {
                if (!CheckContainsPermission(manifestPath, AppodealUnityUtils.ExternalStorageWrite))
                {
                    androidManifest.SetPermission(AppodealUnityUtils.ExternalStorageWrite);
                }
            }
            else
            {
                if (CheckContainsPermission(manifestPath, AppodealUnityUtils.ExternalStorageWrite))
                {
                    androidManifest.RemovePermission(AppodealUnityUtils.ExternalStorageWrite);
                }
            }


            if (AppodealSettings.Instance.AccessWifiStatePermission)
            {
                if (!CheckContainsPermission(manifestPath, AppodealUnityUtils.AccessWifiState))
                {
                    androidManifest.SetPermission(AppodealUnityUtils.AccessWifiState);
                }
            }
            else
            {
                if (CheckContainsPermission(manifestPath, AppodealUnityUtils.AccessWifiState))
                {
                    androidManifest.RemovePermission(AppodealUnityUtils.AccessWifiState);
                }
            }

            if (AppodealSettings.Instance.VibratePermission)
            {
                if (!CheckContainsPermission(manifestPath, AppodealUnityUtils.Vibrate))
                {
                    androidManifest.SetPermission(AppodealUnityUtils.Vibrate);
                }
            }
            else
            {
                if (CheckContainsPermission(manifestPath, AppodealUnityUtils.Vibrate))
                {
                    androidManifest.RemovePermission(AppodealUnityUtils.Vibrate);
                }
            }
        }

        private bool CheckContainsAppId(string manifestPath)
        {
            return GetContentString(manifestPath).Contains("APPLICATION_ID");
        }

        private bool CheckContainsPermission(string manifestPath, string permission)
        {
            return GetContentString(manifestPath).Contains(permission);
        }

        private bool CheckContainsMultidex(string manifestPath, string multidex)
        {
            return GetContentString(manifestPath).Contains(multidex);
        }

        private bool CheckContainsMultidexDependency()
        {
            return GetContentString(getDefaultGradleTemplate())
                .Contains(GRADLE_IMPLEMENTATION + GRADLE_MULTIDEX_DEPENDENCY);
        }

        private void RemoveMultidexDependency(string path)
        {
            var contentString = GetContentString(getDefaultGradleTemplate());
            contentString = Regex.Replace(contentString, GRADLE_IMPLEMENTATION + GRADLE_MULTIDEX_DEPENDENCY,
                string.Empty);

            using (var writer = new StreamWriter(getDefaultGradleTemplate()))
            {
                writer.Write(contentString);
                writer.Close();
            }
        }

        public static string getDefaultGradleTemplate()
        {
            var defaultGradleTemplateFullName = AppodealUnityUtils.combinePaths(
                EditorApplication.applicationContentsPath,
                gradleDefaultTemplatePath,
                gradleTemplateName);
            if (File.Exists(defaultGradleTemplateFullName)) return defaultGradleTemplateFullName;
            var unixAppContentsPath =
                Path.GetDirectoryName(Path.GetDirectoryName(EditorApplication.applicationContentsPath));
            defaultGradleTemplateFullName = AppodealUnityUtils.combinePaths(unixAppContentsPath,
                gradleDefaultTemplatePath,
                gradleTemplateName);

            return defaultGradleTemplateFullName;
        }

        private static string GetContentString(string path)
        {
            string contentString;
            using (var reader = new StreamReader(path))
            {
                contentString = reader.ReadToEnd();
                reader.Close();
            }

            return contentString;
        }

        private static string GetCustomGradleScriptPath()
        {
            var androidDirectory = new DirectoryInfo(Path.Combine("Assets", androidPluginsPath));
            var filePaths = androidDirectory.GetFiles("*.gradle");
            return filePaths.Length > 0
                ? Path.Combine(Path.Combine(Application.dataPath, androidPluginsPath), filePaths[0].Name)
                : null;
        }

        public int callbackOrder => 0;
    }

    internal class AndroidXmlDocument : XmlDocument
    {
        private readonly string mPath;
        private readonly XmlNamespaceManager nsMgr;
        protected readonly string AndroidXmlNamespace = "http://schemas.android.com/apk/res/android";

        protected AndroidXmlDocument(string path)
        {
            mPath = path;
            using (var reader = new XmlTextReader(mPath))
            {
                reader.Read();
                Load(reader);
            }

            nsMgr = new XmlNamespaceManager(NameTable);
            nsMgr.AddNamespace("android", AndroidXmlNamespace);
        }

        public void Save()
        {
            SaveAs(mPath);
        }

        public void SaveAs(string path)
        {
            using (var writer = new XmlTextWriter(path, new UTF8Encoding(false)))
            {
                writer.Formatting = Formatting.Indented;
                Save(writer);
            }
        }
    }

    internal class AndroidManifest : AndroidXmlDocument
    {
        public readonly XmlElement applicationElement;

        public AndroidManifest(string path) : base(path)
        {
            applicationElement = SelectSingleNode("/manifest/application") as XmlElement;
        }

        private XmlAttribute CreateAndroidAttribute(string key, string value)
        {
            var attr = CreateAttribute("android", key, AndroidXmlNamespace);
            attr.Value = value;
            return attr;
        }

        internal void SetPermission(string permission)
        {
            var manifest = SelectSingleNode("/manifest");
            if (manifest == null) return;
            var child = CreateElement("uses-permission");
            manifest.AppendChild(child);
            var newAttribute = CreateAndroidAttribute("name", permission);
            child.Attributes.Append(newAttribute);
        }

        internal void RemovePermission(string permission)
        {
            var manifest = SelectSingleNode("/manifest");
            if (manifest == null) return;
            foreach (XmlNode child in manifest.SelectNodes("uses-permission"))
            {
                for (int i = 0; i < child.Attributes.Count; i++)
                {
                    if (child.Attributes[i].Value.Equals(permission))
                    {
                        manifest.RemoveChild(child);
                    }
                }
            }
        }

        internal void ChangeAdmobAppId(string id)
        {
            var manifest = SelectSingleNode("/manifest/application");
            RemoveAdmobAppId();
            var childMetaData = CreateElement("meta-data");
            manifest.AppendChild(childMetaData);
            childMetaData.Attributes.Append(CreateAndroidAttribute("name",
                "com.google.android.gms.ads.APPLICATION_ID"));
            childMetaData.Attributes.Append(CreateAndroidAttribute("value", id));
        }

        internal void RemoveAdmobAppId()
        {
            var manifest = SelectSingleNode("/manifest/application");
            if (manifest == null) return;
            foreach (XmlNode child in manifest.SelectNodes("meta-data"))
            {
                manifest.RemoveChild(child);
            }
        }

        internal void AddAdmobAppId(string id)
        {
            var manifest = SelectSingleNode("/manifest/application");
            if (manifest == null) return;
            var child = CreateElement("meta-data");
            manifest.AppendChild(child);
            var androidAttribute = CreateAndroidAttribute("name", "com.google.android.gms.ads.APPLICATION_ID");
            var valueAttribute = CreateAndroidAttribute("value", id);
            child.Attributes.Append(androidAttribute);
            child.Attributes.Append(valueAttribute);
        }

        internal void RemoveMultiDexApplication()
        {
            var manifest = SelectSingleNode("/manifest/application");
            if (manifest == null) return;
            for (int i = 0; i < manifest.Attributes.Count; i++)
            {
                if (manifest.Attributes[i].Value.Equals("androidx.multidex.MultiDexApplication"))
                {
                    manifest.Attributes.Remove(manifest.Attributes[i]);
                }
            }
        }

        internal void AddMultiDexApplication()
        {
            var manifest = SelectSingleNode("/manifest/application");
            if (manifest == null) return;
            manifest.Attributes.Append(CreateAndroidAttribute("name", "androidx.multidex.MultiDexApplication"));
        }
    }

    internal class EnableJavaVersion : FixProblemInstruction
    {
        private readonly string path;

        public EnableJavaVersion(string gradleScriptPath) : base("Java version isn't included to mainTemplate.gradle",
            true)
        {
            path = gradleScriptPath;
        }

        public override void fixProblem()
        {
            var settings = new ImportantGradleSettings(path);
            var leadingWhitespaces = "    ";
            const string additionalWhiteSpaces = "";
            string line;
            var modifiedGradle = "";

            var gradleScript = new StreamReader(path);

            while ((line = gradleScript.ReadLine()) != null)
            {
                if (line.Contains(MultidexActivator.GRAFLE_DEFAULT_CONFIG))
                {
                    if (!settings.compileOptions)
                    {
                        modifiedGradle += additionalWhiteSpaces + leadingWhitespaces +
                                          MultidexActivator.COMPILE_OPTIONS + Environment.NewLine;
                    }

                    if (!settings.sourceCapability)
                    {
                        modifiedGradle += leadingWhitespaces + leadingWhitespaces +
                                          MultidexActivator.GRADLE_SOURCE_CAPABILITY
                                          + MultidexActivator.GRADLE_JAVA_VERSION_1_8 + Environment.NewLine;
                    }

                    if (!settings.targetCapability)
                    {
                        modifiedGradle += leadingWhitespaces + leadingWhitespaces +
                                          MultidexActivator.GRADLE_TARGET_CAPATILITY
                                          + MultidexActivator.GRADLE_JAVA_VERSION_1_8 + Environment.NewLine;
                    }

                    if (!settings.targetCapability)
                    {
                        modifiedGradle += leadingWhitespaces + "}" + Environment.NewLine;
                    }

                    if (!settings.targetCapability)
                    {
                        modifiedGradle += leadingWhitespaces + Environment.NewLine;
                    }
                }

                modifiedGradle += line + Environment.NewLine;
                leadingWhitespaces = Regex.Match(line, "^\\s*").Value;
            }

            gradleScript.Close();
            File.WriteAllText(path, modifiedGradle);
            AssetDatabase.ImportAsset(AppodealUnityUtils.absolute2Relative(path), ImportAssetOptions.ForceUpdate);
        }
    }

    internal class CopyGradleScriptAndEnableMultidex : FixProblemInstruction
    {
        public CopyGradleScriptAndEnableMultidex() : base("Assets/Plugins/Android/mainTemplate.gradle not found.\n" +
                                                          "(required if you aren't going to export your project to Android Studio or Eclipse)",
            true)
        {
        }

        public override void fixProblem()
        {
            //EditorApplication.applicationContentsPath is different for macos and win. need to fix to reach manifest and gradle templates 
            var defaultGradleTemplateFullName = MultidexActivator.getDefaultGradleTemplate();

            var destGradleScriptFullName = AppodealUnityUtils.combinePaths(Application.dataPath,
                MultidexActivator.androidPluginsPath,
                MultidexActivator.gradleTemplateName);
            //Prefer to use build.gradle from the box. Just in case.
            if (File.Exists(defaultGradleTemplateFullName))
            {
                File.Copy(defaultGradleTemplateFullName, destGradleScriptFullName);
            }

            AssetDatabase.ImportAsset(AppodealUnityUtils.absolute2Relative(destGradleScriptFullName),
                ImportAssetOptions.ForceUpdate);

            //There are no multidex settings in default build.gradle but they can add that stuff.
            var settings = new ImportantGradleSettings(destGradleScriptFullName);

            if (!settings.isMultiDexAddedCompletely())
                new EnableMultidexInGradle(destGradleScriptFullName).fixProblem();
        }
    }

    internal class EnableMultidexInGradle : FixProblemInstruction
    {
        private readonly string path;

        public EnableMultidexInGradle(string gradleScriptPath) : base(
            "Multidex isn't enabled. mainTemplate.gradle should be edited " +
            "according to the official documentation:\nhttps://developer.android.com/studio/build/multidex", true)
        {
            path = gradleScriptPath;
        }

        public override void fixProblem()
        {
            var settings = new ImportantGradleSettings(path);
            var leadingWhitespaces = "";
            string line;
            var prevLine = "";
            var modifiedGradle = "";
            var gradleScript = new StreamReader(path);
            string multidexDependency;


            multidexDependency = MultidexActivator.GRADLE_IMPLEMENTATION +
                                 MultidexActivator.GRADLE_MULTIDEX_DEPENDENCY;


            while ((line = gradleScript.ReadLine()) != null)
            {
                if (!settings.multidexDependencyPresented && line.Contains(MultidexActivator.GRADLE_DEPENDENCIES))
                {
                    modifiedGradle += leadingWhitespaces + multidexDependency + Environment.NewLine;
                }

                if (!settings.multidexEnabled && line.Contains(MultidexActivator.GRADLE_APP_ID))
                {
                    modifiedGradle += leadingWhitespaces + MultidexActivator.GRADLE_MULTIDEX_ENABLE +
                                      Environment.NewLine;
                }

                if (settings.deprecatedProguardPresented && line.Contains(MultidexActivator.GRADLE_USE_PROGUARD))
                {
                    continue;
                }

                modifiedGradle += line + Environment.NewLine;
                leadingWhitespaces = Regex.Match(line, "^\\s*").Value;
                if (line.Contains("repositories") && prevLine.Contains("allprojects") &&
                    !settings.googleRepositoryPresented)
                {
                    leadingWhitespaces += leadingWhitespaces;
                    modifiedGradle += leadingWhitespaces + MultidexActivator.GRADLE_GOOGLE_REPOSITORY_COMPAT +
                                      Environment.NewLine;
                }

                prevLine = line;
            }

            gradleScript.Close();
            File.WriteAllText(path, modifiedGradle);
            AssetDatabase.ImportAsset(AppodealUnityUtils.absolute2Relative(path), ImportAssetOptions.ForceUpdate);
        }
    }
}
#endif
