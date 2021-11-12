using System;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using UnityEngine;

namespace Appodeal.Editor.AppodealManager.Data
{
    [Serializable]
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    public class Root
    {
        public Metadata metadata;
        public AppodealUnityPlugin[] items;
    }

    [Serializable]
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    public class Metadata
    {
        public int per;
        public int total;
        public int page;
    }


    [Serializable]
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    public class AppodealUnityPlugin
    {
        public string created_at;
        public string build_type;
        public long id;
        public string updated_at;
        public string name;
        public string source;
        public string version;
        public SupportedSdk[] sdks;

        public AppodealUnityPlugin(string name, string buildType, int id, string version,
            string updatedAt, string createdAt, SupportedSdk[] supportedSdks, string source)
        {
            this.name = name;
            build_type = buildType;
            this.id = id;
            this.version = version;
            updated_at = updatedAt;
            created_at = createdAt;
            sdks = supportedSdks;
            this.source = source;
        }
    }

    [Serializable]
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    public class SupportedSdk
    {
        public int id;
        public string platform;
        public string version;
        public string build_type;
        public string updated_at;

        public SupportedSdk(int id, string platform, string buildType, string version)
        {
            this.id = id;
            this.platform = platform;
            build_type = buildType;
            this.version = version;
        }
    }
}