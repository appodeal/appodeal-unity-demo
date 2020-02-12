using System.Collections;
using System.IO;
using Unity.Appodeal.Xcode.PBX;
using UnityEditor;
using UnityEngine;

public class AppodealAssetsPostProcess : AssetPostprocessor
{
    public static string[] Plugins = new string[]
    {
        "appodeal-adcolony",
        "appodeal-amazon",
        "appodeal-applovin",
        "appodeal-appodeal-inmobi",
        "appodeal-chartboost",
        "appodeal-facebook",
        "appodeal-inmobi",
        "appodeal-ironsource",
        "appodeal-mintegral",
        "appodeal-mytarget",
        "appodeal-startapp",
        "appodeal-tapjoy",
        "appodeal-unityads",
        "appodeal-vungle",
        "appodeal-yandex-metrica",
        "appodeal-yandex-mobileads",
        "appodeal"
    };

    public static void reimportFolder(string path)
    {
        string[] files = Directory.GetFiles(path, "*", SearchOption.AllDirectories);
        foreach (string file in files)
        {
            if (file.EndsWith(".DS_Store", System.StringComparison.Ordinal))
            {
                continue;
            }
            else if (file.EndsWith(".meta", System.StringComparison.Ordinal))
            {
                continue;
            }
            else
            {
                AssetDatabase.ImportAsset(Utils.FixSlashesInPath(file));
            }
        }
    }
}