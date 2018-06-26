using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using AppodealAds.Unity.Common;

namespace AppodealAds.Unity.Api {
	public class Appodeal {

		public const int NONE                = 0;
		public const int INTERSTITIAL 		 = 3;
		public const int BANNER              = 4;
		public const int BANNER_BOTTOM       = 8;
		public const int BANNER_TOP          = 16;
		public const int BANNER_VIEW         = 64;
		public const int REWARDED_VIDEO      = 128;
		#if UNITY_ANDROID || UNITY_EDITOR
		public const int NON_SKIPPABLE_VIDEO = 128;
		#elif UNITY_IPHONE
		public const int NON_SKIPPABLE_VIDEO = 256;
		#endif

		public const int BANNER_HORIZONTAL_SMART = -1;
		public const int BANNER_HORIZONTAL_CENTER = -2;
		public const int BANNER_HORIZONTAL_RIGHT = -3;
		public const int BANNER_HORIZONTAL_LEFT = -4;

		public const string APPODEAL_PLUGIN_VERSION = "2.8.19";

		public enum LogLevel { None, Debug, Verbose };

		private static IAppodealAdsClient client;
		private static IAppodealAdsClient getInstance() {
			if (client == null) {
				client = AppodealAdsClientFactory.GetAppodealAdsClient();
			}
			return client;
		}

		public static void initialize(string appKey, int adTypes) {
			#if UNITY_ANDROID && !UNITY_EDITOR || UNITY_IPHONE && !UNITY_EDITOR
			getInstance().initialize(appKey, adTypes);
			#endif
		}

		public static bool show(int adTypes) {
			bool show = false;
			#if UNITY_ANDROID && !UNITY_EDITOR || UNITY_IPHONE && !UNITY_EDITOR
			show = getInstance().show (adTypes);
			#endif
			return show;
		}

		public static bool show(int adTypes, string placement) {
			bool show = false;
			#if UNITY_ANDROID && !UNITY_EDITOR || UNITY_IPHONE && !UNITY_EDITOR && !UNITY_EDITOR
			show = getInstance().show (adTypes, placement);
			#endif
			return show;
		}

		public static bool showBannerView(int YAxis, int XGravity, string placement) {
			bool show = false;
			#if UNITY_ANDROID && !UNITY_EDITOR || UNITY_IPHONE && !UNITY_EDITOR
			show = getInstance().showBannerView (YAxis, XGravity, placement);
			#endif
			return show;
		}

		public static bool isLoaded(int adTypes) {
			bool isLoaded = false;
			#if UNITY_ANDROID && !UNITY_EDITOR || UNITY_IPHONE && !UNITY_EDITOR
			isLoaded = getInstance().isLoaded (adTypes);
			#endif
			return isLoaded;
		}

		public static void cache(int adTypes) {
			#if UNITY_ANDROID && !UNITY_EDITOR || UNITY_IPHONE && !UNITY_EDITOR
			getInstance().cache (adTypes);
			#endif
		}

		public static void hide(int adTypes) {
			#if UNITY_ANDROID && !UNITY_EDITOR || UNITY_IPHONE && !UNITY_EDITOR
			getInstance().hide (adTypes);
			#endif
		}

		public static void hideBannerView() {
			#if UNITY_ANDROID && !UNITY_EDITOR || UNITY_IPHONE && !UNITY_EDITOR
			getInstance().hideBannerView ();
			#endif
		}

		public static void setAutoCache(int adTypes, bool autoCache) {
			#if UNITY_ANDROID && !UNITY_EDITOR || UNITY_IPHONE && !UNITY_EDITOR
			getInstance().setAutoCache (adTypes, autoCache);
			#endif
		}

		public static bool isPrecache(int adTypes)  {
			bool isPrecache = false;
			#if UNITY_ANDROID && !UNITY_EDITOR || UNITY_IPHONE && !UNITY_EDITOR
			isPrecache = getInstance().isPrecache (adTypes);
			#endif
			return isPrecache;
		}

		public static void onResume() {
			#if UNITY_ANDROID && !UNITY_EDITOR || UNITY_IPHONE && !UNITY_EDITOR
			getInstance().onResume ();
			#endif
		}

		public static void setSmartBanners(bool value) {
			#if UNITY_ANDROID && !UNITY_EDITOR || UNITY_IPHONE && !UNITY_EDITOR
			getInstance().setSmartBanners(value);
			#endif
		}

