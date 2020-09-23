using System.Diagnostics.CodeAnalysis;

namespace AppodealAds.Unity.Common
{
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "UnusedMemberInSuper.Global")]
    [SuppressMessage("ReSharper", "UnusedMember.Global")]
    [SuppressMessage("ReSharper", "UnusedParameter.Global")]
    public interface IRewardedVideoAdListener
    {
        void onRewardedVideoLoaded(bool precache);
        void onRewardedVideoFailedToLoad();
        void onRewardedVideoShowFailed();
        void onRewardedVideoShown();
        void onRewardedVideoFinished(double amount, string name);
        void onRewardedVideoClosed(bool finished);
        void onRewardedVideoExpired();
        void onRewardedVideoClicked();
    }
}