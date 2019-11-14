using UnityEditor;
using UnityEngine;
using System.Reflection;
using System;
using System.Xml;
using System.Text.RegularExpressions;
using System.IO;
using System.Diagnostics;

public class AppodealUnityUtils
{
	private const string UNITY_ANDROID_VERSION_ENUM_PREFIX = "AndroidApiLevel";
	private static BindingFlags PublicStaticFlags = BindingFlags.Public | BindingFlags.Static;
	[Flags]
	public enum AndroidArchitecture
	{
		invalid = 0,
		armv7 = 1 << 0,
		arm64 = 1 << 1,
		x86 = 1 << 2,
	}
	public static string getApplicationId ()
	{
		string bundleId;
		PropertyInfo appId = typeof (PlayerSettings).GetProperty ("applicationIdentifier", PublicStaticFlags);
		if (appId == null) appId = typeof (PlayerSettings).GetProperty ("bundleIdentifier", PublicStaticFlags);
		bundleId = (string)appId.GetValue (null, null);
		return bundleId;
	}

	public static bool isGradleEnabled ()
	{
		bool isGradleEnabledVal = false;
		PropertyInfo androidBuildSystem = typeof (EditorUserBuildSettings).GetProperty ("androidBuildSystem", PublicStaticFlags);
		if (androidBuildSystem != null) {
			object gradle = Enum.Parse (androidBuildSystem.PropertyType, "Gradle");
			isGradleEnabledVal = androidBuildSystem.GetValue (null, null).Equals (gradle);
		}
		return isGradleEnabledVal;
	}

	public static bool isGradleAvailable ()
	{
		PropertyInfo androidBuildSystem = typeof (EditorUserBuildSettings).GetProperty ("androidBuildSystem", PublicStaticFlags);
		return androidBuildSystem != null;
	}

	public static void enableGradleBuildSystem ()
	{
		PropertyInfo androidBuildSystem = typeof (EditorUserBuildSettings).GetProperty ("androidBuildSystem", PublicStaticFlags);
		if (androidBuildSystem != null) {
			object gradle = Enum.Parse (androidBuildSystem.PropertyType, "Gradle");
			androidBuildSystem.SetValue (null, gradle, null);
		}
	}

	public static string absolute2Relative (string absolutepath)
	{
		string relativepath = absolutepath;
		if (absolutepath.StartsWith (Application.dataPath, StringComparison.Ordinal)) {
			relativepath = "Assets" + absolutepath.Substring (Application.dataPath.Length);
		}
		return relativepath;
	}

	public static string relative2Absolute (string relativepath)
	{
		string absolutepath = relativepath;
		if (!relativepath.StartsWith (Application.dataPath, StringComparison.Ordinal)) {
			absolutepath = Application.dataPath + absolutepath.Substring ("Assets".Length);
		}
		return absolutepath;
	}

	public static int getAndroidMinSDK ()
	{
		int minSdkVersion = VersionFromAndroidSDKVersionsEnum (
			PlayerSettings.Android.minSdkVersion.ToString ());
		return minSdkVersion;
	}

	public static int getAndroidTargetSDK ()
	{
		PropertyInfo property = typeof (UnityEditor.PlayerSettings.Android).GetProperty ("targetSdkVersion");
		int target = -1;
		if (property != null)
			target = VersionFromAndroidSDKVersionsEnum (Enum.GetName (property.PropertyType, property.GetValue (null, null)));
		if (target == -1)
			target = GetLatestInstalledAndroidPlatformVersion ();
		return target;
	}

	private static int VersionFromAndroidSDKVersionsEnum (string enumName)
	{
		if (enumName.StartsWith (UNITY_ANDROID_VERSION_ENUM_PREFIX)) {
			enumName = enumName.Substring (UNITY_ANDROID_VERSION_ENUM_PREFIX.Length);
		}
		if (enumName == "Auto") {
			return -1;
		}
		int versionVal;
		Int32.TryParse (enumName, out versionVal);
		return versionVal;
	}

	private static int GetLatestInstalledAndroidPlatformVersion ()
	{
		string androidSDKPath = EditorPrefs.GetString ("AndroidSdkRoot");
		if (string.IsNullOrEmpty (androidSDKPath)) return -1;

		string [] platforms = Directory.GetDirectories (Path.Combine (androidSDKPath, "platforms"), "*", SearchOption.TopDirectoryOnly);
		Regex buildToolsRegex = new Regex (@"android-(\d+)$", RegexOptions.Compiled);
		int latestVersion = 0;
		foreach (string platform in platforms) {
			Match match = buildToolsRegex.Match (platform);
			int thisVersion = Int32.Parse (match.Groups [1].Value);
			if (thisVersion > latestVersion) latestVersion = thisVersion;
		}
		return latestVersion;
	}

