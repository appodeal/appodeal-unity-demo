using System.Text.RegularExpressions;
using UnityEngine;
using UnityEditor;
using System.IO;
using System;
using System.Xml;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using Debug = System.Diagnostics.Debug;
using AppodealAds.Unity.Editor.Utils;


namespace AppodealAds.Unity.Editor.Checkers
{
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    public class MultidexActivator : CheckingStep
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
        public const string GRADLE_COMPILE = "compile ";
        public const string GRADLE_IMPLEMENTATION = "implementation ";
        public const string GRADLE_MULTIDEX_DEPENDENCY = "'androidx.multidex:multidex:2.0.1'";
        public const string GRADLE_MULTIDEX_ENABLE = "multiDexEnabled true";

        //Manifest add lines
        public const string manifestMutlidexApp = "androidx.multidex.MultiDexApplication";

        #endregion
        
        public override string getName()
        {
            return "Android Multidex Settings";
        }

        public override bool isRequiredForPlatform(BuildTarget target)
        {
            return target == BuildTarget.Android;
        }

        public override List<FixProblemInstruction> check()
        {
            var instructions = new List<FixProblemInstruction>();
            if (isNodexBuild() && EditorUserBuildSettings.activeBuildTarget == BuildTarget.Android)
            {
                if (!AppodealUnityUtils.isGradleEnabled())
                {
                    if (!AppodealUnityUtils.isGradleAvailable())
                    {
                        var fix = new FixProblemInstruction(
                            "Gradle should be enabled if you use nodex version of Appodeal Plugin. " +
                            "But your version of Unity doesn't support gradle build system.Please update your Unity or use export to Eclipse or Android Studio.",
                            false);
                        instructions.Add(fix);
                        return instructions;
                    }

                    instructions.Add(new EnableGradle());
                }

                var customGradeScript = getCustomGradleScriptPath();
                if (string.IsNullOrEmpty(customGradeScript) || !File.Exists(customGradeScript))
                {
                    if (File.Exists(getDefaultGradleTemplate()))
                    {
                        instructions.Add(new CopyGradleScriptAndEnableMultidex());
                    }
                    else
                    {
                        var instr = new FixProblemInstruction(
                            "There is no build.gradle template in your Unity. " +
                            "Please ensure that your copy of Unity isn't crashed and contact Appodeal Support team.",
                            false);
                        instructions.Add(instr);
                        return instructions;
                    }
                }
                else
                {
                    var settings = new ImportantGradleSettings(customGradeScript);
                    if (!settings.isMultiDexAddedCompletely())
                    {
                        instructions.Add(new EnableMultidexInGradle(customGradeScript));
                    }

                    if (!settings.isJavaVersionIncluded())
                    {
                        instructions.Add(new EnableJavaVersion(customGradeScript));
                    }
                }

                var customManifestPath = getCustomManifestPath();
                if (string.IsNullOrEmpty(customManifestPath) || !File.Exists(customManifestPath))
                {
                    instructions.Add(new CopyManifestTemplateAndAddNameAttribute());
                }
                else
                {
                    var appNode = getApplicationNode(customManifestPath);
                    var ns = appNode.GetNamespaceOfPrefix("android");
                    if (!appNode.HasAttribute("name", ns))
                    {
                        instructions.Add(new AddNameAttrubute(appNode, ns));
                    }
                    else
                    {
                        if (appNode.GetAttribute("name", ns) == manifestMutlidexApp) return instructions;
                        var fix = new FixProblemInstruction(
                            "We found that you use custom Application class in this project. " +
                            "Please ensure that your application class meets the multidex requirements (see the official android multidex documentation).",
                            false);
                        instructions.Add(fix);
                    }
                }
            }
            else if (!isNodexBuild() && isMultidexEnabledSimpleCheck() &&
                     EditorUserBuildSettings.activeBuildTarget == BuildTarget.Android)
            {
                var fix = new FixProblemInstruction(
                    "We found that multidex is enabled in your project. To avoid possible problems please " +
                    "replace current version of Appodeal plugin with nodex version.", false);
                instructions.Add(fix);
            }

            return instructions;
        }

