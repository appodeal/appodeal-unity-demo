using System.Diagnostics.CodeAnalysis;
using System.IO;
using UnityEditor;

namespace AppodealAds.Unity.Editor.Utils
{
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "RedundantJumpStatement")]
    [SuppressMessage("ReSharper", "UnusedMember.Global")]
    public class AppodealAssetsPostProcess : AssetPostprocessor
    {
        public static void ReimportFolder(string path)
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

                AssetDatabase.ImportAsset(AppodealUnityUtils.FixSlashesInPath(file));
            }
        }
    }
}