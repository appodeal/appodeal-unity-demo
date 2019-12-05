#pragma warning disable 0649
using System.IO;
using UnityEditor;
using System.Text.RegularExpressions;
using UnityEngine;
using System.Collections.Generic;
using AppodealAds.Unity.Editor;
using System;
using System.Collections;
using System.Xml;

[System.Serializable]
class ItemToRemove
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
class ItemsWrapper
{
    public ItemToRemove[] items;
}



[InitializeOnLoad]
public class RemoveHelper
{
    private const string PLAY_SERVICES_RESOLVER_PLUGIN = "Appodeal-Unity-Play-Services-Resolver";
    private const string ANDROID_SUPPORT_PLUGIN = "Appodeal-Unity-Android-Support";
    private const string PLAY_SERVICES_PLUGIN = "Unity-Google-Play-Services";
    private const string UNITY_PLUGIN = "Appodeal-Unity-";

    static string[] pathsToSearchNetworksFiles = {
        Path.Combine(Application.dataPath, "Appodeal/Adapters"),
        Path.Combine(Application.dataPath, "Plugins/Android"),
        Path.Combine(Application.dataPath, "Plugins/Android/appodeal/assets/dex")
    };

    static RemoveHelper()
    {
        AssetDatabase.importPackageStarted += importPackageStartedListener;
    }

    static void importPackageStartedListener(string packageName)
    {
        if (packageName.Contains(PLAY_SERVICES_RESOLVER_PLUGIN) || packageName.Contains(ANDROID_SUPPORT_PLUGIN) || packageName.Contains(PLAY_SERVICES_PLUGIN))
        {
            return;
        }
        else if (packageName.Contains(UNITY_PLUGIN))
        {
            if (EditorUtility.DisplayDialog("Appodeal Warning", "It seems like you are going to install new version of Appodeal plugin. " +
                "To avoid conflicts it's recommended to delete previous version of the plugin.", "Delete automatically", "I'll do it manually"))
            {
                removePlugin(true);
            }
        }
    }

    public static void removeNetworks(string[] networks)
    {
        foreach (string networkPath in networks)
        {
            FileUtil.DeleteFileOrDirectory(networkPath);
        }
    }

    static ItemToRemove[] readXML()
    {
        List<ItemToRemove> itemToRemoveList = new List<ItemToRemove>();
        XmlDocument xDoc = new XmlDocument();
        xDoc.Load(Path.Combine(Application.dataPath, "Appodeal/InternalResources/remove_list.xml"));
        XmlElement xRoot = xDoc.DocumentElement;

        foreach (XmlNode xnode in xRoot)
        {
            ItemToRemove itemToRemove = new ItemToRemove();
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

    public static void removePlugin(bool isCleanBeforeUpdate = false)
    {
        ItemToRemove[] items = readXML();
        for (int i = 0; i < items.Length; i++)
        {
            if (items[i].perform_only_if_total_remove && isCleanBeforeUpdate) continue;
            bool confirmed = !items[i].is_confirmation_required || isCleanBeforeUpdate;
            string fullItemPath = Path.Combine(Application.dataPath, items[i].path);

            if (!confirmed)
            {
                if (EditorUtility.DisplayDialog("Removing " + items[i].name, items[i].description, "Yes", "No"))
                {
                    confirmed = true;
                }
            }

            if (!confirmed) continue;
            bool isChecked = !items[i].check_if_empty;
            if (!isChecked) isChecked = isFolderEmpty(fullItemPath);
            if (!isChecked) continue;

            if (items[i].filter == null || items[i].filter == "")
            {
                FileUtil.DeleteFileOrDirectory(fullItemPath);
                FileUtil.DeleteFileOrDirectory(fullItemPath + ".meta");
                continue;
            }
            bool isDirectoryExists = Directory.Exists(fullItemPath);
            if (!isDirectoryExists) continue;
            List<string> filesList = new List<string>(Directory.GetFiles(fullItemPath, "*", SearchOption.TopDirectoryOnly));
            filesList.AddRange(Directory.GetDirectories(fullItemPath, "*", SearchOption.TopDirectoryOnly));
            for (int j = 0; j < filesList.Count; j++)
            {
                string fileName = Path.GetFileName(filesList[j]);
                if (Regex.IsMatch(fileName, items[i].filter, RegexOptions.IgnoreCase))
                {
                    FileUtil.DeleteFileOrDirectory(filesList[j]);
                    FileUtil.DeleteFileOrDirectory(filesList[j] + ".meta");
                }
            }

            if (isFolderEmpty(fullItemPath))
            {
                FileUtil.DeleteFileOrDirectory(fullItemPath);
                FileUtil.DeleteFileOrDirectory(fullItemPath + ".meta");
            }

        }
        AssetDatabase.Refresh(ImportAssetOptions.ForceUpdate);
    }

    static bool isFolderEmpty(string path)
    {
        if (!Directory.Exists(path)) return false;
        string[] filesPaths = Directory.GetFiles(path, "*", SearchOption.TopDirectoryOnly);
        List<string> s = new List<string>(filesPaths);
        for (int i = 0; i < s.Count; i++)
        {
            if (s[i].Contains(".DS_Store"))
            {
                s.RemoveAt(i);
            }
        }
        return s.Count == 0;
    }
}
