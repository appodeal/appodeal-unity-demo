using System;
using System.Diagnostics.CodeAnalysis;

namespace Appodeal.Editor.AppodealManager.Data
{
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "ClassNeverInstantiated.Local")]
    [SuppressMessage("ReSharper", "ConvertToAutoProperty")]
    [Serializable]
    public class NetworkDependency
    {
        public string name;
        public iOSDependency ios_info;
        public AndroidDependency android_info;

        [Serializable]
        public class AndroidDependency
        {
            public string name;
            public string version;
            public string unity_content;

            public AndroidDependency(string name, string version, string unity_content)
            {
                this.name = name;
                this.version = version;
                this.unity_content = unity_content;
            }
        }

        [Serializable]
        public class iOSDependency
        {
            public string name;
            public string version;
            public string unity_content;

            public iOSDependency(string name, string version, string unity_content)
            {
                this.name = name;
                this.version = version;
                this.unity_content = unity_content;
            }
        }
    }
}