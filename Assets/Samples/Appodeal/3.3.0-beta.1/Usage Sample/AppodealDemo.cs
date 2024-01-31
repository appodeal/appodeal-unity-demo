using System;
using System.Linq;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Assertions;
using AppodealStack.Monetization.Api;
using AppodealStack.Monetization.Common;

// ReSharper disable CheckNamespace
namespace AppodealSample
{
    public class AppodealDemo : MonoBehaviour
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

        #region Appodeal Monetization

        public void Initialize()
        {
            InitAppodeal();
        }

        private void InitAppodeal()
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

            SetAppodealCallbacks();

            int adTypes = (mrecInitializationToggle.isOn ? AppodealAdType.Mrec : 0) |
                          (bannerInitializationToggle.isOn ? AppodealAdType.Banner : 0) |
                          (interstitialInitializationToggle.isOn ? AppodealAdType.Interstitial : 0) |
                          (rewardedVideoInitializationToggle.isOn ? AppodealAdType.RewardedVideo : 0);

            Appodeal.Initialize(AppKey, adTypes);
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

            Appodeal.ValidatePlayStoreInAppPurchase(purchase);
#elif UNITY_IOS
            var additionalParams = new Dictionary<string, string> { { "key1", "value1" }, { "key2", "value2" } };

            var purchase = new AppStoreInAppPurchase.Builder(AppStorePurchaseType.Consumable)
                .WithAdditionalParameters(additionalParams)
                .WithTransactionId("transactionId")
                .WithProductId("productId")
                .WithCurrency("USD")
                .WithPrice("2.89")
                .Build();

