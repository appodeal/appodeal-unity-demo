using AppodealAds.Unity.Api;
using AppodealAds.Unity.Common;
using UnityEngine;

// Example script showing how to invoke the Appodeal Ads Unity plugin.
public class AppodealDemo : MonoBehaviour, IPermissionGrantedListener, IInterstitialAdListener, IBannerAdListener, IMrecAdListener, INonSkippableVideoAdListener, IRewardedVideoAdListener {

#if UNITY_EDITOR && !UNITY_ANDROID && !UNITY_IPHONE
	string appKey = "";
#elif UNITY_ANDROID
	string appKey = "fee50c333ff3825fd6ad6d38cff78154de3025546d47a84f";
#elif UNITY_IPHONE
	string appKey = "4b46ef930cd37cf11da84ae4d41019abb7234d5bbce3f000";
#else
	string appKey = "";
#endif

	string interstitialLabel = "CACHE INTERSTITIAL";
	string rewardedLabel = "Loading";

	int buttonWidth, buttonHeight, heightScale, widthScale, toggleSize;
	GUIStyle buttonStyle;

	bool testingToggle;
	bool loggingToggle;

	public void Awake () {
		Appodeal.requestAndroidMPermissions (this);
	}

	public void Init () {

		if (loggingToggle) {
			Appodeal.setLogLevel (Appodeal.LogLevel.Verbose);
		} else {
			Appodeal.setLogLevel (Appodeal.LogLevel.None);
		}
		Appodeal.setTesting (testingToggle);

		//Example for UserSettings usage
		UserSettings settings = new UserSettings ();
		settings.setAge (25).setGender (UserSettings.Gender.OTHER).setUserId ("best_user_ever");

		Appodeal.disableLocationPermissionCheck ();
		Appodeal.disableWriteExternalStoragePermissionCheck ();

		Appodeal.setTriggerOnLoadedOnPrecache (Appodeal.INTERSTITIAL, true);

		Appodeal.setSmartBanners (true);
		Appodeal.setBannerAnimation (false);
		Appodeal.setTabletBanners (false);
		Appodeal.setBannerBackground (false);

		Appodeal.setChildDirectedTreatment (false);
		Appodeal.muteVideosIfCallsMuted (true);
		Appodeal.setAutoCache (Appodeal.INTERSTITIAL, false);

		Appodeal.setExtraData (ExtraData.APPSFLYER_ID, "1527256526604-2129416");

		int gdpr = PlayerPrefs.GetInt ("result_gdpr_sdk", 0);
		Debug.Log ("result_gdpr_sdk: " + gdpr);
		Appodeal.initialize (appKey, Appodeal.INTERSTITIAL | Appodeal.BANNER_VIEW | Appodeal.REWARDED_VIDEO | Appodeal.MREC, gdpr == 1);

		Appodeal.setBannerCallbacks (this);
		Appodeal.setInterstitialCallbacks (this);
		Appodeal.setRewardedVideoCallbacks (this);
		Appodeal.setMrecCallbacks (this);

		Appodeal.setSegmentFilter ("newBoolean", true);
		Appodeal.setSegmentFilter ("newInt", 1234567890);
		Appodeal.setSegmentFilter ("newDouble", 123.123456789);
		Appodeal.setSegmentFilter ("newString", "newStringFromSDK");
	}

