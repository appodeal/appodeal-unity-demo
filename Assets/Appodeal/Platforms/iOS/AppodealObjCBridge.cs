using System;
using System.Runtime.InteropServices;

#if UNITY_IPHONE
namespace AppodealAds.Unity.iOS
{
	
	internal delegate void AppodealInterstitialCallbacks ();
	internal delegate void AppodealInterstitialDidLoadCallback (bool isPrecache);
	internal delegate void AppodealNonSkippableVideoCallbacks ();
	internal delegate void AppodealNonSkippableVideoDidDismissCallback (bool isFinished);
	internal delegate void AppodealBannerCallbacks ();
	internal delegate void AppodealBannerDidLoadCallback (bool isPrecache);
	internal delegate void AppodealBannerViewCallbacks ();
	internal delegate void AppodealBannerViewDidLoadCallback (bool isPrecache);
	internal delegate void AppodealRewardedVideoCallbacks ();
	internal delegate void AppodealRewardedVideoDidDismissCallback (bool isFinished);
	internal delegate void AppodealRewardedVideoDidFinishCallback (int amount, string name);
	
	internal class AppodealObjCBridge {
		
		[DllImport("__Internal")]
		internal static extern void AppodealInitializeWithTypes (string apiKey, int types, string pluginVer);
		
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
		internal static extern void setSmartBanners(bool value);

		[DllImport("__Internal")]
		internal static extern void setBannerBackground(bool value);

		[DllImport("__Internal")]
		internal static extern void setBannerAnimation(bool value);

		[DllImport("__Internal")]
		internal static extern void AppodealSetLogLevel(int loglevel);

		[DllImport("__Internal")]
		internal static extern void AppodealSetTestingEnabled(bool value);

		[DllImport("__Internal")]
		internal static extern void AppodealSetChildDirectedTreatment(bool value);

		[DllImport("__Internal")]
		internal static extern void AppodealDisableNetwork(string name);

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
		internal static extern int AppodealGetRewardAmount (string placement);

		[DllImport("__Internal")]
		internal static extern void setCustomSegmentString(string name, string value);

		[DllImport("__Internal")]
		internal static extern void setCustomSegmentDouble(string name, double value);

		[DllImport("__Internal")]
		internal static extern void setCustomSegmentInt(string name, int value);

		[DllImport("__Internal")]
		internal static extern void setCustomSegmentBool(string name, bool value);

		[DllImport("__Internal")]
		internal static extern void trackInAppPurchase(double amount, string currency);

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
			AppodealNonSkippableVideoCallbacks nonSkippableVideoDidLoadAd,
			AppodealNonSkippableVideoCallbacks nonSkippableVideoDidFailToLoadAd,
			AppodealNonSkippableVideoDidDismissCallback nonSkippableVideoWillDismiss,
			AppodealNonSkippableVideoCallbacks nonSkippableVideoDidFinish,
			AppodealNonSkippableVideoCallbacks nonSkippableVideoDidPresent
		);
		
		[DllImport("__Internal")]
		internal static extern void AppodealSetRewardedVideoDelegate(
			AppodealRewardedVideoCallbacks rewardedVideoDidLoadAd,
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