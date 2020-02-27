#if UNITY_2018_1_OR_NEWER
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Net;
using System.Text;
using System.Text.RegularExpressions;
using System.Xml;
using marijnz.EditorCoroutines;
using UnityEditor;
using UnityEngine;
using UnityEngine.Networking;
using static marijnz.EditorCoroutines.EditorCoroutines;


namespace Appodeal.Editor.AppodealManager
{
    interface IAppodealSdkManager
    {
        void CancelOperation();
        void SdkHeaders();
        void AdapterInfoRow(AdapterInfo adapter, GUIStyle guiStyle, bool isCore);
        void UpdateInternalConfig(string previous, string update, Action action, Platform platform);
        void PluginInfoRow(string package, string version, GUIStyle style, Action action, bool isPlugin);
        IEnumerator GetAppodealSdkVersions(bool isCoreUpdate);

        void Compare(Platform platform, Dictionary<string, AdapterInfo> intDict,
            Dictionary<string, AdapterInfo> outDict,
            Dictionary<string, AdapterInfo> current);

        void CompareCore(Platform platform, AdapterInfo intCore, AdapterInfo outCore, AdapterInfo curCore);

        void SetAdaptersInfo(AdapterInfo[] adapterInfos, Platform platform);

        AdapterInfo SetAdapterInformation(Platform platform, string adapterName, string adapterPrettyName,
            string adapterVersion, Action action, bool isCore);

        AdapterInfo SetAdapterInformation(Platform platform, string adapterName, string adapterPrettyName,
            string adapterUpdate,
            string adapterVersion, string configAdapter, Action action, bool isCore);

        void SetPluginInfo(PluginInfo pInfo);

        IEnumerator DownloadUnityPlugin();

        void ReadAndroidDependecies();

        void ReadIosDependencies();
        void UpdateWindow();

        void ShowUpdateDialog(string internalIntegration, string integration, Action action, Platform platform);
    }

    public class AppodealSDKManager : EditorWindow, IAppodealSdkManager
    {
        #region Constants

        private const string AppodealSdkManager = "Appodeal SDK Manager";
        private const string AppodealUnityPlugin = "Appodeal Unity Plugin";
        private const string AppodealIosAdapters = "Appodeal iOS Adapters";
        private const string AppodealIosCore = "Appodeal Core iOS ";
        private const string AppodealAndroidCore = "Appodeal Core Android ";
        private const string AppodealAndroidAdapters = "Appodeal Android Adapters";
        private const string AppodealDependencies = "Assets/Appodeal/Editor/AppodealDependencies.xml";
        private const string PackageHeader = "Package";
        private const string VersionHeader = "Version";
        private const string ActionHeader = "Action";
        private const string DownloadDir = "Assets/Appodeal";
        private const string BoxStyle = "box";
        private const string UpdateField = "Update";
        private const string ImportField = "Import";
        private const string PluginStageUrl = "https://mw-backend.appodeal.com/v1/unity/last";
        private const string AdaptersIosUrl = "https://mw-backend.appodeal.com/v1/adapters/ios/";
        private const string AdaptersAndroidUrl = "https://mw-backend.appodeal.com/v1/adapters/android/";
        private const string AdapterCoreIosUrl = "https://mw-backend.appodeal.com/v1/adapters/ios/ver";
        private const string AdapterCoreAndroidUrl = "https://mw-backend.appodeal.com/v1/adapters/android/ver";
        private const string LogDownloadAdapters = "Downloading adapters versions ...";
        public const string ReplaceDependencyValue = "com.appodeal.ads.sdk.networks:";
        public const string ReplaceDependencyCoreValue = "com.appodeal.ads.sdk:";

        #endregion

        #region GUIStyles

        private GUIStyle headerStyle;
        private GUIStyle labelStyle;
        private GUIStyle labelStyleArea;
        private GUIStyle labelStyleLink;
        private GUIStyle packageInfoStyle;
        private readonly GUILayoutOption btnFieldWidth = GUILayout.Width(60);

        #endregion

        #region Variables

        private EditorCoroutine coroutine;
        private PluginInfo pluginInfo;
        private AdapterInfo appodealCoreIos;
        private AdapterInfo appodealCoreAndroid;
        private AdapterInfo internalCoreIos;
        private AdapterInfo internalCoreAndroid;
        private AdapterInfo currentCoreIos;
        private AdapterInfo currentCoreAndroid;
        private Vector2 scrollPos;
        private float progress;
        private WebClient downloader;

        #endregion

        #region Dictionaries

        private Dictionary<string, AdapterInfo> internaliOSAdapters = new Dictionary<string, AdapterInfo>();
        private Dictionary<string, AdapterInfo> appodealiOSAdapters = new Dictionary<string, AdapterInfo>();
        private Dictionary<string, AdapterInfo> currentiOSAdapters = new Dictionary<string, AdapterInfo>();