	void OnGUI () {
		InitStyles ();

		if (GUI.Toggle (new Rect (widthScale, heightScale - Screen.height / 18, toggleSize * 3, toggleSize), testingToggle, new GUIContent ("Testing"))) {
			testingToggle = true;
		} else {
			testingToggle = false;
		}

		if (GUI.Toggle (new Rect (Screen.width / 2, heightScale - Screen.height / 18, toggleSize * 3, toggleSize), loggingToggle, new GUIContent ("Logging"))) {
			loggingToggle = true;
		} else {
			loggingToggle = false;
		}

		if (GUI.Button (new Rect (widthScale, heightScale, buttonWidth, buttonHeight), "INITIALIZE", buttonStyle))
			Init ();

		if (GUI.Button (new Rect (widthScale, heightScale + heightScale, buttonWidth, buttonHeight), interstitialLabel, buttonStyle))
			showInterstitial ();

		if (GUI.Button (new Rect (widthScale, heightScale + 2 * heightScale, buttonWidth, buttonHeight), rewardedLabel, buttonStyle))
			showRewardedVideo ();

		if (GUI.Button (new Rect (widthScale, heightScale + 3 * heightScale, buttonWidth, buttonHeight), "SHOW BANNER", buttonStyle))
			showBanner ();

		if (GUI.Button (new Rect (widthScale, heightScale + 4 * heightScale, buttonWidth, buttonHeight), "HIDE BANNER", buttonStyle))
			hideBanner ();

		if (GUI.Button (new Rect (widthScale, heightScale + 5 * heightScale, buttonWidth, buttonHeight), "SHOW BANNER VIEW", buttonStyle))
			showBannerView ();

		if (GUI.Button (new Rect (widthScale, heightScale + 6 * heightScale, buttonWidth, buttonHeight), "HIDE BANNER VIEW", buttonStyle))
			hideBannerView ();

		if (GUI.Button (new Rect (widthScale, heightScale + 7 * heightScale, buttonWidth, buttonHeight), "SHOW MREC VIEW", buttonStyle))
			showMrecView ();

		if (GUI.Button (new Rect (widthScale, heightScale + 8 * heightScale, buttonWidth, buttonHeight), "HIDE MREC VIEW", buttonStyle))
			hideMrecView ();

#if UNITY_ANDROID
		if (GUI.Button (new Rect (widthScale, heightScale + 9 * heightScale, buttonWidth, buttonHeight), "SHOW TEST SCREEN", buttonStyle))
			Appodeal.showTestScreen ();
#endif

	}

	private void InitStyles () {
		if (buttonStyle == null) {
			buttonWidth = Screen.width - Screen.width / 5;
			buttonHeight = Screen.height / 18;
			heightScale = Screen.height / 15;
			widthScale = Screen.width / 10;
			toggleSize = Screen.height / 20;

			buttonStyle = new GUIStyle (GUI.skin.button);
			buttonStyle.fontSize = buttonHeight / 2;
			buttonStyle.normal.textColor = Color.red;
			buttonStyle.hover.textColor = Color.red;
			buttonStyle.active.textColor = Color.red;
			buttonStyle.focused.textColor = Color.red;

			buttonStyle.active.background = MakeTexure (buttonWidth, buttonHeight, Color.grey);
			buttonStyle.focused.background = MakeTexure (buttonWidth, buttonHeight, Color.grey);
			buttonStyle.normal.background = MakeTexure (buttonWidth, buttonHeight, Color.white);
			buttonStyle.hover.background = MakeTexure (buttonWidth, buttonHeight, Color.white);

			GUI.skin.toggle = buttonStyle;
		}
	}

	private Texture2D MakeTexure (int width, int height, Color color) {
		Color[] pix = new Color[width * height];
		for (int i = 0; i < pix.Length; ++i) {
			pix[i] = color;
		}
		Texture2D result = new Texture2D (width, height);
		result.SetPixels (pix);
		result.Apply ();
		return result;
	}

	public void showInterstitial () {
		if (Appodeal.isLoaded (Appodeal.INTERSTITIAL) && !Appodeal.isPrecache (Appodeal.INTERSTITIAL)) {
			Appodeal.show (Appodeal.INTERSTITIAL);
		} else {
			Appodeal.cache (Appodeal.INTERSTITIAL);
		}
	}

	public void showRewardedVideo () {
		Debug.Log ("Predicted eCPM for Rewarded Video: " + Appodeal.getPredictedEcpm (Appodeal.REWARDED_VIDEO));
		Debug.Log ("Reward currency: " + Appodeal.getRewardParameters ().Key + ", amount: " + Appodeal.getRewardParameters ().Value);
		if (Appodeal.canShow (Appodeal.REWARDED_VIDEO)) {
			Appodeal.show (Appodeal.REWARDED_VIDEO);
		}
	}

	public void showBanner () {
		Appodeal.show (Appodeal.BANNER_BOTTOM, "banner_button_click");
	}

	public void showBannerView () {
		Appodeal.showBannerView (Screen.currentResolution.height - Screen.currentResolution.height / 10, Appodeal.BANNER_HORIZONTAL_CENTER, "default");
	}

