#pragma warning disable 612
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using Appodeal.Editor.AppodealManager.AppodealDependencies;
using AppodealAds.Unity.Editor.InternalResources;
using marijnz.EditorCoroutines;
using UnityEditor;
using UnityEngine;
using UnityEngine.Networking;

#pragma warning disable 618

[SuppressMessage("ReSharper", "NotAccessedField.Local")]
[SuppressMessage("ReSharper", "InconsistentNaming")]
[SuppressMessage("ReSharper", "CollectionNeverQueried.Global")]
public class AppodealInternalSettings : EditorWindow
{
    private static List<string> SKAdNetworkIdentifiers;

    public static void ShowAppodealInternalSettings()
    {
        GetWindowWithRect(typeof(AppodealInternalSettings), new Rect(0, 0, 650, 340), true, "Appodeal Settings");
    }

    private void OnEnable()
    {
        this.StartCoroutine(GetSkaNetworkIds());
    }

    private static IEnumerator GetSkaNetworkIds()
    {
        SKAdNetworkIdentifiers = new List<string>();
        var requestSkaNetworkIds = UnityWebRequest.Get("https://mw-backend.appodeal.com/v1/skadnetwork/");
        yield return requestSkaNetworkIds.SendWebRequest();
        if (requestSkaNetworkIds.isError)
        {
            Debug.LogError(requestSkaNetworkIds.error);
        }
        else
        {
            if (string.IsNullOrEmpty(requestSkaNetworkIds.downloadHandler.text))
            {
                Debug.LogError("string.IsNullOrEmpty(requestSkaNetworkIds.downloadHandler.text)");
            }

            if (requestSkaNetworkIds.downloadHandler.text.Contains("error"))
            {
                Debug.LogError(
                    $"{requestSkaNetworkIds.downloadHandler.text}");
                yield break;
            }

            var skaItems =
                JsonHelper.FromJson<SkaNetworkItem>(JsonHelper.fixJson(requestSkaNetworkIds.downloadHandler.text));

            foreach (var skaItem in skaItems)
            {
                foreach (var itemID in skaItem.ids)
                {
                    if (!string.IsNullOrEmpty(itemID))
                    {
                        SKAdNetworkIdentifiers.Add(itemID);
                    }
                }
            }
        }

        requestSkaNetworkIds.Dispose();
        yield return null;
    }

