using System;
using System.Diagnostics.CodeAnalysis;

namespace Appodeal.Editor.AppodealManager.Data
{
    [Serializable]
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    public class AppodealUnityPlugin
    {
        public string created_at;
        public string version;
        public string build_type;
        public SupportedSdk[] sdks;
        public string name;
        public string source;
        public string updated_at;
        public long id;

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

        [Serializable]
        public class SupportedSdk
        {
            public string build_type;
            public string platform;
            public int id;
            public string version;

            public SupportedSdk(int id, string platform, string buildType, string version)
            {
                this.id = id;
                this.platform = platform;
                build_type = buildType;
                this.version = version;
            }
        }
    }
}