        private Dictionary<string, AdapterInfo> internalAndroidAdapters = new Dictionary<string, AdapterInfo>();
        private Dictionary<string, AdapterInfo> appodealAndroidAdapters = new Dictionary<string, AdapterInfo>();
        private Dictionary<string, AdapterInfo> currentAndroidAdapters = new Dictionary<string, AdapterInfo>();

        #endregion

        public static void ShowSdkManager()
        {
            GetWindow(typeof(AppodealSDKManager), true, AppodealSdkManager);
        }

        private void Awake()
        {
            labelStyle = new GUIStyle(EditorStyles.label)
            {
                fontSize = 14,
                fontStyle = FontStyle.Bold
            };
            labelStyleArea = new GUIStyle(EditorStyles.label)
            {
                wordWrap = true
            };
            labelStyleLink = new GUIStyle(EditorStyles.label)
            {
                normal = {textColor = Color.blue},
                active = {textColor = Color.white},
            };
            headerStyle = new GUIStyle(EditorStyles.label)
            {
                fontSize = 12,
                fontStyle = FontStyle.Bold,
                fixedHeight = 18
            };
            packageInfoStyle = new GUIStyle(EditorStyles.label)
            {
                fontSize = 12,
                fontStyle = FontStyle.Normal,
                fixedHeight = 18
            };
            ((IAppodealSdkManager) this).CancelOperation();
        }

        [Obsolete]
        private void OnEnable()
        {
            coroutine = this.StartCoroutine(((IAppodealSdkManager) this).GetAppodealSdkVersions(false));
        }

        private void OnDisable()
        {
            ((IAppodealSdkManager) this).CancelOperation();
        }

        void IAppodealSdkManager.CancelOperation()
        {
            if (downloader != null)
            {
                downloader.CancelAsync();
                return;
            }

            if (coroutine != null)
                this.StopCoroutine(coroutine.routine);
            if (progress > 0)
                EditorUtility.ClearProgressBar();
            coroutine = null;
            downloader = null;
            progress = 0;
        }

        private void OnGUI()
        {
            scrollPos = EditorGUILayout.BeginScrollView(scrollPos,
                false,
                false);

            GUILayout.BeginVertical();
            GUILayout.Space(5);
            EditorGUILayout.LabelField(AppodealUnityPlugin, labelStyle, GUILayout.Height(20));

            if (pluginInfo != null)
            {
                using (new EditorGUILayout.VerticalScope(BoxStyle))
                {
                    ((IAppodealSdkManager) this).SdkHeaders();
                    ((IAppodealSdkManager) this).PluginInfoRow(pluginInfo.name, pluginInfo.version,
                        packageInfoStyle, pluginInfo.action, true);
                }
            }

            GUILayout.Space(5);
            EditorGUILayout.LabelField(AppodealIosCore, labelStyle, GUILayout.Height(20));


            if (currentCoreIos != null)
            {
                using (new EditorGUILayout.VerticalScope(BoxStyle))
                {
                    ((IAppodealSdkManager) this).SdkHeaders();
                    ((IAppodealSdkManager) this).AdapterInfoRow(currentCoreIos, packageInfoStyle, true);
                }
            }

            GUILayout.Space(5);
            EditorGUILayout.LabelField(AppodealAndroidCore, labelStyle, GUILayout.Height(20));
            if (currentCoreAndroid != null)
            {
                using (new EditorGUILayout.VerticalScope(BoxStyle))
                {
                    ((IAppodealSdkManager) this).SdkHeaders();
                    ((IAppodealSdkManager) this).AdapterInfoRow(currentCoreAndroid, packageInfoStyle, true);
                }
            }

            GUILayout.Space(5);
            EditorGUILayout.LabelField(AppodealIosAdapters, labelStyle, GUILayout.Height(20));
            if (currentiOSAdapters.Count > 0)
            {
                using (new EditorGUILayout.VerticalScope(BoxStyle))
                {
                    ((IAppodealSdkManager) this).SdkHeaders();
                    foreach (var appodealSdkAdapterInfo in currentiOSAdapters.Values)
                    {
                        ((IAppodealSdkManager) this).AdapterInfoRow(appodealSdkAdapterInfo, packageInfoStyle,
                            false);
                    }
                }
            }

            GUILayout.Space(5);
            EditorGUILayout.LabelField(AppodealAndroidAdapters, labelStyle, GUILayout.Height(20));
            if (currentAndroidAdapters.Count > 0)
            {
                using (new EditorGUILayout.VerticalScope(BoxStyle))
                {
                    ((IAppodealSdkManager) this).SdkHeaders();
                    foreach (var appodealSdkAdapterInfo in currentAndroidAdapters.Values)
                    {
                        ((IAppodealSdkManager) this).AdapterInfoRow(appodealSdkAdapterInfo, packageInfoStyle,
                            false);
                    }
                }
            }

            GUILayout.Space(5);
            GUILayout.EndVertical();
            EditorGUILayout.EndScrollView();
        }

