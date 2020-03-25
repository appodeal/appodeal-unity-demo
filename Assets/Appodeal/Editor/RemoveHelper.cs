using System.IO;
using System;
using UnityEditor;
using System.Text.RegularExpressions;
using UnityEngine;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using System.Linq;
using System.Xml;

namespace Appodeal.Unity.Editor
{
    [Serializable]
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "NotAccessedField.Global")]
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

    [Serializable]
    [SuppressMessage("ReSharper", "UnusedMember.Local")]
    internal class ItemsWrapper
    {
        private ItemToRemove[] items;
    }


    [InitializeOnLoad]
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "UnusedMember.Local")]
    [SuppressMessage("ReSharper", "AccessToForEachVariableInClosure")]
    public class RemoveHelper
    {
        private const string PLAY_SERVICES_RESOLVER_PLUGIN = "Appodeal-Unity-Play-Services-Resolver";
        private const string ANDROID_SUPPORT_PLUGIN = "Appodeal-Unity-Android-Support";
        private const string PLAY_SERVICES_PLUGIN = "Unity-Google-Play-Services";
        private const string UNITY_PLUGIN = "Appodeal-Unity-";

        static RemoveHelper()
        {
            AssetDatabase.importPackageStarted += importPackageStartedListener;
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
            xDoc.Load(Path.Combine(Application.dataPath, "Appodeal/InternalResources/remove_list.xml"));
            var xRoot = xDoc.DocumentElement;

            if (xRoot != null)
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
            var items = readXML();
            foreach (var t1 in items)
            {
                if (t1.perform_only_if_total_remove && isCleanBeforeUpdate) continue;
                var confirmed = !t1.is_confirmation_required || isCleanBeforeUpdate;
                var fullItemPath = Path.Combine(Application.dataPath, t1.path);

                if (!confirmed)
                {
                    if (EditorUtility.DisplayDialog("Removing " + t1.name, t1.description, "Yes", "No"))
                    {
                        confirmed = true;
                    }
                }

                if (!confirmed) continue;
                var isChecked = !t1.check_if_empty;
                if (!isChecked) isChecked = isFolderEmpty(fullItemPath);
                if (!isChecked) continue;

                if (string.IsNullOrEmpty(t1.filter))
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
                foreach (var t in from t in filesList let fileName = Path.GetFileName(t) 
                    where fileName == null || Regex.IsMatch(fileName, t1.filter, RegexOptions.IgnoreCase) select t)
                {
                    FileUtil.DeleteFileOrDirectory(t);
                    FileUtil.DeleteFileOrDirectory(t + ".meta");
                }

                if (!isFolderEmpty(fullItemPath)) continue;
                FileUtil.DeleteFileOrDirectory(fullItemPath);
                FileUtil.DeleteFileOrDirectory(fullItemPath + ".meta");
            }

            AssetDatabase.Refresh(ImportAssetOptions.ForceUpdate);
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