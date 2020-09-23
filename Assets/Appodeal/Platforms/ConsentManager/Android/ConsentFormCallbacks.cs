using System.Diagnostics.CodeAnalysis;
using ConsentManager.Api;
using ConsentManager.Common;

namespace ConsentManager.Platforms.Android
{
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "UnusedParameter.Local")]
    public class ConsentFormCallbacks
#if UNITY_ANDROID
        : UnityEngine.AndroidJavaProxy
    {
        private readonly IConsentFormListener listener;

        internal ConsentFormCallbacks(IConsentFormListener listener) : base(
            "com.explorestack.consent.ConsentFormListener")
        {
            this.listener = listener;
        }

        private void onConsentFormLoaded()
        {
            listener.onConsentFormLoaded();
        }

        private void onConsentFormError(UnityEngine.AndroidJavaObject exception)
        {
            var consentManagerException = new ConsentManagerException(new AndroidConsentManagerException(exception));
            listener.onConsentFormError(consentManagerException);
        }

        private void onConsentFormOpened()
        {
            listener.onConsentFormOpened();
        }

        private void onConsentFormClosed(UnityEngine.AndroidJavaObject joConsent)
        {
            var consent = new Consent(new AndroidConsent(joConsent));
            listener.onConsentFormClosed(consent);
        }
    }
#else
    {
        public ConsentFormCallbacks(IConsentFormListener listener)
        {
        }
    }
#endif
}