		public static void setBannerBackground(bool value) {
			#if UNITY_ANDROID && !UNITY_EDITOR || UNITY_IPHONE && !UNITY_EDITOR
			getInstance().setBannerBackground(value);
			#endif
		}

		public static void setBannerAnimation(bool value) {
			#if UNITY_ANDROID && !UNITY_EDITOR || UNITY_IPHONE && !UNITY_EDITOR
			getInstance().setBannerAnimation(value);
			#endif
		}

		public static void setTabletBanners(bool value) {
			#if UNITY_ANDROID && !UNITY_EDITOR || UNITY_IPHONE && !UNITY_EDITOR
			getInstance().setTabletBanners(value);
			#endif
		}

		public static void setTesting(bool test) {
			#if UNITY_ANDROID && !UNITY_EDITOR || UNITY_IPHONE && !UNITY_EDITOR
			getInstance().setTesting (test);
			#endif
		}

		public static void setLogLevel(LogLevel log) {
			#if UNITY_ANDROID && !UNITY_EDITOR || UNITY_IPHONE && !UNITY_EDITOR
			getInstance().setLogLevel (log);
			#endif
		}

		public static void setChildDirectedTreatment(bool value) {
			#if UNITY_ANDROID && !UNITY_EDITOR || UNITY_IPHONE && !UNITY_EDITOR
			getInstance().setChildDirectedTreatment (value);
			#endif
		}

		public static void disableNetwork(string network)  {
			#if UNITY_ANDROID && !UNITY_EDITOR || UNITY_IPHONE && !UNITY_EDITOR
			getInstance().disableNetwork (network);
			#endif
		}

		public static void disableNetwork(string network, int adType) {
			#if UNITY_ANDROID && !UNITY_EDITOR || UNITY_IPHONE && !UNITY_EDITOR
			getInstance().disableNetwork (network, adType);
			#endif
		}

		public static void disableLocationPermissionCheck() {
			#if UNITY_ANDROID && !UNITY_EDITOR || UNITY_IPHONE && !UNITY_EDITOR
			getInstance().disableLocationPermissionCheck ();
			#endif
		}	

		public static void disableWriteExternalStoragePermissionCheck() {
			#if UNITY_ANDROID && !UNITY_EDITOR || UNITY_IPHONE && !UNITY_EDITOR
			getInstance().disableWriteExternalStoragePermissionCheck ();
			#endif
		}

		public static void setTriggerOnLoadedOnPrecache(int adTypes, bool onLoadedTriggerBoth) {
			#if UNITY_ANDROID && !UNITY_EDITOR || UNITY_IPHONE && !UNITY_EDITOR
			getInstance().setTriggerOnLoadedOnPrecache (adTypes, onLoadedTriggerBoth);
			#endif
		}

		public static void muteVideosIfCallsMuted(bool value) {
			#if UNITY_ANDROID && !UNITY_EDITOR || UNITY_IPHONE && !UNITY_EDITOR
			getInstance().muteVideosIfCallsMuted (value);
			#endif
		}

		public static void showTestScreen() {
			#if UNITY_ANDROID && !UNITY_EDITOR || UNITY_IPHONE && !UNITY_EDITOR
			getInstance().showTestScreen ();
			#endif
		}

		public static bool canShow(int adTypes)  {
			bool canshow = false;
			#if UNITY_ANDROID && !UNITY_EDITOR || UNITY_IPHONE && !UNITY_EDITOR
			canshow = getInstance().canShow (adTypes);
			#endif
			return canshow;
		}

		public static bool canShow(int adTypes, string placement) {
			bool canshow = false;
			#if UNITY_ANDROID && !UNITY_EDITOR || UNITY_IPHONE && !UNITY_EDITOR
			canshow = getInstance().canShow (adTypes, placement);
			#endif
			return canshow;
		}
		
		public static void setCustomRule(string name, bool value) {
			#if UNITY_ANDROID && !UNITY_EDITOR || UNITY_IPHONE && !UNITY_EDITOR
			getInstance().setCustomRule(name, value);
			#endif
		}

		public static void setCustomRule(string name, int value) {
			#if UNITY_ANDROID && !UNITY_EDITOR || UNITY_IPHONE && !UNITY_EDITOR
			getInstance().setCustomRule(name, value);
			#endif
		}