    private void OnGUI()
    {
        #region Admob App Id Setting

        GUILayout.BeginHorizontal();
        using (new EditorGUILayout.VerticalScope("box"))
        {
            if (GUILayout.Button("AdMob App Id Setting", new GUIStyle(EditorStyles.label)
            {
                fontSize = 15,
                fontStyle = FontStyle.Bold,
                fixedHeight = 25
            }, GUILayout.Width(200)))
            {
                Application.OpenURL(
                    "https://wiki.appodeal.com/en/unity/get-started#UnitySDK.GetStarted-2.3Admobconfiguration");
            }

            GUILayout.Space(2);


            AppodealSettings.Instance.AdMobAndroidAppId = AdmobAppIdPlatformRow("App ID (Android)",
                AppodealSettings.Instance.AdMobAndroidAppId, GUILayout.Width(200));
            AppodealSettings.Instance.AdMobIosAppId = AdmobAppIdPlatformRow("App ID (iOS)",
                AppodealSettings.Instance.AdMobIosAppId, GUILayout.Width(200));
            GUILayout.Space(10);
        }

        GUILayout.EndHorizontal();

        #endregion

        #region Android Settings

        GUILayout.BeginHorizontal();


        using (new EditorGUILayout.VerticalScope("box", GUILayout.Width(200), GUILayout.Height(200)))
        {
            LabelField("Android Settings");
            HeaderField("Add optional permissions",
                "https://wiki.appodeal.com/en/unity/get-started#UnitySDK.GetStarted-Configure-AndroidManifest.xml");

            AppodealSettings.Instance.AccessCoarseLocationPermission = KeyRow("ACCESS_COARSE_LOCATION",
                AppodealSettings.Instance.AccessCoarseLocationPermission);
            AppodealSettings.Instance.AccessFineLocationPermission = KeyRow("ACCESS_FINE_LOCATION",
                AppodealSettings.Instance.AccessFineLocationPermission);
            AppodealSettings.Instance.WriteExternalStoragePermission = KeyRow("WRITE_EXTERNAL_STORAGE",
                AppodealSettings.Instance.WriteExternalStoragePermission);
            AppodealSettings.Instance.AccessWifiStatePermission = KeyRow("ACCESS_WIFI_STATE",
                AppodealSettings.Instance.AccessWifiStatePermission);
            AppodealSettings.Instance.VibratePermission =
                KeyRow("VIBRATE", AppodealSettings.Instance.VibratePermission);

            GUILayout.Space(10);
            if (GUILayout.Button("Multidex", new GUIStyle(EditorStyles.label)
            {
                fontSize = 12,
                fontStyle = FontStyle.Bold,
                fixedHeight = 18
            }, GUILayout.Width(100)))
            {
                Application.OpenURL("https://developer.android.com/studio/build/multidex");
            }

            AppodealSettings.Instance.AndroidMultidex =
                KeyRow("Enable multidex", AppodealSettings.Instance.AndroidMultidex);
            GUILayout.Space(12);
        }

        #endregion

        #region iOS Settings

        using (new EditorGUILayout.VerticalScope("box", GUILayout.Width(200), GUILayout.Height(200)))
        {
            LabelField("iOS Settings");
            HeaderField("Add keys to info.plist",
                "https://wiki.appodeal.com/en/unity/get-started#UnitySDK.GetStarted-2.2iOSconfiguration");
            GUILayout.Space(10);

            AppodealSettings.Instance.NSUserTrackingUsageDescription = KeyRow("NSUserTrackingUsageDescription",
                AppodealSettings.Instance.NSUserTrackingUsageDescription);
            AppodealSettings.Instance.NSLocationWhenInUseUsageDescription = KeyRow(
                "NSLocationWhenInUseUsageDescription",
                AppodealSettings.Instance.NSLocationWhenInUseUsageDescription);
            AppodealSettings.Instance.NSCalendarsUsageDescription = KeyRow("NSCalendarsUsageDescription",
                AppodealSettings.Instance.NSCalendarsUsageDescription);
            AppodealSettings.Instance.NSAppTransportSecurity = KeyRow("NSAppTransportSecurity",
                AppodealSettings.Instance.NSAppTransportSecurity);

            GUILayout.Space(25);
            if (GUILayout.Button("SKAdNetwork", new GUIStyle(EditorStyles.label)
            {
                fontSize = 12,
                fontStyle = FontStyle.Bold,
                fixedHeight = 18
            }, GUILayout.ExpandWidth(true)))
            {
                Application.OpenURL("https://developer.apple.com/documentation/storekit/skadnetwork");
            }


            AppodealSettings.Instance.IOSSkAdNetworkItems =
                KeyRow("Add SKAdNetworkItems", AppodealSettings.Instance.IOSSkAdNetworkItems);

            if (AppodealSettings.Instance.IOSSkAdNetworkItemsList != null &&
                AppodealSettings.Instance.IOSSkAdNetworkItemsList.Count > 0)
            {
                AppodealSettings.Instance.IOSSkAdNetworkItemsList = null;
                AppodealSettings.Instance.IOSSkAdNetworkItemsList = SKAdNetworkIdentifiers;
            }
            else
            {
                AppodealSettings.Instance.IOSSkAdNetworkItemsList = SKAdNetworkIdentifiers;
            }

            GUILayout.Space(10);
        }

        GUILayout.EndHorizontal();

        #endregion

        AppodealSettings.Instance.SaveAsync();
    }

    private static void LabelField(string label)
    {
        EditorGUILayout.LabelField(label, new GUIStyle(EditorStyles.label)
            {
                fontSize = 15,
                fontStyle = FontStyle.Bold
            },
            GUILayout.Height(20), GUILayout.Width(311));
        GUILayout.Space(2);
    }

    private static void HeaderField(string header, string url)
    {
        if (GUILayout.Button(header, new GUIStyle(EditorStyles.label)
        {
            fontSize = 12,
            fontStyle = FontStyle.Bold,
            fixedHeight = 18
        }, GUILayout.Width(200)))
        {
            Application.OpenURL(url);
        }

        GUILayout.Space(2);
    }

    private static string AdmobAppIdPlatformRow(string fieldTitle, string text, GUILayoutOption labelWidth,
        GUILayoutOption textFieldWidthOption = null)
    {
        GUILayout.BeginHorizontal();
        EditorGUILayout.LabelField(new GUIContent(fieldTitle), labelWidth);
        text = textFieldWidthOption == null
            ? GUILayout.TextField(text)
            : GUILayout.TextField(text, textFieldWidthOption);
        GUILayout.EndHorizontal();
        return text;
    }

    private static bool KeyRow(string fieldTitle, bool value)
    {
        GUILayout.Space(5);
        var originalValue = EditorGUIUtility.labelWidth;
        EditorGUIUtility.labelWidth = 235;
        value = EditorGUILayout.Toggle(fieldTitle, value);
        EditorGUIUtility.labelWidth = originalValue;
        return value;
    }

    [Serializable]
    public class SkaNetworkItem
    {
        public string name;
        public long id;
        public string[] ids;
        public string compatible_version;
    }
}