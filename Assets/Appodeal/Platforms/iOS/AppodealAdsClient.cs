using UnityEngine;
using System;
using AppodealAds.Unity.Api;
using AppodealAds.Unity.Common;
using AOT;

#if UNITY_IPHONE
namespace AppodealAds.Unity.iOS {
	
	public class AppodealAdsClient : IAppodealAdsClient {
		
		private const int AppodealAdTypeInterstitial 	  = 1 << 0;
		private const int AppodealAdTypeBanner       	  = 1 << 2;
		private const int AppodealAdTypeRewardedVideo	  = 1 << 4;
		private const int AppodealAdTypeNonSkippableVideo = 1 << 6;

		private const int AppodealShowStyleInterstitial        = 1;
		private const int AppodealShowStyleBannerTop           = 4;
		private const int AppodealShowStyleBannerBottom        = 8;
		private const int AppodealShowStyleRewardedVideo       = 16;
		private const int AppodealShowStyleNonSkippableVideo   = 32;
		
		
	#region Singleton
		private AppodealAdsClient() { }
		private static readonly AppodealAdsClient instance = new AppodealAdsClient();
		public static AppodealAdsClient Instance {
			get {
				return instance; 
			}
		}
	#endregion

		public void requestAndroidMPermissions(IPermissionGrantedListener listener) {
			// not supported on ios
		}
		
		private static IInterstitialAdListener interstitialListener;
		private static INonSkippableVideoAdListener nonSkippableVideoListener;
		private static IRewardedVideoAdListener rewardedVideoListener;
		private static IBannerAdListener bannerListener;
		
	#region Interstitial Delegate
		[MonoPInvokeCallback (typeof (AppodealInterstitialDidLoadCallback))]
		private static void interstitialDidLoad (bool isPrecache) {
			if (AppodealAdsClient.interstitialListener != null) {
				AppodealAdsClient.interstitialListener.onInterstitialLoaded(isPrecache);
			}
		}
		
		[MonoPInvokeCallback (typeof (AppodealInterstitialCallbacks))]
		private static void interstitialDidFailToLoad () {
			if (AppodealAdsClient.interstitialListener != null) {
				AppodealAdsClient.interstitialListener.onInterstitialFailedToLoad();
			}
		}
		
		[MonoPInvokeCallback (typeof (AppodealInterstitialCallbacks))]
		private static void interstitialDidClick () {
			if (AppodealAdsClient.interstitialListener != null) {
				AppodealAdsClient.interstitialListener.onInterstitialClicked();
			}
		}
		
		[MonoPInvokeCallback (typeof (AppodealInterstitialCallbacks))]
		private static void interstitialDidDismiss () {
			if (AppodealAdsClient.interstitialListener != null) {
				AppodealAdsClient.interstitialListener.onInterstitialClosed();
			}
		}
		
		[MonoPInvokeCallback (typeof (AppodealInterstitialCallbacks))]
		private static void interstitialWillPresent () {
			if (AppodealAdsClient.interstitialListener != null) {
				AppodealAdsClient.interstitialListener.onInterstitialShown();
			}
		}

		public void setInterstitialCallbacks(IInterstitialAdListener listener) {
			AppodealAdsClient.interstitialListener = listener;
			
			AppodealObjCBridge.AppodealSetInterstitialDelegate(
				AppodealAdsClient.interstitialDidLoad,
				AppodealAdsClient.interstitialDidFailToLoad,
				AppodealAdsClient.interstitialDidClick,
				AppodealAdsClient.interstitialDidDismiss,
				AppodealAdsClient.interstitialWillPresent
			);
		}
	#endregion
		
	#region Non Skippable Video Delegate
		[MonoPInvokeCallback (typeof (AppodealNonSkippableVideoCallbacks))]
		private static void nonSkippableVideoDidLoadAd() {
			if (AppodealAdsClient.nonSkippableVideoListener != null) {
				AppodealAdsClient.nonSkippableVideoListener.onNonSkippableVideoLoaded();
			}
		}

		[MonoPInvokeCallback (typeof (AppodealNonSkippableVideoCallbacks))]
		private static void nonSkippableVideoDidFailToLoadAd() {
			if (AppodealAdsClient.nonSkippableVideoListener != null) {
				AppodealAdsClient.nonSkippableVideoListener.onNonSkippableVideoFailedToLoad();
			}
		}

		[MonoPInvokeCallback (typeof (AppodealNonSkippableVideoDidDismissCallback))]
		private static void nonSkippableVideoWillDismiss(bool isFinished) {
			if (AppodealAdsClient.nonSkippableVideoListener != null) {
				AppodealAdsClient.nonSkippableVideoListener.onNonSkippableVideoClosed(isFinished);
			}
		}

