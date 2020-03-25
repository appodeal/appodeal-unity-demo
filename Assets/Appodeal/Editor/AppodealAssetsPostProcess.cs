using System.Diagnostics.CodeAnalysis;
using System.IO;
using Unity.Appodeal.Xcode.PBX;
using UnityEditor;

namespace Appodeal.Unity.Editor
{
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "UnusedMember.Global")]
    public class AppodealAssetsPostProcess : AssetPostprocessor
    {
        public static readonly string[] Plugins = {
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
            var files = Directory.GetFiles(path, "*", SearchOption.AllDirectories);
            foreach (var file in files)
            {
                if (file.EndsWith(".DS_Store", System.StringComparison.Ordinal))
                {
                    continue;
                }

                if (file.EndsWith(".meta", System.StringComparison.Ordinal))
                {
                    continue;
                }

                AssetDatabase.ImportAsset(Utils.FixSlashesInPath(file));
            }
        }
    }
}