using System.Text.RegularExpressions;
using UnityEngine;
using UnityEditor;
using System.IO;
using System;
using System.Xml;
using System.Collections.Generic;

namespace AppodealAds.Unity.Editor.Checkers
{
    public class MultidexActivator : CheckingStep
    {
        //Templates in Unity Editor Data folder
        public const string gradleDefaultTemplatePath = "PlaybackEngines/AndroidPlayer/Tools/GradleTemplates";
        public const string manifestDefaultTemplatePath = "PlaybackEngines/AndroidPlayer/Apk/AndroidManifest.xml";

        //Paths without leading Assets folder
        public const string androidPluginsPath = "Plugins/Android";
        public const string gradleTemplateName = "mainTemplate.gradle";
        public const string manifestTemplateName = "AndroidManifest.xml";
        public const string appodealTemplatesPath = "Appodeal/InternalResources";
        const string appodealDexesPath = "Assets/Plugins/Android/appodeal/assets/dex";
        const string appodealDexesPaths = "Assets/Plugins/Android/appodeal/assets/dex";

        //Gradle search lines
        public const string GRADLE_GOOGLE_REPOSITORY = "google()";
        public const string GRADLE_GOOGLE_REPOSITORY_COMPAT = "maven { url \"https://maven.google.com\" }";
        public const string GRADLE_DEPENDENCIES = "**DEPS**";
        public const string GRADLE_APP_ID = "**APPLICATIONID**";
        public const string GRADLE_USE_PROGUARD = "useProguard";
        public const string GRADLE_MULTIDEX_DEPENDENCY_WO_VERSION = "com.android.support:multidex:";
        public const string GRAFLE_DEFAULT_CONFIG = "defaultConfig";
        public const string COMPILE_OPTIONS = "compileOptions {";
        public const string GRADLE_JAVA_VERSION_1_8 = "JavaVersion.VERSION_1_8";
        public const string GRADLE_SOURCE_CAPABILITY = "sourceCompatibility ";
        public const string GRADLE_TARGET_CAPATILITY = "targetCompatibility ";

        //Gradle add lines
        public const string GRADLE_COMPILE = "compile ";
        public const string GRADLE_IMPLEMENTATION = "implementation ";
        public const string GRADLE_MULTIDEX_DEPENDENCY = "'com.android.support:multidex:1.0.3'";
        public const string GRADLE_MULTIDEX_ENABLE = "multiDexEnabled true";

        //Manifest add lines
        public const string manifestMutlidexApp = "android.support.multidex.MultiDexApplication";

        override public string getName()
        {
            return "Android Multidex Settings";
        }

        public override bool isRequiredForPlatform(BuildTarget target)
        {
            if (target == BuildTarget.Android) return true;
            return false;
        }