        void IAppodealSdkManager.SdkHeaders()
        {
            GUILayout.Space(5);
            using (new EditorGUILayout.HorizontalScope(GUILayout.ExpandWidth(false)))
            {
                GUILayout.Space(10);
                EditorGUILayout.LabelField(PackageHeader, headerStyle);
                GUILayout.Button(VersionHeader, headerStyle);
                GUILayout.Space(14);
                GUILayout.Button(ActionHeader, headerStyle, btnFieldWidth);
                GUILayout.Button(string.Empty, headerStyle, GUILayout.Width(1));
                GUILayout.Space(1);
            }

            GUILayout.Space(5);
        }

        void IAppodealSdkManager.AdapterInfoRow(AdapterInfo adapter, GUIStyle style, bool isCore)
        {
            using (new EditorGUILayout.HorizontalScope(GUILayout.ExpandWidth(false)))
            {
                GUILayout.Space(10);
                EditorGUILayout.LabelField(adapter.pretty_name, style);
                GUILayout.Button(adapter.version.adapter, style);
                GUILayout.Space(6);
                GUILayout.Button(string.Empty, style, GUILayout.Width(1));
                switch (adapter.action)
                {
                    case Action.Update:
                        if (GUILayout.Button(new GUIContent {text = UpdateField}, btnFieldWidth))
                        {
                            if (isCore)
                            {
                                switch (adapter.platform)
                                {
                                    case Platform.Android:
                                        ((IAppodealSdkManager) this).ShowUpdateDialog(adapter.internalIntegration.code,
                                            adapter.integration.code,
                                            adapter.action, adapter.platform);
                                        break;
                                    case Platform.Ios:
                                        ((IAppodealSdkManager) this).ShowUpdateDialog(adapter.internalIntegration.code,
                                            adapter.integration.code,
                                            adapter.action, adapter.platform);
                                        break;
                                }
                            }
                            else
                            {
                                ((IAppodealSdkManager) this).UpdateInternalConfig(adapter.internalIntegration.code,
                                    adapter.integration.code,
                                    adapter.action, adapter.platform);
                                ((IAppodealSdkManager) this).UpdateWindow();
                            }
                        }

                        break;
                    case Action.NoAction:
                        GUI.enabled = false;
                        GUILayout.Button(new GUIContent {text = UpdateField}, btnFieldWidth);
                        GUI.enabled = true;
                        break;
                    case Action.Import:
                        if (GUILayout.Button(new GUIContent {text = ImportField}, btnFieldWidth))
                        {
                            ((IAppodealSdkManager) this).UpdateInternalConfig(string.Empty,
                                adapter.integration.code,
                                Action.Import,
                                adapter.platform);
                            ((IAppodealSdkManager) this).UpdateWindow();
                        }

                        break;
                }

                GUILayout.Space(1);
                GUILayout.Button(string.Empty, headerStyle, GUILayout.Width(8));
            }

            GUILayout.Space(4);
        }

        void IAppodealSdkManager.UpdateInternalConfig(string previous, string update, Action action, Platform platform)
        {
            switch (action)
            {
                case Action.Update:
                    File.WriteAllText(AppodealDependencies,
                        Regex.Replace(File.ReadAllText(AppodealDependencies),
                            previous,
                            update));
                    break;
                case Action.Import:
                    switch (platform)
                    {
                        case Platform.Android:
                            File.WriteAllText(AppodealDependencies,
                                Regex.Replace(File.ReadAllText(AppodealDependencies),
                                    "<androidPackages>",
                                    "        <androidPackages>" + "\n" + update));

                            break;
                        case Platform.Ios:
                            File.WriteAllText(AppodealDependencies,
                                Regex.Replace(File.ReadAllText(AppodealDependencies),
                                    "<iosPods>",
                                    "        <iosPods>" + "\n" + update));

                            break;
                    }

                    break;
            }
        }

        void IAppodealSdkManager.PluginInfoRow(string package, string version, GUIStyle style, Action action,
            bool isPlugin)
        {
            using (new EditorGUILayout.HorizontalScope(GUILayout.ExpandWidth(false)))
            {
                GUILayout.Space(10);
                EditorGUILayout.LabelField(package, style);
                GUILayout.Button(version, style);
                GUILayout.Space(6);
                GUILayout.Button(String.Empty, style, GUILayout.Width(1));
                switch (action)
                {
                    case Action.Update:
                        if (GUILayout.Button(new GUIContent {text = UpdateField}, btnFieldWidth))
                        {
                            if (isPlugin)
                            {
                                if (!string.IsNullOrEmpty(pluginInfo.source))
                                {
                                    this.StartCoroutine(((IAppodealSdkManager) this).DownloadUnityPlugin());
                                }
                            }
                        }

                        break;
                    case Action.NoAction:
                        GUI.enabled = false;
                        GUILayout.Button(new GUIContent {text = UpdateField}, btnFieldWidth);
                        GUI.enabled = true;
                        break;
                }

                GUILayout.Space(1);
                GUILayout.Button(string.Empty, headerStyle, GUILayout.Width(8));
            }

            GUILayout.Space(4);
        }

