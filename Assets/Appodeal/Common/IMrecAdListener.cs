namespace AppodealAds.Unity.Common
{
    public interface IMrecAdListener
    {
        void onMrecLoaded(bool isPrecache);
        void onMrecFailedToLoad();
        void onMrecShown();
        void onMrecClicked();
        void onMrecExpired();
    }
}