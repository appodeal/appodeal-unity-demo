namespace AppodealAds.Unity.Common
{
    public interface INonSkippableVideoAdListener
    {
        void onNonSkippableVideoLoaded(bool isPrecache);
        void onNonSkippableVideoFailedToLoad();
        void onNonSkippableVideoShowFailed();
        void onNonSkippableVideoShown();
        void onNonSkippableVideoFinished();
        void onNonSkippableVideoClosed(bool finished);
        void onNonSkippableVideoExpired();
    }
}