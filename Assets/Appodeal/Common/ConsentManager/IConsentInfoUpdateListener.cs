using System.Diagnostics.CodeAnalysis;

namespace ConsentManager.Common
{
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "UnusedMemberInSuper.Global")]
    public interface IConsentInfoUpdateListener
    {
        void onConsentInfoUpdated(Consent consent);
        void onFailedToUpdateConsentInfo(ConsentManagerException error);
    }
}