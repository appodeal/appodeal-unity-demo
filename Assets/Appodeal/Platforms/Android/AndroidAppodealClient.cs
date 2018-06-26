using System;
using System.Collections.Generic;

using UnityEngine;
using AppodealAds.Unity.Api;
using AppodealAds.Unity.Common;

#if UNITY_ANDROID
namespace AppodealAds.Unity.Android {
	
	public class AndroidAppodealClient : IAppodealAdsClient {
		
        private bool isShow;
		AndroidJavaClass appodealClass;
		AndroidJavaClass appodealUnityClass;
		AndroidJavaClass appodealBannerClass;
		AndroidJavaObject appodealBannerInstance;
		AndroidJavaObject userSettings;
		AndroidJavaObject activity;
		AndroidJavaObject popupWindow, resources, displayMetrics, window, decorView, attributes, rootView;

		public AndroidJavaClass getAppodealClass() {
			if (appodealClass == null) {
				appodealClass = new AndroidJavaClass("com.appodeal.ads.Appodeal");
			}
			return appodealClass;
		}

		public AndroidJavaClass getAppodealUnityClass() {
			if (appodealUnityClass == null) {
				appodealUnityClass = new AndroidJavaClass("com.appodeal.unity.AppodealUnity");
			}
			return appodealUnityClass;
		}

		public AndroidJavaObject getAppodealBannerInstance() {
			if (appodealBannerInstance == null) {
				appodealBannerClass = new AndroidJavaClass("com.appodeal.unity.AppodealUnityBannerView");
				appodealBannerInstance = appodealBannerClass.CallStatic<AndroidJavaObject>("getInstance");
			}
			return appodealBannerInstance;
		}

		public AndroidJavaObject getActivity() {
			if (activity == null) {
				AndroidJavaClass playerClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
				activity = playerClass.GetStatic<AndroidJavaObject>("currentActivity");
			}
			return activity;
		}

		public void initialize(string appKey, int adTypes)  {
			getAppodealClass().CallStatic("setFramework", "unity", Appodeal.getPluginVersion());
			#if UNITY_5_6_0 || UNITY_5_6_1
				getAppodealClass().CallStatic("setFramework", "unity", Appodeal.getPluginVersion(), true, false);
				getAppodealClass().CallStatic("disableNetwork", getActivity(), "amazon_ads", Appodeal.BANNER);
			#endif

			if((adTypes & Appodeal.BANNER_VIEW) > 0) {
				getAppodealClass().CallStatic("setFramework", "unity", Appodeal.getPluginVersion(), false, false);
				getAppodealClass().CallStatic("disableNetwork", getActivity(), "amazon_ads", Appodeal.BANNER);
			}
			getAppodealClass().CallStatic("initialize", getActivity(), appKey, adTypes);
		}

		public bool show(int adTypes) {
			return getAppodealUnityClass().CallStatic<bool>("show", getActivity(), adTypes);
		}

		public bool show(int adTypes, string placement) {
			return getAppodealUnityClass().CallStatic<bool>("show", getActivity(), adTypes, placement);
		}

		public bool showBannerView(int YAxis, int XAxis, string Placement) {
			return getAppodealBannerInstance().Call<bool>("showBannerView", getActivity(), XAxis, YAxis, Placement);
		}

		public bool isLoaded(int adTypes) {
			return getAppodealClass().CallStatic<bool>("isLoaded", adTypes);
		}

		public void cache(int adTypes) {
			getAppodealClass().CallStatic("cache", getActivity(), adTypes);
		}
		
		public void hide(int adTypes) {
			getAppodealClass().CallStatic("hide", getActivity(), adTypes);
		}

		public void hideBannerView() {
			getAppodealBannerInstance().Call("hideBannerView", getActivity());	
		}

		public bool isPrecache(int adTypes) {
			return getAppodealClass().CallStatic<bool>("isPrecache", adTypes);
		}

		public void setAutoCache(int adTypes, bool autoCache)  {
			getAppodealClass().CallStatic("setAutoCache", adTypes, autoCache);	
		}

		public void onResume() {
			getAppodealClass().CallStatic("onResume", getActivity(), Appodeal.BANNER);
		}

		public void setSmartBanners(bool value) {
			getAppodealClass().CallStatic("setSmartBanners", value);
			getAppodealBannerInstance().Call("setSmartBanners", value);
		}

		public void setBannerAnimation(bool value) {
			getAppodealClass().CallStatic("setBannerAnimation", value);
		}

		public void setBannerBackground(bool value) {
			Debug.LogWarning("Not Supported by Android SDK");
		}

		public void setTabletBanners(bool value) {
			getAppodealClass().CallStatic("set728x90Banners", value);
		}

		public void setTesting(bool test) {
			getAppodealClass().CallStatic("setTesting", test);
		}

		public void setLogLevel(Appodeal.LogLevel logging) {
			switch(logging)  {
				case Appodeal.LogLevel.None: {
					getAppodealClass().CallStatic("setLogLevel", new AndroidJavaClass("com.appodeal.ads.utils.Log$LogLevel").GetStatic<AndroidJavaObject>("none"));
					break;
				}
				case Appodeal.LogLevel.Debug: {
					getAppodealClass().CallStatic("setLogLevel", new AndroidJavaClass("com.appodeal.ads.utils.Log$LogLevel").GetStatic<AndroidJavaObject>("debug"));
					break;
				}
				case Appodeal.LogLevel.Verbose: {
					getAppodealClass().CallStatic("setLogLevel", new AndroidJavaClass("com.appodeal.ads.utils.Log$LogLevel").GetStatic<AndroidJavaObject>("verbose"));
					break;
				}
			}
		}

