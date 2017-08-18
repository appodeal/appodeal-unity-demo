using System;
using UnityEngine;
using UnityEngine.UI;
using AppodealAds.Unity.Api;
using AppodealAds.Unity.Common;

// Example script showing how to invoke the Appodeal Ads Unity plugin.
public class AppodealDemo : MonoBehaviour, IInterstitialAdListener, IBannerAdListener, INonSkippableVideoAdListener, IRewardedVideoAdListener, IPermissionGrantedListener
{

	#if UNITY_EDITOR && !UNITY_ANDROID && !UNITY_IPHONE
		string appKey = "";
	#elif UNITY_ANDROID
		string appKey = "fee50c333ff3825fd6ad6d38cff78154de3025546d47a84f";
	#elif UNITY_IPHONE
		string appKey = "722fb56678445f72fe2ec58b2fa436688b920835405d3ca6";
	#else
		string appKey = "";
	#endif

	int buttonWidth, buttonHeight, toggleSize;
	GUIStyle buttonStyle;


	private bool testingToggle;
	private bool loggingToggle;

	void Awake () {
		Appodeal.requestAndroidMPermissions(this);
	}

	public void Init() {
		Appodeal.setLogging(loggingToggle);
		Appodeal.setTesting(testingToggle);

        //Example for UserSettings usage
        UserSettings settings = new UserSettings();
        settings.setAge(25).setGender(UserSettings.Gender.OTHER).setUserId("best_user_ever");

        Appodeal.setSmartBanners(true);
        Appodeal.setBannerAnimation(false);
		Appodeal.setBannerBackground(false);

		Appodeal.initialize (appKey, Appodeal.INTERSTITIAL | Appodeal.BANNER | Appodeal.REWARDED_VIDEO);

		Appodeal.setBannerCallbacks (this);
		Appodeal.setInterstitialCallbacks (this);
		Appodeal.setRewardedVideoCallbacks(this);

		Appodeal.setCustomRule("newBoolean", true);
		Appodeal.setCustomRule("newInt", 1234567890);
		Appodeal.setCustomRule("newDouble", 123.123456789);
		Appodeal.setCustomRule("newString", "newStringFromSDK");
	}



	void OnGUI() {
		InitStyles();

		if (GUI.Toggle(new Rect(Screen.width / 10, Screen.height / 10 - Screen.height / 15, toggleSize * 3, toggleSize), testingToggle, new GUIContent("Testing"))) {
			testingToggle = true;
		} else {
			testingToggle = false;
		}

		if (GUI.Toggle(new Rect(Screen.width / 2, Screen.height / 10 - Screen.height / 15, toggleSize * 3, toggleSize), loggingToggle, new GUIContent("Logging"))) {
			loggingToggle = true;
		} else {
			loggingToggle = false;
		}
		
		if (GUI.Button(new Rect(Screen.width / 10, Screen.height / 10, buttonWidth, buttonHeight), "INITIALIZE", buttonStyle))
			Init();
		
		if (GUI.Button(new Rect(Screen.width / 10, Screen.height / 10 + Screen.height / 10, buttonWidth, buttonHeight), "SHOW INTERSTITIAL", buttonStyle))
			showInterstitial();

		if (GUI.Button(new Rect(Screen.width / 10, Screen.height / 10 + 2 * Screen.height / 10, buttonWidth, buttonHeight), "SHOW REWARDED VIDEO", buttonStyle))
			showRewardedVideo();

		if (GUI.Button(new Rect(Screen.width / 10, Screen.height / 10 + 3 * Screen.height / 10, buttonWidth, buttonHeight), "SHOW BANNER", buttonStyle))
			showBanner();

		if (GUI.Button(new Rect(Screen.width / 10, Screen.height / 10 + 4 * Screen.height / 10, buttonWidth, buttonHeight), "HIDE BANNER", buttonStyle))
			hideBanner();

	}

