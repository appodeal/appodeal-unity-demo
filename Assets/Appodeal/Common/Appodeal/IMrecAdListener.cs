using System.Diagnostics.CodeAnalysis;

namespace AppodealAds.Unity.Common
{
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "UnusedMemberInSuper.Global")]
    [SuppressMessage("ReSharper", "UnusedMember.Global")]
    [SuppressMessage("ReSharper", "UnusedParameter.Global")]
    public interface IMrecAdListener
    {
        void onMrecLoaded(bool isPrecache);
        void onMrecFailedToLoad();
        void onMrecShown();
        void onMrecClicked();
        void onMrecExpired();
    }
}