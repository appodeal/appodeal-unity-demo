using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using AppodealAds.Unity.Api;
using AppodealAds.Unity.Common;
using ConsentManager.Common;
using UnityEngine;
using UnityEngine.UI;

namespace ConsentManager.ConsentManagerDemo.Scripts
{
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "ParameterHidesMember")]
    public class AppodealDemo : MonoBehaviour, IConsentFormListener, IConsentInfoUpdateListener,
        IBannerAdListener, IMrecAdListener, IRewardedVideoAdListener, IInterstitialAdListener,
        IPermissionGrantedListener
    {
        #region Constants

        private const string CACHE_INTERSTITIAL = "CACHE INTERSTITIAL";
        private const string SHOW_INTERSTITIAL = "SHOW INTERSTITIAL";
        private const string CACHE_REWARDED_VIDEO = "CACHE REWARDED VIDEO";

        #endregion

        #region UI

        [SerializeField] public Toggle tgTesting;
        [SerializeField] public Toggle tgLogging;
        [SerializeField] public Button btnShowInterstitial;
        [SerializeField] public Button btnShowRewardedVideo;
        [SerializeField] public GameObject consentManagerPanel;
        [SerializeField] public GameObject appodealPanel;

        #endregion

        #region Application keys

#if UNITY_EDITOR && !UNITY_ANDROID && !UNITY_IPHONE
        public static string appKey = "";
#elif UNITY_ANDROID
       public static string appKey = "fee50c333ff3825fd6ad6d38cff78154de3025546d47a84f";
#elif UNITY_IPHONE
       public static string appKey = "466de0d625e01e8811c588588a42a55970bc7c132649eede";
#else
	public static string appKey = "";
#endif

        #endregion

        private ConsentForm consentForm;
        private ConsentManager consentManager;
        private bool isShouldSaveConsentForm;
        private Consent currentConsent;

        private void Start()
        {
            consentManagerPanel.gameObject.SetActive(true);
            appodealPanel.gameObject.SetActive(false);

            btnShowInterstitial.GetComponentInChildren<Text>().text = CACHE_INTERSTITIAL;
            btnShowRewardedVideo.GetComponentInChildren<Text>().text = CACHE_REWARDED_VIDEO;

            consentManager = ConsentManager.getInstance();
        }

        private void Awake()
        {
            Appodeal.requestAndroidMPermissions(this);
        }

        private void OnDestroy()
        {
            Appodeal.destroy(Appodeal.BANNER);
        }

        public void RequestConsentInfoUpdate()
        {
            consentManager.requestConsentInfoUpdate(appKey, this);
        }

        public void SetCustomVendor()
        {
            var customVendor = new Vendor.Builder(
                    "Appodeal Test",
                    "com.appodeal.test",
                    "https://customvendor.com")
                .setPurposeIds(new List<int> {100, 200, 300})
                .setFeatureId(new List<int> {400, 500, 600})
                .setLegitimateInterestPurposeIds(new List<int> {700, 800, 900})
                .build();

            consentManager.setCustomVendor(customVendor);

            var vendor = consentManager.getCustomVendor("com.appodeal.test");
            if (vendor == null) return;
            Debug.Log("Vendor getName: " + vendor.getName());
            Debug.Log("Vendor getBundle: " + vendor.getBundle());
            Debug.Log("Vendor getPolicyUrl: " + vendor.getPolicyUrl());
            foreach (var purposeId in vendor.getPurposeIds())
            {
                Debug.Log("Vendor getPurposeIds: " + purposeId);
            }

            foreach (var featureId in vendor.getFeatureIds())
            {
                Debug.Log("Vendor getFeatureIds: " + featureId);
            }

            foreach (var legitimateInterestPurposeId in vendor.getLegitimateInterestPurposeIds())
            {
                Debug.Log("Vendor getLegitimateInterestPurposeIds: " + legitimateInterestPurposeId);
            }
        }

        public void ShouldShowForm()
        {
            Debug.Log("shouldShowConsentDialog: " + consentManager.shouldShowConsentDialog());
        }

        public void GetConsentZone()
        {
            Debug.Log("getConsentZone: " + consentManager.getConsentZone());
        }

        public void GetConsentStatus()
        {
            Debug.Log("getConsentStatus: " + consentManager.getConsentStatus());
        }

        public void LoadConsentForm()
        {
            consentForm = new ConsentForm.Builder().withListener(this).build();
            if (consentForm != null)
            {
                consentForm.load();
            }
        }

        public void IsLoadedConsentForm()
        {
            if (consentForm != null)
            {
                Debug.Log("isLoadedConsentForm:  " + consentForm.isLoaded());
            }
        }

        public void ShowFormAsActivity()
        {
            if (consentForm != null)
            {
                consentForm.showAsActivity();
            }
            else
            {
                Debug.Log("showForm - false");
            }
        }

        public void ShowFormAsDialog()
        {
            if (consentForm != null)
            {
                consentForm.showAsDialog();
            }
            else
            {
                Debug.Log("showForm - false");
            }
        }

        public void PrintIABString()
        {
            Debug.Log("Consent IAB String is: " + consentManager.getConsent().getIabConsentString());
        }

        public void PrintCurrentConsent()
        {
            if (consentManager.getConsent() == null) return;
            Debug.Log(
                "consent.getIabConsentString() - " + consentManager.getConsent().getIabConsentString());
            Debug.Log(
                "consent.hasConsentForVendor() - " +
                consentManager.getConsent().hasConsentForVendor("com.appodeal.test"));
            Debug.Log("consent.getStatus() - " + consentManager.getConsent().getStatus());
            Debug.Log("consent.getZone() - " + consentManager.getConsent().getZone());
        }

        public void PrintAuthorizationStatus()
        {
            if (consentManager.getConsent() == null) return;
            Debug.Log($"AuthorizationStatus - {consentManager.getConsent().getAuthorizationStatus()} ");
        }

        public void ShowAppodealLogic()
        {
            consentManagerPanel.SetActive(false);
            appodealPanel.SetActive(true);
        }

        public void Initialize()
        {
            InitWithConsent(currentConsent != null);
        }

        public void InitWithConsent(bool isConsent)
        {
            Appodeal.setTesting(tgTesting.isOn);
            Appodeal.setLogLevel(tgLogging.isOn ? Appodeal.LogLevel.Verbose : Appodeal.LogLevel.None);
            Appodeal.setUserId("1");
            Appodeal.setUserAge(1);
            Appodeal.setUserGender(UserSettings.Gender.OTHER);
            Appodeal.disableLocationPermissionCheck();
            Appodeal.disableWriteExternalStoragePermissionCheck();
            Appodeal.setTriggerOnLoadedOnPrecache(Appodeal.INTERSTITIAL, true);
            Appodeal.setSmartBanners(true);
            Appodeal.setBannerAnimation(false);
            Appodeal.setTabletBanners(false);
            Appodeal.setBannerBackground(false);
            Appodeal.setChildDirectedTreatment(false);
            Appodeal.muteVideosIfCallsMuted(true);
            Appodeal.setSharedAdsInstanceAcrossActivities(true);
            Appodeal.setAutoCache(Appodeal.INTERSTITIAL, false);
            Appodeal.setAutoCache(Appodeal.REWARDED_VIDEO, false);
            Appodeal.setExtraData(ExtraData.APPSFLYER_ID, "1527256526604-2129416");
            Appodeal.setUseSafeArea(true);

            if (isConsent)
            {
                Appodeal.initialize(appKey,
                    Appodeal.INTERSTITIAL | Appodeal.BANNER | Appodeal.REWARDED_VIDEO | Appodeal.MREC,
                    currentConsent);
            }
            else
            {
                Appodeal.initialize(appKey,
                    Appodeal.INTERSTITIAL | Appodeal.BANNER | Appodeal.REWARDED_VIDEO | Appodeal.MREC,
                    true);
            }

            Appodeal.setBannerCallbacks(this);
            Appodeal.setInterstitialCallbacks(this);
            Appodeal.setRewardedVideoCallbacks(this);
            Appodeal.setMrecCallbacks(this);

            Appodeal.setSegmentFilter("newBoolean", true);
            Appodeal.setSegmentFilter("newInt", 1234567890);
            Appodeal.setSegmentFilter("newDouble", 123.123456789);
            Appodeal.setSegmentFilter("newString", "newStringFromSDK");
        }

        public void ShowInterstitial()
        {
            if (Appodeal.canShow(Appodeal.INTERSTITIAL) && !Appodeal.isPrecache(Appodeal.INTERSTITIAL))
            {
                Appodeal.show(Appodeal.INTERSTITIAL);
            }
            else
            {
                Appodeal.cache(Appodeal.INTERSTITIAL);
            }
        }

        public void ShowRewardedVideo()
        {
            if (Appodeal.canShow(Appodeal.REWARDED_VIDEO))
            {
                Appodeal.show(Appodeal.REWARDED_VIDEO);
            }
            else
            {
                Appodeal.cache(Appodeal.REWARDED_VIDEO);
            }
        }

        public void ShowBannerBottom()
        {
            Appodeal.show(Appodeal.BANNER_BOTTOM, "default");
        }

        public void ShowBannerTop()
        {
            Appodeal.show(Appodeal.BANNER_TOP, "default");
        }

        public void HideBanner()
        {
            Appodeal.hide(Appodeal.BANNER);
        }

        public void ShowBannerView()
        {
            Appodeal.showBannerView(Screen.currentResolution.height - Screen.currentResolution.height / 10,
                Appodeal.BANNER_HORIZONTAL_CENTER, "default");
        }

        public void HideBannerView()
        {
            Appodeal.hideBannerView();
        }

        public void ShowMrecView()
        {
            Appodeal.showMrecView(Screen.currentResolution.height - Screen.currentResolution.height / 10,
                Appodeal.BANNER_HORIZONTAL_CENTER, "default");
        }

        public void HideMrecView()
        {
            Appodeal.hideMrecView();
        }

        public void ShowBannerLeft()
        {
            Appodeal.show(Appodeal.BANNER_LEFT);
        }

        public void ShowBannerRight()
        {
            Appodeal.show(Appodeal.BANNER_RIGHT);
        }

        #region ConsentFormListener

        public void onConsentFormLoaded()
        {
            Debug.Log("ConsentFormListener - onConsentFormLoaded");
        }

        public void onConsentFormError(ConsentManagerException exception)
        {
            Debug.Log($"ConsentFormListener - onConsentFormError, reason - {exception.getReason()}");
        }

        public void onConsentFormOpened()
        {
            Debug.Log("ConsentFormListener - onConsentFormOpened");
        }

        public void onConsentFormClosed(Consent consent)
        {
            currentConsent = consent;
            Debug.Log($"ConsentFormListener - onConsentFormClosed, consentStatus - {consent.getStatus()}");
        }

        #endregion

        #region ConsentInfoUpdateListener

        public void onConsentInfoUpdated(Consent consent)
        {
            currentConsent = consent;
            Debug.Log("onConsentInfoUpdated");
        }

        public void onFailedToUpdateConsentInfo(ConsentManagerException error)
        {
            Debug.Log($"onFailedToUpdateConsentInfo");

            if (error == null) return;
            Debug.Log($"onFailedToUpdateConsentInfo Reason: {error.getReason()}");

            switch (error.getCode())
            {
                case 0:
                    Debug.Log("onFailedToUpdateConsentInfo - UNKNOWN");
                    break;
                case 1:
                    Debug.Log(
                        "onFailedToUpdateConsentInfo - INTERNAL - Error on SDK side. Includes JS-bridge or encoding/decoding errors");
                    break;
                case 2:
                    Debug.Log("onFailedToUpdateConsentInfo - NETWORKING - HTTP errors, parse request/response ");
                    break;
                case 3:
                    Debug.Log("onFailedToUpdateConsentInfo - INCONSISTENT - Incorrect SDK API usage");
                    break;
            }
        }

        #endregion

        #region Banner callback handlers

        public void onBannerLoaded(int height, bool precache)
        {
            Debug.Log("onBannerLoaded");
            Debug.Log($"Banner height - {height}");
            Debug.Log($"Banner precache - {precache}");
        }

        public void onBannerFailedToLoad()
        {
            Debug.Log("onBannerFailedToLoad");
        }

        public void onBannerShown()
        {
            print("onBannerShown");
        }

        public void onBannerClicked()
        {
            print("onBannerClicked");
        }

        public void onBannerExpired()
        {
            print("onBannerExpired");
        }

        #endregion

        #region Interstitial callback handlers

        public void onInterstitialLoaded(bool isPrecache)
        {
            if (!isPrecache)
            {
                btnShowInterstitial.GetComponentInChildren<Text>().text = SHOW_INTERSTITIAL;
            }
            else
            {
                Debug.Log("Appodeal. Interstitial loaded. isPrecache - true");
            }

            Debug.Log("onInterstitialLoaded");
        }

        public void onInterstitialFailedToLoad()
        {
            Debug.Log("onInterstitialFailedToLoad");
        }

        public void onInterstitialShowFailed()
        {
            Debug.Log("onInterstitialShowFailed");
        }

        public void onInterstitialShown()
        {
            Debug.Log("onInterstitialShown");
        }

        public void onInterstitialClosed()
        {
            btnShowInterstitial.GetComponentInChildren<Text>().text = CACHE_INTERSTITIAL;
            Debug.Log("onInterstitialClosed");
        }

        public void onInterstitialClicked()
        {
            Debug.Log("onInterstitialClicked");
        }

        public void onInterstitialExpired()
        {
            Debug.Log("onInterstitialExpired");
        }

        #endregion

        #region Rewarded Video callback handlers

        public void onRewardedVideoLoaded(bool isPrecache)
        {
            btnShowRewardedVideo.GetComponentInChildren<Text>().text = "SHOW REWARDED VIDEO";
            print("onRewardedVideoLoaded");
        }

        public void onRewardedVideoFailedToLoad()
        {
            print("onRewardedVideoFailedToLoad");
        }

        public void onRewardedVideoShowFailed()
        {
            print("onRewardedVideoShowFailed");
        }

        public void onRewardedVideoShown()
        {
            print("onRewardedVideoShown");
        }

        public void onRewardedVideoClosed(bool finished)
        {
            btnShowRewardedVideo.GetComponentInChildren<Text>().text = "CACHE REWARDED VIDEO";
            print($"onRewardedVideoClosed. Finished - {finished}");
        }

        public void onRewardedVideoFinished(double amount, string name)
        {
            print("onRewardedVideoFinished. Reward: " + amount + " " + name);
        }

        public void onRewardedVideoExpired()
        {
            print("onRewardedVideoExpired");
        }

        public void onRewardedVideoClicked()
        {
            print("onRewardedVideoClicked");
        }

        #endregion

        #region Mrec callback handlers

        public void onMrecLoaded(bool precache)
        {
            print($"onMrecLoaded. Precache - {precache}");
        }

        public void onMrecFailedToLoad()
        {
            print("onMrecFailedToLoad");
        }

        public void onMrecShown()
        {
            print("onMrecShown");
        }

        public void onMrecClicked()
        {
            print("onMrecClicked");
        }

        public void onMrecExpired()
        {
            print("onMrecExpired");
        }

        #endregion

        #region PermissionGrantedListener

        public void writeExternalStorageResponse(int result)
        {
            if (result == 0)
            {
                Debug.Log("WRITE_EXTERNAL_STORAGE permission granted");
            }
            else
            {
                Debug.Log("WRITE_EXTERNAL_STORAGE permission grant refused");
            }
        }

        public void accessCoarseLocationResponse(int result)
        {
            if (result == 0)
            {
                Debug.Log("ACCESS_COARSE_LOCATION permission granted");
            }
            else
            {
                Debug.Log("ACCESS_COARSE_LOCATION permission grant refused");
            }
        }

        #endregion PermissionGrantedListener
    }
}