        override public List<FixProblemInstruction> check()
        {
            List<FixProblemInstruction> instructions = new List<FixProblemInstruction>();
            if (isNodexBuild() && EditorUserBuildSettings.activeBuildTarget == BuildTarget.Android)
            {
                if (!AppodealUnityUtils.isGradleEnabled())
                {
                    if (!AppodealUnityUtils.isGradleAvailable())
                    {
                        FixProblemInstruction fix = new FixProblemInstruction("Gradle should be enabled if you use nodex version of Appodeal Plugin. " +
                            "But your version of Unity doesn't support gradle build system.Please update your Unity or use export to Eclipse or Android Studio.", false);
                        instructions.Add(fix);
                        return instructions;
                    }
                    else
                    {
                        instructions.Add(new EnableGradle());
                    }
                }
                string customGradeScript = getCustomGradleScriptPath();
                if (string.IsNullOrEmpty(customGradeScript) || !File.Exists(customGradeScript))
                {

                    if (File.Exists(getDefaultGradleTemplate()))
                    {
                        instructions.Add(new CopyGradleScriptAndEnableMultidex());
                    }
                    else
                    {
                        FixProblemInstruction instr = new FixProblemInstruction("Tere is no build.gradle template in your Unity. " +
                            "Please ensure that your copy of Unity isn't crashed and contact Appodeal Support team.", false);
                        instructions.Add(instr);
                        return instructions;
                    }
                }
                else
                {
                    ImportantGradleSettings settings = new ImportantGradleSettings(customGradeScript);
                    if (!settings.isMultiDexAddedCompletely())
                    {
                        instructions.Add(new EnableMultidexInGradle(customGradeScript));
                    }
                    if (!settings.isJavaVersionIncluded())
                    {
                        instructions.Add(new EnableJavaVersion(customGradeScript));
                    }
                }
                string customManifestPath = getCustomManifestPath();
                if (string.IsNullOrEmpty(customManifestPath) || !File.Exists(customManifestPath))
                {
                    instructions.Add(new CopyManifestTemplateAndAddNameAttribute());
                }
                else
                {
                    XmlElement appNode = getApplicationNode(customManifestPath);
                    string ns = appNode.GetNamespaceOfPrefix("android");
                    if (!appNode.HasAttribute("name", ns))
                    {
                        instructions.Add(new AddNameAttrubute(appNode, ns));
                    }
                    else
                    {
                        if (appNode.GetAttribute("name", ns) != manifestMutlidexApp)
                        {
                            FixProblemInstruction fix = new FixProblemInstruction("We found that you use custom Application class in this project. " +
                                "Please ensure that your application class meets the multidex requirements (see the official android multiex documentation).", false);
                            instructions.Add(fix);
                        }
                    }
                }
            }
            else if (!isNodexBuild() && isMultidexEnabledSimpleCheck() && EditorUserBuildSettings.activeBuildTarget == BuildTarget.Android)
            {
                FixProblemInstruction fix = new FixProblemInstruction("We found that multidex is enabled in your project. To avoid possible problems please " +
                                                                      "replace current version of Appodeal plugin with nodex version.", false);
                instructions.Add(fix);
            }
            return instructions;
        }

        public static XmlElement getApplicationNode(string manifestPath)
        {
            XmlDocument doc = new XmlDocument();
            doc.Load(manifestPath);
            XmlNode manNode = AppodealUnityUtils.XmlFindChildNode(doc, "manifest");
            XmlElement appNode = (XmlElement)AppodealUnityUtils.XmlFindChildNode(manNode, "application");
            return appNode;
        }

        static string getCustomGradleScriptPath()
        {
            DirectoryInfo androidDirectory = new DirectoryInfo(Path.Combine("Assets", androidPluginsPath));
            FileInfo[] filePaths = androidDirectory.GetFiles("*.gradle");
            return filePaths.Length > 0 ? Path.Combine(Path.Combine(Application.dataPath, androidPluginsPath), filePaths[0].Name) : null;
        }

        public static string getCustomManifestPath()
        {
            return AppodealUnityUtils.combinePaths(Application.dataPath, androidPluginsPath, manifestTemplateName);
        }

        static bool isNodexBuild()
        {
            DirectoryInfo dexesDirectory = new DirectoryInfo(appodealDexesPath);
            if (!dexesDirectory.Exists)
            {
                return true;
            }
            FileInfo[] dexes = dexesDirectory.GetFiles("*.dex");
            return dexes.Length == 0;
        }

        static bool isMultidexEnabledSimpleCheck()
        {
            string path = getCustomGradleScriptPath();
            if (string.IsNullOrEmpty(path))
            {
                return false;
            }
            ImportantGradleSettings settings = new ImportantGradleSettings(path);
            return settings.isMultidexEnabled() && AppodealUnityUtils.isGradleEnabled();
        }

