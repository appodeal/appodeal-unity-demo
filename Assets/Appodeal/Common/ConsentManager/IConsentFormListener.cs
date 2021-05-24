using System.Diagnostics.CodeAnalysis;

namespace ConsentManager.Common
{
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "UnusedMemberInSuper.Global")]
    public interface IConsentFormListener
    {
         void onConsentFormLoaded();
         void onConsentFormError(ConsentManagerException consentManagerException);
         void onConsentFormOpened();
         void onConsentFormClosed(Consent consent);
    }
}