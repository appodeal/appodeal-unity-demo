#if UNITY_IPHONE

using System.Runtime.InteropServices;

namespace AppodealAds.Unity.iOS {
	
	internal delegate void AppodealInterstitialCallbacks ();
	internal delegate void AppodealInterstitialDidLoadCallback (bool isPrecache);
	internal delegate void AppodealNonSkippableVideoCallbacks ();
    internal delegate void AppodealNonSkippableVideoDidLoadCallback(bool isPrecache);
	internal delegate void AppodealNonSkippableVideoDidDismissCallback (bool isFinished);
	internal delegate void AppodealBannerCallbacks ();
	internal delegate void AppodealBannerDidLoadCallback (bool isPrecache);
	internal delegate void AppodealBannerViewCallbacks ();
	internal delegate void AppodealBannerViewDidLoadCallback (bool isPrecache);
	internal delegate void AppodealRewardedVideoCallbacks ();
    internal delegate void AppodealRewardedVideoDidLoadCallback (bool isPrecache);
	internal delegate void AppodealRewardedVideoDidDismissCallback (bool isFinished);
    internal delegate void AppodealRewardedVideoDidFinishCallback (double amount, string name);
	
	internal class AppodealObjCBridge {

		[DllImport("__Internal")]
		internal static extern void AppodealInitialize (string apiKey, int types, bool hasConsent, string pluginVer);
		
		[DllImport("__Internal")]
		internal static extern bool AppodealShowAd (int style);

		[DllImport("__Internal")]
		internal static extern bool AppodealShowAdforPlacement (int style, string placement);

		[DllImport("__Internal")]
		internal static extern bool AppodealShowBannerAdViewforPlacement (int style, int gravity, string placement);

		[DllImport("__Internal")]
		internal static extern bool AppodealIsReadyWithStyle (int style);

		[DllImport("__Internal")]
		internal static extern void AppodealHideBanner ();

		[DllImport("__Internal")]
		internal static extern void AppodealHideBannerView ();
		
		[DllImport("__Internal")]
		internal static extern void AppodealCacheAd (int types);
		
		[DllImport("__Internal")]
		internal static extern void AppodealSetAutocache (bool autocache, int types);

		[DllImport("__Internal")]
        internal static extern void AppodealSetSmartBanners(bool value);

		[DllImport("__Internal")]
        internal static extern void AppodealSetBannerBackground(bool value);

		[DllImport("__Internal")]
        internal static extern void AppodealSetBannerAnimation(bool value);

		[DllImport("__Internal")]
		internal static extern void AppodealSetLogLevel(int loglevel);

		[DllImport("__Internal")]
		internal static extern void AppodealSetTestingEnabled(bool value);

		[DllImport("__Internal")]
		internal static extern void AppodealSetChildDirectedTreatment(bool value);

		[DllImport("__Internal")]
		internal static extern void AppodealDisableNetwork(string name);

        [DllImport("__Internal")]
        internal static extern void AppodealSetTriggerPrecacheCallbacks(bool value);

		[DllImport("__Internal")]
		internal static extern void AppodealDisableNetworkForAdTypes(string name, int type);

		[DllImport("__Internal")]
		internal static extern void AppodealDisableLocationPermissionCheck();

		[DllImport("__Internal")]
		internal static extern string AppodealGetVersion ();

		[DllImport("__Internal")]
		internal static extern bool AppodealCanShow (int style);

		[DllImport("__Internal")]
		internal static extern bool AppodealCanShowWithPlacement (int style, string placement);

		[DllImport("__Internal")]
		internal static extern string AppodealGetRewardCurrency (string placement);

		[DllImport("__Internal")]
		internal static extern double AppodealGetRewardAmount (string placement);

		[DllImport("__Internal")]
        internal static extern void AppodealSetSegmentFilterString(string name, string value);

		[DllImport("__Internal")]
        internal static extern void AppodealSetSegmentFilterDouble(string name, double value);

		[DllImport("__Internal")]
        internal static extern void AppodealSetSegmentFilterInt(string name, int value);

		[DllImport("__Internal")]
        internal static extern void AppodealSetSegmentFilterBool(string name, bool value);

		[DllImport("__Internal")]
        internal static extern void AppodealTrackInAppPurchase(double amount, string currency);

		[DllImport("__Internal")]
		internal static extern void AppodealSetUserId(string id);

		[DllImport("__Internal")]
		internal static extern void AppodealSetUserAge(int age);

		[DllImport("__Internal")]
		internal static extern void AppodealSetUserGender(int gender);


		[DllImport("__Internal")]
		internal static extern void AppodealSetInterstitialDelegate (
			AppodealInterstitialDidLoadCallback interstitialDidLoadAd,
			AppodealInterstitialCallbacks interstitialDidFailToLoadAd,
			AppodealInterstitialCallbacks interstitialDidClick,
			AppodealInterstitialCallbacks interstitialDidDismiss,
			AppodealInterstitialCallbacks interstitialWillPresent
		);

		[DllImport("__Internal")]
		internal static extern void AppodealSetNonSkippableVideoDelegate (
            AppodealNonSkippableVideoDidLoadCallback nonSkippableVideoDidLoadAd,
			AppodealNonSkippableVideoCallbacks nonSkippableVideoDidFailToLoadAd,
			AppodealNonSkippableVideoDidDismissCallback nonSkippableVideoWillDismiss,
			AppodealNonSkippableVideoCallbacks nonSkippableVideoDidFinish,
			AppodealNonSkippableVideoCallbacks nonSkippableVideoDidPresent
		);
		
		[DllImport("__Internal")]
		internal static extern void AppodealSetRewardedVideoDelegate(
            AppodealRewardedVideoDidLoadCallback rewardedVideoDidLoadAd,
			AppodealRewardedVideoCallbacks rewardedVideoDidFailToLoadAd,
			AppodealRewardedVideoDidDismissCallback rewardedVideoWillDismiss,
			AppodealRewardedVideoDidFinishCallback rewardedVideoDidFinish,
			AppodealRewardedVideoCallbacks rewardedVideoDidPresent
		);
		
		[DllImport("__Internal")]
		internal static extern void AppodealSetBannerDelegate (
			AppodealBannerDidLoadCallback bannerDidLoadAd,
			AppodealBannerCallbacks bannerDidFailToLoadAd,
			AppodealBannerCallbacks bannerDidClick,
			AppodealBannerCallbacks bannerDidShow
		);

		[DllImport("__Internal")]
		internal static extern void AppodealSetBannerViewDelegate (
			AppodealBannerDidLoadCallback bannerDidLoadAd,
			AppodealBannerCallbacks bannerDidFailToLoadAd,
			AppodealBannerCallbacks bannerDidClick
		);

	}

}

#endif