        public static string getDefaultGradleTemplate()
        {
            string defaultGradleTemplateFullName = AppodealUnityUtils.combinePaths(EditorApplication.applicationContentsPath,
                                                                                   MultidexActivator.gradleDefaultTemplatePath,
                                                                                   MultidexActivator.gradleTemplateName);
            if (!File.Exists(defaultGradleTemplateFullName))
            {
                string unixAppContentsPath = Path.GetDirectoryName(Path.GetDirectoryName(EditorApplication.applicationContentsPath));
                defaultGradleTemplateFullName = AppodealUnityUtils.combinePaths(unixAppContentsPath,
                                                                                MultidexActivator.gradleDefaultTemplatePath,
                                                                                MultidexActivator.gradleTemplateName);
            }
            return defaultGradleTemplateFullName;
        }
    }

    public class ImportantGradleSettings
    {
        public bool googleRepositoryPresented;
        public bool multidexDependencyPresented;
        public bool multidexEnabled;
        public bool deprecatedProguardPresented;
        public bool compileOptions;
        public bool sourceCapability;
        public bool targetCapability;
        public bool defaulConfig;

        public ImportantGradleSettings(string gradlePath)
        {
            string gradleScriptFullText = File.ReadAllText(gradlePath);
            multidexDependencyPresented = gradleScriptFullText.Contains(MultidexActivator.GRADLE_MULTIDEX_DEPENDENCY_WO_VERSION);
            multidexEnabled = gradleScriptFullText.Contains(MultidexActivator.GRADLE_MULTIDEX_ENABLE);
            deprecatedProguardPresented = gradleScriptFullText.Contains(MultidexActivator.GRADLE_USE_PROGUARD);
            compileOptions = gradleScriptFullText.Contains(MultidexActivator.COMPILE_OPTIONS);
            sourceCapability = gradleScriptFullText.Contains(MultidexActivator.GRADLE_SOURCE_CAPABILITY + MultidexActivator.GRADLE_JAVA_VERSION_1_8);
            targetCapability = gradleScriptFullText.Contains(MultidexActivator.GRADLE_TARGET_CAPATILITY + MultidexActivator.GRADLE_JAVA_VERSION_1_8);
            defaulConfig = gradleScriptFullText.Contains(MultidexActivator.GRAFLE_DEFAULT_CONFIG);

            //can be resented for buildscript, not for allprojects
            string allprojects = getModule("allprojects", gradleScriptFullText);
            googleRepositoryPresented = allprojects.Contains(MultidexActivator.GRADLE_GOOGLE_REPOSITORY) ||
                                                            gradleScriptFullText.Contains(MultidexActivator.GRADLE_GOOGLE_REPOSITORY_COMPAT);
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
            return multidexDependencyPresented && multidexEnabled && !deprecatedProguardPresented && googleRepositoryPresented;
        }

        private string getModule(string moduleName, string fulltext)
        {
            int startIndex = fulltext.IndexOf(moduleName, StringComparison.Ordinal);
            startIndex = fulltext.IndexOf('{', startIndex) + 1;
            int currentIndex = startIndex;
            int braces = 1;
            while (braces != 0)
            {
                char c = fulltext[currentIndex];
                if (c == '{') braces++;
                if (c == '}') braces--;
                currentIndex++;
            }
            return fulltext.Substring(startIndex, currentIndex - startIndex);
        }
    }

    class EnableGradle : FixProblemInstruction
    {
        public EnableGradle() : base("Gradle build system isn't enabled.\n(required for nodex version of Appodeal Plugin " +
                                   "and if you aren't going to export your project to Android Studio or Eclipse).", true)
        { }
        public override void fixProblem()
        {
            AppodealUnityUtils.enableGradleBuildSystem();
        }
    }

