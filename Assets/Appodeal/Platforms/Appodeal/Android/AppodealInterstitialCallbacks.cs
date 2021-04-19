using System.Diagnostics.CodeAnalysis;
using AppodealAds.Unity.Common;

namespace AppodealAds.Unity.Android
{
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "UnusedParameter.Local")]
    public class AppodealInterstitialCallbacks
#if UNITY_ANDROID
        : UnityEngine.AndroidJavaProxy
    {
        private readonly IInterstitialAdListener listener;

        internal AppodealInterstitialCallbacks(IInterstitialAdListener listener) : base(
            "com.appodeal.ads.InterstitialCallbacks")
        {
            this.listener = listener;
        }

        private void onInterstitialLoaded(bool isPrecache)
        {
            listener.onInterstitialLoaded(isPrecache);
        }

        private void onInterstitialFailedToLoad()
        {
            listener.onInterstitialFailedToLoad();
        }

        private void onInterstitialShowFailed()
        {
            listener.onInterstitialShowFailed();
        }

        private void onInterstitialShown()
        {
            listener.onInterstitialShown();
        }

        private void onInterstitialClicked()
        {
            listener.onInterstitialClicked();
        }

        private void onInterstitialClosed()
        {
            listener.onInterstitialClosed();
        }

        private void onInterstitialExpired()
        {
            listener.onInterstitialExpired();
        }
    }
#else
    {
        public AppodealInterstitialCallbacks(IInterstitialAdListener listener)
        {
        }
    }
#endif
}