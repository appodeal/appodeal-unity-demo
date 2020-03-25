using System.Diagnostics.CodeAnalysis;
using AppodealAds.Unity.Common;


namespace AppodealAds.Unity.Android
{
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "UnusedMember.Global")]
    [SuppressMessage("ReSharper", "UnusedParameter.Local")]
    public class AppodealRewardedVideoCallbacks
#if UNITY_ANDROID
        : UnityEngine.AndroidJavaProxy
    {
        private readonly IRewardedVideoAdListener listener;

        internal AppodealRewardedVideoCallbacks(IRewardedVideoAdListener listener) : base(
            "com.appodeal.ads.RewardedVideoCallbacks")
        {
            this.listener = listener;
        }

       public void onRewardedVideoLoaded(bool precache)
        {
            listener.onRewardedVideoLoaded(precache);
        }

       public void onRewardedVideoFailedToLoad()
        {
            listener.onRewardedVideoFailedToLoad();
        }

       public void onRewardedVideoShowFailed()
        {
            listener.onRewardedVideoShowFailed();
        }

       public void onRewardedVideoShown()
        {
            listener.onRewardedVideoShown();
        }

       public void onRewardedVideoFinished(double amount, UnityEngine.AndroidJavaObject name)
        {
            listener.onRewardedVideoFinished(amount, null);
        }

       public void onRewardedVideoFinished(double amount, string name)
        {
            listener.onRewardedVideoFinished(amount, name);
        }

       public void onRewardedVideoClosed(bool finished)
        {
            listener.onRewardedVideoClosed(finished);
        }

       public void onRewardedVideoExpired()
        {
            listener.onRewardedVideoExpired();
        }

       public void onRewardedVideoClicked()
        {
            listener.onRewardedVideoClicked();
        }
    }
#else
    {
        public AppodealRewardedVideoCallbacks(IRewardedVideoAdListener listener)
        {
        }
    }
#endif
}