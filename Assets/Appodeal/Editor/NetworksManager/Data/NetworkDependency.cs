using System;
using System.Collections.Generic;
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
            public List<Dependency> dependencies;

            public AndroidDependency(string name, string version, string unity_content)
            {
                this.name = name;
                this.version = version;
                this.unity_content = unity_content;
            }

            public AndroidDependency(string name, string version, string unity_content, List<Dependency> dependencies)
            {
                this.name = name;
                this.version = version;
                this.unity_content = unity_content;
                this.dependencies = dependencies;
            }
        }

        [Serializable]
        public class iOSDependency
        {
            public string name;
            public string version;
            public string unity_content;
            public List<Dependency> dependencies;

            public iOSDependency(string name, string version, string unity_content)
            {
                this.name = name;
                this.version = version;
                this.unity_content = unity_content;
            }

            public iOSDependency(string name, string version, string unity_content, List<Dependency> dependencies)
            {
                this.name = name;
                this.version = version;
                this.unity_content = unity_content;
                this.dependencies = dependencies;
            }
        }

        [Serializable]
        public class Dependency
        {
            public string name;
            public string version;
        }
    }
}