using UnityEngine;
using System;
using AppodealAds.Unity.Api;
using AppodealAds.Unity.Common;
using AOT;

#if UNITY_IPHONE
namespace AppodealAds.Unity.iOS
{
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
		private AppodealAdsClient(){}
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
		[MonoPInvokeCallback (typeof (AppodealInterstitialCallbacks))]
		private static void interstitialDidLoad () {
			if (AppodealAdsClient.interstitialListener != null) {
				AppodealAdsClient.interstitialListener.onInterstitialLoaded();
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

		[MonoPInvokeCallback (typeof (AppodealNonSkippableVideoCallbacks))]
		private static void nonSkippableVideoWillDismiss() {
			if (AppodealAdsClient.nonSkippableVideoListener != null) {
				AppodealAdsClient.nonSkippableVideoListener.onNonSkippableVideoClosed();
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

		[MonoPInvokeCallback (typeof (AppodealRewardedVideoCallbacks))]
		private static void rewardedVideoWillDismiss() {
			if (AppodealAdsClient.rewardedVideoListener != null) {
				AppodealAdsClient.rewardedVideoListener.onRewardedVideoClosed();
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
		
		[MonoPInvokeCallback (typeof (AppodealBannerCallbacks))]
		private static void bannerDidLoadAd() {
			if (AppodealAdsClient.bannerListener != null) {
				AppodealAdsClient.bannerListener.onBannerLoaded();
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

		[MonoPInvokeCallback (typeof (AppodealBannerViewCallbacks))]
		private static void bannerViewDidLoadAd() {
			if (AppodealAdsClient.bannerListener != null) {
				AppodealAdsClient.bannerListener.onBannerLoaded();
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
			AppodealObjCBridge.AppodealInitializeWithTypes(appKey, nativeAdTypesForType(adTypes));
		}
		
		public void cache(int adTypes) {
			AppodealObjCBridge.AppodealCacheAd(nativeAdTypesForType(adTypes));
		}
		
		public bool isLoaded(int adTypes) {
			int style = nativeShowStyleForType(adTypes);
			bool isBanner = style == AppodealShowStyleBannerTop || style == AppodealShowStyleBannerBottom;
			
			return isBanner ? true : AppodealObjCBridge.AppodealIsReadyWithStyle(style);
		}
		
		public bool isPrecache(int adTypes) {
			return false;
		}
		
		public bool show(int adTypes) {
			return AppodealObjCBridge.AppodealShowAd(nativeShowStyleForType(adTypes));
		}

		public bool showBannerView(int YAxis, int XGravity, string Placement) {
			return AppodealObjCBridge.AppodealShowBannerAdViewforPlacement(YAxis, XGravity, Placement);
		}

		public bool show(int adTypes, string placement) {
			return AppodealObjCBridge.AppodealShowAdforPlacement(nativeShowStyleForType(adTypes), placement);
		}

		public void hide(int adTypes) {
			if ((nativeAdTypesForType(adTypes) & AppodealAdTypeBanner) > 0) {
				AppodealObjCBridge.AppodealHideBanner();
			}
		}

		public void hideBannerView() {
			AppodealObjCBridge.AppodealHideBannerView();
		}

		public void setAutoCache(int adTypes, Boolean autoCache) {
			AppodealObjCBridge.AppodealSetAutocache(autoCache, nativeAdTypesForType(adTypes));
		}
		
		public void setTesting(Boolean test) {
			AppodealObjCBridge.AppodealSetTestingEnabled(test);
		}
		
		public void setLogging(Boolean logging) {
			AppodealObjCBridge.AppodealSetDebugEnabled(logging);
		}
		
		public void setTriggerOnLoadedOnPrecache(int adTypes, Boolean onLoadedTriggerBoth) {
			// Not supported for iOS SDK
		}

		public void confirm(int adTypes) {
			AppodealObjCBridge.AppodealConfirmUsage(adTypes);
		}

		public void disableWriteExternalStoragePermissionCheck() 
		{
			// Not supported for iOS SDK
		}
		
		public void disableNetwork(String network) {
			AppodealObjCBridge.AppodealDisableNetwork(network);
		}
		
		public void disableNetwork(String network, int adTypes) {
			AppodealObjCBridge.AppodealDisableNetworkForAdTypes(network, adTypes);
		}
		
		public void disableLocationPermissionCheck() 
		{
			AppodealObjCBridge.AppodealDisableLocationPermissionCheck();
		}
		
		public void orientationChange() { } // handled by SDK
		
		
		public string getVersion() {
			return AppodealObjCBridge.AppodealGetVersion();
		}
		
		//User Settings
		
		public void getUserSettings() {
			// No additional state change required on iOS
		}

        public void setUserId(string id) {
			AppodealObjCBridge.AppodealSetUserId(id);
		}

		public void setAge(int age) 
		{
			AppodealObjCBridge.AppodealSetUserAge(age);
		}
		
		public void setGender(int gender)
		{
			AppodealObjCBridge.AppodealSetUserGender(gender - 1);
		}

		public void trackInAppPurchase(double amount, string currency)
		{
			AppodealObjCBridge.trackInAppPurchase(amount, currency);
		}

		public void setCustomRule(string name, bool value) 
		{
			AppodealObjCBridge.setCustomSegmentBool(name, value);
		}
		
		public void setCustomRule(string name, int value) 
		{
			AppodealObjCBridge.setCustomSegmentInt(name, value);
		}
		
		public void setCustomRule(string name, double value) 
		{
			AppodealObjCBridge.setCustomSegmentDouble(name, value);
		}
		
		public void setCustomRule(string name, string value)
		{
			AppodealObjCBridge.setCustomSegmentString(name, value);
		}

		public void setSmartBanners(Boolean value)
		{
			AppodealObjCBridge.setSmartBanners(value);
		}

		public void setBannerAnimation(bool value) {
			AppodealObjCBridge.setBannerAnimation(value);
		}

		public void setBannerBackground(bool value) {
			AppodealObjCBridge.setBannerBackground(value);
		}
				
	}
}
#endif