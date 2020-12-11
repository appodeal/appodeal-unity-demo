using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using System.Reflection;
using AppodealAds.Unity.Common;
using ConsentManager.Api;
using UnityEngine;

namespace AppodealAds.Unity.Api
{
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "UnusedMember.Global")]
    [SuppressMessage("ReSharper", "UnusedType.Global")]
    public class AppodealNetworks
    {
        public const string VUNGLE = "vungle";
        public const string SMAATO = "smaato";
        public const string INMOBI = "inmobi";
        public const string FYBER = "fyber";
        public const string STARTAPP = "startapp";
        public const string TAPJOY = "tapjoy";
        public const string APPLOVIN = "applovin";
        public const string ADCOLONY = "adcolony";
        public const string MY_TARGET = "my_target";
        public const string BIDMACHINE = "bidmachine";
        public const string FLURRY = "flurry";
        public const string AMAZON_ADS = "amazon_ads";
        public const string ADMOB = "admob";
        public const string UNITY_ADS = "unity_ads";
        public const string FACEBOOK = "facebook";
        public const string YANDEX = "yandex";
        public const string APPODEAL = "appodeal";
        public const string IRONSOURCE = "ironsource";
        public const string A4G = "a4g";
        public const string MOPUB = "mopub";
        public const string CHARTBOOST = "chartboost";
        public const string MRAID = "mraid";
        public const string MINTEGRAL = "mintegral";
        public const string NAST = "nast";
        public const string OGURY = "ogury";
        public const string VAST = "vast";
    }

    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "UnusedMethodReturnValue.Global")]
    [SuppressMessage("ReSharper", "UnusedMember.Global")]
    public static class Appodeal
    {
        public const int NONE = 0;
        public const int INTERSTITIAL = 3;
        public const int BANNER = 4;
        public const int BANNER_BOTTOM = 8;
        public const int BANNER_TOP = 16;
        public const int BANNER_VIEW = 64;
        public const int MREC = 512;
        public const int REWARDED_VIDEO = 128;
        public const int BANNER_LEFT = 1024;
        public const int BANNER_RIGHT = 2048;
#if UNITY_ANDROID || UNITY_EDITOR
        public const int NON_SKIPPABLE_VIDEO = 128;
#elif UNITY_IPHONE
		public const int NON_SKIPPABLE_VIDEO = 256;
#endif

        public const int BANNER_HORIZONTAL_SMART = -1;
        public const int BANNER_HORIZONTAL_CENTER = -2;
        public const int BANNER_HORIZONTAL_RIGHT = -3;
        public const int BANNER_HORIZONTAL_LEFT = -4;

        public const string APPODEAL_PLUGIN_VERSION = "2.11.2";

        public enum LogLevel
        {
            None,
            Debug,
            Verbose
        }

        private static IAppodealAdsClient client;

        private static IAppodealAdsClient getInstance()
        {
            return client ?? (client = AppodealAdsClientFactory.GetAppodealAdsClient());
        }

        public static void initialize(string appKey, int adTypes)
        {
            getInstance().initialize(appKey, adTypes);
        }

        public static void initialize(string appKey, int adTypes, bool hasConsent)
        {
            getInstance().initialize(appKey, adTypes, hasConsent);
        }

        public static void initialize(string appKey, int adTypes, Consent consent)
        {
            getInstance().initialize(appKey, adTypes, consent);
        }

        public static bool show(int adTypes)
        {
            return getInstance().show(adTypes);
        }

        public static bool show(int adTypes, string placement)
        {
            return getInstance().show(adTypes, placement);
        }

        public static bool showBannerView(int YAxis, int XGravity, string placement)
        {
            return getInstance().showBannerView(YAxis, XGravity, placement);
        }

        public static bool showMrecView(int YAxis, int XGravity, string placement)
        {
            return getInstance().showMrecView(YAxis, XGravity, placement);
        }

        public static bool isLoaded(int adTypes)
        {
            return getInstance().isLoaded(adTypes);
        }

        public static void cache(int adTypes)
        {
            getInstance().cache(adTypes);
        }

        public static void hide(int adTypes)
        {
            getInstance().hide(adTypes);
        }

        public static void hideBannerView()
        {
            getInstance().hideBannerView();
        }

        public static void hideMrecView()
        {
            getInstance().hideMrecView();
        }

        public static void setAutoCache(int adTypes, bool autoCache)
        {
            getInstance().setAutoCache(adTypes, autoCache);
        }

        public static bool isPrecache(int adTypes)
        {
            return getInstance().isPrecache(adTypes);
        }

        public static void setSmartBanners(bool value)
        {
            getInstance().setSmartBanners(value);
        }

        public static void setBannerBackground(bool value)
        {
            getInstance().setBannerBackground(value);
        }

        public static void setBannerAnimation(bool value)
        {
            getInstance().setBannerAnimation(value);
        }

        public static void setTabletBanners(bool value)
        {
            getInstance().setTabletBanners(value);
        }

        public static void setBannerRotation(int leftBannerRotation, int rightBannerRotation)
        {
            getInstance().setBannerRotation(leftBannerRotation, rightBannerRotation);
        }

        public static void setTesting(bool test)
        {
            getInstance().setTesting(test);
        }

        public static void setLogLevel(LogLevel log)
        {
            getInstance().setLogLevel(log);
        }

        public static void setChildDirectedTreatment(bool value)
        {
            getInstance().setChildDirectedTreatment(value);
        }

        public static void updateConsent(bool value)
        {
            getInstance().updateConsent(value);
        }

        public static void updateConsent(Consent consent)
        {
            getInstance().updateConsent(consent);
        }

        public static void disableNetwork(string network)
        {
            getInstance().disableNetwork(network);
        }

        public static void disableNetwork(string network, int adType)
        {
            getInstance().disableNetwork(network, adType);
        }

        public static void disableLocationPermissionCheck()
        {
            getInstance().disableLocationPermissionCheck();
        }

        public static void disableWriteExternalStoragePermissionCheck()
        {
            getInstance().disableWriteExternalStoragePermissionCheck();
        }

        public static void setTriggerOnLoadedOnPrecache(int adTypes, bool onLoadedTriggerBoth)
        {
            getInstance().setTriggerOnLoadedOnPrecache(adTypes, onLoadedTriggerBoth);
        }

        public static void muteVideosIfCallsMuted(bool value)
        {
            getInstance().muteVideosIfCallsMuted(value);
        }

        public static void showTestScreen()
        {
            getInstance().showTestScreen();
        }

        public static bool canShow(int adTypes)
        {
            return getInstance().canShow(adTypes);
        }

        public static bool canShow(int adTypes, string placement)
        {
            return getInstance().canShow(adTypes, placement);
        }

        public static void setSegmentFilter(string name, bool value)
        {
            getInstance().setSegmentFilter(name, value);
        }

        public static void setSegmentFilter(string name, int value)
        {
            getInstance().setSegmentFilter(name, value);
        }

        public static void setSegmentFilter(string name, double value)
        {
            getInstance().setSegmentFilter(name, value);
        }

        public static void setSegmentFilter(string name, string value)
        {
            getInstance().setSegmentFilter(name, value);
        }

        public static void setCustomFilter(string name, bool value)
        {
            getInstance().setCustomFilter(name, value);
        }

        public static void setCustomFilter(string name, int value)
        {
            getInstance().setCustomFilter(name, value);
        }

        public static void setCustomFilter(string name, double value)
        {
            getInstance().setCustomFilter(name, value);
        }

        public static void setCustomFilter(string name, string value)
        {
            getInstance().setCustomFilter(name, value);
        }

        public static void setExtraData(string key, bool value)
        {
            getInstance().setExtraData(key, value);
        }

        public static void setExtraData(string key, int value)
        {
            getInstance().setExtraData(key, value);
        }

        public static void setExtraData(string key, double value)
        {
            getInstance().setExtraData(key, value);
        }

        public static void setExtraData(string key, string value)
        {
            getInstance().setExtraData(key, value);
        }

        public static void trackInAppPurchase(double amount, string currency)
        {
            getInstance().trackInAppPurchase(amount, currency);
        }

        public static string getNativeSDKVersion()
        {
            return getInstance().getVersion();
        }

        public static string getPluginVersion()
        {
            return APPODEAL_PLUGIN_VERSION;
        }

        public static void setInterstitialCallbacks(IInterstitialAdListener listener)
        {
            getInstance().setInterstitialCallbacks(listener);
        }

        public static void setNonSkippableVideoCallbacks(INonSkippableVideoAdListener listener)
        {
            getInstance().setNonSkippableVideoCallbacks(listener);
        }

        public static void setRewardedVideoCallbacks(IRewardedVideoAdListener listener)
        {
            getInstance().setRewardedVideoCallbacks(listener);
        }

        public static void setBannerCallbacks(IBannerAdListener listener)
        {
            getInstance().setBannerCallbacks(listener);
        }

        public static void setMrecCallbacks(IMrecAdListener listener)
        {
            getInstance().setMrecCallbacks(listener);
        }

        public static void requestAndroidMPermissions(IPermissionGrantedListener listener)
        {
            getInstance().requestAndroidMPermissions(listener);
        }

        public static KeyValuePair<string, double> getRewardParameters()
        {
            return new KeyValuePair<string, double>(getInstance().getRewardCurrency(), getInstance().getRewardAmount());
        }

        public static KeyValuePair<string, double> getRewardParameters(string placement)
        {
            return new KeyValuePair<string, double>(getInstance().getRewardCurrency(placement),
                getInstance().getRewardAmount(placement));
        }

        public static double getPredictedEcpm(int adType)
        {
            return getInstance().getPredictedEcpm(adType);
        }

        public static void destroy(int adTypes)
        {
            getInstance().destroy(adTypes);
        }

        public static string getUnityVersion()
        {
            var unityVersion = Application.unityVersion;
            if (!string.IsNullOrEmpty(unityVersion)) return unityVersion;
            var appId =
                typeof(Application).GetProperty("identifier", BindingFlags.Public | BindingFlags.Static);
            unityVersion = appId != null ? "5.6+" : "5.5-";

            return unityVersion;
        }

        public static void setUserId(string id)
        {
            getInstance().setUserId(id);
        }

        public static void setUserAge(int age)
        {
            getInstance().setUserAge(age);
        }

        public static void setUserGender(UserSettings.Gender gender)
        {
            getInstance().setUserGender(gender);
        }
        
        public static void setSharedAdsInstanceAcrossActivities(bool value)
        {
            getInstance().setSharedAdsInstanceAcrossActivities(value);
        }
    }

    [SuppressMessage("ReSharper", "InconsistentNaming")]
    public static class ExtraData
    {
        public const string APPSFLYER_ID = "appsflyer_id";
    }

    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "ClassNeverInstantiated.Global")]
    public class UserSettings
    {
        private static IAppodealAdsClient client;

        private static IAppodealAdsClient getInstance()
        {
            return client ?? (client = AppodealAdsClientFactory.GetAppodealAdsClient());
        }

        [SuppressMessage("ReSharper", "UnusedMember.Global")]
        public enum Gender
        {
            OTHER,
            MALE,
            FEMALE
        }

        public UserSettings()
        {
            getInstance().getUserSettings();
        }
    }
}