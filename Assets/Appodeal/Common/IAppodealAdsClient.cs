using AppodealAds.Unity.Api;

namespace AppodealAds.Unity.Common
{
    public interface IAppodealAdsClient
    {
        void initialize(string appKey, int type);
        void initialize(string appKey, int type, bool hasConsent);
        bool isInitialized(int adType);
        bool show(int adTypes);
        bool show(int adTypes, string placement);
        bool isLoaded(int adTypes);
        void cache(int adTypes);
        void hide(int adTypes);
        void setAutoCache(int adTypes, bool autoCache);
        bool isPrecache(int adTypes);
        void onResume(int adTypes);
        bool showBannerView(int YAxis, int XGravity, string Placement);
        bool showMrecView(int YAxis, int XGravity, string Placement);
        void hideBannerView();
        void hideMrecView();
        void setSmartBanners(bool value);
        void setBannerAnimation(bool value);
        void setBannerBackground(bool value);
        void setTabletBanners(bool value);
        void setTesting(bool test);
        void setLogLevel(Appodeal.LogLevel level);
        void setChildDirectedTreatment(bool value);
        void updateConsent(bool value);
        void resetFilterMatureContentFlag();
        void disableNetwork(string network);
        void disableNetwork(string network, int type);
        void disableLocationPermissionCheck();
        void disableWriteExternalStoragePermissionCheck();
        void muteVideosIfCallsMuted(bool value);
        void showTestScreen();
        string getVersion();
        bool canShow(int adTypes);
        bool canShow(int adTypes, string placement);
        void setSegmentFilter(string name, bool value);
        void setSegmentFilter(string name, int value);
        void setSegmentFilter(string name, double value);
        void setSegmentFilter(string name, string value);
        void setExtraData(string key, bool value);
        void setExtraData(string key, int value);
        void setExtraData(string key, double value);
        void setExtraData(string key, string value);
        string getRewardCurrency(string placement);
        double getRewardAmount(string placement);
        string getRewardCurrency();
        double getRewardAmount();
        double getPredictedEcpm(int adTypes);
        void setTriggerOnLoadedOnPrecache(int adTypes, bool onLoadedTriggerBoth);
        void getUserSettings();
        void setAge(int age);
        void setGender(UserSettings.Gender gender);
        void setUserId(string id);
        void trackInAppPurchase(double amount, string currency);
        void setInterstitialCallbacks(IInterstitialAdListener listener);
        void setNonSkippableVideoCallbacks(INonSkippableVideoAdListener listener);
        void setRewardedVideoCallbacks(IRewardedVideoAdListener listener);
        void setBannerCallbacks(IBannerAdListener listener);
        void setMrecCallbacks(IMrecAdListener listener);
        void requestAndroidMPermissions(IPermissionGrantedListener listener);
        void destroy(int adTypes);
    }
}