using AOT;
using AppodealAds.Unity.Api;
using AppodealAds.Unity.Common;
using UnityEngine;

#if UNITY_IPHONE
namespace AppodealAds.Unity.iOS {

	public class AppodealAdsClient : IAppodealAdsClient {

		const int AppodealAdTypeInterstitial = 1 << 0;
		const int AppodealAdTypeBanner = 1 << 2;
		const int AppodealAdTypeRewardedVideo = 1 << 4;
		const int AppodealAdTypeMrec = 1 << 5;
		const int AppodealAdTypeNonSkippableVideo = 1 << 6;

		const int AppodealShowStyleInterstitial = 1;
		const int AppodealShowStyleBannerTop = 4;
		const int AppodealShowStyleBannerBottom = 8;
		const int AppodealShowStyleRewardedVideo = 16;
		const int AppodealShowStyleNonSkippableVideo = 32;

		#region Singleton
		AppodealAdsClient () { }
		static readonly AppodealAdsClient instance = new AppodealAdsClient ();
		public static AppodealAdsClient Instance {
			get {
				return instance;
			}
		}
		#endregion

		public void requestAndroidMPermissions (IPermissionGrantedListener listener) {
			// not supported on ios
		}

		static IInterstitialAdListener interstitialListener;
		static INonSkippableVideoAdListener nonSkippableVideoListener;
		static IRewardedVideoAdListener rewardedVideoListener;
		static IBannerAdListener bannerListener;
		static IMrecAdListener mrecListener;

		#region Interstitial Delegate
		[MonoPInvokeCallback (typeof (AppodealInterstitialDidLoadCallback))]
		static void interstitialDidLoad (bool isPrecache) {
			if (interstitialListener != null) {
				interstitialListener.onInterstitialLoaded (isPrecache);
			}
		}

		[MonoPInvokeCallback (typeof (AppodealInterstitialCallbacks))]
		static void interstitialDidFailToLoad () {
			if (interstitialListener != null) {
				interstitialListener.onInterstitialFailedToLoad ();
			}
		}

		[MonoPInvokeCallback (typeof (AppodealInterstitialCallbacks))]
		static void interstitialDidClick () {
			if (interstitialListener != null) {
				interstitialListener.onInterstitialClicked ();
			}
		}

		[MonoPInvokeCallback (typeof (AppodealInterstitialCallbacks))]
		static void interstitialDidDismiss () {
			if (interstitialListener != null) {
				interstitialListener.onInterstitialClosed ();
			}
		}

		[MonoPInvokeCallback (typeof (AppodealInterstitialCallbacks))]
		static void interstitialWillPresent () {
			if (interstitialListener != null) {
				interstitialListener.onInterstitialShown ();
			}
		}

		[MonoPInvokeCallback (typeof (AppodealInterstitialCallbacks))]
		static void interstitialDidExpired () {
			if (interstitialListener != null) {
				interstitialListener.onInterstitialExpired ();
			}
		}

		public void setInterstitialCallbacks (IInterstitialAdListener listener) {
			interstitialListener = listener;

			AppodealObjCBridge.AppodealSetInterstitialDelegate (
				interstitialDidLoad,
				interstitialDidFailToLoad,
				interstitialDidClick,
				interstitialDidDismiss,
				interstitialWillPresent,
				interstitialDidExpired
			);
		}
		#endregion

		#region Non Skippable Video Delegate
		[MonoPInvokeCallback (typeof (AppodealNonSkippableVideoCallbacks))]
		static void nonSkippableVideoDidLoadAd (bool isPrecache) {
			if (nonSkippableVideoListener != null) {
				nonSkippableVideoListener.onNonSkippableVideoLoaded (isPrecache);
			}
		}

		[MonoPInvokeCallback (typeof (AppodealNonSkippableVideoCallbacks))]
		static void nonSkippableVideoDidFailToLoadAd () {
			if (nonSkippableVideoListener != null) {
				nonSkippableVideoListener.onNonSkippableVideoFailedToLoad ();
			}
		}

