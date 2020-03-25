#if UNITY_EDITOR
using UnityEditor;
using UnityEngine;
using AppodealAds.Unity.Editor.Checkers;

namespace Appodeal.Unity.Editor
{
    public class AppodealSettings : ScriptableObject
    {
        [MenuItem("Appodeal/SDK Documentation")]
        public static void OpenDocumentation()
        {
            Application.OpenURL("http://www.appodeal.com/sdk/choose_framework?framework=2&full=1&platform=1");
        }

        [MenuItem("Appodeal/Appodeal Homepage")]
        public static void OpenAppodealHome()
        {
            Application.OpenURL("http://www.appodeal.com");
        }

#if !UNITY_2019_3
        [MenuItem("Appodeal/Check Integration")]
        public static void TestWindow()
        {
            CheckerWindow.GetWindow().Show();
        }

        [MenuItem("Appodeal/Filter Android Architectures")]
        public static void FilterAndroidArchitectures()
        {
            ArchitectureFilter.PrepareBuild();
        }
#endif

        [MenuItem("Appodeal/Remove plugin")]
        public static void RemoveAppodealPlugin()
        {
            RemoveHelper.RemovePlugin();
        }
    }
}
#endif