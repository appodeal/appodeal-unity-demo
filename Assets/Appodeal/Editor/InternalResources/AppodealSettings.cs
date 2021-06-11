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

        [SerializeField] private bool accessCoarseLocationPermission;
        [SerializeField] private bool writeExternalStoragePermission;
        [SerializeField] private bool accessWifiStatePermission;
        [SerializeField] private bool vibratePermission;
        [SerializeField] private bool accessFineLocationPermission;

        [SerializeField] private bool androidMultidex;

        [SerializeField] private bool nSUserTrackingUsageDescription;
        [SerializeField] private bool nSLocationWhenInUseUsageDescription;
        [SerializeField] private bool nSCalendarsUsageDescription;
        [SerializeField] private bool nSAppTransportSecurity;

        [SerializeField] private bool iOSSKAdNetworkItems;


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

        public bool AccessCoarseLocationPermission
        {
            get { return accessCoarseLocationPermission; }
            set { Instance.accessCoarseLocationPermission = value; }
        }

        public bool WriteExternalStoragePermission
        {
            get { return writeExternalStoragePermission; }
            set { Instance.writeExternalStoragePermission = value; }
        }

        public bool AccessWifiStatePermission
        {
            get { return accessWifiStatePermission; }
            set { Instance.accessWifiStatePermission = value; }
        }

        public bool VibratePermission
        {
            get { return vibratePermission; }
            set { Instance.vibratePermission = value; }
        }

        public bool AccessFineLocationPermission
        {
            get { return accessFineLocationPermission; }
            set { Instance.accessFineLocationPermission = value; }
        }

        public bool AndroidMultidex
        {
            get { return androidMultidex; }
            set { Instance.androidMultidex = value; }
        }

        public bool NSUserTrackingUsageDescription
        {
            get { return nSUserTrackingUsageDescription; }
            set { Instance.nSUserTrackingUsageDescription = value; }
        }

        public bool NSLocationWhenInUseUsageDescription
        {
            get { return nSLocationWhenInUseUsageDescription; }
            set { Instance.nSLocationWhenInUseUsageDescription = value; }
        }

        public bool NSCalendarsUsageDescription
        {
            get { return nSCalendarsUsageDescription; }
            set { Instance.nSCalendarsUsageDescription = value; }
        }

        public bool NSAppTransportSecurity
        {
            get { return nSAppTransportSecurity; }
            set { Instance.nSAppTransportSecurity = value; }
        }

        public bool IOSSkAdNetworkItems
        {
            get { return iOSSKAdNetworkItems; }
            set { Instance.iOSSKAdNetworkItems = value; }
        }

        public void SaveAsync()
        {
            EditorUtility.SetDirty(instance);
        }
    }
}