	public static AndroidArchitecture getAndroidArchitecture ()
	{
		PropertyInfo targetArchitectures = typeof (UnityEditor.PlayerSettings.Android).GetProperty ("targetArchitectures");
		AndroidArchitecture arch = AndroidArchitecture.invalid;
		//targetArch ARMv7 (armeabi-v7a), ARM64 (arm64-v8a), X86 (x86)
		if (targetArchitectures != null) {
			object armv7 = Enum.Parse (targetArchitectures.PropertyType, "ARMv7");
			int armv7_int = (int)Convert.ChangeType (armv7, typeof (int));
			object arm64 = Enum.Parse (targetArchitectures.PropertyType, "ARM64");
			int arm64_int = (int)Convert.ChangeType (arm64, typeof (int));
			object x64 = Enum.Parse (targetArchitectures.PropertyType, "X86");
			int x64_int = (int)Convert.ChangeType (x64, typeof (int));
			object currentArch = targetArchitectures.GetValue (null, null);
			int currentArch_int = (int)Convert.ChangeType (currentArch, typeof (int));
			if ((currentArch_int & armv7_int) == armv7_int) arch |= AndroidArchitecture.armv7;
			if ((currentArch_int & arm64_int) == arm64_int) arch |= AndroidArchitecture.arm64;
			if ((currentArch_int & x64_int) == x64_int) arch |= AndroidArchitecture.x86;
		} else {
			targetArchitectures = typeof (UnityEditor.PlayerSettings.Android).GetProperty ("targetDevice");
			if (targetArchitectures != null)
			{
				object currentDevice = targetArchitectures.GetValue (null, null);
				object armv7 = Enum.Parse (targetArchitectures.PropertyType, "ARMv7");
				object x64 = Enum.Parse (targetArchitectures.PropertyType, "x86");
				object fat = Enum.Parse (targetArchitectures.PropertyType, "FAT");
				if (currentDevice.Equals (armv7)) arch = AndroidArchitecture.armv7;
				else if (currentDevice.Equals (x64)) arch = AndroidArchitecture.x86;
				else if (currentDevice.Equals (fat)) arch = AndroidArchitecture.armv7 | AndroidArchitecture.x86;
			}
		}
		return arch;
	}

	public static string combinePaths (params string [] paths)
	{
		string result = paths [0];
		for (int i = 1; i < paths.Length; i++) {
			result = Path.Combine (result, paths [i]);
		}
		return result;
	}

	public static int compareVersions (string v1, string v2)
	{
		Regex re = new Regex (@"\d+(\.\d+)+");
		Match match1 = re.Match (v1);
		Match match2 = re.Match (v2);
		return new Version (match1.ToString ()).CompareTo (new Version (match2.ToString ()));
	}

	public static Texture2D makeColorTexture (int width, int height, Color color)
	{
		Color [] colors = new Color [width * height];
		for (int i = 0; i < colors.Length; ++i)
			colors [i] = color;

		Texture2D retval = new Texture2D (width, height);
		retval.SetPixels (colors);
		retval.Apply ();
		return retval;
	}

	public static XmlNode XmlFindChildNode (XmlNode parent, string name)
	{
		XmlNode curr = parent.FirstChild;
		while (curr != null) {
			if (curr.Name.Equals (name)) {
				return curr;
			}
			curr = curr.NextSibling;
		}
		return null;
	}

	public static XmlElement XmlCreateTag (XmlDocument doc, string tag)
	{
		XmlElement permissionElement = doc.CreateElement (tag);
		return permissionElement;
	}

	public static string getXcodeVersion ()
	{
		string profilerOutput = null;
		try {
			Process p = new Process ();
			p.StartInfo = new ProcessStartInfo ("system_profiler", "SPDeveloperToolsDataType | grep \"Xcode:\"");
			p.StartInfo.CreateNoWindow = false;
			p.StartInfo.RedirectStandardOutput = true;
			p.StartInfo.UseShellExecute = false;
			p.Start ();
			p.WaitForExit ();
			profilerOutput = p.StandardOutput.ReadToEnd ();
			Regex re = new Regex (@"Xcode: (?<version>\d+(\.\d+)+)");
			Match m = re.Match (profilerOutput);
			if (m.Success) profilerOutput = m.Groups ["version"].Value;
		} catch (Exception e) {
			UnityEngine.Debug.LogError (e.Message);
		}
		return profilerOutput;
	}
}
