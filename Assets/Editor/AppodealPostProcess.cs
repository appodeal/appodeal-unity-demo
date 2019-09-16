using System.IO;
using Appodeal.Unity.Editor.iOS;
using Unity.Appodeal.Xcode;
using UnityEditor;
using UnityEditor.Callbacks;
using UnityEngine;

public class AppodealPostProcess : MonoBehaviour
{
    [PostProcessBuild(100)]
    [System.Obsolete]
    public static void OnPostProcessBuild(BuildTarget target, string path)
    {
        if (target.ToString() == "iOS" || target.ToString() == "iPhone")
        {
            iOSPostprocessUtils.PrepareProject(path);
            
            // Get plist
            string plistPath = path + "/Info.plist";
            PlistDocument plist = new PlistDocument();
            plist.ReadFromString(File.ReadAllText(plistPath));
       
            // Get root
            PlistElementDict rootDict = plist.root;
       
            // Change value of GADIsAdManagerApp in Xcode plist
            var buildKey = "GADIsAdManagerApp";
            rootDict.SetBoolean(buildKey,true);
       
            // Write to file
            File.WriteAllText(plistPath, plist.WriteToString());
        }
    }
}