        IEnumerator IAppodealSdkManager.GetAppodealSdkVersions(bool isCoreUpdate)
        {
            yield return null;

            progress = 0.01f;

            if (!isCoreUpdate)
            {
                Debug.Log("Downloading plugin versions ...");
                ((IAppodealSdkManager) this).ReadIosDependencies();
                ((IAppodealSdkManager) this).ReadAndroidDependecies();
                var pInfo = new WWW(PluginStageUrl);
                yield return pInfo;

                if (!string.IsNullOrEmpty(pInfo.text))
                {
                    pluginInfo = (PluginInfo) JsonUtility.FromJson(pInfo.text, typeof(PluginInfo));

                    if (pluginInfo != null)
                    {
                        ((IAppodealSdkManager) this).SetPluginInfo(pluginInfo);
                    }
                }
                else
                {
                    Debug.LogError("Unable to retrieve SDK version manifest");
                }

                Debug.Log(LogDownloadAdapters);
                var iOSCoreInfo = new WWW(AdapterCoreIosUrl);
                var androidCoreInfo = new WWW(AdapterCoreAndroidUrl);

                yield return iOSCoreInfo;
                yield return androidCoreInfo;

                if (!string.IsNullOrEmpty(iOSCoreInfo.text) && !string.IsNullOrEmpty(iOSCoreInfo.text))
                {
                    appodealCoreIos = ((IAppodealSdkManager) this).SetAdapterInformation(Platform.Ios, "Appodeal",
                        "Appodeal",
                        JsonHelper.FromJson<string>(JsonHelper.fixJson(iOSCoreInfo.text)).Last(), Action.Update, true);

                    appodealCoreAndroid = ((IAppodealSdkManager) this).SetAdapterInformation(Platform.Android, "core",
                        "Appodeal",
                        JsonHelper.FromJson<string>(JsonHelper.fixJson(androidCoreInfo.text)).Last(), Action.Update,
                        true);
                }


                if (appodealCoreIos != null && !string.IsNullOrEmpty(appodealCoreIos.version.adapter))
                {
                    var iosAdaptersInfo = new WWW(AdaptersIosUrl + appodealCoreIos.version.adapter);
                    var androidAdaptersInfo = new WWW(AdaptersAndroidUrl + appodealCoreAndroid.version.adapter);

                    yield return iosAdaptersInfo;
                    yield return androidAdaptersInfo;

                    if (!string.IsNullOrEmpty(iosAdaptersInfo.text) && !string.IsNullOrEmpty(androidAdaptersInfo.text))
                    {
                        if (JsonHelper.FromJson<AdapterInfo>(JsonHelper.fixJson(iosAdaptersInfo.text)) != null &&
                            JsonHelper.FromJson<AdapterInfo>(JsonHelper.fixJson(androidAdaptersInfo.text)) != null)
                        {
                            appodealiOSAdapters.Clear();
                            appodealAndroidAdapters.Clear();
                            ((IAppodealSdkManager) this).SetAdaptersInfo
                            (JsonHelper.FromJson<AdapterInfo>(JsonHelper.fixJson(iosAdaptersInfo.text)),
                                Platform.Ios);
                            ((IAppodealSdkManager) this).SetAdaptersInfo(
                                JsonHelper.FromJson<AdapterInfo>(JsonHelper.fixJson(androidAdaptersInfo.text)),
                                Platform.Android);
                        }
                    }
                    else
                    {
                        Debug.LogError("Unable to retrieve SDK version manifest");
                    }
                }

                coroutine = null;
            }
        }