	private void InitStyles() {
		if(buttonStyle == null) {
			buttonWidth = Screen.width - Screen.width / 5;
			buttonHeight = Screen.height / 15;

			toggleSize = Screen.height / 20;

			buttonStyle = new GUIStyle(GUI.skin.button);
			buttonStyle.fontSize = buttonHeight / 2;
			buttonStyle.normal.textColor = Color.red;
			buttonStyle.hover.textColor = Color.red;
			buttonStyle.active.textColor = Color.red;
			buttonStyle.focused.textColor = Color.red;

			buttonStyle.active.background = MakeTexure(buttonWidth, buttonHeight, Color.grey);
			buttonStyle.focused.background = MakeTexure(buttonWidth, buttonHeight, Color.grey);
			buttonStyle.normal.background = MakeTexure(buttonWidth, buttonHeight, Color.white);
			buttonStyle.hover.background = MakeTexure(buttonWidth, buttonHeight, Color.white);

			GUI.skin.toggle = buttonStyle;
		}
	}

	private Texture2D MakeTexure(int width, int height, Color color) {
		Color[] pix = new Color[width * height];
		for (int i = 0; i < pix.Length; ++i) {
					pix[ i ] = color;
		}
		Texture2D result = new Texture2D( width, height );
		result.SetPixels( pix );
		result.Apply();
		return result;
	}

	public void showInterstitial() {
		if(Appodeal.isLoaded(Appodeal.INTERSTITIAL)) {
			Appodeal.show (Appodeal.INTERSTITIAL);
		}
	}

	public void showRewardedVideo() {
		Appodeal.show (Appodeal.REWARDED_VIDEO);
	}

	public void showBanner() {
		Appodeal.show (Appodeal.BANNER_BOTTOM, "banner_button_click");
		//Appodeal.showBannerView(Screen.currentResolution.height - 300, Appodeal.BANNER_HORIZONTAL_CENTER, "banner_view");
	}


	public void hideBanner() {
		Appodeal.hide (Appodeal.BANNER);
		//Appodeal.hideBannerView ();
	}


	void OnApplicationFocus(bool hasFocus) {
		if(hasFocus) {
			Appodeal.orientationChange();
		}
	}


	#region Banner callback handlers

	public void onBannerLoaded() { Debug.Log("Banner loaded"); }
	public void onBannerFailedToLoad() { Debug.Log("Banner failed"); }
	public void onBannerShown() { Debug.Log("Banner opened"); }
	public void onBannerClicked() { Debug.Log("banner clicked"); }

	#endregion

	#region Interstitial callback handlers
	
	public void onInterstitialLoaded() { Debug.Log("Interstitial loaded"); }
	public void onInterstitialFailedToLoad() { Debug.Log("Interstitial failed to load"); }
	public void onInterstitialShown() { Debug.Log("Interstitial opened"); }
	public void onInterstitialClicked() { Debug.Log("Interstitial clicked"); }
	public void onInterstitialClosed() { Debug.Log("Interstitial closed"); }
	
	#endregion

	#region Non Skippable Video callback handlers
	public void onNonSkippableVideoLoaded() { Debug.Log("NonSkippable Video loaded"); }
	public void onNonSkippableVideoFailedToLoad() { Debug.Log("NonSkippable Video failed to load"); }
	public void onNonSkippableVideoShown() { Debug.Log("NonSkippable Video opened"); }
	public void onNonSkippableVideoClosed() { Debug.Log("NonSkippable Video closed"); }
	public void onNonSkippableVideoFinished() { Debug.Log("NonSkippable Video finished"); }
	#endregion

	#region Rewarded Video callback handlers
	public void onRewardedVideoLoaded() { Debug.Log("Rewarded Video loaded"); }
	public void onRewardedVideoFailedToLoad() { Debug.Log("Rewarded Video failed to load"); }
	public void onRewardedVideoShown() { Debug.Log("Rewarded Video opened"); }
	public void onRewardedVideoClosed() { Debug.Log("Rewarded Video closed"); }
	public void onRewardedVideoFinished(int amount, string name) { Debug.Log("Rewarded Video Reward: " + amount + " " + name); }
	#endregion

	#region Permission Grant callback handlers
	public void writeExternalStorageResponse(int result) { 
		if(result == 0) {
			Debug.Log("WRITE_EXTERNAL_STORAGE permission granted"); 
		} else {
			Debug.Log("WRITE_EXTERNAL_STORAGE permission grant refused"); 
		}
	}
	public void accessCoarseLocationResponse(int result) { 
		if(result == 0) {
			Debug.Log("ACCESS_COARSE_LOCATION permission granted"); 
		} else {
			Debug.Log("ACCESS_COARSE_LOCATION permission grant refused"); 
		}
	}
	#endregion

}