	public void showMrecView () {
		Appodeal.showMrecView (Screen.currentResolution.height - Screen.currentResolution.height / 10, Appodeal.BANNER_HORIZONTAL_CENTER, "default");
	}

	public void hideBanner () {
		Appodeal.hide (Appodeal.BANNER);
	}

	public void hideBannerView () {
		Appodeal.hideBannerView ();
	}

	public void hideMrecView () {
		Appodeal.hideMrecView ();
	}

	public void updateConsent(){
		Appodeal.updateConsent(true);
	}

	void OnApplicationFocus (bool hasFocus) {
		if (hasFocus) {
			Appodeal.onResume (Appodeal.BANNER_BOTTOM);
		}
	}

	#region Banner callback handlers
	public void onBannerLoaded (bool precache) { print ("banner loaded"); }
	public void onBannerFailedToLoad () { print ("banner failed"); }
	public void onBannerShown () { print ("banner opened"); }
	public void onBannerClicked () { print ("banner clicked"); }
	public void onBannerExpired () { print ("banner expired"); }
	#endregion

	#region Mrec callback handlers
	public void onMrecLoaded (bool precache) { print ("mrec loaded"); }
	public void onMrecFailedToLoad () { print ("mrec failed"); }
	public void onMrecShown () { print ("mrec opened"); }
	public void onMrecClicked () { print ("mrec clicked"); }
	public void onMrecExpired () { print ("mrec expired"); }
	#endregion

	#region Interstitial callback handlers
	public void onInterstitialLoaded (bool isPrecache) {
		interstitialLabel = "SHOW INTERSTITIAL";
		print ("Appodeal. Interstitial loaded");
	}
	public void onInterstitialFailedToLoad () { print ("Appodeal. Interstitial failed"); }
	public void onInterstitialShown () {
		interstitialLabel = "CACHE INTERSTITIAL";
		print ("Appodeal. Interstitial opened");
	}
	public void onInterstitialClosed () { print ("Appodeal. Interstitial closed"); }
	public void onInterstitialClicked () { print ("Appodeal. Interstitial clicked"); }
	public void onInterstitialExpired () { print ("Appodeal. Interstitial expired"); }
	#endregion

	#region Non Skippable Video callback handlers
	public void onNonSkippableVideoLoaded (bool isPrecache) { Debug.Log ("NonSkippable Video loaded"); }
	public void onNonSkippableVideoFailedToLoad () { Debug.Log ("NonSkippable Video failed to load"); }
	public void onNonSkippableVideoShown () { Debug.Log ("NonSkippable Video opened"); }
	public void onNonSkippableVideoClosed (bool isFinished) { Debug.Log ("NonSkippable Video, finished:" + isFinished); }
	public void onNonSkippableVideoFinished () { Debug.Log ("NonSkippable Video finished"); }
	public void onNonSkippableVideoExpired () { Debug.Log ("NonSkippable Video expired"); }
	#endregion

	#region Rewarded Video callback handlers
	public void onRewardedVideoLoaded (bool isPrecache) {
		rewardedLabel = "SHOW REWARDED";
		print ("Appodeal. Video loaded");
	}
	public void onRewardedVideoFailedToLoad () { print ("Appodeal. Video failed"); }
	public void onRewardedVideoShown () {
		rewardedLabel = "Loading";
		print ("Appodeal. Video shown");
	}
	public void onRewardedVideoClosed (bool finished) { print ("Appodeal. Video closed"); }
	public void onRewardedVideoFinished (double amount, string name) { print ("Appodeal. Reward: " + amount + " " + name); }
	public void onRewardedVideoExpired () { print ("Appodeal. Video expired"); }
	public void onRewardedVideoClicked () { print ("Appodeal. Video clicked"); }
	#endregion

	public void writeExternalStorageResponse (int result) {
		if (result == 0) {
			Debug.Log ("WRITE_EXTERNAL_STORAGE permission granted");
		} else {
			Debug.Log ("WRITE_EXTERNAL_STORAGE permission grant refused");
		}
	}
	public void accessCoarseLocationResponse (int result) {
		if (result == 0) {
			Debug.Log ("ACCESS_COARSE_LOCATION permission granted");
		} else {
			Debug.Log ("ACCESS_COARSE_LOCATION permission grant refused");
		}
	}

}