        void IAppodealSdkManager.ShowUpdateDialog(string internalIntegration,
            string integration, Action action, Platform platform)
        {
            var option = EditorUtility.DisplayDialog("Unsaved Changes",
                "If you will update core, all adapters this platform will be updated automatically. " +
                "Do you want to update core?",
                "Ok",
                "Cancel");

            if (option)
            {
                switch (platform)
                {
                    case Platform.Ios:
                        ((IAppodealSdkManager) this).UpdateInternalConfig(internalIntegration,
                            integration,
                            action, platform);
                        foreach (var key in appodealiOSAdapters.Keys)
                        {
                            if (internaliOSAdapters.ContainsKey(key))
                            {
                                if (appodealiOSAdapters.TryGetValue(key, out AdapterInfo outAdapterInfo) &&
                                    internaliOSAdapters.TryGetValue(key, out AdapterInfo intAdapterInfo))
                                {
                                    ((IAppodealSdkManager) this).UpdateInternalConfig(intAdapterInfo.integration.code,
                                        outAdapterInfo.integration.code,
                                        Action.Update, outAdapterInfo.platform);
                                }
                            }
                        }

                        ((IAppodealSdkManager) this).UpdateWindow();
                        break;
                    case Platform.Android:
                        ((IAppodealSdkManager) this).UpdateInternalConfig(internalIntegration,
                            integration,
                            action, platform);

                        foreach (var key in appodealAndroidAdapters.Keys)
                        {
                            if (internalAndroidAdapters.ContainsKey(key))
                            {
                                if (appodealAndroidAdapters.TryGetValue(key, out AdapterInfo outAdapterInfo) &&
                                    internalAndroidAdapters.TryGetValue(key, out AdapterInfo intAdapterInfo))
                                {
                                    ((IAppodealSdkManager) this).UpdateInternalConfig(intAdapterInfo.integration.code,
                                        outAdapterInfo.integration.code,
                                        Action.Update, platform);
                                }
                                else
                                {
                                    Debug.Log(key);
                                }
                            }
                        }

                        ((IAppodealSdkManager) this).UpdateWindow();
                        break;
                }
            }
        }

        void IAppodealSdkManager.CompareCore(Platform platform, AdapterInfo intCore, AdapterInfo outCore,
            AdapterInfo curCore)
        {
            switch (platform)
            {
                case Platform.Android:
                    switch (AppodealUnityUtils.CompareVersion(intCore.version.adapter, outCore.version.adapter))
                    {
                        case 0:
                            currentCoreAndroid = intCore;
                            break;
                        case 1:
                            currentCoreAndroid = intCore;
                            break;
                        case -1:
                            currentCoreAndroid = ((IAppodealSdkManager) this).SetAdapterInformation(platform,
                                outCore.name,
                                outCore.pretty_name,
                                intCore.version.adapter, outCore.version.adapter,
                                intCore.version.adapter,
                                Action.Update, true);
                            break;
                    }

                    break;
                case Platform.Ios:
                    switch (AppodealUnityUtils.CompareVersion(intCore.version.adapter, outCore.version.adapter))
                    {
                        case 0:
                            currentCoreIos = intCore;
                            break;
                        case 1:
                            currentCoreIos = intCore;
                            break;
                        case -1:
                            currentCoreIos = ((IAppodealSdkManager) this).SetAdapterInformation(platform, outCore.name,
                                outCore.pretty_name,
                                intCore.version.adapter, outCore.version.adapter,
                                intCore.version.adapter,
                                Action.Update, true);
                            break;
                    }

                    break;
            }
        }

        void IAppodealSdkManager.Compare(Platform platform, Dictionary<string, AdapterInfo> intDict,
            Dictionary<string, AdapterInfo> outDict,
            Dictionary<string, AdapterInfo> current)
        {
            foreach (var key in outDict.Keys)
            {
                if (intDict.ContainsKey(key))
                {
                    if (outDict.TryGetValue(key, out AdapterInfo outAdapterInfo) &&
                        intDict.TryGetValue(key, out AdapterInfo intAdapterInfo))
                    {
                        switch (AppodealUnityUtils.CompareVersion(intAdapterInfo.version.adapter,
                            outAdapterInfo.version.adapter))
                        {
                            case 1:
                                current.Add(intAdapterInfo.name, intAdapterInfo);
                                break;
                            case 0:
                                current.Add(intAdapterInfo.name, intAdapterInfo);
                                break;
                            case -1:
                                current.Add(outAdapterInfo.name,
                                    ((IAppodealSdkManager) this).SetAdapterInformation(platform, outAdapterInfo.name,
                                        outAdapterInfo.pretty_name,
                                        intAdapterInfo.version.adapter, outAdapterInfo.version.adapter,
                                        intAdapterInfo.version.adapter,
                                        Action.Update, false));
                                break;
                        }
                    }
                    else
                    {
                        Debug.Log("Can't TryGetValue :" + key);
                    }
                }
                else
                {
                    if (outDict.TryGetValue(key, out AdapterInfo outAdapterInfo))
                    {
                        current.Add(outAdapterInfo.name, outAdapterInfo);
                    }
                }
            }
        }

