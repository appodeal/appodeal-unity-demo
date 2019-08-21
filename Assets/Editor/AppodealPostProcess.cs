using Appodeal.Unity.Editor.iOS;
using UnityEditor;
using UnityEditor.Callbacks;
using UnityEngine;

public class AppodealPostProcess : MonoBehaviour {

	[PostProcessBuild (100)]
	public static void OnPostProcessBuild (BuildTarget target, string path) {
		if (target.ToString () == "iOS" || target.ToString () == "iPhone") {
			iOSPostprocessUtils.PrepareProject (path);
		}
	}
}