    class CopyGradleScriptAndEnableMultidex : FixProblemInstruction
    {
        public CopyGradleScriptAndEnableMultidex() : base("Assets/Plugins/Android/mainTemplate.gradle not found.\n" +
                                                          "(required if you aren't going to export your project to Android Studio or Eclipse)", true)
        { }
        public override void fixProblem()
        {
            //EditorApplication.applicationContentsPath is different for macos and win. need to fix to reach manifest and gradle templates 
            string defaultGradleTemplateFullName = MultidexActivator.getDefaultGradleTemplate();

            string destGradleScriptFullName = AppodealUnityUtils.combinePaths(Application.dataPath, MultidexActivator.androidPluginsPath,
                                                                              MultidexActivator.gradleTemplateName);
            //Prefer to use build.gradle from the box. Just in case.
            if (File.Exists(defaultGradleTemplateFullName))
            {
                File.Copy(defaultGradleTemplateFullName, destGradleScriptFullName);
            }

            AssetDatabase.ImportAsset(AppodealUnityUtils.absolute2Relative(destGradleScriptFullName), ImportAssetOptions.ForceUpdate);

            //There are no multidex settings in default build.gradle but they can add that stuff.
            ImportantGradleSettings settings = new ImportantGradleSettings(destGradleScriptFullName);

            if (!settings.isMultiDexAddedCompletely()) new EnableMultidexInGradle(destGradleScriptFullName).fixProblem();
        }
    }

    class EnableMultidexInGradle : FixProblemInstruction
    {
        private string path;
        public EnableMultidexInGradle(string gradleScriptPath) : base("Multidex isn't enabled. mainTemplate.gradle should be edited " +
            "according to the official documentation:\nhttps://developer.android.com/studio/build/multidex", true)
        {
            path = gradleScriptPath;
        }
        public override void fixProblem()
        {
            ImportantGradleSettings settings = new ImportantGradleSettings(path);
            string leadingWhitespaces = "";
            string line;
            string prevLine = "";
            string modifiedGradle = "";
            StreamReader gradleScript = new StreamReader(path);
            string multidexDependency;
            int comparsionUnityVersionWith20182 = AppodealUnityUtils.compareVersions(Application.unityVersion, "2018.2");
            if (comparsionUnityVersionWith20182 < 0)
            {
                multidexDependency = MultidexActivator.GRADLE_COMPILE + MultidexActivator.GRADLE_MULTIDEX_DEPENDENCY;
            }
            else
            {
                multidexDependency = MultidexActivator.GRADLE_IMPLEMENTATION + MultidexActivator.GRADLE_MULTIDEX_DEPENDENCY;
            }

            while ((line = gradleScript.ReadLine()) != null)
            {
                if (!settings.multidexDependencyPresented && line.Contains(MultidexActivator.GRADLE_DEPENDENCIES))
                {
                    modifiedGradle += leadingWhitespaces + multidexDependency + Environment.NewLine;
                }

                if (!settings.multidexEnabled && line.Contains(MultidexActivator.GRADLE_APP_ID))
                {
                    modifiedGradle += leadingWhitespaces + MultidexActivator.GRADLE_MULTIDEX_ENABLE + Environment.NewLine;
                }

                if (settings.deprecatedProguardPresented && line.Contains(MultidexActivator.GRADLE_USE_PROGUARD))
                {
                    //useProguard is deprecated
                    continue;
                }

                modifiedGradle += line + Environment.NewLine;
                leadingWhitespaces = Regex.Match(line, "^\\s*").Value;
                if (line.Contains("repositories") && prevLine.Contains("allprojects") && !settings.googleRepositoryPresented)
                {
                    leadingWhitespaces += leadingWhitespaces;
                    modifiedGradle += leadingWhitespaces + MultidexActivator.GRADLE_GOOGLE_REPOSITORY_COMPAT + Environment.NewLine;
                }
                prevLine = line;
            }
            gradleScript.Close();
            File.WriteAllText(path, modifiedGradle);
            AssetDatabase.ImportAsset(AppodealUnityUtils.absolute2Relative(path), ImportAssetOptions.ForceUpdate);
        }
    }