        void IAppodealSdkManager.SetAdaptersInfo(AdapterInfo[] adapterInfos, Platform platform)
        {
            if (appodealCoreAndroid != null && internalCoreAndroid != null && appodealCoreIos != null &&
                internalCoreIos != null)
            {
                ((IAppodealSdkManager) this).CompareCore(Platform.Android, internalCoreAndroid, appodealCoreAndroid,
                    currentCoreAndroid);
                ((IAppodealSdkManager) this).CompareCore(Platform.Ios, internalCoreIos, appodealCoreIos,
                    currentCoreIos);
            }

            foreach (var adapterInfo in adapterInfos)
            {
                switch (platform)
                {
                    case Platform.Ios:
                        appodealiOSAdapters.Add(
                            !string.IsNullOrEmpty(adapterInfo.name) ? adapterInfo.name : string.Empty,
                            ((IAppodealSdkManager) this).SetAdapterInformation(platform, adapterInfo.name,
                                adapterInfo.pretty_name,
                                adapterInfo.version.adapter, Action.Import, false));
                        break;
                    case Platform.Android:
                        appodealAndroidAdapters.Add(
                            !string.IsNullOrEmpty(adapterInfo.name) ? adapterInfo.name : string.Empty,
                            ((IAppodealSdkManager) this).SetAdapterInformation(Platform.Android, adapterInfo.name,
                                adapterInfo.pretty_name,
                                adapterInfo.version.adapter, Action.Import, false));
                        break;
                }
            }

            if (internaliOSAdapters.Count > 0 && appodealiOSAdapters.Count > 0
                                              && internalAndroidAdapters.Count > 0 && appodealAndroidAdapters.Count > 0)
            {
                ((IAppodealSdkManager) this).Compare(Platform.Ios, internaliOSAdapters, appodealiOSAdapters,
                    currentiOSAdapters);
                ((IAppodealSdkManager) this).Compare(Platform.Android, internalAndroidAdapters, appodealAndroidAdapters,
                    currentAndroidAdapters);
            }
        }

        AdapterInfo IAppodealSdkManager.SetAdapterInformation(Platform platform, string adapterName,
            string adapterPrettyName,
            string adapterVersion, Action action, bool isCore)
        {
            return new AdapterInfo(
                platform,
                !string.IsNullOrEmpty(adapterName) ? adapterName : string.Empty,
                !string.IsNullOrEmpty(adapterPrettyName)
                    ? adapterPrettyName
                    : string.Empty,
                !string.IsNullOrEmpty(adapterVersion)
                    ? new AdapterInfo.Version(adapterVersion)
                    : new AdapterInfo.Version(string.Empty),
                !string.IsNullOrEmpty(adapterName) &&
                !string.IsNullOrEmpty(adapterVersion)
                    ? new AdapterInfo.Integration(AppodealUnityUtils.GetIntegrationDependency(platform,
                        adapterName,
                        adapterVersion, isCore))
                    : new AdapterInfo.Integration(string.Empty),
                action);
        }

        AdapterInfo IAppodealSdkManager.SetAdapterInformation(Platform platform, string adapterName,
            string adapterPrettyName,
            string adapterUpdate,
            string adapterVersion,
            string configAdapter,
            Action action,
            bool isCore)
        {
            return new AdapterInfo(
                platform,
                !string.IsNullOrEmpty(adapterName) ? adapterName : string.Empty,
                !string.IsNullOrEmpty(adapterPrettyName)
                    ? adapterPrettyName
                    : string.Empty,
                !string.IsNullOrEmpty(adapterUpdate)
                    ? new AdapterInfo.Version(adapterUpdate)
                    : new AdapterInfo.Version(string.Empty),
                !string.IsNullOrEmpty(adapterName) &&
                !string.IsNullOrEmpty(adapterVersion)
                    ? new AdapterInfo.Integration(AppodealUnityUtils.GetIntegrationDependency(platform,
                        adapterName,
                        adapterVersion, isCore))
                    : new AdapterInfo.Integration(string.Empty),
                !string.IsNullOrEmpty(configAdapter)
                    ? new AdapterInfo.Integration(AppodealUnityUtils.GetIntegrationDependency(platform,
                        adapterName,
                        configAdapter, isCore))
                    : new AdapterInfo.Integration(string.Empty),
                action);
        }

        void IAppodealSdkManager.SetPluginInfo(PluginInfo pInfo)
        {
            int compareResult = !string.IsNullOrEmpty(pInfo.version) &&
                                !string.IsNullOrEmpty(AppodealAds.Unity.Api.Appodeal.APPODEAL_PLUGIN_VERSION)
                ? AppodealUnityUtils.CompareVersion(pInfo.version,
                    AppodealAds.Unity.Api.Appodeal.APPODEAL_PLUGIN_VERSION)
                : 3;
            pInfo.name = !string.IsNullOrEmpty(pInfo.name)
                ? AppodealUnityPlugin
                : pInfo.name;
            pInfo.version = compareResult == 1 && !string.IsNullOrEmpty(pInfo.version)
                ? pInfo.version
                : AppodealAds.Unity.Api.Appodeal.APPODEAL_PLUGIN_VERSION;
            pInfo.action = compareResult != 0 && compareResult != -1 && compareResult != 3
                ? Action.Update
                : Action.NoAction;
            pInfo.source = !string.IsNullOrEmpty(pInfo.source)
                ? pInfo.source
                : string.Empty;
        }

