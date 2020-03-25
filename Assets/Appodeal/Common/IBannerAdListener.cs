using System.Diagnostics.CodeAnalysis;

namespace AppodealAds.Unity.Common
{
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "UnusedMemberInSuper.Global")]
    public interface IBannerAdListener
    {
        void onBannerLoaded(int height, bool isPrecache);
        void onBannerFailedToLoad();
        void onBannerShown();
        void onBannerClicked();
        void onBannerExpired();
    }
}