    class EnableJavaVersion : FixProblemInstruction
    {
        private string path;
        public EnableJavaVersion(string gradleScriptPath) : base("Java version isn't included to mainTamplete.gradle", true)
        {
            path = gradleScriptPath;
        }
        public override void fixProblem()
        {
            ImportantGradleSettings settings = new ImportantGradleSettings(path);
            string leadingWhitespaces = "    ";
            string additionalWhiteSpaces = "";
            string line;
            string modifiedGradle = "";
            
            StreamReader gradleScript = new StreamReader(path);

            while ((line = gradleScript.ReadLine()) != null)
            {
                if (line.Contains(MultidexActivator.GRAFLE_DEFAULT_CONFIG))
                {
                    if (!settings.compileOptions)
                    {
                        modifiedGradle += additionalWhiteSpaces + leadingWhitespaces + MultidexActivator.COMPILE_OPTIONS + Environment.NewLine;
                    }

                    if (!settings.sourceCapability)
                    {
                        modifiedGradle += leadingWhitespaces + leadingWhitespaces + MultidexActivator.GRADLE_SOURCE_CAPABILITY
                            + MultidexActivator.GRADLE_JAVA_VERSION_1_8 + Environment.NewLine;
                    }

                    if (!settings.targetCapability)
                    {
                        modifiedGradle += leadingWhitespaces + leadingWhitespaces + MultidexActivator.GRADLE_TARGET_CAPATILITY
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

    class CopyManifestTemplateAndAddNameAttribute : FixProblemInstruction
    {
        public CopyManifestTemplateAndAddNameAttribute() : base("Assets/Plugins/Android/AndroidManifest.xml not found.\n", true) { }
        public override void fixProblem()
        {
            string fullManifestName = MultidexActivator.getCustomManifestPath();
            string defaultTemplate = Path.Combine(EditorApplication.applicationContentsPath, MultidexActivator.manifestDefaultTemplatePath);
            if (!File.Exists(defaultTemplate))
            {
                string unixAppContentsPath = Path.GetDirectoryName(Path.GetDirectoryName(EditorApplication.applicationContentsPath));
                defaultTemplate = Path.Combine(unixAppContentsPath, MultidexActivator.manifestDefaultTemplatePath);
            }
            string appodealTemplate = AppodealUnityUtils.combinePaths(Application.dataPath, MultidexActivator.appodealTemplatesPath,
                                                                      MultidexActivator.manifestTemplateName);
            File.Copy(File.Exists(defaultTemplate) ? defaultTemplate : appodealTemplate, fullManifestName);
            AssetDatabase.ImportAsset(AppodealUnityUtils.absolute2Relative(fullManifestName), ImportAssetOptions.ForceUpdate);

            // There are no multidex activity in default AndroidManifest. But again, they can add it.
            XmlElement appNode = MultidexActivator.getApplicationNode(fullManifestName);
            string ns = appNode.GetNamespaceOfPrefix("android");
            if (!appNode.HasAttribute("name", ns))
            {
                new AddNameAttrubute(appNode, ns).fixProblem();
            }
        }
    }

    class AddNameAttrubute : FixProblemInstruction
    {
        private XmlElement appNode;
        private string ns;
        public AddNameAttrubute(XmlElement appNode, string ns) : base("Problem in AndroidManifest.xml found.\nApplication tag should contain android:" +
            "name attribute with value: " + MultidexActivator.manifestMutlidexApp, true)
        {
            this.appNode = appNode;
            this.ns = ns;
        }

        public override void fixProblem()
        {
            string fullManifestName = MultidexActivator.getCustomManifestPath();
            appNode.SetAttribute("name", ns, MultidexActivator.manifestMutlidexApp);
            appNode.OwnerDocument.Save(fullManifestName);
            AssetDatabase.ImportAsset(AppodealUnityUtils.absolute2Relative(fullManifestName), ImportAssetOptions.ForceUpdate);
        }
    }
}