        IEnumerator IAppodealSdkManager.DownloadUnityPlugin()
        {
            yield return null;
            bool ended = false;
            bool cancelled = false;
            Exception error = null;
            int oldPercentage = 0, newPercentage = 0;
            var path = Path.Combine(DownloadDir, AppodealUnityPlugin);
            progress = 0.01f;
            downloader = new WebClient();
            downloader.Encoding = Encoding.UTF8;
            downloader.DownloadProgressChanged += (sender, args) => { newPercentage = args.ProgressPercentage; };
            downloader.DownloadFileCompleted += (sender, args) =>
            {
                ended = true;
                cancelled = args.Cancelled;
                error = args.Error;
            };

            if (!string.IsNullOrEmpty(pluginInfo.source))
            {
                Debug.LogFormat("Downloading {0} to {1}", pluginInfo.source, path);
                Debug.Log(pluginInfo.source);
                downloader.DownloadFileAsync(new Uri(pluginInfo.source), path);
            }

            while (!ended)
            {
                Repaint();
                var percentage = oldPercentage;
                yield return new WaitUntil(() => ended || newPercentage > percentage);
                oldPercentage = newPercentage;
                progress = oldPercentage / 100.0f;
            }

            if (error != null)
            {
                Debug.LogError(error);
                cancelled = true;
            }

            downloader = null;
            coroutine = null;
            progress = 0;
            EditorUtility.ClearProgressBar();
            if (!cancelled)
            {
                AssetDatabase.ImportPackage(path, true);
            }
            else
            {
                Debug.Log("Download terminated.");
            }
        }

        void IAppodealSdkManager.ReadAndroidDependecies()
        {
            Debug.Log(string.Format("Reading iOS dependency XML file {0}", AppodealDependencies));
            List<string> sources = new List<string>();
            string specName = null;

            XmlUtilities.ParseXmlTextFileElements(AppodealDependencies,
                (reader, elementName, isStart, parentElementName, elementNameStack) =>
                {
                    if (elementName == "dependencies" &&
                        parentElementName == "" || elementName == "androidPackages" &&
                        (parentElementName == "dependencies" || parentElementName == ""))
                        return true;

                    if (elementName == "androidPackage" && parentElementName == "androidPackages")
                    {
                        if (isStart)
                        {
                            specName = reader.GetAttribute("spec");
                            sources = new List<string>();
                            if (specName == null)
                            {
                                Debug.Log(
                                    $"Pod name not specified while reading {AppodealDependencies}:{reader.LineNumber}\n");
                                return false;
                            }

                            if (specName.Contains("com.appodeal.ads.sdk:core:"))
                            {
                                internalCoreAndroid = new AdapterInfo(Platform.Android,
                                    "core",
                                    "Appodeal",
                                    new AdapterInfo.Version(AppodealUnityUtils.GetDependencyCoreVersion(specName,
                                        "core")),
                                    new AdapterInfo.Integration(
                                        AppodealUnityUtils.GetIntegrationDependency(Platform.Android,
                                            AppodealUnityUtils.GetDependencyName(specName),
                                            AppodealUnityUtils.GetDependencyVersion(specName,
                                                AppodealUnityUtils.GetPrettyName(specName)), true)),
                                    Action.NoAction);
                            }
                        }
                        else
                        {
                            if (specName != null)
                            {
                                internalAndroidAdapters.Add(AppodealUnityUtils.GetDependencyName(specName),
                                    new AdapterInfo(Platform.Android,
                                        AppodealUnityUtils.GetDependencyName(specName),
                                        AppodealUnityUtils.GetDependencyPrettyName(specName),
                                        new AdapterInfo.Version(AppodealUnityUtils.GetDependencyVersion(specName,
                                            AppodealUnityUtils.GetDependencyName(specName))),
                                        new AdapterInfo.Integration(
                                            AppodealUnityUtils.GetIntegrationDependency(Platform.Android,
                                                AppodealUnityUtils.GetDependencyName(specName),
                                                AppodealUnityUtils.GetDependencyVersion(specName,
                                                    AppodealUnityUtils.GetDependencyName(specName)), false)),
                                        Action.NoAction));
                            }
                        }

                        return true;
                    }

                    if (elementName == "sources" && parentElementName == "androidPackage")
                        return true;
                    if (elementName == "sources" && parentElementName == "androidPackages")
                    {
                        if (isStart)
                        {
                            sources = new List<string>();
                        }
                        else
                        {
                            using (List<string>.Enumerator enumerator = sources.GetEnumerator())
                            {
                                while (enumerator.MoveNext())
                                {
                                    string current = enumerator.Current;
                                    Debug.Log(current);
                                }
                            }
                        }

                        return true;
                    }

                    if (elementName != "source" || parentElementName != "sources")
                        return false;
                    if (isStart && reader.Read() && reader.NodeType == XmlNodeType.Text)
                        sources.Add(reader.ReadContentAsString());
                    return true;
                });
        }

