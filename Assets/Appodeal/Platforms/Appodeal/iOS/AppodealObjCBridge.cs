#if UNITY_IPHONE
using System.Runtime.InteropServices;

namespace AppodealAds.Unity.iOS
{
    internal delegate void AppodealInterstitialCallbacks();

    internal delegate void AppodealInterstitialDidLoadCallback(bool isPrecache);

    internal delegate void AppodealNonSkippableVideoCallbacks();

    internal delegate void AppodealNonSkippableVideoDidLoadCallback(bool isPrecache);

    internal delegate void AppodealNonSkippableVideoDidDismissCallback(bool isFinished);

    internal delegate void AppodealBannerCallbacks();

    internal delegate void AppodealBannerDidLoadCallback(int height, bool isPrecache);

    internal delegate void AppodealBannerViewCallbacks();

    internal delegate void AppodealBannerViewDidLoadCallback(int height, bool isPrecache);

    internal delegate void AppodealMrecViewCallbacks();

    internal delegate void AppodealMrecViewDidLoadCallback(bool isPrecache);

    internal delegate void AppodealRewardedVideoCallbacks();

    internal delegate void AppodealRewardedVideoDidLoadCallback(bool isPrecache);

    internal delegate void AppodealRewardedVideoDidDismissCallback(bool isFinished);

    internal delegate void AppodealRewardedVideoDidFinishCallback(double amount, string name);

    internal static class AppodealObjCBridge
    {
        [DllImport("__Internal")]
        internal static extern void AppodealInitialize(string apiKey, int types, bool hasConsent, string pluginVer,
            string engineVersion);
        
        [DllImport("__Internal")]
        internal static extern void AppodealInitializeWithConsent(string apiKey, int types, string pluginVer,
            string engineVersion);

        [DllImport("__Internal")]
        internal static extern bool AppodealIsInitialized(int type);

        [DllImport("__Internal")]
        internal static extern bool AppodealShowAd(int style);

        [DllImport("__Internal")]
        internal static extern bool AppodealShowAdforPlacement(int style, string placement);

        [DllImport("__Internal")]
        internal static extern bool AppodealShowBannerAdViewforPlacement(int style, int gravity, string placement);

        [DllImport("__Internal")]
        internal static extern bool AppodealShowMrecAdViewforPlacement(int style, int gravity, string placement);

        [DllImport("__Internal")]
        internal static extern bool AppodealIsReadyWithStyle(int style);

        [DllImport("__Internal")]
        internal static extern void AppodealHideBanner();

        [DllImport("__Internal")]
        internal static extern void AppodealHideBannerView();

        [DllImport("__Internal")]
        internal static extern void AppodealHideMrecView();

        [DllImport("__Internal")]
        internal static extern void AppodealCacheAd(int types);

        [DllImport("__Internal")]
        internal static extern void AppodealSetAutocache(bool autocache, int types);

        [DllImport("__Internal")]
        internal static extern void AppodealSetSmartBanners(bool value);

        [DllImport("__Internal")]
        internal static extern void AppodealSetTabletBanners(bool value);

        [DllImport("__Internal")]
        internal static extern void AppodealSetBannerBackground(bool value);

        [DllImport("__Internal")]
        internal static extern void AppodealSetBannerAnimation(bool value);
        
        [DllImport("__Internal")]
        internal static extern void AppodealSetBannerRotation(int leftBannerRotation, int rightBannerRotation);

        [DllImport("__Internal")]
        internal static extern void AppodealSetLogLevel(int loglevel);

        [DllImport("__Internal")]
        internal static extern void AppodealSetTestingEnabled(bool value);

        [DllImport("__Internal")]
        internal static extern void AppodealSetChildDirectedTreatment(bool value);

        [DllImport("__Internal")]
        internal static extern void AppodealUpdateConsent(bool value);
        
        [DllImport("__Internal")]
        internal static extern void AppodealUpdateConsentReport();

        [DllImport("__Internal")]
        internal static extern void AppodealDisableNetwork(string name);

        [DllImport("__Internal")]
        internal static extern void AppodealSetTriggerPrecacheCallbacks(bool value);

        [DllImport("__Internal")]
        internal static extern void AppodealDisableNetworkForAdTypes(string name, int type);

        [DllImport("__Internal")]
        internal static extern void AppodealDisableLocationPermissionCheck();

        [DllImport("__Internal")]
        internal static extern string AppodealGetVersion();

        [DllImport("__Internal")]
        internal static extern bool AppodealCanShow(int style);

        [DllImport("__Internal")]
        internal static extern bool AppodealCanShowWithPlacement(int style, string placement);

        [DllImport("__Internal")]
        internal static extern string AppodealGetRewardCurrency(string placement);

        [DllImport("__Internal")]
        internal static extern double AppodealGetRewardAmount(string placement);

        [DllImport("__Internal")]
        internal static extern double AppodealGetPredictedEcpm(int adType);

        [DllImport("__Internal")]
        internal static extern void AppodealSetSegmentFilterString(string name, string value);

