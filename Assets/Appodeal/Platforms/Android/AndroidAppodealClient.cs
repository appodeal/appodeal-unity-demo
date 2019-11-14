using AppodealAds.Unity.Api;
using AppodealAds.Unity.Common;
using UnityEngine;

#if UNITY_ANDROID
namespace AppodealAds.Unity.Android
{
    public class AndroidAppodealClient : IAppodealAdsClient
    {
        bool isShow;
        AndroidJavaClass appodealClass;
        AndroidJavaClass appodealUnityClass;
        AndroidJavaClass appodealBannerClass;
        AndroidJavaObject appodealBannerInstance;
        AndroidJavaObject userSettings;
        AndroidJavaObject activity;
        AndroidJavaObject popupWindow, resources, displayMetrics, window, decorView, attributes, rootView;

        public const int NONE = 0;
        public const int INTERSTITIAL = 3;
        public const int BANNER = 4;
        public const int BANNER_BOTTOM = 8;
        public const int BANNER_TOP = 16;
        public const int BANNER_VIEW = 64;
        public const int MREC = 256;
        public const int REWARDED_VIDEO = 128;

        int nativeAdTypesForType(int adTypes)
        {
            int nativeAdTypes = 0;

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

        public AndroidJavaClass getAppodealClass()
        {
            if (appodealClass == null)
            {
                appodealClass = new AndroidJavaClass("com.appodeal.ads.Appodeal");
            }

            return appodealClass;
        }

        public AndroidJavaClass getAppodealUnityClass()
        {
            if (appodealUnityClass == null)
            {
                appodealUnityClass = new AndroidJavaClass("com.appodeal.unity.AppodealUnity");
            }

            return appodealUnityClass;
        }

        public AndroidJavaObject getAppodealBannerInstance()
        {
            if (appodealBannerInstance == null)
            {
                appodealBannerClass = new AndroidJavaClass("com.appodeal.unity.AppodealUnityBannerView");
                appodealBannerInstance = appodealBannerClass.CallStatic<AndroidJavaObject>("getInstance");
            }

            return appodealBannerInstance;
        }

        public AndroidJavaObject getActivity()
        {
            if (activity == null)
            {
                AndroidJavaClass playerClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
                activity = playerClass.GetStatic<AndroidJavaObject>("currentActivity");
            }

            return activity;
        }

        public void initialize(string appKey, int adTypes)
        {
            initialize(appKey, adTypes, true);
        }

        public void initialize(string appKey, int adTypes, bool hasConsent)
        {
            getAppodealClass().CallStatic("setFramework", "unity", Appodeal.getPluginVersion(), Appodeal.getUnityVersion());
            if ((adTypes & Appodeal.BANNER_VIEW) > 0 || (adTypes & Appodeal.MREC) > 0) {
                getAppodealClass().CallStatic("setFramework", "unity", Appodeal.getPluginVersion(), Appodeal.getUnityVersion(), false, false);
            }
            getAppodealClass().CallStatic("initialize", getActivity(), appKey, nativeAdTypesForType(adTypes), hasConsent);
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

        public void onResume(int adTypes)
        {
            getAppodealClass().CallStatic("onResume", getActivity(), nativeAdTypesForType(adTypes));
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

        public void setTesting(bool test)
        {
            getAppodealClass().CallStatic("setTesting", test);
        }

        AndroidJavaObject intToAndroid(int value)
        {
            AndroidJavaClass integerClass = new AndroidJavaClass("java.lang.Integer");
            AndroidJavaObject integer = integerClass.CallStatic<AndroidJavaObject>("valueOf", value);
            return integer;
        }

        public void setLogLevel(Appodeal.LogLevel logging)
        {
            AndroidJavaClass logLevel = new AndroidJavaClass("com.appodeal.ads.utils.Log$LogLevel");
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
            }
        }

        public void setChildDirectedTreatment(bool value)
        {
            getAppodealClass().CallStatic("setChildDirectedTreatment", value);
        }
        
        public void updateConsent(bool value)
        {
            getAppodealClass().CallStatic("updateConsent", value);
        }

        public void resetFilterMatureContentFlag()
        {
            getAppodealBannerInstance().Call("resetFilterMatureContentFlag", getActivity());
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
            AndroidJavaObject reward =
                getAppodealClass().CallStatic<AndroidJavaObject>("getRewardParameters", placement);
            return reward.Get<string>("second");
        }

        public double getRewardAmount(string placement)
        {
            AndroidJavaObject reward =
                getAppodealClass().CallStatic<AndroidJavaObject>("getRewardParameters", placement);
            AndroidJavaObject doubleValue = reward.Get<AndroidJavaObject>("first");
            return doubleValue.Call<double>("doubleValue");
        }

        public string getRewardCurrency()
        {
            AndroidJavaObject reward = getAppodealClass().CallStatic<AndroidJavaObject>("getRewardParameters");
            return reward.Get<string>("second");
        }

        public double getRewardAmount()
        {
            AndroidJavaObject reward = getAppodealClass().CallStatic<AndroidJavaObject>("getRewardParameters");
            AndroidJavaObject doubleValue = reward.Get<AndroidJavaObject>("first");
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
            userSettings.Call<AndroidJavaObject>("setUserId", id);
        }

        public void setAge(int age)
        {
            userSettings.Call<AndroidJavaObject>("setAge", age);
        }

        public void setGender(UserSettings.Gender gender)
        {
            switch (gender)
            {
                case UserSettings.Gender.OTHER:
                {
                    userSettings.Call<AndroidJavaObject>("setGender",
                        new AndroidJavaClass("com.appodeal.ads.UserSettings$Gender").GetStatic<AndroidJavaObject>(
                            "OTHER"));
                    break;
                }
                case UserSettings.Gender.MALE:
                {
                    userSettings.Call<AndroidJavaObject>("setGender",
                        new AndroidJavaClass("com.appodeal.ads.UserSettings$Gender").GetStatic<AndroidJavaObject>(
                            "MALE"));
                    break;
                }
                case UserSettings.Gender.FEMALE:
                {
                    userSettings.Call<AndroidJavaObject>("setGender",
                        new AndroidJavaClass("com.appodeal.ads.UserSettings$Gender").GetStatic<AndroidJavaObject>(
                            "FEMALE"));
                    break;
                }
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
    }
}
#endif