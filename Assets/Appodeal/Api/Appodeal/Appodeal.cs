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
    [SuppressMessage("ReSharper", "InvalidXmlDocComment")]
    public static class Appodeal
    {
        #region AdTypes

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

        #endregion

        /// <summary>
        /// The version for the Appodeal Unity SDK, which includes specific versions of the Appodeal Android and iOS SDKs.
        /// </summary>
        public const string APPODEAL_PLUGIN_VERSION = "2.13.1";

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

        /// <summary>
        /// Initializes the relevant (Android or iOS) Appodeal SDK.
        /// See <see cref="Appodeal.initialize"/> for resulting triggered event.
        /// <param name="appKey">Appodeal app key you received when you created an app.</param>
        /// <param name="adTypes">Type of advertising you want to initialize.</param>
        /// 
        ///  To initialize only interstitials use <see cref="Appodeal.initialize(appKey, Appodeal.INTERSTITIAL);"/> 
        ///  To initialize only banners use <see cref="Appodeal.initialize(appKey, Appodeal.BANNER);"/> 
        ///  To initialize only rewarded video use <see cref="Appodeal.initialize(appKey, Appodeal.REWARDED_VIDEO);"/> 
        ///  To initialize only non-skippable video use <see cref="Appodeal.initialize(appKey, Appodeal.NON_SKIPPABLE_VIDEO);"/> 
        ///  To initialize only 300*250 banners use <see cref="Appodeal.initialize(appKey, Appodeal.MREC);"/> 
        /// </summary>
        public static void initialize(string appKey, int adTypes)
        {
            getInstance().initialize(appKey, adTypes);
        }

        /// <summary>
        /// Initializes the relevant (Android or iOS) Appodeal SDK.
        /// See <see cref="Appodeal.initialize"/> for resulting triggered event.
        /// <param name="appKey">Appodeal app key you received when you created an app.</param>
        /// <param name="adTypes">Type of advertising you want to initialize.</param>
        /// <param name="hasConsent">User has given consent to the processing of personal data relating to him or her. https://www.eugdpr.org/.</param>
        /// 
        ///  To initialize only interstitials use <see cref="Appodeal.initialize(appKey, Appodeal.INTERSTITIAL, hasConsent);"/> 
        ///  To initialize only banners use <see cref="Appodeal.initialize(appKey, Appodeal.BANNER, hasConsent);"/> 
        ///  To initialize only rewarded video use <see cref="Appodeal.initialize(appKey, Appodeal.REWARDED_VIDEO, hasConsent);"/> 
        ///  To initialize only non-skippable video use <see cref="Appodeal.initialize(appKey, Appodeal.NON_SKIPPABLE_VIDEO, hasConsent);"/> 
        ///  To initialize only 300*250 banners use <see cref="Appodeal.initialize(appKey, Appodeal.MREC, hasConsent);"/> 
        /// </summary>
        public static void initialize(string appKey, int adTypes, bool hasConsent)
        {
            getInstance().initialize(appKey, adTypes, hasConsent);
        }

        /// <summary>
        /// Initializes the relevant (Android or iOS) Appodeal SDK.
        /// See <see cref="Appodeal.initialize"/> for resulting triggered event.
        /// <param name="appKey">Appodeal app key you received when you created an app.</param>
        /// <param name="adTypes">Type of advertising you want to initialize.</param>
        /// <param name="consent">Consent info object from Stack ConsentManager SDK.</param>
        /// 
        ///  To initialize only interstitials use <see cref="Appodeal.initialize(appKey, Appodeal.INTERSTITIAL, consent);"/> 
        ///  To initialize only banners use <see cref="Appodeal.initialize(appKey, Appodeal.BANNER, consent);"/> 
        ///  To initialize only rewarded video use <see cref="Appodeal.initialize(appKey, Appodeal.REWARDED_VIDEO, consent);"/> 
        ///  To initialize only non-skippable video use <see cref="Appodeal.initialize(appKey, Appodeal.NON_SKIPPABLE_VIDEO, consent);"/> 
        ///  To initialize only 300*250 banners use <see cref="Appodeal.initialize(appKey, Appodeal.MREC, consent);"/> 
        /// </summary>
        public static void initialize(string appKey, int adTypes, Consent consent)
        {
            getInstance().initialize(appKey, adTypes, consent);
        }

        /// <summary>
        /// Check if ad type is initialized
        /// See <see cref="Appodeal.isInitialized"/> for resulting triggered event.
        /// <param name="adType">adType type of advertising.</param>
        /// </summary>
        public static bool isInitialized(int adType)
        {
            return getInstance().isInitialized(adType);
        }

        /// <summary>
        /// Update consent value for ad networks in Appodeal SDK
        /// See <see cref="Appodeal.updateConsent"/> for resulting triggered event.
        /// <param name="hasConsent"> this param user has given consent to the processing of personal data relating to him or her. https://www.eugdpr.org/.</param>
        /// </summary>
        public static void updateConsent(bool hasConsent)
        {
            getInstance().updateConsent(hasConsent);
        }

        /// <summary>
        /// Update consent value for ad networks in Appodeal SDK
        /// See <see cref="Appodeal.updateConsent"/> for resulting triggered event.
        /// <param name="consent"> Consent user has given consent to the processing of personal data relating to him or her. https://www.eugdpr.org/.</param>
        /// </summary>
        public static void updateConsent(Consent consent)
        {
            getInstance().updateConsent(consent);
        }

        /// <summary>
        /// Check if auto cache enabled for  this ad type
        /// See <see cref="Appodeal.isAutoCacheEnabled"/> for resulting triggered event.
        /// <param name="adType">adType type of advertising.</param>
        /// </summary>
        public static bool isAutoCacheEnabled(int adType)
        {
            return getInstance().isAutoCacheEnabled(adType);
        }
        
        /// <summary>
        /// Set Interstitial ads callbacks
        /// See <see cref="Appodeal.setInterstitialCallbacks"/> for resulting triggered event.
        /// <param name="listener">callbacks implementation of Appodeal/Common/Appodeal/IInterstitialAdListener.</param>
        /// </summary>
        public static void setInterstitialCallbacks(IInterstitialAdListener listener)
        {
            getInstance().setInterstitialCallbacks(listener);
        }
        
        /// <summary>
        /// Set Interstitial ads callbacks
        /// See <see cref="Appodeal.setNonSkippableVideoCallbacks"/> for resulting triggered event.
        /// <param name="listener">callbacks implementation of Appodeal/Common/Appodeal/INonSkippableVideoAdListener.</param>
        /// </summary>
        public static void setNonSkippableVideoCallbacks(INonSkippableVideoAdListener listener)
        {
            getInstance().setNonSkippableVideoCallbacks(listener);
        }

        /// <summary>
        /// Set Interstitial ads callbacks
        /// See <see cref="Appodeal.setRewardedVideoCallbacks"/> for resulting triggered event.
        /// <param name="listener">callbacks implementation of Appodeal/Common/Appodeal/IRewardedVideoAdListener.</param>
        /// </summary>
        public static void setRewardedVideoCallbacks(IRewardedVideoAdListener listener)
        {
            getInstance().setRewardedVideoCallbacks(listener);
        }

        /// <summary>
        /// Set Interstitial ads callbacks
        /// See <see cref="Appodeal.setBannerCallbacks"/> for resulting triggered event.
        /// <param name="listener">callbacks implementation of Appodeal/Common/Appodeal/IBannerAdListener.</param>
        /// </summary>
        public static void setBannerCallbacks(IBannerAdListener listener)
        {
            getInstance().setBannerCallbacks(listener);
        }

        /// <summary>
        /// Set Interstitial ads callbacks
        /// See <see cref="Appodeal.setMrecCallbacks"/> for resulting triggered event.
        /// <param name="listener">callbacks implementation of Appodeal/Common/Appodeal/IMrecAdListener.</param>
        /// </summary>
        public static void setMrecCallbacks(IMrecAdListener listener)
        {
            getInstance().setMrecCallbacks(listener);
        }
        
        /// <summary>
        /// Start caching ads.
        /// See <see cref="Appodeal.cache"/> for resulting triggered event.
        /// <param name="adTypes">adType type of advertising.</param>
        /// </summary>
        public static void cache(int adTypes)
        {
            getInstance().cache(adTypes);
        }

        /// <summary>
        /// Show advertising.
        /// See <see cref="Appodeal.show"/> for resulting triggered event.
        /// <param name="adTypes">adType type of advertising.</param>
        /// </summary>
        public static bool show(int adTypes)
        {
            return getInstance().show(adTypes);
        }

        /// <summary>
        /// Show advertising.
        /// See <see cref="Appodeal.show"/> for resulting triggered event.
        /// <param name="adTypes">adType type of advertising.</param>
        /// <param name="placement">type of advertising you want to show.</param>
        /// </summary>
        public static bool show(int adTypes, string placement)
        {
            return getInstance().show(adTypes, placement);
        }

        /// <summary>
        /// Show banner view.
        /// See <see cref="Appodeal.showBannerView"/> for resulting triggered event.
        /// <param name="YAxis">y position for banner view.</param>
        /// <param name="XGravity">x position for banner view.</param>
        /// <param name="placement">type of advertising you want to show.</param>
        /// </summary>
        public static bool showBannerView(int YAxis, int XGravity, string placement)
        {
            return getInstance().showBannerView(YAxis, XGravity, placement);
        }
        
        /// <summary>
        /// Show mrec view.
        /// See <see cref="Appodeal.showMrecView"/> for resulting triggered event.
        /// <param name="YAxis">y position for mrec view.</param>
        /// <param name="XGravity">x position for mrec view.</param>
        /// <param name="placement">type of advertising you want to show.</param>
        /// </summary>
        public static bool showMrecView(int YAxis, int XGravity, string placement)
        {
            return getInstance().showMrecView(YAxis, XGravity, placement);
        }
        
        /// <summary>
        /// Hide advertising.
        /// See <see cref="Appodeal.hide"/> for resulting triggered event.
        /// <param name="adTypes">adType type of advertising  Appodeal.BANNER</param>
        /// </summary>
        public static void hide(int adTypes)
        {
            getInstance().hide(adTypes);
        }

        /// <summary>
        /// Hide Banner View.
        /// See <see cref="Appodeal.hideBannerView"/> for resulting triggered event.
        /// </summary>
        public static void hideBannerView()
        {
            getInstance().hideBannerView();
        }

        /// <summary>
        /// Hide Mrec view.
        /// See <see cref="Appodeal.hideMrecView"/> for resulting triggered event.
        /// </summary>
        public static void hideMrecView()
        {
            getInstance().hideMrecView();
        }
        
        /// <summary>
        /// Start or stop auto caching new ads when current ads was shown..
        /// See <see cref="Appodeal.setAutoCache"/> for resulting triggered event.
        /// <param name="adTypes">adType type of advertising </param>
        /// <param name="autoCache">true to use auto cache, false to not.</param>
        /// </summary>
        public static void setAutoCache(int adTypes, bool autoCache)
        {
            getInstance().setAutoCache(adTypes, autoCache);
        }
        
        /// <summary>
        /// Triggering onLoaded callback when precache loaded.
        /// See <see cref="Appodeal.setTriggerOnLoadedOnPrecache"/> for resulting triggered event.
        /// <param name="adTypes">adType type of advertising </param>
        /// <param name="onLoadedTriggerBoth">true - onLoaded will trigger when precache or normal ad were loaded.
        ///                         false - onLoaded will trigger only when normal ad was loaded (default).</param>
        /// </summary>
        public static void setTriggerOnLoadedOnPrecache(int adTypes, bool onLoadedTriggerBoth)
        {
            getInstance().setTriggerOnLoadedOnPrecache(adTypes, onLoadedTriggerBoth);
        }
        
        /// <summary>
        /// Enabling shared ads instance across activities (disabled by default).
        /// See <see cref="Appodeal.setSharedAdsInstanceAcrossActivities"/> for resulting triggered event.
        /// <param name="sharedAdsInstanceAcrossActivities">enabling or disabling shared ads instance across activities.</param>
        /// </summary>
        public static void setSharedAdsInstanceAcrossActivities(bool sharedAdsInstanceAcrossActivities)
        {
            getInstance().setSharedAdsInstanceAcrossActivities(sharedAdsInstanceAcrossActivities);
        }

        /// <summary>
        /// Checking if ad is loaded. Return true if ads currently loaded and can be shown.
        /// See <see cref="Appodeal.isLoaded"/> for resulting triggered event.
        /// <param name="adTypes">adType type of advertising </param>
        /// </summary>
        public static bool isLoaded(int adTypes)
        {
            return getInstance().isLoaded(adTypes);
        }

        /// <summary>
        /// Checking if loaded ad is precache. Return true if currently loaded ads is precache.
        /// See <see cref="Appodeal.isPrecache"/> for resulting triggered event.
        /// <param name="adTypes">adType type of advertising. Currently supported only for interstitials. </param>
        /// </summary>
        public static bool isPrecache(int adTypes)
        {
            return getInstance().isPrecache(adTypes);
        }

        /// <summary>
        /// Enabling or disabling smart banners (Enabled by default).
        /// See <see cref="Appodeal.setSmartBanners"/> for resulting triggered event.
        /// <param name="enabled">enabled enabling or disabling loading smart banners.</param>
        /// </summary>
        public static void setSmartBanners(bool enabled)
        {
            getInstance().setSmartBanners(enabled);
        }

        /// <summary>
        /// Enabling or disabling banners background (Enabled by default).
        /// See <see cref="Appodeal.setBannerBackground"/> for resulting triggered event.
        /// <param name="enabled">enabled enabling or disabling banners background (only for iOS platform)</param>
        /// </summary>
        public static void setBannerBackground(bool enabled)
        {
            getInstance().setBannerBackground(enabled);
        }
        
        /// <summary>
        /// Enabling or disabling 728*90 banners (Disabled by default).
        /// See <see cref="Appodeal.setTabletBanners"/> for resulting triggered event.
        /// <param name="enabled">enabled enabling or disabling loading 728*90 banners.</param>
        /// </summary>
        public static void setTabletBanners(bool enabled)
        {
            getInstance().setTabletBanners(enabled);
        }

        /// <summary>
        /// Enabling animation of banners (Enabled by default).
        /// See <see cref="Appodeal.setBannerAnimation"/> for resulting triggered event.
        /// <param name="enabled">animate enabling or disabling animations.</param>
        /// </summary>
        public static void setBannerAnimation(bool enabled)
        {
            getInstance().setBannerAnimation(enabled);
        }

        /// <summary>
        /// Setting banners inverse rotation (by default: left = -90, right = 90).
        /// See <see cref="Appodeal.setBannerRotation"/> for resulting triggered event.
        /// <param name="leftBannerRotation">leftBannerRotation rotation for Appodeal.BANNER_LEFT.</param>
        /// <param name="rightBannerRotation">leftBannerRotation rotation for Appodeal.BANNER_RIGHT.</param>
        /// </summary>
        public static void setBannerRotation(int leftBannerRotation, int rightBannerRotation)
        {
            getInstance().setBannerRotation(leftBannerRotation, rightBannerRotation);
        }
        
        /// <summary>
        /// Tracks in-app purchase information and sends info to our servers for analytics.
        /// See <see cref="Appodeal.trackInAppPurchase"/> for resulting triggered event.
        /// <param name="amount">amount of purchase.</param>
        /// <param name="currency">currency of purchase.</param>
        /// </summary>
        public static void trackInAppPurchase(double amount, string currency)
        {
            getInstance().trackInAppPurchase(amount, currency);
        }

        /// <summary>
        /// Disabling specified network for all ad types.
        /// See <see cref="Appodeal.disableNetwork"/> for resulting triggered event.
        /// <param name="network">network name.</param>
        /// </summary>
        public static void disableNetwork(string network)
        {
            getInstance().disableNetwork(network);
        }
        
        /// <summary>
        /// Disabling specified network for specified ad types.
        /// See <see cref="Appodeal.disableNetwork"/> for resulting triggered event.
        /// <param name="network">network name.</param>
        /// </summary>
        public static void disableNetwork(string network, int adType)
        {
            getInstance().disableNetwork(network, adType);
        }
        
        /// <summary>
        /// Disabling location permission check only for Android platform.
        /// See <see cref="Appodeal.disableLocationPermissionCheck"/> for resulting triggered event.
        /// </summary>
        public static void disableLocationPermissionCheck()
        {
            getInstance().disableLocationPermissionCheck();
        }
        
        /// <summary>
        /// Disabling write external storage permission check only for Android platform.
        /// See <see cref="Appodeal.disableWriteExternalStoragePermissionCheck"/> for resulting triggered event.
        /// </summary>
        public static void disableWriteExternalStoragePermissionCheck()
        {
            getInstance().disableWriteExternalStoragePermissionCheck();
        }
        
        /// <summary>
        /// Set user id.
        /// See <see cref="Appodeal.setUserId"/> for resulting triggered event.
        /// <param name="id">user id.</param>
        /// </summary>
        public static void setUserId(string id)
        {
            getInstance().setUserId(id);
        }

        /// <summary>
        /// Set user age.
        /// See <see cref="Appodeal.setUserAge"/> for resulting triggered event.
        /// <param name="age">user gender.</param>
        /// </summary>
        public static void setUserAge(int age)
        {
            getInstance().setUserAge(age);
        }

        /// <summary>
        /// Set user gender.
        /// See <see cref="Appodeal.setUserGender"/> for resulting triggered event.
        /// <param name="gender">user gender.</param>
        /// </summary>
        public static void setUserGender(UserSettings.Gender gender)
        {
            getInstance().setUserGender(gender);
        }
        
        /// <summary>
        /// Disabling write external storage permission check only for Android platform.
        /// See <see cref="Appodeal.setTesting"/> for resulting triggered event.
        /// </summary>
        public static void setTesting(bool test)
        {
            getInstance().setTesting(test);
        }

        /// <summary>
        /// Set log level. All logs will be written with tag "Appodeal".
        /// See <see cref="Appodeal.setLogLevel"/> for resulting triggered event.
        /// <param name="log">logLevel log level .</param>
        /// </summary>
        public static void setLogLevel(LogLevel log)
        {
            getInstance().setLogLevel(log);
        }
        
        /// <summary>
        /// Set custom segment filter.
        /// See <see cref="Appodeal.setCustomFilter"/> for resulting triggered event.
        /// <param name="name">name  name of the filter.</param>
        /// <param name="value">value filter value.</param>
        /// </summary>
        public static void setCustomFilter(string name, bool value)
        {
            getInstance().setCustomFilter(name, value);
        }
        
        /// <summary>
        /// Set custom segment filter.
        /// See <see cref="Appodeal.setCustomFilter"/> for resulting triggered event.
        /// <param name="name">name  name of the filter.</param>
        /// <param name="value">value filter value.</param>
        /// </summary>
        public static void setCustomFilter(string name, int value)
        {
            getInstance().setCustomFilter(name, value);
        }

        /// <summary>
        /// Set custom segment filter.
        /// See <see cref="Appodeal.setCustomFilter"/> for resulting triggered event.
        /// <param name="name">name  name of the filter.</param>
        /// <param name="value">value filter value.</param>
        /// </summary>
        public static void setCustomFilter(string name, double value)
        {
            getInstance().setCustomFilter(name, value);
        }

        /// <summary>
        /// Set custom segment filter.
        /// See <see cref="Appodeal.setCustomFilter"/> for resulting triggered event.
        /// <param name="name">name  name of the filter.</param>
        /// <param name="value">value filter value.</param>
        /// </summary>
        public static void setCustomFilter(string name, string value)
        {
            getInstance().setCustomFilter(name, value);
        }
        
        /// <summary>
        /// Set segment filter.
        /// See <see cref="Appodeal.setSegmentFilter"/> for resulting triggered event.
        /// <param name="name">name  name of the filter.</param>
        /// <param name="value">value filter value.</param>
        /// </summary>
        public static void setSegmentFilter(string name, bool value)
        {
            getInstance().setSegmentFilter(name, value);
        }

        /// <summary>
        /// Set segment filter.
        /// See <see cref="Appodeal.setSegmentFilter"/> for resulting triggered event.
        /// <param name="name">name  name of the filter.</param>
        /// <param name="value">value filter value.</param>
        /// </summary>
        public static void setSegmentFilter(string name, int value)
        {
            getInstance().setSegmentFilter(name, value);
        }

        /// <summary>
        /// Set segment filter.
        /// See <see cref="Appodeal.setSegmentFilter"/> for resulting triggered event.
        /// <param name="name">name  name of the filter.</param>
        /// <param name="value">value filter value.</param>
        /// </summary>
        public static void setSegmentFilter(string name, double value)
        {
            getInstance().setSegmentFilter(name, value);
        }

        /// <summary>
        /// Set segment filter.
        /// See <see cref="Appodeal.setSegmentFilter"/> for resulting triggered event.
        /// <param name="name">name  name of the filter.</param>
        /// <param name="value">value filter value.</param>
        /// </summary>
        public static void setSegmentFilter(string name, string value)
        {
            getInstance().setSegmentFilter(name, value);
        }

        /// <summary>
        /// Request WRITE_EXTERNAL_STORAGE and ACCESS_COARSE_LOCATION permissions for Android M.
        /// See <see cref="Appodeal.requestAndroidMPermissions"/> for resulting triggered event.
        /// <param name="listener">listener implementation of Appodeal/Common/Appodeal/IPermissionGrantedListener</param>
        /// </summary>  
        public static void requestAndroidMPermissions(IPermissionGrantedListener listener)
        {
            getInstance().requestAndroidMPermissions(listener);
        }
        
        /// <summary>
        /// Check if ad with specific ad type can be shown with placement.
        /// See <see cref="Appodeal.canShow"/> for resulting triggered event.
        /// <param name="adTypes">type of advertising.</param>
        /// </summary> 
        public static bool canShow(int adTypes)
        {
            return getInstance().canShow(adTypes);
        }

        /// <summary>
        /// Check if ad with specific ad type can be shown with placement.
        /// See <see cref="Appodeal.canShow"/> for resulting triggered event.
        /// <param name="adTypes">type of advertising.</param>
        /// <param name="placement">placement name.</param>
        /// </summary> 
        public static bool canShow(int adTypes, string placement)
        {
            return getInstance().canShow(adTypes, placement);
        }
        
        /// <summary>
        /// Get reward parameters.
        /// See <see cref="Appodeal.getRewardParameters"/> for resulting triggered event.
        /// </summary> 
        public static KeyValuePair<string, double> getRewardParameters()
        {
            return new KeyValuePair<string, double>(getInstance().getRewardCurrency(), getInstance().getRewardAmount());
        }

        /// <summary>
        /// Get reward parameters for placement.
        /// See <see cref="Appodeal.getRewardParameters"/> for resulting triggered event.
        /// <param name="placement">placement name.</param>
        /// </summary> 
        public static KeyValuePair<string, double> getRewardParameters(string placement)
        {
            return new KeyValuePair<string, double>(getInstance().getRewardCurrency(placement),
                getInstance().getRewardAmount(placement));
        }
        
        /// <summary>
        /// Mute video if calls muted on device (supports only for Android platform).
        /// See <see cref="Appodeal.muteVideosIfCallsMuted"/> for resulting triggered event.
        /// <param name="value">true - mute videos if call volume is 0.</param>
        /// </summary> 
        public static void muteVideosIfCallsMuted(bool value)
        {
            getInstance().muteVideosIfCallsMuted(value);
        }
        
        /// <summary>
        /// Start test screen to test integration.
        /// See <see cref="Appodeal.showTestScreen"/> for resulting triggered event.
        /// </summary> 
        public static void showTestScreen()
        {
            getInstance().showTestScreen();
        }
        
        /// <summary>
        /// Disables data collection for kids apps.
        /// See <see cref="Appodeal.setChildDirectedTreatment"/> for resulting triggered event.
        /// <param name="value">value true to disable data collection for kids apps.</param>
        /// </summary> 
        public static void setChildDirectedTreatment(bool value)
        {
            getInstance().setChildDirectedTreatment(value);
        }
        
        /// <summary>
        /// Destroy cached ad.
        /// See <see cref="Appodeal.destroy"/> for resulting triggered event.
        /// <param name="adTypes">adTypes ad types you want to destroy.</param>
        /// </summary> 
        public static void destroy(int adTypes)
        {
            getInstance().destroy(adTypes);
        }
        
        /// <summary>
        /// Add extra data to Appodeal.
        /// See <see cref="Appodeal.setExtraData"/> for resulting triggered event.
        /// <param name="key">associated with value.</param>
        /// <param name="value">value which will be saved in extra data by key.</param>
        /// </summary> 
        public static void setExtraData(string key, bool value)
        {
            getInstance().setExtraData(key, value);
        }

        /// <summary>
        /// Add extra data to Appodeal.
        /// See <see cref="Appodeal.setExtraData"/> for resulting triggered event.
        /// <param name="key">associated with value.</param>
        /// <param name="value">value which will be saved in extra data by key.</param>
        /// </summary> 
        public static void setExtraData(string key, int value)
        {
            getInstance().setExtraData(key, value);
        }

        /// <summary>
        /// Add extra data to Appodeal.
        /// See <see cref="Appodeal.setExtraData"/> for resulting triggered event.
        /// <param name="key">associated with value.</param>
        /// <param name="value">value which will be saved in extra data by key.</param>
        /// </summary> 
        public static void setExtraData(string key, double value)
        {
            getInstance().setExtraData(key, value);
        }

        /// <summary>
        /// Add extra data to Appodeal.
        /// See <see cref="Appodeal.setExtraData"/> for resulting triggered event.
        /// <param name="key">associated with value.</param>
        /// <param name="value">value which will be saved in extra data by key.</param>
        /// </summary> 
        public static void setExtraData(string key, string value)
        {
            getInstance().setExtraData(key, value);
        }
        
        /// <summary>
        /// Get native SDK version
        /// See <see cref="Appodeal.getNativeSDKVersion"/> for resulting triggered event.
        /// </summary> 
        public static string getNativeSDKVersion()
        {
            return getInstance().getVersion();
        }
        
        /// <summary>
        /// Get Unity plugin version
        /// See <see cref="Appodeal.getPluginVersion"/> for resulting triggered event.
        /// </summary> 
        public static string getPluginVersion()
        {
            return APPODEAL_PLUGIN_VERSION;
        }
        
        /// <summary>
        /// Get predicted ecpm for certain ad type.
        /// See <see cref="Appodeal.getPredictedEcpm"/> for resulting triggered event.
        /// <param name="adType">adType type of advertising.</param>
        /// </summary> 
        public static double getPredictedEcpm(int adType)
        {
            return getInstance().getPredictedEcpm(adType);
        }
        
        /// <summary>
        /// Get Unity version
        /// See <see cref="Appodeal.getUnityVersion"/> for resulting triggered event.
        /// </summary> 
        public static string getUnityVersion()
        {
            var unityVersion = Application.unityVersion;
            if (!string.IsNullOrEmpty(unityVersion)) return unityVersion;
            var appId =
                typeof(Application).GetProperty("identifier", BindingFlags.Public | BindingFlags.Static);
            unityVersion = appId != null ? "5.6+" : "5.5-";

            return unityVersion;
        }
        
        /// <summary>
        /// Set use safe area.
        /// See <see cref="Appodeal.setUseSafeArea"/> for resulting triggered event.
        /// </summary> 
        public static void setUseSafeArea(bool value)
        {
            getInstance().setUseSafeArea(value);
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