		public static void setCustomRule(string name, double value) {
			#if UNITY_ANDROID && !UNITY_EDITOR || UNITY_IPHONE && !UNITY_EDITOR
			getInstance().setCustomRule(name, value);
			#endif
		}

		public static void setCustomRule(string name, string value) {
			#if UNITY_ANDROID && !UNITY_EDITOR || UNITY_IPHONE && !UNITY_EDITOR
			getInstance().setCustomRule(name, value);
			#endif
		}

		public static void trackInAppPurchase(double amount, string currency) {
			#if UNITY_ANDROID && !UNITY_EDITOR || UNITY_IPHONE && !UNITY_EDITOR
			getInstance().trackInAppPurchase(amount, currency);
			#endif
		}
				
        public static string getNativeSDKVersion() {
            string version = null;
			#if UNITY_ANDROID && !UNITY_EDITOR || UNITY_IPHONE && !UNITY_EDITOR
            version = getInstance().getVersion();
            #endif
            return version;
        }

		public static string getPluginVersion() {
			return APPODEAL_PLUGIN_VERSION;
		}

		public static void setInterstitialCallbacks(IInterstitialAdListener listener) {
			#if UNITY_ANDROID && !UNITY_EDITOR || UNITY_IPHONE && !UNITY_EDITOR
			getInstance().setInterstitialCallbacks (listener);
			#endif
		}

		public static void setNonSkippableVideoCallbacks(INonSkippableVideoAdListener listener) {
			#if UNITY_ANDROID && !UNITY_EDITOR || UNITY_IPHONE && !UNITY_EDITOR
			getInstance().setNonSkippableVideoCallbacks (listener);
			#endif
		}

		public static void setRewardedVideoCallbacks(IRewardedVideoAdListener listener) {
			#if UNITY_ANDROID && !UNITY_EDITOR || UNITY_IPHONE && !UNITY_EDITOR
			getInstance().setRewardedVideoCallbacks (listener);
			#endif
		}

		public static void setBannerCallbacks(IBannerAdListener listener) {
			#if UNITY_ANDROID && !UNITY_EDITOR || UNITY_IPHONE && !UNITY_EDITOR
			getInstance().setBannerCallbacks (listener);
			#endif
		}

		public static void requestAndroidMPermissions(IPermissionGrantedListener listener) {
			#if UNITY_ANDROID && !UNITY_EDITOR
			getInstance().requestAndroidMPermissions (listener);
			#endif
		}

		public static KeyValuePair<string, int> getRewardParameters() {
			#if UNITY_ANDROID && !UNITY_EDITOR
			return new KeyValuePair<string, int>(getInstance().getRewardCurrency(), getInstance().getRewardAmount());
			#endif
			return new KeyValuePair<string, int>();
		}

		public static KeyValuePair<string, int> getRewardParameters(string placement) {
			#if UNITY_ANDROID && !UNITY_EDITOR
			return new KeyValuePair<string, int>(getInstance().getRewardCurrency(placement), getInstance().getRewardAmount(placement));
			#endif
			return new KeyValuePair<string, int>();
		}
	}

	public class UserSettings {

		private static IAppodealAdsClient client;
		private static IAppodealAdsClient getInstance() {
			if (client == null) {
				client = AppodealAdsClientFactory.GetAppodealAdsClient();
			}
			return client;
		}

		public enum Gender {
			OTHER, MALE, FEMALE
		}
				
		public UserSettings () {
			#if UNITY_ANDROID && !UNITY_EDITOR || UNITY_IPHONE && !UNITY_EDITOR
			getInstance().getUserSettings();
			#endif
		}

        public UserSettings setUserId(string id) {
            #if UNITY_ANDROID && !UNITY_EDITOR || UNITY_IPHONE && !UNITY_EDITOR
			getInstance().setUserId(id);
            #endif
            return this;
        }

        public UserSettings setAge(int age) {
			#if UNITY_ANDROID && !UNITY_EDITOR || UNITY_IPHONE && !UNITY_EDITOR
			getInstance().setAge(age);
			#endif
			return this;
		}

		public UserSettings setGender(Gender gender) {
			#if UNITY_ANDROID && !UNITY_EDITOR || UNITY_IPHONE && !UNITY_EDITOR
			getInstance().setGender(gender);
			#endif
			return this;
		}
	}
}
