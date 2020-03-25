using System.Diagnostics.CodeAnalysis;
using AppodealAds.Unity.Common;


namespace AppodealAds.Unity.Android
{
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "UnusedParameter.Local")]
    [SuppressMessage("ReSharper", "UnusedMember.Global")]
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

        public void onInterstitialLoaded(bool isPrecache)
        {
            listener.onInterstitialLoaded(isPrecache);
        }

        public void onInterstitialFailedToLoad()
        {
            listener.onInterstitialFailedToLoad();
        }

        public void onInterstitialShowFailed()
        {
            listener.onInterstitialShowFailed();
        }

        public void onInterstitialShown()
        {
            listener.onInterstitialShown();
        }

        public void onInterstitialClicked()
        {
            listener.onInterstitialClicked();
        }

        public void onInterstitialClosed()
        {
            listener.onInterstitialClosed();
        }

        public void onInterstitialExpired()
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