		public void setChildDirectedTreatment(bool value) {
			getAppodealClass().CallStatic("setChildDirectedTreatment", value);
		}

		public void disableNetwork(string network) {
			getAppodealClass().CallStatic("disableNetwork", getActivity(), network);
		}

		public void disableNetwork(string network, int adTypes) {
			getAppodealClass().CallStatic("disableNetwork", getActivity(), network, adTypes);
		}

		public void disableLocationPermissionCheck()  {
			getAppodealClass().CallStatic("disableLocationPermissionCheck");
		}

		public void disableWriteExternalStoragePermissionCheck() {
			getAppodealClass().CallStatic("disableWriteExternalStoragePermissionCheck");
		}

		public void setTriggerOnLoadedOnPrecache(int adTypes, bool onLoadedTriggerBoth)  {
			getAppodealClass().CallStatic("setTriggerOnLoadedOnPrecache", adTypes, onLoadedTriggerBoth);
		}

		public void muteVideosIfCallsMuted(bool value) {
			getAppodealClass().CallStatic("muteVideosIfCallsMuted", value);
		}

		public void showTestScreen()  {
			getAppodealClass().CallStatic("startTestActivity", getActivity());
		}

		public string getVersion() {
			return getAppodealClass().CallStatic<string>("getVersion");
		}

		public bool canShow(int adTypes) {
			return getAppodealClass().CallStatic<bool>("canShow", adTypes);
		}

		public bool canShow(int adTypes, string placement) {
			return getAppodealClass().CallStatic<bool>("canShow", adTypes, placement);
		}
		
		public void setCustomRule(string name, bool value) {
			getAppodealClass().CallStatic("setCustomRule", name, value);
		}

		public void setCustomRule(string name, int value) {
			getAppodealClass().CallStatic("setCustomRule", name, value);
		}

		public void setCustomRule(string name, double value) {
			getAppodealClass().CallStatic("setCustomRule", name, value);
		}

		public void setCustomRule(string name, string value) {
			getAppodealClass().CallStatic("setCustomRule", name, value);
		}
		
		public void trackInAppPurchase(double amount, string currency) {
			getAppodealClass().CallStatic("trackInAppPurchase", getActivity(), amount, currency);
		}

		public string getRewardCurrency(string placement) {
			AndroidJavaObject reward = getAppodealClass().CallStatic<AndroidJavaObject>("getRewardParameters", placement);
			return reward.Get<string>("second");
		}

		public int getRewardAmount(string placement) {
			AndroidJavaObject reward = getAppodealClass().CallStatic<AndroidJavaObject>("getRewardParameters", placement);
			AndroidJavaObject integerValue = reward.Get<AndroidJavaObject>("first");
			return integerValue.Call<int>("intValue");
		}

		public string getRewardCurrency() {
			AndroidJavaObject reward = getAppodealClass().CallStatic<AndroidJavaObject>("getRewardParameters");
			return reward.Get<string>("second");
		}

		public int getRewardAmount() {
			AndroidJavaObject reward = getAppodealClass().CallStatic<AndroidJavaObject>("getRewardParameters");
			AndroidJavaObject integerValue = reward.Get<AndroidJavaObject>("first");
			return integerValue.Call<int>("intValue");
		}

		//User Settings

		public void getUserSettings()  {
			userSettings = getAppodealClass().CallStatic<AndroidJavaObject>("getUserSettings", getActivity());
		}

        public void setUserId(string id)  {
			userSettings.Call<AndroidJavaObject>("setUserId", id);
		}

		public void setAge(int age)  {
			userSettings.Call<AndroidJavaObject>("setAge", age);
		}

		public void setGender(UserSettings.Gender gender) {
			switch(gender)  {
				case UserSettings.Gender.OTHER: {
					userSettings.Call<AndroidJavaObject> ("setGender", new AndroidJavaClass("com.appodeal.ads.UserSettings$Gender").GetStatic<AndroidJavaObject>("OTHER"));	
					break;
				} 
				case UserSettings.Gender.MALE: {
					userSettings.Call<AndroidJavaObject> ("setGender", new AndroidJavaClass("com.appodeal.ads.UserSettings$Gender").GetStatic<AndroidJavaObject>("MALE"));
					break;
				} 
				case UserSettings.Gender.FEMALE: {
					userSettings.Call<AndroidJavaObject> ("setGender", new AndroidJavaClass("com.appodeal.ads.UserSettings$Gender").GetStatic<AndroidJavaObject>("FEMALE"));
					break;
				}
			}
		}

		public void setInterstitialCallbacks(IInterstitialAdListener listener)  {
			getAppodealClass().CallStatic("setInterstitialCallbacks", new AppodealInterstitialCallbacks(listener));
		}

		public void setNonSkippableVideoCallbacks(INonSkippableVideoAdListener listener) {
			getAppodealClass().CallStatic("setNonSkippableVideoCallbacks", new AppodealNonSkippableVideoCallbacks(listener));
		}

		public void setRewardedVideoCallbacks(IRewardedVideoAdListener listener) {
			getAppodealClass().CallStatic("setRewardedVideoCallbacks", new AppodealRewardedVideoCallbacks(listener));
		}

		public void setBannerCallbacks(IBannerAdListener listener) {
			getAppodealClass().CallStatic("setBannerCallbacks", new AppodealBannerCallbacks(listener));
		}

		public void requestAndroidMPermissions(IPermissionGrantedListener listener)  {
			getAppodealClass().CallStatic("requestAndroidMPermissions", getActivity(), new AppodealPermissionCallbacks(listener));
		}

	}
}
#endif