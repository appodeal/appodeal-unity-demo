using System.Diagnostics.CodeAnalysis;
using AppodealAds.Unity.Common;

namespace AppodealAds.Unity.Android
{
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "UnusedParameter.Local")]
    public class AppodealMrecCallbacks
#if UNITY_ANDROID
        : UnityEngine.AndroidJavaProxy
    {
        private readonly IMrecAdListener listener;

        internal AppodealMrecCallbacks(IMrecAdListener listener) : base("com.appodeal.ads.MrecCallbacks")
        {
            this.listener = listener;
        }

        private void onMrecLoaded(bool isPrecache)
        {
            listener.onMrecLoaded(isPrecache);
        }

        private void onMrecFailedToLoad()
        {
            listener.onMrecFailedToLoad();
        }

        private void onMrecShown()
        {
            listener.onMrecShown();
        }

        private void onMrecClicked()
        {
            listener.onMrecClicked();
        }

        private void onMrecExpired()
        {
            listener.onMrecExpired();
        }
    }
#else
    {
        public AppodealMrecCallbacks(IMrecAdListener listener)
        {
        }
    }
#endif
}