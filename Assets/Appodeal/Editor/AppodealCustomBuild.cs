using System;
using System.Diagnostics.CodeAnalysis;
using System.IO;
using System.Text.RegularExpressions;
using Appodeal.Unity.Editor;
using ConsentManager.ConsentManagerDemo.Scripts;
using UnityEditor;
using UnityEngine;

#pragma warning disable 618


[SuppressMessage("ReSharper", "InconsistentNaming")]
[SuppressMessage("ReSharper", "UnusedMember.Local")]
public class AppodealCustomBuild : MonoBehaviour
{
    static string outputProjectsFolder = "~/Desktop";

    static void AndroidDevelopment()
    {
#if UNITY_EDITOR

        EditorUserBuildSettings.SwitchActiveBuildTarget(BuildTarget.Android);
        PlayerSettings.SetScriptingBackend(BuildTargetGroup.Android, ScriptingImplementation.Mono2x);
        PlayerSettings.applicationIdentifier = "com.appodeal.test";

        var variables = Environment.GetCommandLineArgs();

        for (var i = 0; i < variables.Length; i++)
        {
            if (variables[i].Contains("appKey"))
            {
                var projectAppKey = variables[i + 1];
                AppodealDemo.appKey = projectAppKey;
            }

            if (variables[i].Contains("bundleId"))
            {
                var projectBundleId = variables[i + 1];
                PlayerSettings.applicationIdentifier = projectBundleId;
            }
        }

        PlayerSettings.Android.minSdkVersion = AndroidSdkVersions.AndroidApiLevel21;
        PlayerSettings.Android.keystoreName = Environment.GetEnvironmentVariable("KeystoreName");
        PlayerSettings.Android.keystorePass = Environment.GetEnvironmentVariable("KeystorePassword");
        PlayerSettings.Android.keyaliasName = Environment.GetEnvironmentVariable("KeyAlias");
        PlayerSettings.Android.keyaliasPass = Environment.GetEnvironmentVariable("KeyPassword");

        const string admobAppId = ">" + "\n" + "<meta-data" + "\n" +
                                  "android:name='com.google.android.gms.ads.APPLICATION_ID'" +
                                  "\n" + "android:value='ca-app-pub-3940256099942544~3347511713'/>";


        ReplaceInFile("Assets/Plugins/Android/appodeal/AndroidManifest.xml",
            "android:name='androidx.multidex.MultiDexApplication'>", admobAppId);

        var rep = BuildPipeline.BuildPlayer(new[] {"Assets/Appodeal/AppodealDemo/Scenes/AppodealDemoScene.unity"},
            $"{outputProjectsFolder}/{PlayerSettings.applicationIdentifier}.apk",
            BuildTarget.Android, BuildOptions.None);

        Debug.Log($"rep.summary.result - {rep.summary.result}");

#endif
    }

    static void IOSDevelopment()
    {
#if UNITY_EDITOR
        EditorUserBuildSettings.SwitchActiveBuildTarget(BuildTarget.iOS);
        iOSPostprocessUtils.isCustomBuild = true;

        var variables = Environment.GetCommandLineArgs();

        for (var i = 0; i < variables.Length; i++)
        {
            if (variables[i].Contains("appKey"))
            {
                var projectAppKey = variables[i + 1];
                AppodealDemo.appKey = projectAppKey;
            }

            if (variables[i].Contains("bundleId"))
            {
                var projectBundleId = variables[i + 1];
                PlayerSettings.applicationIdentifier = projectBundleId;
            }
        }

        PlayerSettings.iOS.appleEnableAutomaticSigning = true;
        PlayerSettings.iOS.appleDeveloperTeamID = "WG4VFF78ZM";

        var rep = BuildPipeline.BuildPlayer(new[] {"Assets/Appodeal/AppodealDemo/Scenes/AppodealDemoScene.unity"},
            $"{outputProjectsFolder}/iOSAppodealDemo",
            BuildTarget.iOS, BuildOptions.None);

        Debug.Log($"rep.summary.result - {rep.summary.result}");
#endif
    }

    private static void ReplaceInFile(
        string filePath, string searchText, string replaceText)
    {
#if UNITY_EDITOR
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
#endif
    }
}