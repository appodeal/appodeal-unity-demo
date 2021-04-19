#if UNITY_2018_1_OR_NEWER
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using System.IO;
using System.Linq;
using System.Net;
using System.Text;
using System.Text.RegularExpressions;
using System.Xml;
using Appodeal.Editor.AppodealManager.Data;
using marijnz.EditorCoroutines;
using UnityEditor;
using UnityEngine;
using File = UnityEngine.Windows.File;
using UnityEngine.Networking;

#pragma warning disable 618

#pragma warning disable 612

namespace Appodeal.Editor.AppodealManager.AppodealDependencies
{
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    public enum PlatformSdk
    {
        Android,
        iOS
    }

    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "NotAccessedVariable")]
    [SuppressMessage("ReSharper", "CollectionNeverQueried.Local")]
    public class AppodealAdapterManager : EditorWindow
    {
        #region Dictionaries

        private Dictionary<string, NetworkDependency> internalDependencies =
            new Dictionary<string, NetworkDependency>();

        private Dictionary<string, NetworkDependency> latestDependencies =
            new Dictionary<string, NetworkDependency>();

        #endregion

        #region GUIStyles

        private GUIStyle labelStyle;
        private GUIStyle headerInfoStyle;
        private GUIStyle packageInfoStyle;
        private readonly GUILayoutOption btnFieldWidth = GUILayout.Width(60);

        #endregion

        private static EditorCoroutines.EditorCoroutine coroutine;
        private static EditorCoroutines.EditorCoroutine coroutinePB;
        private float progress;
        private float loading;
        private WebClient downloader;
        private Vector2 scrollPosition;
        private bool isPluginInfoReady;
        private AppodealUnityPlugin appodealUnityPlugin;

        public static void ShowSdkManager()
        {
            GetWindow(typeof(AppodealAdapterManager),
                true, AppodealDependencyUtils.AppodealSdkManager);
        }

        private void Awake()
        {
            labelStyle = new GUIStyle(EditorStyles.label)
            {
                fontSize = 15,
                fontStyle = FontStyle.Bold
            };
            packageInfoStyle = new GUIStyle(EditorStyles.label)
            {
                fontSize = 12,
                fontStyle = FontStyle.Normal,
                fixedHeight = 18
            };

            headerInfoStyle = new GUIStyle(EditorStyles.label)
            {
                fontSize = 13,
                fontStyle = FontStyle.Bold,
                fixedHeight = 18
            };

            Reset();
        }

        public void Reset()
        {
            internalDependencies =
                new Dictionary<string, NetworkDependency>();
            latestDependencies =
                new Dictionary<string, NetworkDependency>();

            if (downloader != null)
            {
                downloader.CancelAsync();
                return;
            }

            if (coroutine != null)
                this.StopCoroutine(coroutine.routine);
            if (progress > 0)
                EditorUtility.ClearProgressBar();
            if (loading > 0)
                EditorUtility.ClearProgressBar();

            coroutine = null;
            downloader = null;

            loading = 0f;
            progress = 0f;
        }

        private void OnEnable()
        {
            loading = 0f;
            coroutine = this.StartCoroutine(GetAppodealSDKData());
        }

        private void OnGUI()
        {
            scrollPosition = EditorGUILayout.BeginScrollView(scrollPosition,
                false,
                false);
            GUILayout.BeginVertical();

            if (isPluginInfoReady)
            {
                #region Plugin

                GUILayout.Space(5);
                EditorGUILayout.LabelField(AppodealDependencyUtils.AppodealUnityPlugin, labelStyle,
                    GUILayout.Height(20));

                if (appodealUnityPlugin != null)
                {
                    using (new EditorGUILayout.VerticalScope(AppodealDependencyUtils.BoxStyle, GUILayout.Height(45)))
                    {
                        AppodealDependencyUtils.GuiHeaders(headerInfoStyle, btnFieldWidth);
                        if (!string.IsNullOrEmpty(AppodealAds.Unity.Api.Appodeal.APPODEAL_PLUGIN_VERSION) &&
                            !string.IsNullOrEmpty(appodealUnityPlugin.version) &&
                            !string.IsNullOrEmpty(appodealUnityPlugin.source))
                        {
                            GuiPluginRow(appodealUnityPlugin);
                        }
                        else
                        {
                            AppodealDependencyUtils.ShowInternalErrorDialog(this, "Can't find plugin information.",
                                "Can't find plugin information. - {180}");
                        }
                    }
                }
                else
                {
                    AppodealDependencyUtils.ShowInternalErrorDialog(this, "Can't find plugin information.",
                        "appodealUnityPlugin != null - {175}");
                }

                #endregion

                #region CoreInfo

                if (internalDependencies.Count > 0 && latestDependencies.Count > 0)
                {
                    EditorGUILayout.LabelField(AppodealDependencyUtils.AppodealCoreDependencies, labelStyle,
                        GUILayout.Height(20));
                    EditorGUILayout.LabelField(AppodealDependencyUtils.iOS, labelStyle, GUILayout.Height(20));
                    using (new EditorGUILayout.VerticalScope(AppodealDependencyUtils.BoxStyle, GUILayout.Height(45)))
                    {
                        AppodealDependencyUtils.GuiHeaders(headerInfoStyle, btnFieldWidth);
                        GuiCoreRow(AppodealDependencyUtils.GetAppodealDependency(internalDependencies),
                            AppodealDependencyUtils.GetAppodealDependency(latestDependencies), PlatformSdk.iOS);
                    }

                    EditorGUILayout.LabelField(AppodealDependencyUtils.Android, labelStyle, GUILayout.Height(20));
                    using (new EditorGUILayout.VerticalScope(AppodealDependencyUtils.BoxStyle, GUILayout.Height(45)))
                    {
                        AppodealDependencyUtils.GuiHeaders(headerInfoStyle, btnFieldWidth);
                        GuiCoreRow(AppodealDependencyUtils.GetAppodealDependency(internalDependencies),
                            AppodealDependencyUtils.GetAppodealDependency(latestDependencies), PlatformSdk.Android);
                    }
                }

                #endregion

                #region NetworksAdaptersInfo

                if (internalDependencies.Count > 0)
                {
                    EditorGUILayout.LabelField(AppodealDependencyUtils.AppodealNetworkDependencies, labelStyle,
                        GUILayout.Height(20));
                    EditorGUILayout.LabelField(AppodealDependencyUtils.iOS, labelStyle, GUILayout.Height(20));
                    using (new EditorGUILayout.VerticalScope(AppodealDependencyUtils.BoxStyle, GUILayout.Height(45)))
                    {
                        AppodealDependencyUtils.GuiHeaders(headerInfoStyle, btnFieldWidth);
                        GuiAdaptersRows(PlatformSdk.iOS);
                    }

                    EditorGUILayout.LabelField(AppodealDependencyUtils.Android, labelStyle, GUILayout.Height(20));
                    using (new EditorGUILayout.VerticalScope(AppodealDependencyUtils.BoxStyle, GUILayout.Height(45)))
                    {
                        AppodealDependencyUtils.GuiHeaders(headerInfoStyle, btnFieldWidth);
                        GuiAdaptersRows(PlatformSdk.Android);
                    }
                }

                #endregion
            }

            GUILayout.Space(5);
            GUILayout.EndVertical();
            EditorGUILayout.EndScrollView();
        }

        private void GuiAdaptersRows(PlatformSdk platformSdk)
        {
            foreach (var key in latestDependencies.Keys)
            {
                if (internalDependencies.ContainsKey(key))
                {
                    if (key.Equals(AppodealDependencyUtils.Appodeal)) continue;

                    if (latestDependencies.TryGetValue(key, out var latestDependency) &&
                        internalDependencies.TryGetValue(key, out var internalDependency))
                    {
                        switch (platformSdk)
                        {
                            case PlatformSdk.Android:
                                if (internalDependency.android_info != null)
                                {
                                    if (!string.IsNullOrEmpty(internalDependency.android_info.name)
                                        && !string.IsNullOrEmpty(internalDependency.android_info.version)
                                        && !string.IsNullOrEmpty(internalDependency.android_info.unity_content))
                                    {
                                        SetAdapterUpdateInfo(latestDependency.name,
                                            internalDependency.android_info.version,
                                            latestDependency.android_info.version,
                                            internalDependency.android_info.unity_content,
                                            latestDependency.android_info.unity_content,
                                            SDKInfo(latestDependency.android_info.dependencies));
                                    }
                                }
                                else
                                {
                                    if (latestDependency.android_info.name != null)
                                    {
                                        SetAdapterInformationForImport(latestDependency, platformSdk);
                                    }
                                }

                                break;
                            case PlatformSdk.iOS:
                                if (internalDependency.ios_info != null && latestDependency.ios_info != null)
                                {
                                    if (!string.IsNullOrEmpty(internalDependency.ios_info.name)
                                        && !string.IsNullOrEmpty(internalDependency.ios_info.version)
                                        && !string.IsNullOrEmpty(internalDependency.ios_info.unity_content))
                                    {
                                        SetAdapterUpdateInfo(latestDependency.name,
                                            internalDependency.ios_info.version,
                                            latestDependency.ios_info.version,
                                            internalDependency.ios_info.unity_content,
                                            latestDependency.ios_info.unity_content,
                                            SDKInfo(latestDependency.ios_info.dependencies));
                                    }
                                }
                                else
                                {
                                    if (latestDependency.ios_info?.name != null)
                                    {
                                        SetAdapterInformationForImport(latestDependency, platformSdk);
                                    }
                                }

                                break;
                        }
                    }
                }
                else
                {
                    if (latestDependencies.TryGetValue(key, out var networkDependency))
                    {
                        switch (platformSdk)
                        {
                            case PlatformSdk.Android:
                                if (networkDependency.android_info?.name != null)
                                {
                                    SetAdapterInformationForImport(networkDependency, PlatformSdk.Android);
                                }

                                break;
                            case PlatformSdk.iOS:
                                if (networkDependency.ios_info?.name != null)
                                {
                                    SetAdapterInformationForImport(networkDependency, PlatformSdk.iOS);
                                }

                                break;
                            default:
                                throw new ArgumentOutOfRangeException(nameof(platformSdk), platformSdk, null);
                        }
                    }
                }
            }
        }

        private void SetAdapterInformationForImport(NetworkDependency latestDependency, PlatformSdk platformSdk)
        {
            switch (platformSdk)
            {
                case PlatformSdk.Android:
                    if (latestDependency.android_info != null)
                    {
                        SetAdapterImportInfo(latestDependency.name, AppodealDependencyUtils.EmptyCurrentVersion,
                            latestDependency.android_info.version, latestDependency.android_info.unity_content);
                    }

                    break;
                case PlatformSdk.iOS:
                    if (latestDependency.ios_info != null)
                    {
                        SetAdapterImportInfo(latestDependency.name, AppodealDependencyUtils.EmptyCurrentVersion,
                            latestDependency.ios_info.version, latestDependency.ios_info.unity_content);
                    }

                    break;
                default:
                    throw new ArgumentOutOfRangeException(nameof(platformSdk), platformSdk, null);
            }
        }

        private void ImportConfig(string nameDep, string content)
        {
            var path = AppodealDependencyUtils.Network_configs_path + nameDep + AppodealDependencyUtils.Dependencies +
                       AppodealDependencyUtils.XmlFileExtension;
            if (File.Exists(path))
            {
                UpdateDependency(nameDep, AppodealDependencyUtils.SpecCloseDependencies,
                    content + "\n" + AppodealDependencyUtils.SpecCloseDependencies);
                AppodealDependencyUtils.FormatXml(System.IO.File.ReadAllText(path));
            }
            else
            {
                using (TextWriter writer = new StreamWriter(path, false))
                {
                    writer.WriteLine(AppodealDependencyUtils.SpecOpenDependencies
                                     + content + "\n" + AppodealDependencyUtils.SpecCloseDependencies);
                    writer.Close();
                }

                AppodealDependencyUtils.FormatXml(System.IO.File.ReadAllText(path));
            }

            UpdateWindow();
        }

        private void GuiCoreRow(NetworkDependency internalDependency, NetworkDependency latestDependency,
            PlatformSdk platform)
        {
            if (internalDependency == null || latestDependency == null) return;
            using (new EditorGUILayout.HorizontalScope(GUILayout.Height(20)))
            {
                if (!string.IsNullOrEmpty(internalDependency.name))
                {
                    GUILayout.Space(2);
                    GUILayout.Button(internalDependency.name, packageInfoStyle, GUILayout.Width(150));
                    if (platform == PlatformSdk.iOS)
                    {
                        if (internalDependency.ios_info != null
                            && !string.IsNullOrEmpty(internalDependency.ios_info.version))
                        {
                            GUILayout.Space(56);
                            GUILayout.Button(
                                AppodealDependencyUtils.ReplaceBetaVersion(internalDependency.ios_info.version),
                                packageInfoStyle, GUILayout.Width(110));
                            if (latestDependency.ios_info != null &&
                                !string.IsNullOrEmpty(latestDependency.ios_info.version))
                            {
                                GUILayout.Space(85);
                                GUILayout.Button(
                                    AppodealDependencyUtils.ReplaceBetaVersion(latestDependency.ios_info.version),
                                    packageInfoStyle);
                                GUILayout.Space(15);

                                if (AppodealDependencyUtils.CompareVersion(internalDependency.ios_info.version,
                                    latestDependency.ios_info.version) == 0)
                                {
                                    GUI.enabled = false;
                                    GUILayout.Button(
                                        new GUIContent {text = AppodealDependencyUtils.ActionUpdate},
                                        btnFieldWidth);
                                    GUI.enabled = true;
                                }
                                else if (AppodealDependencyUtils.CompareVersion(internalDependency.ios_info.version,
                                    latestDependency.ios_info.version) > 0)
                                {
                                    GUI.enabled = false;
                                    GUILayout.Button(
                                        new GUIContent {text = AppodealDependencyUtils.ActionUpdate},
                                        btnFieldWidth);
                                    GUI.enabled = true;
                                }
                                else
                                {
                                    UpdateCoreProccess(internalDependency.name,
                                        internalDependency.ios_info.unity_content,
                                        latestDependency.ios_info.unity_content, PlatformSdk.iOS);
                                }
                            }
                        }
                    }
                    else
                    {
                        if (internalDependency.android_info != null
                            && !string.IsNullOrEmpty(internalDependency.android_info.version))
                        {
                            GUILayout.Space(56);
                            GUILayout.Button(
                                AppodealDependencyUtils.ReplaceBetaVersion(internalDependency.android_info.version),
                                packageInfoStyle, GUILayout.Width(110));
                            if (latestDependency.android_info != null &&
                                !string.IsNullOrEmpty(latestDependency.android_info.version))
                            {
                                GUILayout.Space(85);
                                GUILayout.Button(
                                    AppodealDependencyUtils.ReplaceBetaVersion(
                                        latestDependency.android_info.version),
                                    packageInfoStyle);
                                GUILayout.Space(15);

                                if (AppodealDependencyUtils.CompareVersion(
                                    internalDependency.android_info.version,
                                    latestDependency.android_info.version) == 0)
                                {
                                    GUI.enabled = false;
                                    GUILayout.Button(
                                        new GUIContent {text = AppodealDependencyUtils.ActionUpdate},
                                        btnFieldWidth);
                                    GUI.enabled = true;
                                }
                                else if (AppodealDependencyUtils.CompareVersion(
                                    internalDependency.android_info.version,
                                    latestDependency.android_info.version) > 0)
                                {
                                    GUI.enabled = false;
                                    GUILayout.Button(
                                        new GUIContent {text = AppodealDependencyUtils.ActionUpdate},
                                        btnFieldWidth);
                                    GUI.enabled = true;
                                }
                                else
                                {
                                    UpdateCoreProccess(internalDependency.name,
                                        internalDependency.android_info.unity_content,
                                        latestDependency.android_info.unity_content,
                                        PlatformSdk.Android);
                                }
                            }
                        }
                    }
                }

                GUILayout.Space(5);
                GUILayout.Space(5);
                GUILayout.Space(5);
            }
        }

        private void UpdateCoreProccess(string internalDependencyName, string internalDependencyUnityContent,
            string latestDependencyUnityContent, PlatformSdk platformSdk)
        {
            if (GUILayout.Button(
                new GUIContent {text = AppodealDependencyUtils.ActionUpdate},
                btnFieldWidth))
            {
                var option = EditorUtility.DisplayDialog("Update dependencies",
                    "If you will update core, all adapters this platform will be updated automatically. " +
                    "Do you want to update core?",
                    "Ok",
                    "Cancel");
                if (!option) return;
                switch (platformSdk)
                {
                    case PlatformSdk.iOS:
                        if (internalDependencies.Count <= 0 || latestDependencies.Count <= 0) return;
                        foreach (var key in internalDependencies.Keys.Where(key =>
                            latestDependencies.ContainsKey(key)))
                        {
                            if (internalDependencies.TryGetValue(key, out var internalDep) &&
                                latestDependencies.TryGetValue(key, out var latestDep))
                            {
                                if (internalDep.ios_info != null)
                                {
                                    UpdateDependency(internalDep.name,
                                        internalDep.ios_info.unity_content,
                                        latestDep.ios_info.unity_content);
                                }
                            }
                        }

                        break;
                    case PlatformSdk.Android:
                        if (internalDependencies.Count <= 0 || latestDependencies.Count <= 0) return;
                        foreach (var key in internalDependencies.Keys.Where(key =>
                            latestDependencies.ContainsKey(key)))
                        {
                            if (internalDependencies.TryGetValue(key, out var internalDep) &&
                                latestDependencies.TryGetValue(key, out var latestDep))
                            {
                                if (internalDep.android_info != null)
                                {
                                    UpdateDependency(internalDep.name,
                                        internalDep.android_info.unity_content,
                                        latestDep.android_info.unity_content);
                                }
                            }
                        }

                        break;
                    default:
                        throw new ArgumentOutOfRangeException(nameof(platformSdk), platformSdk, null);
                }

                UpdateDependency(internalDependencyName,
                    internalDependencyUnityContent,
                    latestDependencyUnityContent);

                UpdateWindow();
            }
        }

        private void SetAdapterImportInfo(string nameDep, string currentVersion, string latestVersion, string content)
        {
            using (new EditorGUILayout.VerticalScope(AppodealDependencyUtils.BoxStyle))
            {
                using (new EditorGUILayout.HorizontalScope(GUILayout.Height(20)))
                {
                    GUILayout.Space(2);
                    if (string.IsNullOrEmpty(nameDep) || string.IsNullOrEmpty(currentVersion) ||
                        string.IsNullOrEmpty(latestVersion)) return;
                    GUILayout.Button(nameDep, packageInfoStyle,
                        GUILayout.Width(145));
                    GUILayout.Space(56);
                    GUILayout.Button(currentVersion,
                        packageInfoStyle,
                        GUILayout.Width(110));
                    GUILayout.Space(85);
                    GUILayout.Button(
                        AppodealDependencyUtils.ReplaceBetaVersion(latestVersion),
                        packageInfoStyle);
                    GUILayout.Space(15);
                    if (GUILayout.Button(
                        new GUIContent {text = AppodealDependencyUtils.ActionImport},
                        btnFieldWidth))
                    {
                        ImportConfig(nameDep, content);
                    }

                    GUILayout.Space(5);
                    GUILayout.Space(5);
                    GUILayout.Space(5);
                }
            }
        }

        private static string SDKInfo(IEnumerable<NetworkDependency.Dependency> dependencies)
        {
            string content = null;
            var enumerable = dependencies as NetworkDependency.Dependency[] ?? dependencies.ToArray();
            foreach (var dependency in enumerable)
            {
                if (dependency.Equals(enumerable.Last()))
                {
                    content += dependency.name + " - " + dependency.version;
                }
                else
                {
                    content += dependency.name + " - " + dependency.version + "\n";
                }
            }

            return string.IsNullOrEmpty(content) ? " " : content;
        }

        private void SetAdapterUpdateInfo(string nameDep, string currentVersion, string latestVersion,
            string internalContent, string latestContent, string sdkInfoDependencies)
        {
            using (new EditorGUILayout.VerticalScope(AppodealDependencyUtils.BoxStyle))
            {
                using (new EditorGUILayout.HorizontalScope(GUILayout.Height(20)))
                {
                    GUILayout.Space(2);
                    if (string.IsNullOrEmpty(nameDep) || string.IsNullOrEmpty(currentVersion) ||
                        string.IsNullOrEmpty(latestVersion)) return;
                    EditorGUILayout.LabelField(new GUIContent
                    {
                        text = nameDep,
                        tooltip = string.IsNullOrEmpty(sdkInfoDependencies) ? "-" : sdkInfoDependencies
                    }, packageInfoStyle, GUILayout.Width(145));
                    GUILayout.Space(56);
                    GUILayout.Button(
                        AppodealDependencyUtils.ReplaceBetaVersion(currentVersion),
                        packageInfoStyle,
                        GUILayout.Width(110));
                    GUILayout.Space(85);
                    GUILayout.Button(
                        AppodealDependencyUtils.ReplaceBetaVersion(latestVersion),
                        packageInfoStyle);
                    GUILayout.Space(15);

                    if (GUILayout.Button(
                        new GUIContent {text = AppodealDependencyUtils.ActionRemove},
                        btnFieldWidth))
                    {
                        var path = $"{AppodealDependencyUtils.Network_configs_path}{nameDep}Dependencies.xml";

                        AppodealDependencyUtils.ReplaceInFile(path, internalContent, "");
                        var text = System.IO.File.ReadAllLines(path).Where(s => s.Trim() != string.Empty).ToArray();
                        File.Delete(path);
                        System.IO.File.WriteAllLines(path, text);
                        AppodealDependencyUtils.FormatXml(System.IO.File.ReadAllText(path));

                        UpdateWindow();
                    }

                    var current = AppodealDependencyUtils.GetMajorVersion(
                        AppodealDependencyUtils.ReplaceBetaVersion(currentVersion));
                    var last = AppodealDependencyUtils.GetMajorVersion(
                        AppodealDependencyUtils.ReplaceBetaVersion(latestVersion));


                    if (AppodealDependencyUtils.CompareVersion(current, last) == -1)
                    {
                        CompareForAction(0,
                            nameDep, internalContent, latestContent);
                    }
                    else
                    {
                        if (AppodealDependencyUtils.CompareVersion(currentVersion, latestVersion) == -1)
                        {
                            CompareForAction(AppodealDependencyUtils.CompareVersion(
                                    AppodealDependencyUtils.ReplaceBetaVersion(currentVersion),
                                    AppodealDependencyUtils.ReplaceBetaVersion(latestVersion)),
                                nameDep, internalContent, latestContent);
                        }
                        else
                        {
                            CompareForAction(0,
                                nameDep, internalContent, latestContent);
                        }
                    }
                }
            }
        }

        private void CompareForAction(int action, string nameDependency, string previous, string latest)
        {
            if (action == -1)
            {
                if (GUILayout.Button(
                    new GUIContent {text = AppodealDependencyUtils.ActionUpdate},
                    btnFieldWidth))
                {
                    UpdateDependency(nameDependency, previous, latest);
                    UpdateWindow();
                }
            }
            else
            {
                GUI.enabled = false;
                GUILayout.Button(
                    new GUIContent {text = AppodealDependencyUtils.ActionUpdate},
                    btnFieldWidth);
                GUI.enabled = true;
            }

            GUILayout.Space(5);
            GUILayout.Space(5);
            GUILayout.Space(5);
        }

        private void UpdateDependency(string nameDependency, string previous, string latest)
        {
            var path = AppodealDependencyUtils.Network_configs_path + nameDependency +
                       AppodealDependencyUtils.Dependencies + ".xml";
            if (!File.Exists(path))
            {
                AppodealDependencyUtils.ShowInternalErrorDialog(this,
                    "Can't find config with path " + path, $"path - {nameDependency}");
            }
            else
            {
                string contentString;
                using (var reader = new StreamReader(path))
                {
                    contentString = reader.ReadToEnd();
                    reader.Close();
                }

                contentString = Regex.Replace(contentString, previous, latest);

                using (var writer = new StreamWriter(path))
                {
                    writer.Write(contentString);
                    writer.Close();
                }
            }
        }

        private void GuiPluginRow(AppodealUnityPlugin plugin)
        {
            using (new EditorGUILayout.HorizontalScope(GUILayout.Height(20)))
            {
                GUILayout.Space(2);
                GUILayout.Button(AppodealDependencyUtils.AppodealUnityPlugin, packageInfoStyle,
                    GUILayout.Width(150));
                GUILayout.Space(56);
                GUILayout.Button(AppodealDependencyUtils.ReplaceBetaVersion(AppodealAds.Unity.Api.Appodeal
                    .APPODEAL_PLUGIN_VERSION), packageInfoStyle, GUILayout.Width(110));
                GUILayout.Space(85);
                GUILayout.Button(AppodealDependencyUtils.ReplaceBetaVersion(plugin.version), packageInfoStyle);
                GUILayout.Space(15);

                if (AppodealDependencyUtils.CompareVersion(
                    AppodealAds.Unity.Api.Appodeal.APPODEAL_PLUGIN_VERSION,
                    plugin.version) == 0)
                {
                    GUI.enabled = false;
                    GUILayout.Button(new GUIContent {text = AppodealDependencyUtils.ActionUpdate},
                        btnFieldWidth);
                    GUI.enabled = true;
                }
                else if (AppodealDependencyUtils.CompareVersion(
                    AppodealAds.Unity.Api.Appodeal.APPODEAL_PLUGIN_VERSION,
                    plugin.version) > 0)
                {
                    GUI.enabled = false;
                    GUILayout.Button(new GUIContent {text = AppodealDependencyUtils.ActionUpdate},
                        btnFieldWidth);
                    GUI.enabled = true;
                }
                else
                {
                    if (GUILayout.Button(new GUIContent {text = AppodealDependencyUtils.ActionImport},
                        btnFieldWidth))
                    {
                        this.StartCoroutine(DownloadUnityPlugin(plugin.source, plugin.version));
                    }
                }

                GUILayout.Space(15);
            }
        }

        private IEnumerator GetAppodealSDKData()
        {
            yield return null;

            if (!EditorUtility.DisplayCancelableProgressBar(
                AppodealDependencyUtils.AppodealSdkManager,
                AppodealDependencyUtils.Loading,
                80f))
            {
            }

            #region Internal

            if (AppodealDependencyUtils.GetInternalDependencyPath() != null)
            {
                foreach (var fileInfo in AppodealDependencyUtils.GetInternalDependencyPath())
                {
                    if (!File.Exists(AppodealDependencyUtils.Network_configs_path + fileInfo.Name))
                    {
                        AppodealDependencyUtils.ShowInternalErrorDialog(this,
                            $"File doesn't exist - {AppodealDependencyUtils.Network_configs_path + fileInfo.Name}",
                            string.Empty);
                    }
                    else
                    {
                        GetInternalDependencies(AppodealDependencyUtils.Network_configs_path + fileInfo.Name);
                    }
                }
            }
            else
            {
                AppodealDependencyUtils.ShowInternalErrorDialog(this,
                    "Can't find internal dependencies.", string.Empty);
            }

            #endregion

            #region Plugin

            var requestPlugin = UnityWebRequest.Get(AppodealDependencyUtils.PluginRequest);
            yield return requestPlugin.Send();

            if (requestPlugin.isError)
            {
                Debug.LogError(requestPlugin.error);
                AppodealDependencyUtils.ShowInternalErrorDialog(this, requestPlugin.error, string.Empty);
            }
            else
            {
                if (string.IsNullOrEmpty(requestPlugin.downloadHandler.text)) yield break;

                if (AppodealAds.Unity.Api.Appodeal.APPODEAL_PLUGIN_VERSION.Contains("-Beta"))
                {
                    appodealUnityPlugin = JsonHelper
                        .FromJson<AppodealUnityPlugin>(JsonHelper.fixJson(requestPlugin.downloadHandler.text))
                        .ToList().FirstOrDefault(x => x.build_type.Equals("beta"));
                }
                else
                {
                    appodealUnityPlugin = JsonHelper
                        .FromJson<AppodealUnityPlugin>(JsonHelper.fixJson(requestPlugin.downloadHandler.text))
                        .ToList().FirstOrDefault(x => x.build_type.Equals("stable"));
                }
            }

            #endregion

            #region Adapters

            var requestAdapters = UnityWebRequest.Get(AppodealDependencyUtils.AdaptersRequest +
                                                      AppodealDependencyUtils.ReplaceBetaVersion(AppodealAds.Unity.Api
                                                          .Appodeal.APPODEAL_PLUGIN_VERSION));

            yield return requestAdapters.Send();

            if (requestAdapters.isError)
            {
                Debug.LogError(requestAdapters.error);
                AppodealDependencyUtils.ShowInternalErrorDialog(this, requestAdapters.error, string.Empty);
            }
            else
            {
                if (string.IsNullOrEmpty(requestAdapters.downloadHandler.text)) yield break;
                if (requestAdapters.downloadHandler.text.Contains("error"))
                {
                    AppodealDependencyUtils.ShowInternalErrorDialog(this,
                        $"Can't find network configs by {AppodealAds.Unity.Api.Appodeal.APPODEAL_PLUGIN_VERSION} version",
                        string.Empty);
                    yield break;
                }

                var networkDependencies = JsonHelper.FromJson<NetworkDependency>(
                    JsonHelper.fixJson(requestAdapters.downloadHandler.text));

                if (networkDependencies.Length > 0)
                {
                    foreach (var networkDependency in networkDependencies)
                    {
                        if (!string.IsNullOrEmpty(networkDependency.name)
                            && !networkDependency.name.Equals(AppodealDependencyUtils.TwitterMoPub))
                        {
                            latestDependencies.Add(networkDependency.name, networkDependency);
                        }
                    }
                }
            }

            #endregion

            coroutine = null;

            isPluginInfoReady = true;

            EditorUtility.ClearProgressBar();
        }

        private void GetInternalDependencies(string dependencyPath)
        {
            var networkDependency = new NetworkDependency
            {
                name = AppodealDependencyUtils.GetConfigName(dependencyPath)
            };

            #region iOSInternalDependencies

            var sourcesiOS = new List<string>();
            string podName = null;
            string version = null;
            string minTargetSdk = null;

            XmlUtilities.ParseXmlTextFileElements(dependencyPath,
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
                            minTargetSdk = reader.GetAttribute("minTargetSdk");

                            sourcesiOS = new List<string>();
                            if (podName == null)
                            {
                                Debug.Log(
                                    $"Pod name not specified while reading {dependencyPath}:{reader.LineNumber}\n");
                                return false;
                            }
                        }
                        else
                        {
                            if (podName != null && version != null && minTargetSdk != null)
                            {
                                if (!podName.Contains(AppodealDependencyUtils.APDAppodealAdExchangeAdapter))
                                {
                                    networkDependency.ios_info = new NetworkDependency.iOSDependency(podName,
                                        version,
                                        AppodealDependencyUtils.GetiOSContent(dependencyPath));
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
                            sourcesiOS = new List<string>();
                        }
                        else
                        {
                            using (var enumerator = sourcesiOS.GetEnumerator())
                            {
                                while (enumerator.MoveNext())
                                {
                                    var current = enumerator.Current;
                                    Debug.Log(current);
                                }
                            }
                        }

                        return true;
                    }

                    if (!(elementName == "source") || !(parentElementName == "sources"))
                        return false;
                    if (isStart && reader.Read() && reader.NodeType == XmlNodeType.Text)
                        sourcesiOS.Add(reader.ReadContentAsString());
                    return true;
                });

            #endregion

            #region AndroidInternalDependencies

            var sources = new List<string>();
            string specName;

            XmlUtilities.ParseXmlTextFileElements(dependencyPath,
                (reader, elementName, isStart, parentElementName, elementNameStack) =>
                {
                    if (elementName == "dependencies" &&
                        parentElementName == "" || elementName == "androidPackages" &&
                        (parentElementName == "dependencies" || parentElementName == ""))
                    {
                        return true;
                    }

                    if (elementName == "androidPackage" && parentElementName == "androidPackages")
                    {
                        if (isStart)
                        {
                            specName = reader.GetAttribute("spec");
                            sources = new List<string>();
                            if (specName == null)
                            {
                                Debug.Log(
                                    $"Pod name not specified while reading {dependencyPath}:{reader.LineNumber}\n");
                                return false;
                            }

                            foreach (var s in new List<string> {"vast", "nast", "mraid", "appodealx", "appodeal"})
                            {
                                if (!specName.Contains(s))
                                {
                                    if (specName.Contains(AppodealDependencyUtils.Replace_dependency_value))
                                    {
                                        networkDependency.android_info = new NetworkDependency.AndroidDependency(
                                            AppodealDependencyUtils.GetAndroidDependencyName(specName),
                                            AppodealDependencyUtils.GetAndroidDependencyVersion(specName),
                                            AppodealDependencyUtils.GetAndroidContent(dependencyPath));
                                    }
                                    else if (specName.Contains(AppodealDependencyUtils.Replace_dependency_core))
                                    {
                                        networkDependency.android_info = new NetworkDependency.AndroidDependency(
                                            "appodeal",
                                            AppodealDependencyUtils.GetAndroidDependencyCoreVersion(specName),
                                            AppodealDependencyUtils.GetAndroidContent(dependencyPath));
                                    }
                                }
                                else
                                {
                                    return false;
                                }
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
                            using (var enumerator = sources.GetEnumerator())
                            {
                                while (enumerator.MoveNext())
                                {
                                    var current = enumerator.Current;
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

            #endregion

            if (!string.IsNullOrEmpty(networkDependency.name))
            {
                internalDependencies.Add(networkDependency.name, networkDependency);
            }
        }

        private IEnumerator DownloadUnityPlugin(string source, string pluginVersion)
        {
            yield return null;
            var ended = false;
            var cancelled = false;
            Exception error = null;
            int oldPercentage = 0, newPercentage = 0;
            var path = Path.Combine("Assets/Appodeal", AppodealDependencyUtils.AppodealUnityPlugin + pluginVersion);
            progress = 0.01f;
            downloader = new WebClient {Encoding = Encoding.UTF8};
            downloader.DownloadProgressChanged += (sender, args) => { newPercentage = args.ProgressPercentage; };
            downloader.DownloadFileCompleted += (sender, args) =>
            {
                ended = true;
                cancelled = args.Cancelled;
                error = args.Error;
            };

            if (!string.IsNullOrEmpty(source))
            {
                Debug.LogFormat("Downloading {0} to {1}", source, path);
                Debug.Log(source);
                downloader.DownloadFileAsync(new Uri(source), path);
            }
            else
            {
                AppodealDependencyUtils.ShowInternalErrorDialog(this, "Can't find internal dependencies.",
                    string.Empty);
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

        private void UpdateWindow()
        {
            Reset();
            coroutine = this.StartCoroutine(GetAppodealSDKData());
            GUI.enabled = true;
            AssetDatabase.Refresh();
        }

        private void OnInspectorUpdate()
        {
            Repaint();
        }
    }
}
#endif