            Appodeal.ValidateAppStoreInAppPurchase(purchase);
#endif
        }

        public void LogEvent()
        {
            Appodeal.LogEvent("test_event", new Dictionary<string, object> { { "test_key_1", 42 }, { "test_key_2", "test_value" } });
        }

        #endregion

        #region Appodeal Callbacks Initialization

        private void SetAppodealCallbacks()
        {
            AppodealCallbacks.Sdk.OnInitialized += OnInitializationFinished;

            AppodealCallbacks.AdRevenue.OnReceived += (sender, args) =>
            {
                Debug.Log($"[APDUnity] [Callback] OnAdRevenueReceived({args.Ad.ToJsonString(true)})");
            };

            AppodealCallbacks.InAppPurchase.OnValidationSucceeded += OnInAppPurchaseValidationSucceeded;
            AppodealCallbacks.InAppPurchase.OnValidationFailed += OnInAppPurchaseValidationFailed;

            AppodealCallbacks.Mrec.OnLoaded += (sender, args) => OnMrecLoaded(args.IsPrecache);
            AppodealCallbacks.Mrec.OnFailedToLoad += (sender, args) => OnMrecFailedToLoad();
            AppodealCallbacks.Mrec.OnShown += (sender, args) => OnMrecShown();
            AppodealCallbacks.Mrec.OnShowFailed += (sender, args) => OnMrecShowFailed();
            AppodealCallbacks.Mrec.OnClicked += (sender, args) => OnMrecClicked();
            AppodealCallbacks.Mrec.OnExpired += (sender, args) => OnMrecExpired();

            AppodealCallbacks.Banner.OnLoaded += OnBannerLoaded;
            AppodealCallbacks.Banner.OnFailedToLoad += OnBannerFailedToLoad;
            AppodealCallbacks.Banner.OnShown += OnBannerShown;
            AppodealCallbacks.Banner.OnShowFailed += OnBannerShowFailed;
            AppodealCallbacks.Banner.OnClicked += OnBannerClicked;
            AppodealCallbacks.Banner.OnExpired += OnBannerExpired;

            AppodealCallbacks.Interstitial.OnLoaded += OnInterstitialLoaded;
            AppodealCallbacks.Interstitial.OnFailedToLoad += OnInterstitialFailedToLoad;
            AppodealCallbacks.Interstitial.OnShown += OnInterstitialShown;
            AppodealCallbacks.Interstitial.OnShowFailed += OnInterstitialShowFailed;
            AppodealCallbacks.Interstitial.OnClosed += OnInterstitialClosed;
            AppodealCallbacks.Interstitial.OnClicked += OnInterstitialClicked;
            AppodealCallbacks.Interstitial.OnExpired += OnInterstitialExpired;

            AppodealCallbacks.RewardedVideo.OnLoaded += OnRewardedVideoLoaded;
            AppodealCallbacks.RewardedVideo.OnFailedToLoad += OnRewardedVideoFailedToLoad;
            AppodealCallbacks.RewardedVideo.OnShown += OnRewardedVideoShown;
            AppodealCallbacks.RewardedVideo.OnShowFailed += OnRewardedVideoShowFailed;
            AppodealCallbacks.RewardedVideo.OnClosed += OnRewardedVideoClosed;
            AppodealCallbacks.RewardedVideo.OnFinished += OnRewardedVideoFinished;
            AppodealCallbacks.RewardedVideo.OnClicked += OnRewardedVideoClicked;
            AppodealCallbacks.RewardedVideo.OnExpired += OnRewardedVideoExpired;
        }

        #endregion

        #region Initialization Callback

        private void OnInitializationFinished(object sender, SdkInitializedEventArgs e)
        {
            string output = e.Errors == null ? String.Empty : String.Join(", ", e.Errors);
            Debug.Log($"[APDUnity] [Callback] OnInitializationFinished(errors:[{output}])");

            Debug.Log($"[APDUnity] [Appodeal] IsAutoCacheEnabled() for banner: {Appodeal.IsAutoCacheEnabled(AppodealAdType.Banner)}");
            Debug.Log($"[APDUnity] [Appodeal] IsInitialized() for banner: {Appodeal.IsInitialized(AppodealAdType.Banner)}");
            Debug.Log($"[APDUnity] [Appodeal] IsSmartBannersEnabled(): {Appodeal.IsSmartBannersEnabled()}");
            Debug.Log($"[APDUnity] [Appodeal] GetUserId(): {Appodeal.GetUserId()}");
            Debug.Log($"[APDUnity] [Appodeal] GetSegmentId(): {Appodeal.GetSegmentId()}");
            Debug.Log($"[APDUnity] [Appodeal] GetReward(): {Appodeal.GetReward().ToJsonString()}");
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

        #region InAppPurchaseValidation Callbacks

        private void OnInAppPurchaseValidationSucceeded(object sender, InAppPurchaseEventArgs e)
        {
            Debug.Log($"[APDUnity] [Callback] OnInAppPurchaseValidationSucceeded(string json:\n{e.Json})");
        }

        private void OnInAppPurchaseValidationFailed(object sender, InAppPurchaseEventArgs e)
        {
            Debug.Log($"[APDUnity] [Callback] OnInAppPurchaseValidationFailed(string json:\n{e.Json})");
        }

        #endregion

        #region MrecAd Callbacks

        private void OnMrecLoaded(bool isPrecache)
        {
            Debug.Log($"[APDUnity] [Callback] OnMrecLoaded(bool isPrecache:{isPrecache})");
            Debug.Log($"[APDUnity] GetPredictedEcpm(): {Appodeal.GetPredictedEcpm(AppodealAdType.Mrec)}");
        }

        private void OnMrecFailedToLoad()
        {
            Debug.Log("[APDUnity] [Callback] OnMrecFailedToLoad()");
        }

        private void OnMrecShown()
        {
            Debug.Log("[APDUnity] [Callback] OnMrecShown()");
        }

        private void OnMrecShowFailed()
        {
            Debug.Log("[APDUnity] [Callback] OnMrecShowFailed()");
        }

        private void OnMrecClicked()
        {
            Debug.Log("[APDUnity] [Callback] OnMrecClicked()");
        }

        private void OnMrecExpired()
        {
            Debug.Log("[APDUnity] [Callback] OnMrecExpired()");
        }

        #endregion

        #region BannerAd Callbacks

        private void OnBannerLoaded(object sender, BannerLoadedEventArgs e)
        {
            Debug.Log($"[APDUnity] [Callback] OnBannerLoaded(int height:{e.Height}, bool precache:{e.IsPrecache})");
            Debug.Log($"[APDUnity] GetPredictedEcpm(): {Appodeal.GetPredictedEcpm(AppodealAdType.Banner)}");
        }

        private void OnBannerFailedToLoad(object sender, EventArgs e)
        {
            Debug.Log("[APDUnity] [Callback] OnBannerFailedToLoad()");
        }

        private void OnBannerShown(object sender, EventArgs e)
        {
            Debug.Log("[APDUnity] [Callback] OnBannerShown()");
        }

        private void OnBannerShowFailed(object sender, EventArgs e)
        {
            Debug.Log("[APDUnity] [Callback] OnBannerShowFailed()");
        }

        private void OnBannerClicked(object sender, EventArgs e)
        {
            Debug.Log("[APDUnity] [Callback] OnBannerClicked()");
        }

        private void OnBannerExpired(object sender, EventArgs e)
        {
            Debug.Log("[APDUnity] [Callback] OnBannerExpired()");
        }

        #endregion

        #region InterstitialAd Callbacks

        private void OnInterstitialLoaded(object sender, AdLoadedEventArgs e)
        {
            if (!e.IsPrecache) _shouldChangeIntText = true;
            Debug.Log($"[APDUnity] [Callback] OnInterstitialLoaded(bool isPrecache:{e.IsPrecache})");
            Debug.Log($"[APDUnity] GetPredictedEcpm(): {Appodeal.GetPredictedEcpm(AppodealAdType.Interstitial)}");
        }

        private void OnInterstitialFailedToLoad(object sender, EventArgs e)
        {
            Debug.Log("[APDUnity] [Callback] OnInterstitialFailedToLoad()");
        }

        private void OnInterstitialShowFailed(object sender, EventArgs e)
        {
            Debug.Log("[APDUnity] [Callback] OnInterstitialShowFailed()");
        }

        private void OnInterstitialShown(object sender, EventArgs e)
        {
            Debug.Log("[APDUnity] [Callback] OnInterstitialShown()");
        }

        private void OnInterstitialClosed(object sender, EventArgs e)
        {
            _shouldChangeIntText = true;
            Debug.Log("[APDUnity] [Callback] OnInterstitialClosed()");
        }

        private void OnInterstitialClicked(object sender, EventArgs e)
        {
            Debug.Log("[APDUnity] [Callback] OnInterstitialClicked()");
        }

        private void OnInterstitialExpired(object sender, EventArgs e)
        {
            Debug.Log("[APDUnity] [Callback] OnInterstitialExpired()");
        }

        #endregion

        #region RewardedVideoAd Callbacks

        private void OnRewardedVideoLoaded(object sender, AdLoadedEventArgs e)
        {
            _shouldChangeRewText = true;
            Debug.Log($"[APDUnity] [Callback] OnRewardedVideoLoaded(bool isPrecache:{e.IsPrecache})");
            Debug.Log($"[APDUnity] GetPredictedEcpm(): {Appodeal.GetPredictedEcpm(AppodealAdType.RewardedVideo)}");
        }

        private void OnRewardedVideoFailedToLoad(object sender, EventArgs e)
        {
            Debug.Log("[APDUnity] [Callback] OnRewardedVideoFailedToLoad()");
        }

        private void OnRewardedVideoShowFailed(object sender, EventArgs e)
        {
            Debug.Log("[APDUnity] [Callback] OnRewardedVideoShowFailed()");
        }

        private void OnRewardedVideoShown(object sender, EventArgs e)
        {
            Debug.Log("[APDUnity] [Callback] OnRewardedVideoShown()");
        }

        private void OnRewardedVideoClosed(object sender, RewardedVideoClosedEventArgs e)
        {
            _shouldChangeRewText = true;
            Debug.Log($"[APDUnity] [Callback] OnRewardedVideoClosed(bool finished:{e.Finished})");
        }

        private void OnRewardedVideoFinished(object sender, RewardedVideoFinishedEventArgs e)
        {
            Debug.Log($"[APDUnity] [Callback] OnRewardedVideoFinished(double amount:{e.Amount}, string name:{e.Currency})");
        }

        private void OnRewardedVideoExpired(object sender, EventArgs e)
        {
            Debug.Log("[APDUnity] [Callback] OnRewardedVideoExpired()");
        }

        private void OnRewardedVideoClicked(object sender, EventArgs e)
        {
            Debug.Log("[APDUnity] [Callback] OnRewardedVideoClicked()");
        }

        #endregion
    }
}