		[MonoPInvokeCallback (typeof (AppodealNonSkippableVideoDidDismissCallback))]
		static void nonSkippableVideoWillDismiss (bool isFinished) {
			if (nonSkippableVideoListener != null) {
				nonSkippableVideoListener.onNonSkippableVideoClosed (isFinished);
			}
		}

		[MonoPInvokeCallback (typeof (AppodealNonSkippableVideoCallbacks))]
		static void nonSkippableVideoDidFinish () {
			if (nonSkippableVideoListener != null) {
				nonSkippableVideoListener.onNonSkippableVideoFinished ();
			}
		}

		[MonoPInvokeCallback (typeof (AppodealNonSkippableVideoCallbacks))]
		static void nonSkippableVideoDidPresent () {
			if (nonSkippableVideoListener != null) {
				nonSkippableVideoListener.onNonSkippableVideoShown ();
			}
		}

		[MonoPInvokeCallback (typeof (AppodealNonSkippableVideoCallbacks))]
		static void nonSkippableVideoDidExpired () {
			if (nonSkippableVideoListener != null) {
				nonSkippableVideoListener.onNonSkippableVideoExpired ();
			}
		}

		public void setNonSkippableVideoCallbacks (INonSkippableVideoAdListener listener) {
			nonSkippableVideoListener = listener;

			AppodealObjCBridge.AppodealSetNonSkippableVideoDelegate (
				nonSkippableVideoDidLoadAd,
				nonSkippableVideoDidFailToLoadAd,
				nonSkippableVideoWillDismiss,
				nonSkippableVideoDidFinish,
				nonSkippableVideoDidPresent,
				nonSkippableVideoDidExpired
			);
		}
		#endregion

		#region Rewarded Video Delegate
		[MonoPInvokeCallback (typeof (AppodealRewardedVideoDidLoadCallback))]
		static void rewardedVideoDidLoadAd (bool isPrecache) {
			if (rewardedVideoListener != null) {
				rewardedVideoListener.onRewardedVideoLoaded (isPrecache);
			}
		}

		[MonoPInvokeCallback (typeof (AppodealRewardedVideoCallbacks))]
		static void rewardedVideoDidFailToLoadAd () {
			if (rewardedVideoListener != null) {
				rewardedVideoListener.onRewardedVideoFailedToLoad ();
			}
		}

		[MonoPInvokeCallback (typeof (AppodealRewardedVideoDidDismissCallback))]
		static void rewardedVideoWillDismiss (bool isFinished) {
			if (rewardedVideoListener != null) {
				rewardedVideoListener.onRewardedVideoClosed (isFinished);
			}
		}

		[MonoPInvokeCallback (typeof (AppodealRewardedVideoDidFinishCallback))]
		static void rewardedVideoDidFinish (double amount, string name) {
			if (rewardedVideoListener != null) {
				rewardedVideoListener.onRewardedVideoFinished (amount, name);
			}
		}

		[MonoPInvokeCallback (typeof (AppodealRewardedVideoCallbacks))]
		static void rewardedVideoDidPresent () {
			if (rewardedVideoListener != null) {
				rewardedVideoListener.onRewardedVideoShown ();
			}
		}

		[MonoPInvokeCallback (typeof (AppodealRewardedVideoCallbacks))]
		static void rewardedVideoDidExpired () {
			if (rewardedVideoListener != null) {
				rewardedVideoListener.onRewardedVideoExpired ();
			}
		}

		[MonoPInvokeCallback (typeof (AppodealRewardedVideoCallbacks))]
		static void rewardedVideoDidReceiveTap () {
			if (rewardedVideoListener != null) {
				rewardedVideoListener.onRewardedVideoClicked ();
			}
		}

		public void setRewardedVideoCallbacks (IRewardedVideoAdListener listener) {
			rewardedVideoListener = listener;

			AppodealObjCBridge.AppodealSetRewardedVideoDelegate (
				rewardedVideoDidLoadAd,
				rewardedVideoDidFailToLoadAd,
				rewardedVideoWillDismiss,
				rewardedVideoDidFinish,
				rewardedVideoDidPresent,
				rewardedVideoDidExpired,
				rewardedVideoDidReceiveTap
			);
		}
		#endregion

