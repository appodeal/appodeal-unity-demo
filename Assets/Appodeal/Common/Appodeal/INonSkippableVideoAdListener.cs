using System.Diagnostics.CodeAnalysis;

namespace AppodealAds.Unity.Common
{
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "UnusedMemberInSuper.Global")]
    [SuppressMessage("ReSharper", "UnusedMember.Global")]
    [SuppressMessage("ReSharper", "UnusedParameter.Global")]
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