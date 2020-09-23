using System.Diagnostics.CodeAnalysis;
using ConsentManager.Api;

namespace ConsentManager.Common
{
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    public interface IConsentInfoUpdateListener
    {
        void onConsentInfoUpdated(Consent consent);
        void onFailedToUpdateConsentInfo(ConsentManagerException error);
    }
}