		#region Banner Delegate
		[MonoPInvokeCallback (typeof (AppodealBannerDidLoadCallback))]
		static void bannerDidLoadAd (bool isPrecache) {
			if (bannerListener != null) {
				bannerListener.onBannerLoaded (isPrecache);
			}
		}

		[MonoPInvokeCallback (typeof (AppodealBannerCallbacks))]
		static void bannerDidFailToLoadAd () {
			if (bannerListener != null) {
				bannerListener.onBannerFailedToLoad ();
			}
		}

		[MonoPInvokeCallback (typeof (AppodealBannerCallbacks))]
		static void bannerDidClick () {
			if (bannerListener != null) {
				bannerListener.onBannerClicked ();
			}
		}

		[MonoPInvokeCallback (typeof (AppodealBannerCallbacks))]
		static void bannerDidShow () {
			if (bannerListener != null) {
				bannerListener.onBannerShown ();
			}
		}

		[MonoPInvokeCallback (typeof (AppodealBannerViewDidLoadCallback))]
		static void bannerViewDidLoadAd (bool isPrecache) {
			if (bannerListener != null) {
				bannerListener.onBannerLoaded (isPrecache);
			}
		}

		[MonoPInvokeCallback (typeof (AppodealBannerViewCallbacks))]
		static void bannerViewDidFailToLoadAd () {
			if (bannerListener != null) {
				bannerListener.onBannerFailedToLoad ();
			}
		}

		[MonoPInvokeCallback (typeof (AppodealBannerViewCallbacks))]
		static void bannerViewDidClick () {
			if (bannerListener != null) {
				bannerListener.onBannerClicked ();
			}
		}

		[MonoPInvokeCallback (typeof (AppodealBannerViewCallbacks))]
		static void bannerViewDidExpired () {
			if (bannerListener != null) {
				bannerListener.onBannerExpired ();
			}
		}

		public void setBannerCallbacks (IBannerAdListener listener) {
			bannerListener = listener;

			AppodealObjCBridge.AppodealSetBannerDelegate (
				bannerDidLoadAd,
				bannerDidFailToLoadAd,
				bannerDidClick,
				bannerDidShow,
				bannerViewDidExpired);

			AppodealObjCBridge.AppodealSetBannerViewDelegate (
				bannerViewDidLoadAd,
				bannerViewDidFailToLoadAd,
				bannerViewDidClick,
				bannerViewDidExpired);
		}
		#endregion

		#region Mrec Delegate
		[MonoPInvokeCallback (typeof (AppodealBannerViewDidLoadCallback))]
		static void mrecViewDidLoadAd (bool isPrecache) {
			if (mrecListener != null) {
				mrecListener.onMrecLoaded (isPrecache);
			}
		}

		[MonoPInvokeCallback (typeof (AppodealBannerViewCallbacks))]
		static void mrecViewDidFailToLoadAd () {
			if (mrecListener != null) {
				mrecListener.onMrecFailedToLoad ();
			}
		}

		[MonoPInvokeCallback (typeof (AppodealBannerViewCallbacks))]
		static void mrecViewDidClick () {
			if (mrecListener != null) {
				mrecListener.onMrecClicked ();
			}
		}

		[MonoPInvokeCallback (typeof (AppodealBannerViewCallbacks))]
		static void mrecViewDidExpired () {
			if (mrecListener != null) {
				mrecListener.onMrecExpired ();
			}
		}

		public void setMrecCallbacks (IMrecAdListener listener) {
			mrecListener = listener;

			AppodealObjCBridge.AppodealSetBannerViewDelegate (
				mrecViewDidLoadAd,
				mrecViewDidFailToLoadAd,
				mrecViewDidClick,
				mrecViewDidExpired);
		}

		#endregion

		int nativeAdTypesForType (int adTypes) {
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

			if ((adTypes & Appodeal.MREC) > 0) {
				nativeAdTypes |= AppodealAdTypeMrec;
			}

			if ((adTypes & Appodeal.REWARDED_VIDEO) > 0) {
				nativeAdTypes |= AppodealAdTypeRewardedVideo;
			}

			if ((adTypes & Appodeal.NON_SKIPPABLE_VIDEO) > 0) {
				nativeAdTypes |= AppodealAdTypeNonSkippableVideo;
			}

			return nativeAdTypes;
		}