        void IAppodealSdkManager.ReadIosDependencies()
        {
            Debug.Log($"Reading iOS dependency XML file {AppodealDependencies}");
            var sources = new List<string>();
            string podName = null;
            string version = null;

            XmlUtilities.ParseXmlTextFileElements(AppodealDependencies,
                (reader, elementName, isStart, parentElementName, elementNameStack) =>
                {
                    if (elementName == "dependencies" &&
                        parentElementName == "" || elementName == "iosPods" &&
                        (parentElementName == "dependencies" || parentElementName == ""))
                        return true;

                    if (elementName == "iosPod" && parentElementName == "iosPods")
                    {
                        if (isStart)
                        {
                            podName = reader.GetAttribute("name");
                            version = reader.GetAttribute("version");
                            sources = new List<string>();
                            if (podName == null)
                            {
                                Debug.Log(
                                    $"Pod name not specified while reading {AppodealDependencies}:{reader.LineNumber}\n");
                                return false;
                            }
                        }
                        else
                        {
                            if (podName != null)
                            {
                                if (!podName.Equals("Appodeal"))
                                {
                                    internaliOSAdapters.Add(podName,
                                        new AdapterInfo(Platform.Ios, podName,
                                            AppodealUnityUtils.GetPrettyName(podName),
                                            new AdapterInfo.Version(version),
                                            new AdapterInfo.Integration(
                                                AppodealUnityUtils.GetIntegrationDependency(Platform.Ios, podName,
                                                    version, false)),
                                            Action.NoAction));
                                }
                                else
                                {
                                    internalCoreIos = new AdapterInfo(Platform.Ios, podName,
                                        AppodealUnityUtils.GetPrettyName(podName),
                                        new AdapterInfo.Version(version),
                                        new AdapterInfo.Integration(
                                            AppodealUnityUtils.GetIntegrationDependency(Platform.Ios, podName,
                                                version, true)),
                                        Action.NoAction);
                                }
                            }
                        }

                        return true;
                    }

                    if (elementName == "sources" && parentElementName == "iosPod")
                        return true;
                    if (elementName == "sources" && parentElementName == "iosPods")
                    {
                        if (isStart)
                        {
                            sources = new List<string>();
                        }
                        else
                        {
                            using (List<string>.Enumerator enumerator = sources.GetEnumerator())
                            {
                                while (enumerator.MoveNext())
                                {
                                    string current = enumerator.Current;
                                    Debug.Log(current);
                                }
                            }
                        }

                        return true;
                    }

                    if (!(elementName == "source") || !(parentElementName == "sources"))
                        return false;
                    if (isStart && reader.Read() && reader.NodeType == XmlNodeType.Text)
                        sources.Add(reader.ReadContentAsString());
                    return true;
                });
        }

        void IAppodealSdkManager.UpdateWindow()
        {
            GetWindow(typeof(AppodealSDKManager), true, AppodealSdkManager).Close();
            GetWindow(typeof(AppodealSDKManager), true, AppodealSdkManager);
        }
    }

    [Serializable]
    public class PluginInfo
    {
        public string source;
        public string name;
        public string version;
        public string updateUrl;
        public Action action;
    }

    [Serializable]
    public class AdapterInfo
    {
        public Platform platform;
        public string name;

        // ReSharper disable once InconsistentNaming
        public string pretty_name;
        public Version version;
        public Integration integration;
        public Integration internalIntegration;
        public Action action;

        public AdapterInfo(Platform platform, string name, string prettyName, Version version, Integration integration,
            Action action)
        {
            this.platform = platform;
            this.name = name;
            pretty_name = prettyName;
            this.version = version;
            this.integration = integration;
            this.action = action;
        }

        public AdapterInfo(Platform platform, string name, string prettyName, Version version, Integration integration,
            Integration internalIntegration, Action action)
        {
            this.platform = platform;
            this.name = name;
            pretty_name = prettyName;
            this.version = version;
            this.integration = integration;
            this.internalIntegration = internalIntegration;
            this.action = action;
        }

        [Serializable]
        public class Version
        {
            public Version(string adapter)
            {
                this.adapter = adapter;
            }

            public string adapter;
        }

        [Serializable]
        public class Integration
        {
            public Integration(string code)
            {
                this.code = code;
            }

            public string code;
        }
    }

    public enum Action
    {
        Update,
        Import,
        NoAction
    }

    public enum Platform
    {
        Android,
        Ios
    }
}
#endif