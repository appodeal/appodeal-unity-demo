using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using System.IO;
using System.Xml;
using AppodealAds.Unity.Editor.Utils;
using UnityEditor;
using UnityEngine;

namespace AppodealAds.Unity.Editor.Checkers
{
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    public class ManifestChecker : CheckingStep
    {
        public override string getName()
        {
            return "Android Manifests";
        }

        public override bool isRequiredForPlatform(BuildTarget target)
        {
            return target == BuildTarget.Android;
        }

        public override List<FixProblemInstruction> check()
        {
            var instructions = new List<FixProblemInstruction>();
            var manifests =
                Directory.GetFiles(Application.dataPath, "AndroidManifest.xml", SearchOption.AllDirectories);
            var isGradleEnabled = AppodealUnityUtils.isGradleEnabled();
            var bundleId = AppodealUnityUtils.getApplicationId();
            var targetSDKVersionInt = AppodealUnityUtils.getAndroidTargetSDK();
            var minSDKVersionInt = AppodealUnityUtils.getAndroidMinSDK();
            var targetSDKVersion = targetSDKVersionInt.ToString();
            var minSDKVersion = minSDKVersionInt.ToString();
            var sdkVersionsDefined = targetSDKVersionInt > 0 && minSDKVersionInt > 0;

            if (!sdkVersionsDefined)
            {
                instructions.Add(new FixProblemInstruction(
                    "Our plugin can't find android target sdk version: " + targetSDKVersionInt +
                    ", or android min sdk version: " + minSDKVersionInt +
                    ". Make sure that your project is properly configured.", false));
            }

            foreach (var manifest in manifests)
            {
                if (!manifest.Contains(Path.Combine("Plugins", "Android"))) continue;
                if (!isGradleEnabled)
                {
                    var manifestText = File.ReadAllText(manifest);
                    if (manifestText.Contains("${applicationId}"))
                        instructions.Add(new ReplaceAppIdWithRealBundle(manifest, bundleId));
                }

                if (!sdkVersionsDefined) continue;
                var doc = new XmlDocument();
                doc.Load(manifest);
                var manNode = AppodealUnityUtils.XmlFindChildNode(doc, "manifest");
                var ns = manNode.GetNamespaceOfPrefix("android");
                var usesSdkNode = (XmlElement) AppodealUnityUtils.XmlFindChildNode(manNode, "uses-sdk");
                if (usesSdkNode == null || !usesSdkNode.HasAttribute("minSdkVersion", ns) ||
                    !usesSdkNode.HasAttribute("targetSdkVersion", ns))
                {
                    instructions.Add(new AddMinAndTargetSDK(manifest, minSDKVersion, targetSDKVersion));
                }
            }

            return instructions;
        }
    }

    internal class ReplaceAppIdWithRealBundle : FixProblemInstruction
    {
        private readonly string manifest;
        private readonly string bundleId;

        public ReplaceAppIdWithRealBundle(string manifest, string bundleId) : base(
            "Gradle build system disabled and ${applicationId} is presented in " +
            AppodealUnityUtils.absolute2Relative(manifest) +
            ". You can replace the line with your actual bundle id (default action) or enable gradle build system.",
            true)
        {
            this.manifest = manifest;
            this.bundleId = bundleId;
        }

        public override void fixProblem()
        {
            var manifestText = File.ReadAllText(manifest);
            manifestText = manifestText.Replace("${applicationId}", bundleId);
            File.WriteAllText(manifest, manifestText);
            AssetDatabase.ImportAsset(AppodealUnityUtils.absolute2Relative(manifest), ImportAssetOptions.ForceUpdate);
        }
    }

    [SuppressMessage("ReSharper", "InconsistentNaming")]
    internal class AddMinAndTargetSDK : FixProblemInstruction
    {
        private readonly string manifest;
        private readonly string minSDKVersion;
        private readonly string targetSDKVersion;

        public AddMinAndTargetSDK(string manifest, string minSDK, string targetSDK) : base(
            AppodealUnityUtils.absolute2Relative(manifest) +
            " doesn't contain minSdkVersion or targetSdkVersion (or both). It leads to unwanted permissions in the final build.",
            true)
        {
            this.manifest = manifest;
            minSDKVersion = minSDK;
            targetSDKVersion = targetSDK;
        }

        public override void fixProblem()
        {
            var doc = new XmlDocument();
            doc.Load(manifest);
            var manNode = AppodealUnityUtils.XmlFindChildNode(doc, "manifest");
            var ns = manNode.GetNamespaceOfPrefix("android");
            var usesSdkNode = (XmlElement) AppodealUnityUtils.XmlFindChildNode(manNode, "uses-sdk");
            if (usesSdkNode == null)
            {
                usesSdkNode = AppodealUnityUtils.XmlCreateTag(doc, "uses-sdk");
                manNode.AppendChild(usesSdkNode);
            }

            if (!usesSdkNode.HasAttribute("minSdkVersion", ns))
                usesSdkNode.SetAttribute("minSdkVersion", ns, minSDKVersion);
            usesSdkNode.SetAttribute("targetSdkVersion", ns, targetSDKVersion);
            doc.Save(manifest);
            AssetDatabase.ImportAsset(AppodealUnityUtils.absolute2Relative(manifest), ImportAssetOptions.ForceUpdate);
        }
    }
}