using System.Diagnostics.CodeAnalysis;

namespace AppodealAds.Unity.Common
{
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "UnusedMemberInSuper.Global")]
    [SuppressMessage("ReSharper", "UnusedMember.Global")]
    [SuppressMessage("ReSharper", "UnusedParameter.Global")]
    public interface IInterstitialAdListener
    {
        void onInterstitialLoaded(bool isPrecache);
        void onInterstitialFailedToLoad();
        void onInterstitialShowFailed();
        void onInterstitialShown();
        void onInterstitialClosed();
        void onInterstitialClicked();
        void onInterstitialExpired();
    }
}