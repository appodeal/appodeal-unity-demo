using System.Diagnostics.CodeAnalysis;
using AppodealAds.Unity.Common;

namespace AppodealAds.Unity.Android
{
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "UnusedParameter.Local")]
    public class AppodealBannerCallbacks
#if UNITY_ANDROID
        : UnityEngine.AndroidJavaProxy
    {
        private readonly IBannerAdListener listener;

        internal AppodealBannerCallbacks(IBannerAdListener listener) : base("com.appodeal.ads.BannerCallbacks")
        {
            this.listener = listener;
        }

        private void onBannerLoaded(int height, bool isPrecache)
        {
            listener.onBannerLoaded(height,isPrecache);
        }

        private void onBannerFailedToLoad()
        {
            listener.onBannerFailedToLoad();
        }

        private void onBannerShown()
        {
            listener.onBannerShown();
        }

        private void onBannerClicked()
        {
            listener.onBannerClicked();
        }

        private void onBannerExpired()
        {
            listener.onBannerExpired();
        }
    }
#else
    {
        public AppodealBannerCallbacks(IBannerAdListener listener)
        {
        }
    }
#endif
}