namespace AppodealAds.Unity.Common
{
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