		[MonoPInvokeCallback (typeof (AppodealNonSkippableVideoCallbacks))]
		private static void nonSkippableVideoDidFinish() {
			if (AppodealAdsClient.nonSkippableVideoListener != null) {
				AppodealAdsClient.nonSkippableVideoListener.onNonSkippableVideoFinished();
			}
		}

		[MonoPInvokeCallback (typeof (AppodealNonSkippableVideoCallbacks))]
		private static void nonSkippableVideoDidPresent() {
			if (AppodealAdsClient.nonSkippableVideoListener != null) {
				AppodealAdsClient.nonSkippableVideoListener.onNonSkippableVideoShown();
			}
		}

		public void setNonSkippableVideoCallbacks(INonSkippableVideoAdListener listener) {
			AppodealAdsClient.nonSkippableVideoListener = listener;

			AppodealObjCBridge.AppodealSetNonSkippableVideoDelegate(
				AppodealAdsClient.nonSkippableVideoDidLoadAd,
				AppodealAdsClient.nonSkippableVideoDidFailToLoadAd,
				AppodealAdsClient.nonSkippableVideoWillDismiss,
				AppodealAdsClient.nonSkippableVideoDidFinish,
				AppodealAdsClient.nonSkippableVideoDidPresent
			);
		}
	#endregion
		
	#region Rewarded Video Delegate
		[MonoPInvokeCallback (typeof (AppodealRewardedVideoCallbacks))]
		private static void rewardedVideoDidLoadAd() {
			if (AppodealAdsClient.rewardedVideoListener != null) {
				AppodealAdsClient.rewardedVideoListener.onRewardedVideoLoaded();
			}
		}
		
		[MonoPInvokeCallback (typeof (AppodealRewardedVideoCallbacks))]
		private static void rewardedVideoDidFailToLoadAd() {
			if (AppodealAdsClient.rewardedVideoListener != null) {
				AppodealAdsClient.rewardedVideoListener.onRewardedVideoFailedToLoad();
			}
		}

		[MonoPInvokeCallback (typeof (AppodealRewardedVideoDidDismissCallback))]
		private static void rewardedVideoWillDismiss(bool isFinished) {
			if (AppodealAdsClient.rewardedVideoListener != null) {
				AppodealAdsClient.rewardedVideoListener.onRewardedVideoClosed(isFinished);
			}
		}
		
		[MonoPInvokeCallback (typeof (AppodealRewardedVideoDidFinishCallback))]
		private static void rewardedVideoDidFinish(int amount, string name) {
			if (AppodealAdsClient.rewardedVideoListener != null) {
				AppodealAdsClient.rewardedVideoListener.onRewardedVideoFinished(amount, name);
			}
		}
		
		[MonoPInvokeCallback (typeof (AppodealRewardedVideoCallbacks))]
		private static void rewardedVideoDidPresent() {
			if (AppodealAdsClient.rewardedVideoListener != null) {
				AppodealAdsClient.rewardedVideoListener.onRewardedVideoShown();
			}
		}
		
		public void setRewardedVideoCallbacks(IRewardedVideoAdListener listener) {
			AppodealAdsClient.rewardedVideoListener = listener;
			
			AppodealObjCBridge.AppodealSetRewardedVideoDelegate(
				AppodealAdsClient.rewardedVideoDidLoadAd,
				AppodealAdsClient.rewardedVideoDidFailToLoadAd,
				AppodealAdsClient.rewardedVideoWillDismiss,
				AppodealAdsClient.rewardedVideoDidFinish,
				AppodealAdsClient.rewardedVideoDidPresent
			);
		}
		
	#endregion

	#region Banner Delegate
		
		[MonoPInvokeCallback (typeof (AppodealBannerDidLoadCallback))]
		private static void bannerDidLoadAd(bool isPrecache) {
			if (AppodealAdsClient.bannerListener != null) {
				AppodealAdsClient.bannerListener.onBannerLoaded(isPrecache);
			}
		}
		
		[MonoPInvokeCallback (typeof (AppodealBannerCallbacks))]
		private static void bannerDidFailToLoadAd() {
			if (AppodealAdsClient.bannerListener != null) {
				AppodealAdsClient.bannerListener.onBannerFailedToLoad();
			}
		}
		
		[MonoPInvokeCallback (typeof (AppodealBannerCallbacks))]
		private static void bannerDidClick () {
			if (AppodealAdsClient.bannerListener != null) {
				AppodealAdsClient.bannerListener.onBannerClicked();
			}
		}

		[MonoPInvokeCallback (typeof (AppodealBannerCallbacks))]
		private static void bannerDidShow () {
			if (AppodealAdsClient.bannerListener != null) {
				AppodealAdsClient.bannerListener.onBannerShown();
			}
		}

