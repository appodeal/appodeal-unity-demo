using System.Diagnostics.CodeAnalysis;
using System.IO;
using UnityEditor;
using UnityEngine;

namespace AppodealAds.Unity.Editor.InternalResources
{
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    public class AppodealSettings : ScriptableObject
    {
        private const string AppodealSettingsExportPath = "Appodeal/Editor/InternalResources/AppodealSettings.asset";
        private static AppodealSettings instance;

        [SerializeField] private string adMobAndroidAppId = string.Empty;
        [SerializeField] private string adMobIosAppId = string.Empty;

        public static AppodealSettings Instance
        {
            get
            {
                if (instance != null) return instance;
                var settingsFilePath = Path.Combine("Assets", AppodealSettingsExportPath);
                var settingsDir = Path.GetDirectoryName(settingsFilePath);
                if (!Directory.Exists(settingsDir))
                {
                    Directory.CreateDirectory(settingsDir ?? string.Empty);
                }

                instance = AssetDatabase.LoadAssetAtPath<AppodealSettings>(settingsFilePath);
                if (instance != null) return instance;
                instance = CreateInstance<AppodealSettings>();
                AssetDatabase.CreateAsset(instance, settingsFilePath);

                return instance;
            }
        }

        public string AdMobAndroidAppId
        {
            get { return Instance.adMobAndroidAppId; }
            set { Instance.adMobAndroidAppId = value; }
        }

        public string AdMobIosAppId
        {
            get { return Instance.adMobIosAppId; }
            set { Instance.adMobIosAppId = value; }
        }

        public void SaveAsync()
        {
            EditorUtility.SetDirty(instance);
        }
    }
}