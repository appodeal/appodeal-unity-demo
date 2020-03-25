using System.Diagnostics.CodeAnalysis;
using AppodealAds.Unity.Common;

namespace AppodealAds.Unity.Android
{
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "UnusedParameter.Local")]
    [SuppressMessage("ReSharper", "UnusedMember.Global")]
    public class AppodealMrecCallbacks
#if UNITY_ANDROID
        : UnityEngine.AndroidJavaProxy
    {
        private readonly IMrecAdListener listener;

        internal AppodealMrecCallbacks(IMrecAdListener listener) : base("com.appodeal.ads.MrecCallbacks")
        {
            this.listener = listener;
        }

        public void onMrecLoaded(bool isPrecache)
        {
            listener.onMrecLoaded(isPrecache);
        }

        public void onMrecFailedToLoad()
        {
            listener.onMrecFailedToLoad();
        }

        public void onMrecShown()
        {
            listener.onMrecShown();
        }

        public void onMrecClicked()
        {
            listener.onMrecClicked();
        }

        public void onMrecExpired()
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