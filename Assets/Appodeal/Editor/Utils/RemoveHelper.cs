#pragma warning disable 0649
using System.IO;
using UnityEditor;
using System.Text.RegularExpressions;
using UnityEngine;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using System.Linq;
using System.Xml;

namespace AppodealAds.Unity.Editor.Utils
{
    [System.Serializable]
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    internal class ItemToRemove
    {
        public string name;
        public bool is_confirmation_required;
        public string path;
        public string description;
        public bool check_if_empty;
        public bool perform_only_if_total_remove;
        public string filter;
    }

    [System.Serializable]
    internal class ItemsWrapper
    {
        public ItemToRemove[] items;
    }


    [InitializeOnLoad]
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "RedundantJumpStatement")]
    [SuppressMessage("ReSharper", "UnusedMember.Local")]
    [SuppressMessage("ReSharper", "UnusedMember.Global")]
    public class RemoveHelper
    {
        private const string PLAY_SERVICES_RESOLVER_PLUGIN = "Appodeal-Unity-Play-Services-Resolver";
        private const string ANDROID_SUPPORT_PLUGIN = "Appodeal-Unity-Android-Support";
        private const string PLAY_SERVICES_PLUGIN = "Unity-Google-Play-Services";
        private const string UNITY_PLUGIN = "Appodeal-Unity-";

        public static string[] pathsToSearchNetworksFiles =
        {
            Path.Combine(Application.dataPath, "Appodeal/Adapters"),
            Path.Combine(Application.dataPath, "Plugins/Android"),
            Path.Combine(Application.dataPath, "Plugins/Android/appodeal/assets/dex")
        };

        static RemoveHelper()
        {
            AssetDatabase.importPackageStarted += importPackageStartedListener;
            AssetDatabase.importPackageCompleted += RemoveOptionalNetworks;
        }

        private static void RemoveOptionalNetworks(string packagename)
        {
            string[] optionalNetworksConfigs =
            {
                "ChartboostDependencies.xml",
                "InMobiDependencies.xml",
                "InnerActiveDependencies.xml",
                "MintegralDependencies.xml",
                "OpenXDependencies.xml",
                "PubnativeDependencies.xml",
                "TapjoyDependencies.xml"
            };


            var info = new DirectoryInfo("Assets/Appodeal/Editor/NetworkConfigs/");

            var fileInfo = info.GetFiles();

            foreach (var file in fileInfo)
            {
                foreach (var optionalNetworksConfig in optionalNetworksConfigs)
                {
                    if (file.Name.Equals(optionalNetworksConfig))
                    {
                        File.Delete("Assets/Appodeal/Editor/NetworkConfigs/" + file.Name);
                    }
                }
            }
        }

        private static void importPackageStartedListener(string packageName)
        {
            if (packageName.Contains(PLAY_SERVICES_RESOLVER_PLUGIN) || packageName.Contains(ANDROID_SUPPORT_PLUGIN) ||
                packageName.Contains(PLAY_SERVICES_PLUGIN))
            {
                return;
            }

            if (!packageName.Contains(UNITY_PLUGIN)) return;

            if (EditorUtility.DisplayDialog("Appodeal Warning",
                "It seems like you are going to install new version of Appodeal plugin. " +
                "To avoid conflicts it's recommended to delete previous version of the plugin.",
                "Delete automatically",
                "I'll do it manually"))
            {
                RemovePlugin(true);
            }
        }

        public static void removeNetworks(IEnumerable<string> networks)
        {
            foreach (var networkPath in networks)
            {
                FileUtil.DeleteFileOrDirectory(networkPath);
            }
        }

        private static IEnumerable<ItemToRemove> readXML()
        {
            var itemToRemoveList = new List<ItemToRemove>();
            var xDoc = new XmlDocument();
            xDoc.Load(Path.Combine(Application.dataPath, "Appodeal/Editor/InternalResources/remove_list.xml"));
            var xRoot = xDoc.DocumentElement;

            if (xRoot == null) return itemToRemoveList.ToArray();
            foreach (XmlNode xnode in xRoot)
            {
                var itemToRemove = new ItemToRemove();
                foreach (XmlNode childNode in xnode.ChildNodes)
                {
                    if (childNode.Name.Equals("name"))
                    {
                        itemToRemove.name = childNode.InnerText;
                    }

                    if (childNode.Name.Equals("is_confirmation_required"))
                    {
                        if (childNode.InnerText.Equals("true"))
                        {
                            itemToRemove.is_confirmation_required = true;
                        }
                        else if (childNode.InnerText.Equals("true"))
                        {
                            itemToRemove.is_confirmation_required = false;
                        }
                    }

                    if (childNode.Name.Equals("path"))
                    {
                        itemToRemove.path = childNode.InnerText;
                    }

                    if (childNode.Name.Equals("description"))
                    {
                        itemToRemove.description = childNode.InnerText;
                    }

                    if (childNode.Name.Equals("check_if_empty"))
                    {
                        if (childNode.InnerText.Equals("true"))
                        {
                            itemToRemove.check_if_empty = true;
                        }
                        else if (childNode.InnerText.Equals("false"))
                        {
                            itemToRemove.check_if_empty = false;
                        }
                    }

                    if (childNode.Name.Equals("perform_only_if_total_remove"))
                    {
                        if (childNode.InnerText.Equals("true"))
                        {
                            itemToRemove.perform_only_if_total_remove = true;
                        }
                        else if (childNode.InnerText.Equals("false"))
                        {
                            itemToRemove.perform_only_if_total_remove = false;
                        }
                    }

                    if (childNode.Name.Equals("filter"))
                    {
                        itemToRemove.filter = childNode.InnerText;
                    }
                }

                itemToRemoveList.Add(itemToRemove);
            }

            return itemToRemoveList.ToArray();
        }

        public static void RemovePlugin(bool isCleanBeforeUpdate = false)
        {
            if (EditorUtility.DisplayDialog("Remove Appodeal plugin",
                "Are you sure you want to remove the Appodeal plugin from your project?",
                "Yes",
                "Cancel"))
            {
                var items = readXML();
                foreach (var t in items)
                {
                    if (t.perform_only_if_total_remove && isCleanBeforeUpdate) continue;
                    var confirmed = !t.is_confirmation_required || isCleanBeforeUpdate;
                    var fullItemPath = Path.Combine(Application.dataPath, t.path);

                    if (!confirmed)
                    {
                        if (EditorUtility.DisplayDialog("Removing " + t.name, t.description, "Yes", "No"))
                        {
                            confirmed = true;
                        }
                    }

                    if (!confirmed) continue;
                    var isChecked = !t.check_if_empty;
                    if (!isChecked) isChecked = isFolderEmpty(fullItemPath);
                    if (!isChecked) continue;

                    if (string.IsNullOrEmpty(t.filter))
                    {
                        FileUtil.DeleteFileOrDirectory(fullItemPath);
                        FileUtil.DeleteFileOrDirectory(fullItemPath + ".meta");
                        continue;
                    }

                    var isDirectoryExists = Directory.Exists(fullItemPath);
                    if (!isDirectoryExists) continue;
                    var filesList =
                        new List<string>(Directory.GetFiles(fullItemPath, "*", SearchOption.TopDirectoryOnly));
                    filesList.AddRange(Directory.GetDirectories(fullItemPath, "*", SearchOption.TopDirectoryOnly));
                    foreach (var t1 in from t1 in filesList
                        let fileName = Path.GetFileName(t1)
                        where Regex.IsMatch(fileName, t.filter, RegexOptions.IgnoreCase)
                        select t1)
                    {
                        FileUtil.DeleteFileOrDirectory(t1);
                        FileUtil.DeleteFileOrDirectory(t1 + ".meta");
                    }

                    if (!isFolderEmpty(fullItemPath)) continue;
                    FileUtil.DeleteFileOrDirectory(fullItemPath);
                    FileUtil.DeleteFileOrDirectory(fullItemPath + ".meta");
                }

                AssetDatabase.Refresh(ImportAssetOptions.ForceUpdate);
                
            }
        }

        private static bool isFolderEmpty(string path)
        {
            if (!Directory.Exists(path)) return false;
            var filesPaths = Directory.GetFiles(path, "*", SearchOption.TopDirectoryOnly);
            var s = new List<string>(filesPaths);
            for (var i = 0; i < s.Count; i++)
            {
                if (s[i].Contains(".DS_Store"))
                {
                    s.RemoveAt(i);
                }
            }

            return s.Count == 0;
        }
    }
}