        public static XmlElement getApplicationNode(string manifestPath)
        {
            var doc = new XmlDocument();
            doc.Load(manifestPath);
            var manNode = AppodealUnityUtils.XmlFindChildNode(doc, "manifest");
            var appNode = (XmlElement) AppodealUnityUtils.XmlFindChildNode(manNode, "application");
            return appNode;
        }

        private static string getCustomGradleScriptPath()
        {
            var androidDirectory = new DirectoryInfo(Path.Combine("Assets", androidPluginsPath));
            var filePaths = androidDirectory.GetFiles("*.gradle");
            return filePaths.Length > 0
                ? Path.Combine(Path.Combine(Application.dataPath, androidPluginsPath), filePaths[0].Name)
                : null;
        }

        public static string getCustomManifestPath()
        {
            return AppodealUnityUtils.combinePaths(Application.dataPath, androidPluginsPath, manifestTemplateName);
        }

        private static bool isNodexBuild()
        {
            var dexesDirectory = new DirectoryInfo(appodealDexesPath);
            if (!dexesDirectory.Exists)
            {
                return true;
            }

            var dexes = dexesDirectory.GetFiles("*.dex");
            return dexes.Length == 0;
        }

        private static bool isMultidexEnabledSimpleCheck()
        {
            var path = getCustomGradleScriptPath();
            if (string.IsNullOrEmpty(path))
            {
                return false;
            }

            var settings = new ImportantGradleSettings(path);
            return settings.isMultidexEnabled() && AppodealUnityUtils.isGradleEnabled();
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
    }

    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "NotAccessedField.Local")]
    public class ImportantGradleSettings
    {
        public readonly bool googleRepositoryPresented;
        public readonly bool multidexDependencyPresented;
        public readonly bool multidexEnabled;
        public readonly bool deprecatedProguardPresented;
        public readonly bool compileOptions;
        public readonly bool sourceCapability;
        public readonly bool targetCapability;
        public bool defaultConfig;

        public ImportantGradleSettings(string gradlePath)
        {
            var gradleScriptFullText = File.ReadAllText(gradlePath);
            multidexDependencyPresented =
                gradleScriptFullText.Contains(MultidexActivator.GRADLE_MULTIDEX_DEPENDENCY_WO_VERSION);
            multidexEnabled = gradleScriptFullText.Contains(MultidexActivator.GRADLE_MULTIDEX_ENABLE);
            deprecatedProguardPresented = gradleScriptFullText.Contains(MultidexActivator.GRADLE_USE_PROGUARD);
            compileOptions = gradleScriptFullText.Contains(MultidexActivator.COMPILE_OPTIONS);
            sourceCapability =
                gradleScriptFullText.Contains(MultidexActivator.GRADLE_SOURCE_CAPABILITY +
                                              MultidexActivator.GRADLE_JAVA_VERSION_1_8);
            targetCapability =
                gradleScriptFullText.Contains(MultidexActivator.GRADLE_TARGET_CAPATILITY +
                                              MultidexActivator.GRADLE_JAVA_VERSION_1_8);
            defaultConfig = gradleScriptFullText.Contains(MultidexActivator.GRAFLE_DEFAULT_CONFIG);

            var allprojects = getModule("allprojects", gradleScriptFullText);
            googleRepositoryPresented = allprojects.Contains(MultidexActivator.GRADLE_GOOGLE_REPOSITORY) ||
                                        gradleScriptFullText.Contains(MultidexActivator
                                            .GRADLE_GOOGLE_REPOSITORY_COMPAT);
        }

        public bool isJavaVersionIncluded()
        {
            return sourceCapability && targetCapability;
        }

        public bool isMultidexEnabled()
        {
            return multidexDependencyPresented || multidexEnabled;
        }

        public bool isMultiDexAddedCompletely()
        {
            return multidexDependencyPresented && multidexEnabled && !deprecatedProguardPresented &&
                   googleRepositoryPresented;
        }

        private static string getModule(string moduleName, string fulltext)
        {
            var startIndex = fulltext.IndexOf(moduleName, StringComparison.Ordinal);
            startIndex = fulltext.IndexOf('{', startIndex) + 1;
            var currentIndex = startIndex;
            var braces = 1;
            while (braces != 0)
            {
                var c = fulltext[currentIndex];
                switch (c)
                {
                    case '{':
                        braces++;
                        break;
                    case '}':
                        braces--;
                        break;
                }

                currentIndex++;
            }

            return fulltext.Substring(startIndex, currentIndex - startIndex);
        }
    }

    internal class EnableGradle : FixProblemInstruction
    {
        public EnableGradle() : base(
            "Gradle build system isn't enabled.\n(required for nodex version of Appodeal Plugin " +
            "and if you aren't going to export your project to Android Studio or Eclipse).", true)
        {
        }

        public override void fixProblem()
        {
            AppodealUnityUtils.enableGradleBuildSystem();
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
            var comparsionUnityVersionWith20182 =
                AppodealUnityUtils.compareVersions(Application.unityVersion, "2018.2");
            if (comparsionUnityVersionWith20182 < 0)
            {
                multidexDependency = MultidexActivator.GRADLE_COMPILE + MultidexActivator.GRADLE_MULTIDEX_DEPENDENCY;
            }
            else
            {
                multidexDependency = MultidexActivator.GRADLE_IMPLEMENTATION +
                                     MultidexActivator.GRADLE_MULTIDEX_DEPENDENCY;
            }

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

    internal class CopyManifestTemplateAndAddNameAttribute : FixProblemInstruction
    {
        public CopyManifestTemplateAndAddNameAttribute() : base(
            "Assets/Plugins/Android/AndroidManifest.xml not found.\n", true)
        {
        }

        public override void fixProblem()
        {
            var fullManifestName = MultidexActivator.getCustomManifestPath();
            var defaultTemplate = Path.Combine(EditorApplication.applicationContentsPath,
                MultidexActivator.manifestDefaultTemplatePath);
            if (!File.Exists(defaultTemplate))
            {
                var unixAppContentsPath =
                    Path.GetDirectoryName(Path.GetDirectoryName(EditorApplication.applicationContentsPath));
                Debug.Assert(unixAppContentsPath != null, nameof(unixAppContentsPath) + " != null");
                defaultTemplate = Path.Combine(unixAppContentsPath, MultidexActivator.manifestDefaultTemplatePath);
            }

            var appodealTemplate = AppodealUnityUtils.combinePaths(Application.dataPath,
                MultidexActivator.appodealTemplatesPath,
                MultidexActivator.manifestTemplateName);
            File.Copy(File.Exists(defaultTemplate) ? defaultTemplate : appodealTemplate, fullManifestName);
            AssetDatabase.ImportAsset(AppodealUnityUtils.absolute2Relative(fullManifestName),
                ImportAssetOptions.ForceUpdate);

            var appNode = MultidexActivator.getApplicationNode(fullManifestName);
            var ns = appNode.GetNamespaceOfPrefix("android");
            if (!appNode.HasAttribute("name", ns))
            {
                new AddNameAttrubute(appNode, ns).fixProblem();
            }
        }
    }

    internal class AddNameAttrubute : FixProblemInstruction
    {
        private readonly XmlElement appNode;
        private readonly string ns;

        public AddNameAttrubute(XmlElement appNode, string ns) : base(
            "Problem in AndroidManifest.xml found.\nApplication tag should contain android:" +
            "name attribute with value: " + MultidexActivator.manifestMutlidexApp, true)
        {
            this.appNode = appNode;
            this.ns = ns;
        }

        public override void fixProblem()
        {
            var fullManifestName = MultidexActivator.getCustomManifestPath();
            appNode.SetAttribute("name", ns, MultidexActivator.manifestMutlidexApp);
            Debug.Assert(appNode.OwnerDocument != null, "appNode.OwnerDocument != null");
            appNode.OwnerDocument.Save(fullManifestName);
            AssetDatabase.ImportAsset(AppodealUnityUtils.absolute2Relative(fullManifestName),
                ImportAssetOptions.ForceUpdate);
        }
    }
}