		[MonoPInvokeCallback (typeof (AppodealBannerViewDidLoadCallback))]
		private static void bannerViewDidLoadAd(bool isPrecache) {
			if (AppodealAdsClient.bannerListener != null) {
				AppodealAdsClient.bannerListener.onBannerLoaded(isPrecache);
			}
		}

		[MonoPInvokeCallback (typeof (AppodealBannerViewCallbacks))]
		private static void bannerViewDidFailToLoadAd() {
			if (AppodealAdsClient.bannerListener != null) {
				AppodealAdsClient.bannerListener.onBannerFailedToLoad();
			}
		}

		[MonoPInvokeCallback (typeof (AppodealBannerViewCallbacks))]
		private static void bannerViewDidClick () {
			if (AppodealAdsClient.bannerListener != null) {
				AppodealAdsClient.bannerListener.onBannerClicked();
			}
		}

		public void setBannerCallbacks(IBannerAdListener listener) {
			AppodealAdsClient.bannerListener = listener;
			
			AppodealObjCBridge.AppodealSetBannerDelegate(
				AppodealAdsClient.bannerDidLoadAd,
				AppodealAdsClient.bannerDidFailToLoadAd,
				AppodealAdsClient.bannerDidClick,
				AppodealAdsClient.bannerDidShow);

			AppodealObjCBridge.AppodealSetBannerViewDelegate(
				AppodealAdsClient.bannerViewDidLoadAd,
				AppodealAdsClient.bannerViewDidFailToLoadAd,
				AppodealAdsClient.bannerViewDidClick);
		}
		
	#endregion
		
		private int nativeAdTypesForType(int adTypes) {
			int nativeAdTypes = 0;
			
			if ((adTypes & Appodeal.INTERSTITIAL) > 0) {
				nativeAdTypes |= AppodealAdTypeInterstitial;
			}
			
			if ((adTypes & Appodeal.BANNER) > 0 || 
				(adTypes & Appodeal.BANNER_VIEW) > 0 || 
			    (adTypes & Appodeal.BANNER_TOP) > 0 || 
			    (adTypes & Appodeal.BANNER_BOTTOM) > 0) {
				
				nativeAdTypes |= AppodealAdTypeBanner;
			}
			
			if ((adTypes & Appodeal.REWARDED_VIDEO) > 0) {
				nativeAdTypes |= AppodealAdTypeRewardedVideo;
			} 

			if ((adTypes & Appodeal.NON_SKIPPABLE_VIDEO) > 0) {
				nativeAdTypes |= AppodealAdTypeNonSkippableVideo;
			}
			
			return nativeAdTypes;
		}
		
		private int nativeShowStyleForType(int adTypes) {
			if ((adTypes & Appodeal.INTERSTITIAL) > 0) {
				return AppodealShowStyleInterstitial;
			}
			
			if ((adTypes & Appodeal.BANNER_TOP) > 0) {
				return AppodealShowStyleBannerTop;
			}
			
			if ((adTypes & Appodeal.BANNER_BOTTOM) > 0) {
				return AppodealShowStyleBannerBottom;
			}
			
			if ((adTypes & Appodeal.REWARDED_VIDEO) > 0) {
				return AppodealShowStyleRewardedVideo;
			} 

			if ((adTypes & Appodeal.NON_SKIPPABLE_VIDEO) > 0) {
				return AppodealShowStyleNonSkippableVideo;
			}
			
			return 0;
		}
		
		public void initialize(string appKey, int adTypes) {
			AppodealObjCBridge.AppodealInitializeWithTypes(appKey, nativeAdTypesForType(adTypes), Appodeal.getPluginVersion());
		}

		public bool show(int adTypes) {
			return AppodealObjCBridge.AppodealShowAd(nativeShowStyleForType(adTypes));
		}

		public bool show(int adTypes, string placement) {
			return AppodealObjCBridge.AppodealShowAdforPlacement(nativeShowStyleForType(adTypes), placement);
		}

		public bool showBannerView(int YAxis, int XGravity, string Placement) {
			return AppodealObjCBridge.AppodealShowBannerAdViewforPlacement(YAxis, XGravity, Placement);
		}

		public bool isLoaded(int adTypes) {
			return AppodealObjCBridge.AppodealIsReadyWithStyle(nativeShowStyleForType(adTypes));
		}
		
		public void cache(int adTypes) {
			AppodealObjCBridge.AppodealCacheAd(nativeAdTypesForType(adTypes));
		}
		
		public void setAutoCache(int adTypes, bool autoCache) {
			AppodealObjCBridge.AppodealSetAutocache(autoCache, nativeAdTypesForType(adTypes));
		}

