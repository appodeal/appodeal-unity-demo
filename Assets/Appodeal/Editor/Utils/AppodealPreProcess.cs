// ReSharper disable RedundantUsingDirective
#if UNITY_ANDROID
using System;
using System.IO;
using System.Linq;
using System.Text.RegularExpressions;
using System.Xml.Linq;
using AppodealAds.Unity.Editor.InternalResources;
using UnityEditor;
using UnityEditor.Build;
#if UNITY_2018_1_OR_NEWER
using UnityEditor.Build.Reporting;
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
#if UNITY_2018_1_OR_NEWER
        public void OnPreprocessBuild(BuildReport report)
#else
        public void OnPreprocessBuild(BuildTarget target, string path)
#endif
        {
            if (!File.Exists("Assets/Appodeal/Editor/NetworkConfigs/GoogleAdMobDependencies.xml"))
            {
                return;
            }

            if (string.IsNullOrEmpty(AppodealSettings.Instance.AdMobAndroidAppId)
                || !AppodealSettings.Instance.AdMobAndroidAppId.StartsWith("ca-app-pub-"))
            {
                Debug.LogError(
                    "Please enter a valid AdMob app ID within the Appodeal/AdMob settings tool.");
                return;
            }

            UpdateAndroidManifest();
        }

        private void UpdateAndroidManifest()
        {
            var manifestPath =
                Path.Combine(Application.dataPath, "Plugins/Android/appodeal.androidlib/AndroidManifest.xml");


            string contentString;
            using (var reader = new StreamReader(manifestPath))
            {
                contentString = reader.ReadToEnd();
                reader.Close();
            }

            if (contentString.Contains("APPLICATION_ID"))
            {
                return;
            }

            var replaceText = "\n" + "        <meta-data" + "\n" +
                              "                android:name=" + "'com.google.android.gms.ads.APPLICATION_ID'" + "\n" +
                              "                android:value=" + "'" + AppodealSettings.Instance.AdMobAndroidAppId + "'" + "/>" + "\n" +
                              "    </application>" + "\n";

            contentString = Regex.Replace(contentString, "</application>", replaceText);
            
#if UNITY_2019_3_OR_NEWER
            contentString = Regex.Replace(contentString, "android:name='androidx.multidex.MultiDexApplication'", string.Empty);
#endif

            using (var writer = new StreamWriter(manifestPath))
            {
                writer.Write(contentString);
                writer.Close();
            }
        }

        public int callbackOrder => 0;
    }
}

#endif