		int nativeShowStyleForType (int adTypes) {
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

		public void initialize (string appKey, int adTypes) {
			initialize (appKey, adTypes, true);
		}

		public void initialize (string appKey, int adTypes, bool hasConsent) {
			AppodealObjCBridge.AppodealInitialize (appKey, nativeAdTypesForType (adTypes), hasConsent, Appodeal.getPluginVersion (), Appodeal.getUnityVersion ());
		}

		public bool isInitialized (int adType) {
			return AppodealObjCBridge.AppodealIsInitialized (adType);
		}

		public bool show (int adTypes) {
			return AppodealObjCBridge.AppodealShowAd (nativeShowStyleForType (adTypes));
		}

		public bool show (int adTypes, string placement) {
			return AppodealObjCBridge.AppodealShowAdforPlacement (nativeShowStyleForType (adTypes), placement);
		}

		public bool showBannerView (int YAxis, int XGravity, string Placement) {
			return AppodealObjCBridge.AppodealShowBannerAdViewforPlacement (YAxis, XGravity, Placement);
		}

		public bool showMrecView (int YAxis, int XGravity, string Placement) {
			return AppodealObjCBridge.AppodealShowMrecAdViewforPlacement (YAxis, XGravity, Placement);
		}

		public bool isLoaded (int adTypes) {
			return AppodealObjCBridge.AppodealIsReadyWithStyle (nativeShowStyleForType (adTypes));
		}

		public void cache (int adTypes) {
			AppodealObjCBridge.AppodealCacheAd (nativeAdTypesForType (adTypes));
		}

		public void setAutoCache (int adTypes, bool autoCache) {
			AppodealObjCBridge.AppodealSetAutocache (autoCache, nativeAdTypesForType (adTypes));
		}

		public void hide (int adTypes) {
			if ((nativeAdTypesForType (adTypes) & AppodealAdTypeBanner) > 0) {
				AppodealObjCBridge.AppodealHideBanner ();
			}
		}

		public void hideBannerView () {
			AppodealObjCBridge.AppodealHideBannerView ();
		}

		public void hideMrecView () {
			AppodealObjCBridge.AppodealHideMrecView ();
		}

		public bool isPrecache (int adTypes) {
			return false;
		}

		public void onResume (int adTypes) { } // handled by SDK

		public void setSmartBanners (bool value) {
			AppodealObjCBridge.AppodealSetSmartBanners (value);
		}

		public void setBannerAnimation (bool value) {
			AppodealObjCBridge.AppodealSetBannerAnimation (value);
		}

		public void setBannerBackground (bool value) {
			AppodealObjCBridge.AppodealSetBannerBackground (value);
		}

		public void setTabletBanners (bool value) {
			AppodealObjCBridge.AppodealSetTabletBanners (value); // Works only for banner view
		}

		public void setTesting (bool test) {
			AppodealObjCBridge.AppodealSetTestingEnabled (test);
		}

		public void updateConsent(bool value)
		{
			AppodealObjCBridge.AppodealUpdateConsent(value);
		}

		public void resetFilterMatureContentFlag(){ } // handled by SDK

		public void setLogLevel (Appodeal.LogLevel level) {
			switch (level) {
				case Appodeal.LogLevel.None:
					{
						AppodealObjCBridge.AppodealSetLogLevel (1);
						break;
					}
				case Appodeal.LogLevel.Debug:
					{
						AppodealObjCBridge.AppodealSetLogLevel (2);
						break;
					}
				case Appodeal.LogLevel.Verbose:
					{
						AppodealObjCBridge.AppodealSetLogLevel (3);
						break;
					}
			}
		}

		public void setChildDirectedTreatment (bool value) {
			AppodealObjCBridge.AppodealSetChildDirectedTreatment (value);
		}

		public void disableNetwork (string network) {
			AppodealObjCBridge.AppodealDisableNetwork (network);
		}

		public void disableNetwork (string network, int adTypes) {
			AppodealObjCBridge.AppodealDisableNetworkForAdTypes (network, adTypes);
		}

		public void disableLocationPermissionCheck () {
			AppodealObjCBridge.AppodealDisableLocationPermissionCheck ();
		}

		public void disableWriteExternalStoragePermissionCheck () {
			// Not supported for iOS SDK
		}

		public void muteVideosIfCallsMuted (bool value) {
			// Not supported for iOS SDK
		}

		public void showTestScreen () {
			// Not supported for iOS SDK
		}

		public string getVersion () {
			return AppodealObjCBridge.AppodealGetVersion ();
		}

		public bool canShow (int adTypes, string placement) {
			return AppodealObjCBridge.AppodealCanShowWithPlacement (nativeShowStyleForType (adTypes), placement);
		}

		public bool canShow (int adTypes) {
			return AppodealObjCBridge.AppodealCanShow (nativeShowStyleForType (adTypes));
		}

		public string getRewardCurrency (string placement) {
			return AppodealObjCBridge.AppodealGetRewardCurrency (placement);
		}

		public double getRewardAmount (string placement) {
			return AppodealObjCBridge.AppodealGetRewardAmount (placement);
		}

		public string getRewardCurrency () {
			return AppodealObjCBridge.AppodealGetRewardCurrency ("default");
		}

		public double getRewardAmount () {
			return AppodealObjCBridge.AppodealGetRewardAmount ("default");
		}

		public double getPredictedEcpm (int adType) {
			return AppodealObjCBridge.AppodealGetPredictedEcpm (nativeAdTypesForType (adType));
		}

		public void setSegmentFilter (string name, bool value) {
			AppodealObjCBridge.AppodealSetSegmentFilterBool (name, value);
		}

		public void setSegmentFilter (string name, int value) {
			AppodealObjCBridge.AppodealSetSegmentFilterInt (name, value);
		}

		public void setSegmentFilter (string name, double value) {
			AppodealObjCBridge.AppodealSetSegmentFilterDouble (name, value);
		}

		public void setSegmentFilter (string name, string value) {
			AppodealObjCBridge.AppodealSetSegmentFilterString (name, value);
		}

		public void setExtraData (string key, bool value) {
			AppodealObjCBridge.AppodealSetExtraDataBool (key, value);
		}

		public void setExtraData (string key, int value) {
			AppodealObjCBridge.AppodealSetExtraDataInt (key, value);
		}

		public void setExtraData (string key, double value) {
			AppodealObjCBridge.AppodealSetExtraDataDouble (key, value);
		}

		public void setExtraData (string key, string value) {
			AppodealObjCBridge.AppodealSetExtraDataString (key, value);
		}

		public void setTriggerOnLoadedOnPrecache (int adTypes, bool onLoadedTriggerBoth) {
			AppodealObjCBridge.AppodealSetTriggerPrecacheCallbacks (onLoadedTriggerBoth);
		}

		public void destroy (int adType) {
			Debug.Log ("Not Supported by iOS SDK");
		}

		//User Settings

		public void getUserSettings () {
			// No additional state change required on iOS
		}

		public void setUserId (string id) {
			AppodealObjCBridge.AppodealSetUserId (id);
		}

		public void setAge (int age) {
			AppodealObjCBridge.AppodealSetUserAge (age);
		}

		public void setGender (UserSettings.Gender gender) {
			switch (gender) {
				case UserSettings.Gender.OTHER:
					{
						AppodealObjCBridge.AppodealSetUserGender (0);
						break;
					}
				case UserSettings.Gender.MALE:
					{
						AppodealObjCBridge.AppodealSetUserGender (1);
						break;
					}
				case UserSettings.Gender.FEMALE:
					{
						AppodealObjCBridge.AppodealSetUserGender (2);
						break;
					}
			}
		}

		public void trackInAppPurchase (double amount, string currency) {
			AppodealObjCBridge.AppodealTrackInAppPurchase (amount, currency);
		}
	}
}
#endif