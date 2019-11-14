using System.Collections.Generic;
using System.Reflection;
using AppodealAds.Unity.Common;
using UnityEngine;

namespace AppodealAds.Unity.Api
{
    public class AppodealNetworks
    {
        public const string ADCOLONY = "adcolony";
        public const string ADMOB = "admob";
        public const string AMAZON_ADS = "amazon_ads";
        public const string APPLOVIN = "applovin";
        public const string APPNEXUS = "appnexus";
        public const string APPODEAL = "appodeal";
        public const string APPODEALX = "appodealx";
        public const string CHARTBOOST = "chartboost";
        public const string FACEBOOK = "facebook";
        public const string FLURRY = "flurry";
        public const string INMOBI = "inmobi";
        public const string INNER_ACTIVE = "inner-active";
        public const string IRON_SOURCE = "ironsource";
        public const string MY_TARGET = "my_target";
        public const string MINTEGRAL = "mintegral";
        public const string MOPUB = "mopub";
        public const string MRAID = "mraid";
        public const string MRAID_VA = "mraid_va";
        public const string NAST = "nast";
        public const string OGURY_PRESAGE = "ogury";
        public const string OPENX = "openx";
        public const string PUBNATIVE = "pubnative";
        public const string SMAATO = "smaato";
        public const string STARTAPP = "startapp";
        public const string TAPJOY = "tapjoy";
        public const string UNITY_ADS = "unity_ads";
        public const string VAST = "vast";
        public const string VPAID = "vpaid";
        public const string VUNGLE = "vungle";
        public const string YANDEX = "yandex";
    }

    public class Appodeal
    {
        public const int NONE = 0;
        public const int INTERSTITIAL = 3;
        public const int BANNER = 4;
        public const int BANNER_BOTTOM = 8;
        public const int BANNER_TOP = 16;
        public const int BANNER_VIEW = 64;
        public const int MREC = 512;
        public const int REWARDED_VIDEO = 128;
#if UNITY_ANDROID || UNITY_EDITOR
        public const int NON_SKIPPABLE_VIDEO = 128;
#elif UNITY_IPHONE
		public const int NON_SKIPPABLE_VIDEO = 256;
#endif

        public const int BANNER_HORIZONTAL_SMART = -1;
        public const int BANNER_HORIZONTAL_CENTER = -2;
        public const int BANNER_HORIZONTAL_RIGHT = -3;
        public const int BANNER_HORIZONTAL_LEFT = -4;

        public const string APPODEAL_PLUGIN_VERSION = "2.8.62";

        public enum LogLevel
        {
            None,
            Debug,
            Verbose
        }

        private static IAppodealAdsClient client;

        private static IAppodealAdsClient getInstance()
        {
            if (client == null)
            {
                client = AppodealAdsClientFactory.GetAppodealAdsClient();
            }

            return client;
        }

        public static void initialize(string appKey, int adTypes)
        {
            getInstance().initialize(appKey, adTypes);
        }

        public static void initialize(string appKey, int adTypes, bool hasConsent)
        {
            getInstance().initialize(appKey, adTypes, hasConsent);
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

        public static void onResume(int adTypes)
        {
            getInstance().onResume(adTypes);
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

        public static void resetFilterMatureContetnFlag()
        {
            getInstance().resetFilterMatureContentFlag();
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
            string unityVersion = Application.unityVersion;
            if (string.IsNullOrEmpty(unityVersion))
            {
                PropertyInfo appId =
                    typeof(Application).GetProperty("identifier", BindingFlags.Public | BindingFlags.Static);
                if (appId != null) unityVersion = "5.6+";
                else unityVersion = "5.5-";
            }

            return unityVersion;
        }
    }

    public class ExtraData
    {
        public static string APPSFLYER_ID = "appsflyer_id";
    }

    public class UserSettings
    {
        private static IAppodealAdsClient client;

        private static IAppodealAdsClient getInstance()
        {
            if (client == null)
            {
                client = AppodealAdsClientFactory.GetAppodealAdsClient();
            }

            return client;
        }

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

        public UserSettings setUserId(string id)
        {
            getInstance().setUserId(id);
            return this;
        }

        public UserSettings setAge(int age)
        {
            getInstance().setAge(age);
            return this;
        }

        public UserSettings setGender(Gender gender)
        {
            getInstance().setGender(gender);
            return this;
        }
    }
}