using System.Diagnostics.CodeAnalysis;
using AppodealAds.Unity.Api;
using AppodealAds.Unity.Common;
using ConsentManager.Api;
using UnityEngine;

namespace AppodealAds.Unity.Dummy
{
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "UnusedMember.Global")]
    public class DummyClient : IAppodealAdsClient
    {
        public void initialize(string appKey, int adTypes)
        {
            Debug.Log("Call to Appodeal.initialize on not supported platform");
        }

        public void initialize(string appKey, int adTypes, bool hasConsent)
        {
            Debug.Log("Call to Appodeal.initialize on not supported platform");
        }

        public void initialize(string appKey, int adTypes, Consent consent)
        {
            Debug.Log("Call to Appodeal.initialize on not supported platform");
        }

        public bool isInitialized(int adType)
        {
            Debug.Log("Call Appodeal.isInitialized on not supported platform");
            return false;
        }

        public bool show(int adTypes)
        {
            Debug.Log("Call to Appodeal.show on not supported platform");
            return false;
        }

        public bool show(int adTypes, string placement)
        {
            Debug.Log("Call to Appodeal.show on not supported platform");
            return false;
        }

        public bool showBannerView(int YAxis, int XAxis, string Placement)
        {
            Debug.Log("Call to Appodeal.showBannerView on not supported platform");
            return false;
        }

        public bool showMrecView(int YAxis, int XGravity, string Placement)
        {
            Debug.Log("Call to Appodeal.showMrecView on not supported platform");
            return false;
        }

        public bool isLoaded(int adTypes)
        {
            Debug.Log("Call to Appodeal.showBannerView on not supported platform");
            return false;
        }

        public void cache(int adTypes)
        {
            Debug.Log("Call to Appodeal.cache on not supported platform");
        }

        public void hide(int adTypes)
        {
            Debug.Log("Call to Appodeal.hide on not supported platform");
        }

        public void hideBannerView()
        {
            Debug.Log("Call to Appodeal.hideBannerView on not supported platform");
        }

        public void hideMrecView()
        {
            Debug.Log("Call to Appodeal.hideMrecView on not supported platform");
        }

        public bool isPrecache(int adTypes)
        {
            Debug.Log("Call to Appodeal.isPrecache on not supported platform");
            return false;
        }

        public void setAutoCache(int adTypes, bool autoCache)
        {
            Debug.Log("Call to Appodeal.setAutoCache on not supported platform");
        }

        public void setSmartBanners(bool value)
        {
            Debug.Log("Call to Appodeal.setSmartBanners on not supported platform");
        }

        public void setBannerAnimation(bool value)
        {
            Debug.Log("Call to Appodeal.setBannerAnimation on not supported platform");
        }

        public void setBannerBackground(bool value)
        {
            Debug.Log("Call to Appodeal.setBannerBackground on not supported platform");
        }

        public void setTabletBanners(bool value)
        {
            Debug.Log("Call to Appodeal.setTabletBanners on not supported platform");
        }

        public void setBannerRotation(int leftBannerRotation, int rightBannerRotation)
        {
            Debug.Log("Call to Appodeal.setBannerRotation on not supported platform");
        }

        public void setTesting(bool test)
        {
            Debug.Log("Call to Appodeal.setTesting on not supported platform");
        }

        public void setLogLevel(Appodeal.LogLevel logging)
        {
            Debug.Log("Call to Appodeal.setLogLevel on not supported platform");
        }

        public void setChildDirectedTreatment(bool value)
        {
            Debug.Log("Call to Appodeal.setChildDirectedTreatment on not supported platform");
        }

        public void updateConsent(bool value)
        {
            Debug.Log("Call to Appodeal.updateConsent on not supported platform");
        }

        public void updateConsent(Consent consent)
        {
            Debug.Log("Call to Appodeal.updateConsent on not supported platform");
        }

        public void disableNetwork(string network)
        {
            Debug.Log("Call to Appodeal.disableNetwork on not supported platform");
        }

        public void disableNetwork(string network, int adTypes)
        {
            Debug.Log("Call to Appodeal.disableNetwork on not supported platform");
        }

        public void disableLocationPermissionCheck()
        {
            Debug.Log("Call to Appodeal.disableLocationPermissionCheck on not supported platform");
        }

        public void disableWriteExternalStoragePermissionCheck()
        {
            Debug.Log("Call to Appodeal.disableWriteExternalStoragePermissionCheck on not supported platform");
        }

        public void setTriggerOnLoadedOnPrecache(int adTypes, bool onLoadedTriggerBoth)
        {
            Debug.Log("Call to Appodeal.setTriggerOnLoadedOnPrecache on not supported platform");
        }

        public void muteVideosIfCallsMuted(bool value)
        {
            Debug.Log("Call to Appodeal.muteVideosIfCallsMuted on not supported platform");
        }

        public void showTestScreen()
        {
            Debug.Log("Call to Appodeal.showTestScreen on not supported platform");
        }

        public string getVersion()
        {
            return Appodeal.APPODEAL_PLUGIN_VERSION;
        }

        public bool canShow(int adTypes)
        {
            Debug.Log("Call to Appodeal.canShow on not supported platform");
            return false;
        }

        public bool canShow(int adTypes, string placement)
        {
            Debug.Log("Call to Appodeal.canShow on not supported platform");
            return false;
        }

        public void setSegmentFilter(string name, bool value)
        {
            Debug.Log("Call to Appodeal.setSegmentFilter on not supported platform");
        }

        public void setSegmentFilter(string name, int value)
        {
            Debug.Log("Call to Appodeal.setSegmentFilter on not supported platform");
        }

        public void setSegmentFilter(string name, double value)
        {
            Debug.Log("Call to Appodeal.setSegmentFilter on not supported platform");
        }

        public void setSegmentFilter(string name, string value)
        {
            Debug.Log("Call to Appodeal.setSegmentFilter on not supported platform");
        }

        public void setCustomFilter(string name, bool value)
        {
            Debug.Log("Call to Appodeal.setCustomFilter on not supported platform");
        }

        public void setCustomFilter(string name, int value)
        {
            Debug.Log("Call to Appodeal.setCustomFilter on not supported platform");
        }

        public void setCustomFilter(string name, double value)
        {
            Debug.Log("Call to Appodeal.setCustomFilter on not supported platform");
        }

        public void setCustomFilter(string name, string value)
        {
            Debug.Log("Call to Appodeal.setCustomFilter on not supported platform");
        }

        public void trackInAppPurchase(double amount, string currency)
        {
            Debug.Log("Call to Appodeal.trackInAppPurchase on not supported platform");
        }

        public string getRewardCurrency(string placement)
        {
            Debug.Log("Call to Appodeal.getRewardCurrency on not supported platform");
            return "USD";
        }

        public double getRewardAmount(string placement)
        {
            Debug.Log("Call to Appodeal.getRewardAmount on not supported platform");
            return 0;
        }

        public string getRewardCurrency()
        {
            Debug.Log("Call to Appodeal.getRewardCurrency on not supported platform");
            return "USD";
        }

        public double getRewardAmount()
        {
            Debug.Log("Call to Appodeal.getRewardAmount on not supported platform");
            return 0;
        }

        public double getPredictedEcpm(int adType)
        {
            Debug.Log("Call to Appodeal.getPredictedEcpm on not supported platform");
            return 0;
        }

        public void setExtraData(string key, bool value)
        {
            Debug.Log("Call to Appodeal.setExtraData(string key, bool value) on not supported platform");
        }

        public void setExtraData(string key, int value)
        {
            Debug.Log("Call to Appodeal.setExtraData(string key, int value) on not supported platform");
        }

        public void setExtraData(string key, double value)
        {
            Debug.Log("Call to Appodeal.setExtraDatastring key, double value) on not supported platform");
        }

        public void setExtraData(string key, string value)
        {
            Debug.Log("Call to Appodeal.setExtraData(string key, string value) on not supported platform");
        }

        public void setInterstitialCallbacks(IInterstitialAdListener listener)
        {
            Debug.Log("Call to Appodeal.setInterstitialCallbacks on not supported platform");
        }

        public void setNonSkippableVideoCallbacks(INonSkippableVideoAdListener listener)
        {
            Debug.Log("Call to Appodeal.setNonSkippableVideoCallbacks on not supported platform");
        }

        public void setRewardedVideoCallbacks(IRewardedVideoAdListener listener)
        {
            Debug.Log("Call to Appodeal.setRewardedVideoCallbacks on not supported platform");
        }

        public void setBannerCallbacks(IBannerAdListener listener)
        {
            Debug.Log("Call to Appodeal.setBannerCallbacks on not supported platform");
        }

        public void setMrecCallbacks(IMrecAdListener listener)
        {
            Debug.Log("Call to Appodeal.setMrecCallbacks on not supported platform");
        }

        public void requestAndroidMPermissions(IPermissionGrantedListener listener)
        {
            Debug.Log("Call to Appodeal.requestAndroidMPermissions on not supported platform");
        }

        public void requestAndroidMPermissions()
        {
            Debug.Log("Call to Appodeal.requestAndroidMPermissions on not supported platform");
        }

        public void destroy(int adTypes)
        {
            Debug.Log("Call to Appodeal.destroy on not supported platform");
        }

        public void setSharedAdsInstanceAcrossActivities(bool value)
        {
            Debug.Log("Call to Appodeal.setSharedAdsInstanceAcrossActivities on not supported platform");
        }

        public void setUseSafeArea(bool value)
        {
            Debug.Log("Call to Appodeal.setUseSafeArea on not supported platform");
        }

        public bool isAutoCacheEnabled(int adType)
        {
            Debug.Log("Call to Appodeal.isAutoCacheEnabled on not supported platform");
            return false;
        }

        #region User settings

        public void getUserSettings()
        {
        }

        public void setUserId(string id)
        {
            Debug.Log("Call to Appodeal.setUserId on not supported platform");
        }

        public void setUserAge(int age)
        {
            Debug.Log("Call to Appodeal.setUserAge on not supported platform");
        }

        public void setUserGender(UserSettings.Gender gender)
        {
            Debug.Log("Call to Appodeal.setGender on not supported platform");
        }

        #endregion
    }
}