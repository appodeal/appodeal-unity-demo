using System.Diagnostics.CodeAnalysis;
using AppodealAds.Unity.Common;

namespace AppodealAds.Unity.Android
{
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "UnusedParameter.Local")]
    public class AppodealNonSkippableVideoCallbacks
#if UNITY_ANDROID
        : UnityEngine.AndroidJavaProxy
    {
        private readonly INonSkippableVideoAdListener listener;

        internal AppodealNonSkippableVideoCallbacks(INonSkippableVideoAdListener listener) : base(
            "com.appodeal.ads.NonSkippableVideoCallbacks")
        {
            this.listener = listener;
        }

        public void onNonSkippableVideoLoaded(bool isPrecache)
        {
            listener.onNonSkippableVideoLoaded(isPrecache);
        }

        public void onNonSkippableVideoFailedToLoad()
        {
            listener.onNonSkippableVideoFailedToLoad();
        }

        public void onNonSkippableVideoShowFailed()
        {
            listener.onNonSkippableVideoShowFailed();
        }

        public void onNonSkippableVideoShown()
        {
            listener.onNonSkippableVideoShown();
        }

        public void onNonSkippableVideoFinished()
        {
            listener.onNonSkippableVideoFinished();
        }

        public void onNonSkippableVideoClosed(bool finished)
        {
            listener.onNonSkippableVideoClosed(finished);
        }

        public void onNonSkippableVideoExpired()
        {
            listener.onNonSkippableVideoExpired();
        }
    }
#else
    {
        public AppodealNonSkippableVideoCallbacks(INonSkippableVideoAdListener listener)
        {
        }
    }
#endif
}