using System;
using System.Linq;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Assertions;
using AppodealStack.Monetization.Api;
using AppodealStack.Monetization.Common;
using AppodealStack.ConsentManagement.Api;
using AppodealStack.ConsentManagement.Common;

// ReSharper disable CheckNamespace
namespace AppodealSample
{
    public class AppodealDemo : MonoBehaviour, IAppodealInitializationListener, IInAppPurchaseValidationListener,
                                IBannerAdListener, IInterstitialAdListener, IRewardedVideoAdListener, IMrecAdListener,
                                IConsentFormListener, IConsentInfoUpdateListener
    {

        #region Constants

        private const string InterstitialShow = "Show Interstitial";
        private const string InterstitialCache = "Cache Interstitial";
        private const string InterstitialCaching = "Caching Interstitial";
        private const string RewardedVideoShow = "Show Rewarded Video";
        private const string RewardedVideoCache = "Cache Rewarded Video";
        private const string RewardedVideoCaching = "Caching Rewarded Video";

        #endregion

        #region Appodeal Demo Scene UI Components

        [SerializeField] private List<GameObject>   panels;
        [SerializeField] private Button             nextPanelButton;
        [SerializeField] private Button             previousPanelButton;
        [SerializeField] private Toggle             loggingToggle;
        [SerializeField] private Toggle             testingToggle;
        [SerializeField] private Toggle             safeAreaToggle;
        [SerializeField] private Toggle             mrecInitializationToggle;
        [SerializeField] private Toggle             bannerInitializationToggle;
        [SerializeField] private Toggle             interstitialInitializationToggle;
        [SerializeField] private Toggle             rewardedVideoInitializationToggle;
        [SerializeField] private Toggle             smartBannerToggle;
        [SerializeField] private Toggle             tabletBannerToggle;
        [SerializeField] private Toggle             bannerAnimationToggle;
        [SerializeField] private Toggle             interstitialAutoCacheToggle;
        [SerializeField] private Toggle             rewardedVideoAutoCacheToggle;
        [SerializeField] private Text               pluginVersionText;
        [SerializeField] private Text               interstitialButtonText;
        [SerializeField] private Text               rewardedVideoButtonText;

        #endregion

        #region Appodeal Application Key

#if UNITY_EDITOR && !UNITY_ANDROID && !UNITY_IPHONE
        private const string AppKey = "";
#elif UNITY_ANDROID
        private const string AppKey = "fee50c333ff3825fd6ad6d38cff78154de3025546d47a84f";
#elif UNITY_IPHONE
        private const string AppKey = "466de0d625e01e8811c588588a42a55970bc7c132649eede";
#else
	    private const string AppKey = "";
#endif

        #endregion

        #region Appodeal ConsentManager Fields

        private IConsent        _consent;
        private ConsentForm     _consentForm;
        private ConsentManager  _consentManager;

        #endregion

        #region  Other Demo Scene Fields

        private bool _shouldChangeIntText, _shouldChangeRewText;

        #endregion

        #region MonoBehavior Functions

        private void Awake()
        {
            Assert.IsNotNull(panels);
            panels.ForEach(panel => Assert.IsNotNull(panel));
            Assert.IsNotNull(nextPanelButton);
            Assert.IsNotNull(previousPanelButton);
            Assert.IsNotNull(loggingToggle);
            Assert.IsNotNull(testingToggle);
            Assert.IsNotNull(safeAreaToggle);
            Assert.IsNotNull(mrecInitializationToggle);
            Assert.IsNotNull(bannerInitializationToggle);
            Assert.IsNotNull(interstitialInitializationToggle);
            Assert.IsNotNull(rewardedVideoInitializationToggle);
            Assert.IsNotNull(smartBannerToggle);
            Assert.IsNotNull(tabletBannerToggle);
            Assert.IsNotNull(bannerAnimationToggle);
            Assert.IsNotNull(interstitialAutoCacheToggle);
            Assert.IsNotNull(rewardedVideoAutoCacheToggle);
            Assert.IsNotNull(pluginVersionText);
            Assert.IsNotNull(interstitialButtonText);
            Assert.IsNotNull(rewardedVideoButtonText);
        }

        private void Start()
        {
            panels.ForEach(panel => panel.SetActive(false));
            panels.FirstOrDefault()?.SetActive(true);
            previousPanelButton.interactable = false;

            pluginVersionText.text = $"Appodeal Unity Plugin v{AppodealVersions.GetPluginVersion()}";

            _consentManager = ConsentManager.GetInstance();
            _consentManager.SetStorage(ConsentManagerStorage.SharedPreference);
        }

        private void Update()
        {
            if (_shouldChangeIntText)
            {
                _shouldChangeIntText = false;
                interstitialButtonText.text = Appodeal.IsLoaded(AppodealAdType.Interstitial) ? InterstitialShow : Appodeal.IsAutoCacheEnabled(AppodealAdType.Interstitial) ? InterstitialCaching : InterstitialCache;
            }
            if (_shouldChangeRewText)
            {
                _shouldChangeRewText = false;
                rewardedVideoButtonText.text = Appodeal.IsLoaded(AppodealAdType.RewardedVideo) ? RewardedVideoShow : Appodeal.IsAutoCacheEnabled(AppodealAdType.RewardedVideo) ? RewardedVideoCaching : RewardedVideoCache;
            }
        }

        private void OnDestroy()
        {
            Appodeal.Destroy(AppodealAdType.Banner);
        }

        #endregion

        #region Appodeal Demo Scene Helper Functions

        public void ShowPreviousPanel()
        {
            int index = panels.IndexOf(panels.First(panel => panel.activeSelf));
            panels[index].SetActive(false);
            panels[index - 1].SetActive(true);
            if (index - 1 <= 0) previousPanelButton.interactable = false;
            if (index + 2 >= panels.Count) nextPanelButton.interactable = true;
        }

        public void ShowNextPanel()
        {
            int index = panels.IndexOf(panels.First(panel => panel.activeSelf));
            panels[index].SetActive(false);
            panels[index + 1].SetActive(true);
            if (index - 1 <= 0) previousPanelButton.interactable = true;
            if (index + 2 >= panels.Count) nextPanelButton.interactable = false;
        }

        #endregion

        #region Appodeal Consent Management

        public void RequestConsentInfoUpdate()
        {
            _consentManager?.RequestConsentInfoUpdate(AppKey, this);
        }

        public void SetCustomVendor()
        {
            var customVendor = new Vendor.Builder("Test Vendor", "com.appodeal.test", "https://appodeal.com")
                .SetPurposeIds(new List<int> {4, 7})
                .SetFeatureIds(new List<int> {1, 2})
                .SetLegitimateInterestPurposeIds(new List<int> {1})
                .Build();

            _consentManager?.SetCustomVendor(customVendor);

            var vendor = _consentManager?.GetCustomVendor("com.appodeal.test");
            if (vendor == null) return;

            Debug.Log($"[APDUnity] [Vendor] GetName(): {vendor.GetName()}");
            Debug.Log($"[APDUnity] [Vendor] GetBundle(): {vendor.GetBundle()}");
            Debug.Log($"[APDUnity] [Vendor] GetPolicyUrl(): {vendor.GetPolicyUrl()}");
            vendor.GetPurposeIds().ForEach(purposeId => Debug.Log($"[APDUnity] [Vendor] GetPurposeIds(): {purposeId}"));
            vendor.GetFeatureIds().ForEach(featureId => Debug.Log($"[APDUnity] [Vendor] GetFeatureIds(): {featureId}"));
            vendor.GetLegitimateInterestPurposeIds().ForEach(id => Debug.Log($"[APDUnity] [Vendor] GetLegitimateInterestPurposeIds(): {id}"));
        }

        public void ShouldShowForm()
        {
            Debug.Log($"[APDUnity] [ConsentManager] ShouldShowConsentDialog(): {_consentManager?.ShouldShowConsentDialog()}");
        }

        public void GetConsentZone()
        {
            Debug.Log($"[APDUnity] [ConsentManager] GetConsentZone(): {_consentManager?.GetConsentZone()}");
        }

        public void GetConsentStatus()
        {
            Debug.Log($"[APDUnity] [ConsentManager] GetConsentStatus(): {_consentManager?.GetConsentStatus()}");
        }

        public void LoadConsentForm()
        {
            _consentForm = ConsentForm.GetInstance(this);
            _consentForm?.Load();
        }

        public void IsLoadedConsentForm()
        {
            if (_consentForm == null) return;
            Debug.Log($"[APDUnity] [ConsentForm] IsLoadedConsentForm(): {_consentForm.IsLoaded()}");
        }

        public void ShowConsentForm()
        {
            if (_consentForm != null)
            {
                _consentForm.Show();
            }
            else
            {
                Debug.Log("[APDUnity] [ConsentForm] form is null");
            }
        }

        public void PrintIabString()
        {
            if (_consentManager?.GetConsent() == null) return;
            Debug.Log($"[APDUnity] [Consent] GetIabConsentString(): {_consentManager.GetConsent().GetIabConsentString()}");
        }

        public void PrintCurrentConsent()
        {
            if (_consentManager?.GetConsent() == null) return;
            Debug.Log($"[APDUnity] [Consent] HasConsentForVendor(): {_consentManager.GetConsent().HasConsentForVendor("com.appodeal.test")}");
            Debug.Log($"[APDUnity] [Consent] GetStatus(): {_consentManager.GetConsent().GetStatus()}");
            Debug.Log($"[APDUnity] [Consent] GetZone(): {_consentManager.GetConsent().GetZone()}");
        }

        public void PrintAuthorizationStatus()
        {
            if (_consentManager?.GetConsent() == null) return;
            Debug.Log($"[APDUnity] [Consent] GetAuthorizationStatus(): {_consentManager.GetConsent().GetAuthorizationStatus()}");
        }

        #endregion

        #region Appodeal Monetization

        public void Initialize()
        {
            InitWithConsent(_consent != null);
        }

        private void InitWithConsent(bool isConsent)
        {
            Appodeal.SetLogLevel(loggingToggle.isOn ? AppodealLogLevel.Verbose : AppodealLogLevel.None);
            Appodeal.SetTesting(testingToggle.isOn);
            Appodeal.SetUseSafeArea(safeAreaToggle.isOn);

            Appodeal.SetUserId("1");
            Appodeal.SetCustomFilter(PredefinedKeys.UserAge, 18);
            Appodeal.SetCustomFilter(PredefinedKeys.UserGender, (int) AppodealUserGender.Male);
            Appodeal.ResetCustomFilter(PredefinedKeys.UserGender);

            Appodeal.SetExtraData("testKey", "testValue");
            Appodeal.ResetExtraData("testKey");

            Appodeal.SetBannerRotation(-110, 90);
            Appodeal.SetSmartBanners(smartBannerToggle.isOn);
            Appodeal.SetTabletBanners(tabletBannerToggle.isOn);
            Appodeal.SetBannerAnimation(bannerAnimationToggle.isOn);

            Appodeal.SetLocationTracking(false);
            Appodeal.MuteVideosIfCallsMuted(true);
            Appodeal.SetChildDirectedTreatment(false);

            Appodeal.SetTriggerOnLoadedOnPrecache(AppodealAdType.Interstitial, true);

            Appodeal.DisableNetwork(AppodealNetworks.Vungle);
            Appodeal.DisableNetwork(AppodealNetworks.Yandex, AppodealAdType.Banner);

            Appodeal.SetAutoCache(AppodealAdType.Interstitial, interstitialAutoCacheToggle.isOn);
            Appodeal.SetAutoCache(AppodealAdType.RewardedVideo, rewardedVideoAutoCacheToggle.isOn);
            interstitialButtonText.text =  interstitialAutoCacheToggle.isOn ? InterstitialCaching : InterstitialCache;
            rewardedVideoButtonText.text =  rewardedVideoAutoCacheToggle.isOn ? RewardedVideoCaching : RewardedVideoCache;

            Appodeal.SetMrecCallbacks(this);
            Appodeal.SetBannerCallbacks(this);
            Appodeal.SetInterstitialCallbacks(this);
            Appodeal.SetRewardedVideoCallbacks(this);

            if (isConsent)
            {
                Appodeal.UpdateConsent(_consent);
            }
            else if (!testingToggle.isOn)
            {
                Appodeal.UpdateCcpaConsent(CcpaUserConsent.OptOut);
                Appodeal.UpdateGdprConsent(GdprUserConsent.NonPersonalized);
            }

            int adTypes = (mrecInitializationToggle.isOn ? AppodealAdType.Mrec : 0) |
                          (bannerInitializationToggle.isOn ? AppodealAdType.Banner : 0) |
                          (interstitialInitializationToggle.isOn ? AppodealAdType.Interstitial : 0) |
                          (rewardedVideoInitializationToggle.isOn ? AppodealAdType.RewardedVideo : 0);

            Appodeal.Initialize(AppKey, adTypes, this);
        }

        public void ShowInterstitial()
        {
            if (Appodeal.IsLoaded(AppodealAdType.Interstitial) && Appodeal.CanShow(AppodealAdType.Interstitial, "default") && !Appodeal.IsPrecache(AppodealAdType.Interstitial))
            {
                Appodeal.Show(AppodealShowStyle.Interstitial);
            }
            else if (!Appodeal.IsAutoCacheEnabled(AppodealAdType.Interstitial))
            {
                Appodeal.Cache(AppodealAdType.Interstitial);
                interstitialButtonText.text = InterstitialCaching;
            }
        }

        public void ShowRewardedVideo()
        {
            if (Appodeal.IsLoaded(AppodealAdType.RewardedVideo) && Appodeal.CanShow(AppodealAdType.RewardedVideo, "default"))
            {
                Appodeal.Show(AppodealShowStyle.RewardedVideo);
            }
            else if (!Appodeal.IsAutoCacheEnabled(AppodealAdType.RewardedVideo))
            {
                Appodeal.Cache(AppodealAdType.RewardedVideo);
                rewardedVideoButtonText.text = RewardedVideoCaching;
            }
        }

        public void ShowBannerBottom()
        {
            Appodeal.Show(AppodealShowStyle.BannerBottom, "default");
        }

        public void ShowBannerTop()
        {
            Appodeal.Show(AppodealShowStyle.BannerTop, "default");
        }

        public void ShowBannerLeft()
        {
            Appodeal.Show(AppodealShowStyle.BannerLeft, "default");
        }

        public void ShowBannerRight()
        {
            Appodeal.Show(AppodealShowStyle.BannerRight, "default");
        }

        public void HideBanner()
        {
            Appodeal.Hide(AppodealAdType.Banner);
        }

        public void ShowBannerView()
        {
            Appodeal.ShowBannerView(AppodealViewPosition.VerticalBottom, AppodealViewPosition.HorizontalCenter, "default");
        }

        public void HideBannerView()
        {
            Appodeal.HideBannerView();
        }

        public void ShowMrecView()
        {
            Appodeal.ShowMrecView(AppodealViewPosition.VerticalTop, AppodealViewPosition.HorizontalCenter, "default");
        }

        public void HideMrecView()
        {
            Appodeal.HideMrecView();
        }

        public void ValidateInAppPurchase()
        {
#if UNITY_ANDROID
            var additionalParams = new Dictionary<string, string> { { "key1", "value1" }, { "key2", "value2" } };

            var purchase = new PlayStoreInAppPurchase.Builder(PlayStorePurchaseType.Subs)
                .WithAdditionalParameters(additionalParams)
                .WithPurchaseTimestamp(793668600)
                .WithDeveloperPayload("payload")
                .WithPurchaseToken("token")
                .WithPurchaseData("data")
                .WithPublicKey("key")
                .WithSignature("signature")
                .WithCurrency("USD")
                .WithOrderId("orderId")
                .WithPrice("1.99")
                .WithSku("sku")
                .Build();

            Appodeal.ValidatePlayStoreInAppPurchase(purchase, this);
#elif UNITY_IOS
            var additionalParams = new Dictionary<string, string> { { "key1", "value1" }, { "key2", "value2" } };

            var purchase = new AppStoreInAppPurchase.Builder(AppStorePurchaseType.Consumable)
                .WithAdditionalParameters(additionalParams)
                .WithTransactionId("transactionId")
                .WithProductId("productId")
                .WithCurrency("USD")
                .WithPrice("2.89")
                .Build();

            Appodeal.ValidateAppStoreInAppPurchase(purchase, this);
#endif
        }

        public void LogEvent()
        {
            Appodeal.LogEvent("test_event", new Dictionary<string, object> { { "test_key_1", 42 }, { "test_key_2", "test_value" } });
        }

        #endregion

        #region IAppodealInitializeListener implementation

        public void OnInitializationFinished(List<string> errors)
        {
            string output = errors == null ? String.Empty : String.Join(", ", errors);
            Debug.Log($"[APDUnity] [Callback] OnInitializationFinished(errors:[{output}])");

            Debug.Log($"[APDUnity] [Appodeal] IsAutoCacheEnabled() for banner: {Appodeal.IsAutoCacheEnabled(AppodealAdType.Banner)}");
            Debug.Log($"[APDUnity] [Appodeal] IsInitialized() for banner: {Appodeal.IsInitialized(AppodealAdType.Banner)}");
            Debug.Log($"[APDUnity] [Appodeal] IsSmartBannersEnabled(): {Appodeal.IsSmartBannersEnabled()}");
            Debug.Log($"[APDUnity] [Appodeal] GetUserId(): {Appodeal.GetUserId()}");
            Debug.Log($"[APDUnity] [Appodeal] GetSegmentId(): {Appodeal.GetSegmentId()}");
            Debug.Log($"[APDUnity] [Appodeal] GetRewardParameters(): {Appodeal.GetRewardParameters()}");
            Debug.Log($"[APDUnity] [Appodeal] GetNativeSDKVersion(): {Appodeal.GetNativeSDKVersion()}");

            var networksList = Appodeal.GetNetworks(AppodealAdType.RewardedVideo);
            output = networksList == null ? String.Empty : String.Join(", ", (networksList.ToArray()));
            Debug.Log($"[APDUnity] [Appodeal] GetNetworks() for RV: {output}");

            networksList = Appodeal.GetNetworks(AppodealAdType.Interstitial);
            output = networksList == null ? String.Empty : String.Join(", ", (networksList.ToArray()));
            Debug.Log($"[APDUnity] [Appodeal] GetNetworks() for Interstitial: {output}");

            networksList = Appodeal.GetNetworks(AppodealAdType.Banner);
            output = networksList == null ? String.Empty : String.Join(", ", (networksList.ToArray()));
            Debug.Log($"[APDUnity] [Appodeal] GetNetworks() for Banner: {output}");

            networksList = Appodeal.GetNetworks(AppodealAdType.Mrec);
            output = networksList == null ? String.Empty : String.Join(", ", (networksList.ToArray()));
            Debug.Log($"[APDUnity] [Appodeal] GetNetworks() for Mrec: {output}");
        }

        #endregion

        #region IInAppPurchaseValidationListener implementation

        public void OnInAppPurchaseValidationSucceeded(string json)
        {
            Debug.Log($"[APDUnity] [Callback] OnInAppPurchaseValidationSucceeded(string json:\n{json})");
        }

        public void OnInAppPurchaseValidationFailed(string json)
        {
            Debug.Log($"[APDUnity] [Callback] OnInAppPurchaseValidationFailed(string json:\n{json})");
        }

        #endregion

        #region IBannerAdListener implementation

        public void OnBannerLoaded(int height, bool isPrecache)
        {
            Debug.Log($"[APDUnity] [Callback] OnBannerLoaded(int height:{height}, bool precache:{isPrecache})");
            Debug.Log($"[APDUnity] GetPredictedEcpm(): {Appodeal.GetPredictedEcpm(AppodealAdType.Banner)}");
        }

        public void OnBannerFailedToLoad()
        {
            Debug.Log("[APDUnity] [Callback] OnBannerFailedToLoad()");
        }

        public void OnBannerShown()
        {
            Debug.Log("[APDUnity] [Callback] OnBannerShown()");
        }

        public void OnBannerShowFailed()
        {
            Debug.Log("[APDUnity] [Callback] OnBannerShowFailed()");
        }

        public void OnBannerClicked()
        {
            Debug.Log("[APDUnity] [Callback] OnBannerClicked()");
        }

        public void OnBannerExpired()
        {
            Debug.Log("[APDUnity] [Callback] OnBannerExpired()");
        }

        #endregion

        #region IInterstitialAdListener implementation

        public void OnInterstitialLoaded(bool isPrecache)
        {
            if (!isPrecache) _shouldChangeIntText = true;
            Debug.Log($"[APDUnity] [Callback] OnInterstitialLoaded(bool isPrecache:{isPrecache})");
            Debug.Log($"[APDUnity] GetPredictedEcpm(): {Appodeal.GetPredictedEcpm(AppodealAdType.Interstitial)}");
        }

        public void OnInterstitialFailedToLoad()
        {
            Debug.Log("[APDUnity] [Callback] OnInterstitialFailedToLoad()");
        }

        public void OnInterstitialShowFailed()
        {
            Debug.Log("[APDUnity] [Callback] OnInterstitialShowFailed()");
        }

        public void OnInterstitialShown()
        {
            Debug.Log("[APDUnity] [Callback] OnInterstitialShown()");
        }

        public void OnInterstitialClosed()
        {
            _shouldChangeIntText = true;
            Debug.Log("[APDUnity] [Callback] OnInterstitialClosed()");
        }

        public void OnInterstitialClicked()
        {
            Debug.Log("[APDUnity] [Callback] OnInterstitialClicked()");
        }

        public void OnInterstitialExpired()
        {
            Debug.Log("[APDUnity] [Callback] OnInterstitialExpired()");
        }

        #endregion

        #region IRewardedVideoAdListener implementation

        public void OnRewardedVideoLoaded(bool isPrecache)
        {
            _shouldChangeRewText = true;
            Debug.Log($"[APDUnity] [Callback] OnRewardedVideoLoaded(bool isPrecache:{isPrecache})");
            Debug.Log($"[APDUnity] GetPredictedEcpm(): {Appodeal.GetPredictedEcpm(AppodealAdType.RewardedVideo)}");
        }

        public void OnRewardedVideoFailedToLoad()
        {
            Debug.Log("[APDUnity] [Callback] OnRewardedVideoFailedToLoad()");
        }

        public void OnRewardedVideoShowFailed()
        {
            Debug.Log("[APDUnity] [Callback] OnRewardedVideoShowFailed()");
        }

        public void OnRewardedVideoShown()
        {
            Debug.Log("[APDUnity] [Callback] OnRewardedVideoShown()");
        }

        public void OnRewardedVideoClosed(bool finished)
        {
            _shouldChangeRewText = true;
            Debug.Log($"[APDUnity] [Callback] OnRewardedVideoClosed(bool finished:{finished})");
        }

        public void OnRewardedVideoFinished(double amount, string currency)
        {
            Debug.Log($"[APDUnity] [Callback] OnRewardedVideoFinished(double amount:{amount}, string name:{currency})");
        }

        public void OnRewardedVideoExpired()
        {
            Debug.Log("[APDUnity] [Callback] OnRewardedVideoExpired()");
        }

        public void OnRewardedVideoClicked()
        {
            Debug.Log("[APDUnity] [Callback] OnRewardedVideoClicked()");
        }

        #endregion

        #region IMrecAdListener implementation

        public void OnMrecLoaded(bool isPrecache)
        {
            Debug.Log($"[APDUnity] [Callback] OnMrecLoaded(bool isPrecache:{isPrecache})");
            Debug.Log($"[APDUnity] GetPredictedEcpm(): {Appodeal.GetPredictedEcpm(AppodealAdType.Mrec)}");
        }

        public void OnMrecFailedToLoad()
        {
            Debug.Log("[APDUnity] [Callback] OnMrecFailedToLoad()");
        }

        public void OnMrecShown()
        {
            Debug.Log("[APDUnity] [Callback] OnMrecShown()");
        }

        public void OnMrecShowFailed()
        {
            Debug.Log("[APDUnity] [Callback] OnMrecShowFailed()");
        }

        public void OnMrecClicked()
        {
            Debug.Log("[APDUnity] [Callback] OnMrecClicked()");
        }

        public void OnMrecExpired()
        {
            Debug.Log("[APDUnity] [Callback] OnMrecExpired()");
        }

        #endregion

        #region IConsentFormListener implementation

        public void OnConsentFormLoaded()
        {
            Debug.Log("[APDUnity] [Callback] OnConsentFormLoaded()");
        }

        public void OnConsentFormError(IConsentManagerException exception)
        {
            Debug.Log("[APDUnity] [Callback] OnConsentFormError(ConsentManagerException exception)");
            Debug.Log($"[APDUnity] [ConsentManagerException] GetReason(): {exception?.GetReason()}, GetCode(): {exception?.GetCode()}");
        }

        public void OnConsentFormOpened()
        {
            Debug.Log("[APDUnity] [Callback] OnConsentFormOpened()");
        }

        public void OnConsentFormClosed(IConsent consent)
        {
            _consent = consent;
            Debug.Log("[APDUnity] [Callback] OnConsentFormClosed(IConsent consent)");
        }

        #endregion

        #region IConsentInfoUpdateListener implementation

        public void OnConsentInfoUpdated(IConsent consent)
        {
            _consent = consent;
            Debug.Log("[APDUnity] [Callback] OnConsentInfoUpdated(IConsent consent)");
        }

        public void OnFailedToUpdateConsentInfo(IConsentManagerException error)
        {
            Debug.Log("[APDUnity] [Callback] OnFailedToUpdateConsentInfo(ConsentManagerException error)");
            Debug.Log($"[APDUnity] [ConsentManagerException] GetReason(): {error?.GetReason()}, GetCode(): {error?.GetCode()}");
        }

        #endregion

    }
}