        [DllImport("__Internal")]
        internal static extern void AppodealSetSegmentFilterDouble(string name, double value);

        [DllImport("__Internal")]
        internal static extern void AppodealSetSegmentFilterInt(string name, int value);

        [DllImport("__Internal")]
        internal static extern void AppodealSetCustomFilterBool(string name, bool value);
        
        [DllImport("__Internal")]
        internal static extern void AppodealSetCustomFilterString(string name, string value);

        [DllImport("__Internal")]
        internal static extern void AppodealSetCustomFilterDouble(string name, double value);

        [DllImport("__Internal")]
        internal static extern void AppodealSetCustomFilterInt(string name, int value);

        [DllImport("__Internal")]
        internal static extern void AppodealSetSegmentFilterBool(string name, bool value);

        [DllImport("__Internal")]
        internal static extern void AppodealSetExtraDataBool(string name, bool value);

        [DllImport("__Internal")]
        internal static extern void AppodealSetExtraDataInt(string name, int value);

        [DllImport("__Internal")]
        internal static extern void AppodealSetExtraDataDouble(string name, double value);

        [DllImport("__Internal")]
        internal static extern void AppodealSetExtraDataString(string name, string value);

        [DllImport("__Internal")]
        internal static extern void AppodealTrackInAppPurchase(double amount, string currency);

        [DllImport("__Internal")]
        internal static extern void AppodealSetUserId(string id);

        [DllImport("__Internal")]
        internal static extern void AppodealSetUserAge(int age);

        [DllImport("__Internal")]
        internal static extern void AppodealSetUserGender(int gender);
        
        [DllImport("__Internal")]
        internal static extern bool AppodealIsPrecacheAd(int adType);
        
        [DllImport("__Internal")]
        internal static extern bool AppodealIsAutoCacheEnabled(int adType);

        [DllImport("__Internal")]
        internal static extern void AppodealSetInterstitialDelegate(
            AppodealInterstitialDidLoadCallback interstitialDidLoadAd,
            AppodealInterstitialCallbacks interstitialDidFailToLoadAd,
            AppodealInterstitialCallbacks interstitialDidFailToPresent,
            AppodealInterstitialCallbacks interstitialWillPresent,
            AppodealInterstitialCallbacks interstitialDidDismiss,
            AppodealInterstitialCallbacks interstitialDidClick,
            AppodealInterstitialCallbacks interstitialDidExpired
        );

        [DllImport("__Internal")]
        internal static extern void AppodealSetNonSkippableVideoDelegate(
            AppodealNonSkippableVideoDidLoadCallback nonSkippableVideoDidLoadAd,
            AppodealNonSkippableVideoCallbacks nonSkippableVideoDidFailToLoadAd,
            AppodealNonSkippableVideoCallbacks nonSkippableVideoDidFailToPresentWithError,
            AppodealNonSkippableVideoDidDismissCallback nonSkippableVideoWillDismiss,
            AppodealNonSkippableVideoCallbacks nonSkippableVideoDidFinish,
            AppodealNonSkippableVideoCallbacks nonSkippableVideoDidPresent,
            AppodealNonSkippableVideoCallbacks nonSkippableVideoDidExpired
        );

        [DllImport("__Internal")]
        internal static extern void AppodealSetRewardedVideoDelegate(
            AppodealRewardedVideoDidLoadCallback rewardedVideoDidLoadAd,
            AppodealRewardedVideoCallbacks rewardedVideoDidFailToLoadAd,
            AppodealRewardedVideoCallbacks rewardedVideoDidFailToPresentWithError,
            AppodealRewardedVideoDidDismissCallback rewardedVideoWillDismiss,
            AppodealRewardedVideoDidFinishCallback rewardedVideoDidFinish,
            AppodealRewardedVideoCallbacks rewardedVideoDidPresent,
            AppodealRewardedVideoCallbacks rewardedVideoDidExpired,
            AppodealRewardedVideoCallbacks rewardedVideoDidReceiveTap
        );

        [DllImport("__Internal")]
        internal static extern void AppodealSetBannerDelegate(
            AppodealBannerDidLoadCallback bannerDidLoadAd,
            AppodealBannerCallbacks bannerDidFailToLoadAd,
            AppodealBannerCallbacks bannerDidClick,
            AppodealBannerCallbacks bannerDidShow,
            AppodealBannerCallbacks bannerDidExpired
        );

        [DllImport("__Internal")]
        internal static extern void AppodealSetBannerViewDelegate(
            AppodealBannerDidLoadCallback bannerDidLoadAd,
            AppodealBannerCallbacks bannerDidFailToLoadAd,
            AppodealBannerCallbacks bannerDidClick,
            AppodealBannerCallbacks bannerDidExpired
        );

        [DllImport("__Internal")]
        internal static extern void AppodealSetMrecViewDelegate(
            AppodealMrecViewDidLoadCallback mrecDidLoadAd,
            AppodealMrecViewCallbacks mrecDidFailToLoadAd,
            AppodealMrecViewCallbacks mrecDidClick,
            AppodealMrecViewCallbacks mrecDidExpired
        );
    }
}

#endif