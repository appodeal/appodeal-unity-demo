using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Xml;
using UnityEditor;
using UnityEngine;

namespace AppodealAds.Unity.Editor.Checkers {
	public class ManifestChecker : CheckingStep {
		override public string getName () {
			return "Android Manifests";
		}

		public override bool isRequiredForPlatform (BuildTarget target) {
			if (target == BuildTarget.Android) return true;
			return false;
		}

		override public List<FixProblemInstruction> check () {
			List<FixProblemInstruction> instructions = new List<FixProblemInstruction> ();

			string[] manifests = Directory.GetFiles (Application.dataPath, "AndroidManifest.xml", SearchOption.AllDirectories);
			bool isGradleEnabled = AppodealUnityUtils.isGradleEnabled ();

			string bundleId = AppodealUnityUtils.getApplicationId ();
			int targetSDKVersionInt = AppodealUnityUtils.getAndroidTargetSDK ();
			int minSDKVersionInt = AppodealUnityUtils.getAndroidMinSDK ();
			string targetSDKVersion = targetSDKVersionInt.ToString ();
			string minSDKVersion = minSDKVersionInt.ToString ();
			bool sdkVersionsDefined = targetSDKVersionInt > 0 && minSDKVersionInt > 0;

			if (!sdkVersionsDefined) {
				instructions.Add (new FixProblemInstruction ("Our plugin can't find android target sdk version: " + targetSDKVersionInt + ", or android min sdk version: " + minSDKVersionInt + ". Make sure that your project is properly configured.", false));
			}

			foreach (string manifest in manifests) {
				if (manifest.Contains (Path.Combine ("Plugins", "Android"))) {
					if (!isGradleEnabled) // gradle works fine with ${applicationId}
					{
						string manifestText = File.ReadAllText (manifest);
						if (manifestText.Contains ("${applicationId}")) instructions.Add (new ReplaceAppIdWithRealBundle (manifest, bundleId));
					}
					if (sdkVersionsDefined) {
						XmlDocument doc = new XmlDocument ();
						doc.Load (manifest);
						XmlNode manNode = AppodealUnityUtils.XmlFindChildNode (doc, "manifest");
						string ns = manNode.GetNamespaceOfPrefix ("android");
						XmlElement usesSdkNode = (XmlElement) AppodealUnityUtils.XmlFindChildNode (manNode, "uses-sdk");
						if (usesSdkNode == null || !usesSdkNode.HasAttribute ("minSdkVersion", ns) || !usesSdkNode.HasAttribute ("targetSdkVersion", ns)) {
							instructions.Add (new AddMinAndTargetSDK (manifest, minSDKVersion, targetSDKVersion));
						}
					}
				}
			}
			return instructions;
		}
	}

	class ReplaceAppIdWithRealBundle : FixProblemInstruction {
		private string manifest;
		private string bundleId;
		public ReplaceAppIdWithRealBundle (string manifest, string bundleId) : base ("Gradle build system disabled and ${applicationId} is presented in " + AppodealUnityUtils.absolute2Relative (manifest) + ". You can replace the line with your actual bundle id (default action) or enable gradle build system.", true) {
			this.manifest = manifest;
			this.bundleId = bundleId;
		}
		public override void fixProblem () {
			string manifestText = File.ReadAllText (manifest);
			manifestText = manifestText.Replace ("${applicationId}", bundleId);
			File.WriteAllText (manifest, manifestText);
			AssetDatabase.ImportAsset (AppodealUnityUtils.absolute2Relative (manifest), ImportAssetOptions.ForceUpdate);
		}
	}

	class AddMinAndTargetSDK : FixProblemInstruction {
		private string manifest;
		private string minSDKVersion;
		private string targetSDKVersion;
		public AddMinAndTargetSDK (string manifest, string minSDK, string targetSDK) : base (AppodealUnityUtils.absolute2Relative (manifest) + " doesn't contain minSdkVersion or targetSdkVersion (or both). It leads to unwanted permissions in the final build.", true) {
			this.manifest = manifest;
			this.minSDKVersion = minSDK;
			this.targetSDKVersion = targetSDK;
		}
		public override void fixProblem () {
			XmlDocument doc = new XmlDocument ();
			doc.Load (manifest);
			XmlNode manNode = AppodealUnityUtils.XmlFindChildNode (doc, "manifest");
			string ns = manNode.GetNamespaceOfPrefix ("android");
			XmlElement usesSdkNode = (XmlElement) AppodealUnityUtils.XmlFindChildNode (manNode, "uses-sdk");
			if (usesSdkNode == null) {
				usesSdkNode = AppodealUnityUtils.XmlCreateTag (doc, "uses-sdk");
				manNode.AppendChild (usesSdkNode);
			}
			if (!usesSdkNode.HasAttribute ("minSdkVersion", ns)) usesSdkNode.SetAttribute ("minSdkVersion", ns, minSDKVersion);
			usesSdkNode.SetAttribute ("targetSdkVersion", ns, targetSDKVersion);
			doc.Save (manifest);
			AssetDatabase.ImportAsset (AppodealUnityUtils.absolute2Relative (manifest), ImportAssetOptions.ForceUpdate);
		}
	}
}