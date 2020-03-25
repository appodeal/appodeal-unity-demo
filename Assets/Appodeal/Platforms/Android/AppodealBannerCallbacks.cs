using System.Diagnostics.CodeAnalysis;
using AppodealAds.Unity.Common;

namespace AppodealAds.Unity.Android
{
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "UnusedParameter.Local")]
    [SuppressMessage("ReSharper", "UnusedMember.Global")]
    public class AppodealBannerCallbacks
#if UNITY_ANDROID
        : UnityEngine.AndroidJavaProxy
    {
        private readonly IBannerAdListener listener;

        internal AppodealBannerCallbacks(IBannerAdListener listener) : base("com.appodeal.ads.BannerCallbacks")
        {
            this.listener = listener;
        }

        public void onBannerLoaded(int height, bool isPrecache)
        {
            listener.onBannerLoaded(height,isPrecache);
        }

        public void onBannerFailedToLoad()
        {
            listener.onBannerFailedToLoad();
        }

        public void onBannerShown()
        {
            listener.onBannerShown();
        }

        public void onBannerClicked()
        {
            listener.onBannerClicked();
        }

        public void onBannerExpired()
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