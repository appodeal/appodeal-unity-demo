using AppodealAds.Unity.Editor.InternalResources;
using UnityEditor;
using UnityEngine;

public class AppodealInternalSettings : EditorWindow
{
    public static void ShowAppodealInternalSettings()
    {
        GetWindow(typeof(AppodealInternalSettings),
            true, "AdMob App Id");
    }

    private void OnGUI()
    {
        GUILayout.BeginHorizontal();
        using (new EditorGUILayout.VerticalScope("box"))
        {
            EditorGUILayout.LabelField("AdMob App Id", new GUIStyle(EditorStyles.label)
                {
                    fontSize = 15,
                    fontStyle = FontStyle.Bold
                },
                GUILayout.Height(20));
            GUILayout.Space(10);

            AppodealSettings.Instance.AdMobAndroidAppId = PlatformRow("App ID (Android)",
                AppodealSettings.Instance.AdMobAndroidAppId, GUILayout.Width(100));
            AppodealSettings.Instance.AdMobIosAppId = PlatformRow("App ID (iOS)",
                AppodealSettings.Instance.AdMobIosAppId, GUILayout.Width(100));
            GUILayout.Space(10);
        }

        GUILayout.EndHorizontal();
        
        AppodealSettings.Instance.SaveAsync();
    }

    private static string PlatformRow(string fieldTitle, string text, GUILayoutOption labelWidth,
        GUILayoutOption textFieldWidthOption = null)
    {
        GUILayout.BeginHorizontal();
        GUILayout.Space(4);
        EditorGUILayout.LabelField(new GUIContent(fieldTitle), labelWidth);
        GUILayout.Space(4);
        text = textFieldWidthOption == null
            ? GUILayout.TextField(text)
            : GUILayout.TextField(text, textFieldWidthOption);
        GUILayout.Space(4);
        GUILayout.EndHorizontal();
        GUILayout.Space(4);

        return text;
    }
}