		public void hide(int adTypes) {
			if ((nativeAdTypesForType(adTypes) & AppodealAdTypeBanner) > 0) {
				AppodealObjCBridge.AppodealHideBanner();
			}
		}

		public void hideBannerView() {
			AppodealObjCBridge.AppodealHideBannerView();
		}

		public bool isPrecache(int adTypes) {
			return false;
		}

		public void onResume() { } // handled by SDK
		
		public void setSmartBanners(bool value) {
			AppodealObjCBridge.setSmartBanners(value);
		}

		public void setBannerAnimation(bool value) {
			AppodealObjCBridge.setBannerAnimation(value);
		}

		public void setBannerBackground(bool value) {
			AppodealObjCBridge.setBannerBackground(value);
		}

		public void setTabletBanners(bool value) {
			// Handled by os
		}

		public void setTesting(bool test) {
			AppodealObjCBridge.AppodealSetTestingEnabled(test);
		}

		public void setLogLevel(Appodeal.LogLevel level) {
			switch(level) {
				case Appodeal.LogLevel.None: {
					AppodealObjCBridge.AppodealSetLogLevel(1);
					break;
				}
				case Appodeal.LogLevel.Debug: {
					AppodealObjCBridge.AppodealSetLogLevel(2);
					break;
				}
				case Appodeal.LogLevel.Verbose: {
					AppodealObjCBridge.AppodealSetLogLevel(3);
					break;
				}
			}
		}

		public void setChildDirectedTreatment(bool value) {
			AppodealObjCBridge.AppodealSetChildDirectedTreatment(value);
		}

		public void disableNetwork(String network) {
			AppodealObjCBridge.AppodealDisableNetwork(network);
		}

		public void disableNetwork(String network, int adTypes) {
			AppodealObjCBridge.AppodealDisableNetworkForAdTypes(network, adTypes);
		}

		public void disableLocationPermissionCheck() {
			AppodealObjCBridge.AppodealDisableLocationPermissionCheck();
		}

		public void disableWriteExternalStoragePermissionCheck() {
			// Not supported for iOS SDK
		}

		public void muteVideosIfCallsMuted(bool value) {
			// Not supported for iOS SDK
		}

		public void showTestScreen() {
			// Not supported for iOS SDK
		}

		public string getVersion() {
			return AppodealObjCBridge.AppodealGetVersion();
		}

		public bool canShow(int adTypes, string placement) {
			return AppodealObjCBridge.AppodealCanShowWithPlacement(nativeShowStyleForType(adTypes), placement);
		}

		public bool canShow(int adTypes) {
			return AppodealObjCBridge.AppodealCanShow(nativeShowStyleForType(adTypes));
		}

		public string getRewardCurrency(string placement) {
			return AppodealObjCBridge.AppodealGetRewardCurrency(placement);
		}

		public int getRewardAmount(string placement) {
			return AppodealObjCBridge.AppodealGetRewardAmount(placement);
		}

		public string getRewardCurrency() {
			return AppodealObjCBridge.AppodealGetRewardCurrency("");
		}

		public int getRewardAmount() {
			return AppodealObjCBridge.AppodealGetRewardAmount("");
		}

		public void setCustomRule(string name, bool value) {
			AppodealObjCBridge.setCustomSegmentBool(name, value);
		}

		public void setCustomRule(string name, int value)  {
			AppodealObjCBridge.setCustomSegmentInt(name, value);
		}

		public void setCustomRule(string name, double value)  {
			AppodealObjCBridge.setCustomSegmentDouble(name, value);
		}

		public void setCustomRule(string name, string value) {
			AppodealObjCBridge.setCustomSegmentString(name, value);
		}

		public void setTriggerOnLoadedOnPrecache(int adTypes, Boolean onLoadedTriggerBoth) {
			// Not supported for iOS SDK
		}
		
		//User Settings

		public void getUserSettings() {
			// No additional state change required on iOS
		}

		public void setUserId(string id) {
			AppodealObjCBridge.AppodealSetUserId(id);
		}

		public void setAge(int age)  {
			AppodealObjCBridge.AppodealSetUserAge(age);
		}

		public void setGender(UserSettings.Gender gender) {
			switch(gender) {
			case UserSettings.Gender.OTHER: {
					AppodealObjCBridge.AppodealSetUserGender(0);
					break;
				}
			case UserSettings.Gender.MALE: {
					AppodealObjCBridge.AppodealSetUserGender(1);
					break;
				}
			case UserSettings.Gender.FEMALE: {
					AppodealObjCBridge.AppodealSetUserGender(2);
					break;
				}
			}
		}

		public void trackInAppPurchase(double amount, string currency) {
			AppodealObjCBridge.trackInAppPurchase(amount, currency);
		}
				
	}
}
#endif