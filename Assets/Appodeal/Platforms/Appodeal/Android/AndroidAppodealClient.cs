#if UNITY_ANDROID
using System;
using System.Diagnostics.CodeAnalysis;
using AppodealAds.Unity.Api;
using AppodealAds.Unity.Common;
using ConsentManager.Api;
using ConsentManager.Platforms.Android;
using UnityEngine;

namespace AppodealAds.Unity.Android
{
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    public class AndroidAppodealClient : IAppodealAdsClient
    {
        private bool isShow;
        private AndroidJavaClass appodealClass;
        private AndroidJavaClass appodealUnityClass;
        private AndroidJavaClass appodealBannerClass;
        private AndroidJavaObject appodealBannerInstance;
        public AndroidJavaObject userSettings;
        private AndroidJavaObject activity;
        private AndroidJavaObject popupWindow, resources, displayMetrics, window, decorView, attributes, rootView;

        public const int NONE = 0;
        public const int INTERSTITIAL = 3;
        public const int BANNER = 4;
        public const int BANNER_BOTTOM = 8;
        public const int BANNER_TOP = 16;
        public const int BANNER_VIEW = 64;
        public const int BANNER_LEFT = 1024;
        public const int BANNER_RIGHT = 2048;
        public const int MREC = 256;
        public const int REWARDED_VIDEO = 128;

        private static int nativeAdTypesForType(int adTypes)
        {
            var nativeAdTypes = 0;

            if ((adTypes & Appodeal.INTERSTITIAL) > 0)
            {
                nativeAdTypes |= Appodeal.INTERSTITIAL;
            }

            if ((adTypes & Appodeal.BANNER) > 0)
            {
                nativeAdTypes |= Appodeal.BANNER;
            }

            if ((adTypes & Appodeal.BANNER_VIEW) > 0)
            {
                nativeAdTypes |= Appodeal.BANNER_VIEW;
            }

            if ((adTypes & Appodeal.BANNER_TOP) > 0)
            {
                nativeAdTypes |= Appodeal.BANNER_TOP;
            }
            
            if ((adTypes & Appodeal.BANNER_LEFT) > 0)
            {
                nativeAdTypes |= Appodeal.BANNER_LEFT;
            }

            if ((adTypes & Appodeal.BANNER_RIGHT) > 0)
            {
                nativeAdTypes |= Appodeal.BANNER_RIGHT;
            }

            if ((adTypes & Appodeal.BANNER_BOTTOM) > 0)
            {
                nativeAdTypes |= Appodeal.BANNER_BOTTOM;
            }

            if ((adTypes & Appodeal.MREC) > 0)
            {
                nativeAdTypes |= 256;
            }

            if ((adTypes & Appodeal.REWARDED_VIDEO) > 0)
            {
                nativeAdTypes |= Appodeal.REWARDED_VIDEO;
            }

            if ((adTypes & Appodeal.NON_SKIPPABLE_VIDEO) > 0)
            {
                nativeAdTypes |= Appodeal.REWARDED_VIDEO;
            }

            return nativeAdTypes;
        }

        private AndroidJavaClass getAppodealClass()
        {
            return appodealClass ?? (appodealClass = new AndroidJavaClass("com.appodeal.ads.Appodeal"));
        }

        public AndroidJavaClass getAppodealUnityClass()
        {
            return appodealUnityClass ??
                   (appodealUnityClass = new AndroidJavaClass("com.appodeal.unity.AppodealUnity"));
        }

        private AndroidJavaObject getAppodealBannerInstance()
        {
            if (appodealBannerInstance != null) return appodealBannerInstance;
            appodealBannerClass = new AndroidJavaClass("com.appodeal.ads.AppodealUnityBannerView");
            appodealBannerInstance = appodealBannerClass.CallStatic<AndroidJavaObject>("getInstance");

            return appodealBannerInstance;
        }

        private AndroidJavaObject getActivity()
        {
            if (activity != null) return activity;
            var playerClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
            activity = playerClass.GetStatic<AndroidJavaObject>("currentActivity");

            return activity;
        }

        public void initialize(string appKey, int adTypes)
        {
            initialize(appKey, adTypes, true);
        }

        public void initialize(string appKey, int adTypes, bool hasConsent)
        {
            getAppodealClass().CallStatic("setFramework", "unity", Appodeal.getPluginVersion(),
                Appodeal.getUnityVersion());
            getAppodealClass().CallStatic("initialize", getActivity(), appKey, nativeAdTypesForType(adTypes),
                hasConsent);
        }

        public void initialize(string appKey, int adTypes, Consent consent)
        {
            getAppodealClass().CallStatic("setFramework", "unity", Appodeal.getPluginVersion(),
                Appodeal.getUnityVersion());
            var androidConsent = (AndroidConsent) consent.getConsent();
            getAppodealClass().CallStatic("initialize", getActivity(), appKey, nativeAdTypesForType(adTypes),
                androidConsent.getConsent());
        }

        public bool isInitialized(int adType)
        {
            return getAppodealClass().CallStatic<bool>("isInitialized", nativeAdTypesForType(adType));
        }

        public bool show(int adTypes)
        {
            return getAppodealClass().CallStatic<bool>("show", getActivity(), nativeAdTypesForType(adTypes));
        }

        public bool show(int adTypes, string placement)
        {
            return getAppodealClass().CallStatic<bool>("show", getActivity(), nativeAdTypesForType(adTypes), placement);
        }

        public bool showBannerView(int YAxis, int XAxis, string Placement)
        {
            return getAppodealBannerInstance().Call<bool>("showBannerView", getActivity(), XAxis, YAxis, Placement);
        }

        public bool showMrecView(int YAxis, int XAxis, string Placement)
        {
            return getAppodealBannerInstance().Call<bool>("showMrecView", getActivity(), XAxis, YAxis, Placement);
        }

        public bool isLoaded(int adTypes)
        {
            return getAppodealClass().CallStatic<bool>("isLoaded", nativeAdTypesForType(adTypes));
        }

        public void cache(int adTypes)
        {
            getAppodealClass().CallStatic("cache", getActivity(), nativeAdTypesForType(adTypes));
        }

        public void hide(int adTypes)
        {
            getAppodealClass().CallStatic("hide", getActivity(), nativeAdTypesForType(adTypes));
        }

        public void hideBannerView()
        {
            getAppodealBannerInstance().Call("hideBannerView", getActivity());
        }

        public void hideMrecView()
        {
            getAppodealBannerInstance().Call("hideMrecView", getActivity());
        }

        public bool isPrecache(int adTypes)
        {
            return getAppodealClass().CallStatic<bool>("isPrecache", nativeAdTypesForType(adTypes));
        }

        public void setAutoCache(int adTypes, bool autoCache)
        {
            getAppodealClass().CallStatic("setAutoCache", nativeAdTypesForType(adTypes), autoCache);
        }

        public void setSmartBanners(bool value)
        {
            getAppodealClass().CallStatic("setSmartBanners", value);
            getAppodealBannerInstance().Call("setSmartBanners", value);
        }

        public void setBannerAnimation(bool value)
        {
            getAppodealClass().CallStatic("setBannerAnimation", value);
        }

        public void setBannerBackground(bool value)
        {
            Debug.LogWarning("Not Supported by Android SDK");
        }

        public void setTabletBanners(bool value)
        {
            getAppodealClass().CallStatic("set728x90Banners", value);
        }
        
        public void setBannerRotation(int leftBannerRotation, int rightBannerRotation)
        {
            getAppodealClass().CallStatic("setBannerRotation", leftBannerRotation, rightBannerRotation);
        }

        public void setTesting(bool test)
        {
            getAppodealClass().CallStatic("setTesting", test);
        }

        private static AndroidJavaObject intToAndroid(int value)
        {
            var integerClass = new AndroidJavaClass("java.lang.Integer");
            var integer = integerClass.CallStatic<AndroidJavaObject>("valueOf", value);
            return integer;
        }

        private static AndroidJavaObject boolToAndroid(bool value)
        {
            var boleanClass = new AndroidJavaClass("java.lang.Boolean");
            var boolean = boleanClass.CallStatic<AndroidJavaObject>("valueOf", value);
            return boolean;
        }

        public void setLogLevel(Appodeal.LogLevel logging)
        {
            var logLevel = new AndroidJavaClass("com.appodeal.ads.utils.Log$LogLevel");
            switch (logging)
            {
                case Appodeal.LogLevel.None:
                {
                    getAppodealClass().CallStatic("setLogLevel",
                        logLevel.CallStatic<AndroidJavaObject>("fromInteger", intToAndroid(0)));
                    break;
                }
                case Appodeal.LogLevel.Debug:
                {
                    getAppodealClass().CallStatic("setLogLevel",
                        logLevel.CallStatic<AndroidJavaObject>("fromInteger", intToAndroid(1)));
                    break;
                }
                case Appodeal.LogLevel.Verbose:
                {
                    getAppodealClass().CallStatic("setLogLevel",
                        logLevel.CallStatic<AndroidJavaObject>("fromInteger", intToAndroid(2)));
                    break;
                }
                default:
                    throw new ArgumentOutOfRangeException(nameof(logging), logging, null);
            }
        }

        public void setChildDirectedTreatment(bool value)
        {
            var boleanClass = new AndroidJavaClass("java.lang.Boolean");
            var boolean = boleanClass.CallStatic<AndroidJavaObject>("valueOf", value);
            getAppodealClass().CallStatic("setChildDirectedTreatment", boolean);
        }

        public void updateConsent(bool value)
        {
            getAppodealClass().CallStatic("updateConsent", boolToAndroid(value));
        }

        public void updateConsent(Consent consent)
        {
            var androidConsent = (AndroidConsent) consent.getConsent();
            getAppodealClass().CallStatic("updateConsent", androidConsent.getConsent());
        }

        public void disableNetwork(string network)
        {
            getAppodealClass().CallStatic("disableNetwork", getActivity(), network);
        }

        public void disableNetwork(string network, int adTypes)
        {
            getAppodealClass().CallStatic("disableNetwork", getActivity(), network, nativeAdTypesForType(adTypes));
        }

        public void disableLocationPermissionCheck()
        {
            getAppodealClass().CallStatic("disableLocationPermissionCheck");
        }

        public void disableWriteExternalStoragePermissionCheck()
        {
            getAppodealClass().CallStatic("disableWriteExternalStoragePermissionCheck");
        }

        public void setTriggerOnLoadedOnPrecache(int adTypes, bool onLoadedTriggerBoth)
        {
            getAppodealClass().CallStatic("setTriggerOnLoadedOnPrecache", nativeAdTypesForType(adTypes),
                onLoadedTriggerBoth);
        }

        public void muteVideosIfCallsMuted(bool value)
        {
            getAppodealClass().CallStatic("muteVideosIfCallsMuted", value);
        }

        public void showTestScreen()
        {
            getAppodealClass().CallStatic("startTestActivity", getActivity());
        }

        public string getVersion()
        {
            return getAppodealClass().CallStatic<string>("getVersion");
        }

        public bool canShow(int adTypes)
        {
            return getAppodealClass().CallStatic<bool>("canShow", nativeAdTypesForType(adTypes));
        }

        public bool canShow(int adTypes, string placement)
        {
            return getAppodealClass().CallStatic<bool>("canShow", nativeAdTypesForType(adTypes), placement);
        }

        public void setSegmentFilter(string name, bool value)
        {
            getAppodealClass().CallStatic("setSegmentFilter", name, value);
        }

        public void setSegmentFilter(string name, int value)
        {
            getAppodealClass().CallStatic("setSegmentFilter", name, value);
        }
        
        public void setSegmentFilter(string name, double value)
        {
            getAppodealClass().CallStatic("setSegmentFilter", name, value);
        }

        public void setSegmentFilter(string name, string value)
        {
            getAppodealClass().CallStatic("setSegmentFilter", name, value);
        }
        
        public void setCustomFilter(string name, bool value)
        {
            getAppodealClass().CallStatic("setCustomFilter", name, value);
        }

        public void setCustomFilter(string name, int value)
        {
            getAppodealClass().CallStatic("setCustomFilter", name, value);
        }

        public void setCustomFilter(string name, double value)
        {
            getAppodealClass().CallStatic("setCustomFilter", name, value);
        }

        public void setCustomFilter(string name, string value)
        {
            getAppodealClass().CallStatic("setCustomFilter", name, value);
        }

        public void setExtraData(string key, bool value)
        {
            getAppodealClass().CallStatic("setExtraData", key, value);
        }

        public void setExtraData(string key, int value)
        {
            getAppodealClass().CallStatic("setExtraData", key, value);
        }

        public void setExtraData(string key, double value)
        {
            getAppodealClass().CallStatic("setExtraData", key, value);
        }

        public void setExtraData(string key, string value)
        {
            getAppodealClass().CallStatic("setExtraData", key, value);
        }

        public void trackInAppPurchase(double amount, string currency)
        {
            getAppodealClass().CallStatic("trackInAppPurchase", getActivity(), amount, currency);
        }

        public string getRewardCurrency(string placement)
        {
            var reward =
                getAppodealClass().CallStatic<AndroidJavaObject>("getRewardParameters", placement);
            return reward.Get<string>("second");
        }

        public double getRewardAmount(string placement)
        {
            var reward =
                getAppodealClass().CallStatic<AndroidJavaObject>("getRewardParameters", placement);
            var doubleValue = reward.Get<AndroidJavaObject>("first");
            return doubleValue.Call<double>("doubleValue");
        }

        public string getRewardCurrency()
        {
            var reward = getAppodealClass().CallStatic<AndroidJavaObject>("getRewardParameters");
            return reward.Get<string>("second");
        }

        public double getRewardAmount()
        {
            var reward = getAppodealClass().CallStatic<AndroidJavaObject>("getRewardParameters");
            var doubleValue = reward.Get<AndroidJavaObject>("first");
            return doubleValue.Call<double>("doubleValue");
        }

        public double getPredictedEcpm(int adType)
        {
            return getAppodealClass().CallStatic<double>("getPredictedEcpm", adType);
        }

        public void destroy(int adTypes)
        {
            getAppodealClass().CallStatic("destroy", nativeAdTypesForType(adTypes));
        }

        //User Settings

        public void getUserSettings()
        {
            userSettings = getAppodealClass().CallStatic<AndroidJavaObject>("getUserSettings", getActivity());
        }

        public void setUserId(string id)
        {
            getAppodealClass().CallStatic("setUserId", id);
        }

        public void setUserAge(int age)
        {
            getAppodealClass().CallStatic("setUserAge", age);
        }

        public void setUserGender(UserSettings.Gender gender)
        {
            switch (gender)
            {
                case UserSettings.Gender.OTHER:
                {
                    getAppodealClass().CallStatic("setUserGender",
                        new AndroidJavaClass("com.appodeal.ads.UserSettings$Gender").GetStatic<AndroidJavaObject>(
                            "OTHER"));
                    break;
                }
                case UserSettings.Gender.MALE:
                {
                    getAppodealClass().CallStatic("setUserGender",
                        new AndroidJavaClass("com.appodeal.ads.UserSettings$Gender").GetStatic<AndroidJavaObject>(
                            "MALE"));
                    break;
                }
                case UserSettings.Gender.FEMALE:
                {
                    getAppodealClass().CallStatic("setUserGender",
                        new AndroidJavaClass("com.appodeal.ads.UserSettings$Gender").GetStatic<AndroidJavaObject>(
                            "FEMALE"));
                    break;
                }
                default:
                    throw new ArgumentOutOfRangeException(nameof(gender), gender, null);
            }
        }

        public void setInterstitialCallbacks(IInterstitialAdListener listener)
        {
            getAppodealClass().CallStatic("setInterstitialCallbacks", new AppodealInterstitialCallbacks(listener));
        }

        public void setNonSkippableVideoCallbacks(INonSkippableVideoAdListener listener)
        {
            getAppodealClass().CallStatic("setNonSkippableVideoCallbacks",
                new AppodealNonSkippableVideoCallbacks(listener));
        }

        public void setRewardedVideoCallbacks(IRewardedVideoAdListener listener)
        {
            getAppodealClass().CallStatic("setRewardedVideoCallbacks", new AppodealRewardedVideoCallbacks(listener));
        }

        public void setBannerCallbacks(IBannerAdListener listener)
        {
            getAppodealClass().CallStatic("setBannerCallbacks", new AppodealBannerCallbacks(listener));
        }

        public void setMrecCallbacks(IMrecAdListener listener)
        {
            getAppodealClass().CallStatic("setMrecCallbacks", new AppodealMrecCallbacks(listener));
        }

        public void requestAndroidMPermissions(IPermissionGrantedListener listener)
        {
            getAppodealClass().CallStatic("requestAndroidMPermissions", getActivity(),
                new AppodealPermissionCallbacks(listener));
        }
        
        public void setSharedAdsInstanceAcrossActivities(bool value)
        {
            getAppodealClass().CallStatic("setSharedAdsInstanceAcrossActivities", value);
        }

        public void setUseSafeArea(bool value)
        {
            getAppodealClass().CallStatic("setUseSafeArea", value);
        }

        public bool isAutoCacheEnabled(int adType)
        {
            return  getAppodealClass().CallStatic<bool>("isAutoCacheEnabled", nativeAdTypesForType(adType));
        }
    }
}
#endif