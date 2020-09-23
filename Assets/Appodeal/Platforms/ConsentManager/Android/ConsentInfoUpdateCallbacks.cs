using System.Diagnostics.CodeAnalysis;
using ConsentManager.Api;
using ConsentManager.Common;

namespace ConsentManager.Platforms.Android
{
    [SuppressMessage("ReSharper", "UnusedParameter.Local")]
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    public class ConsentInfoUpdateCallbacks
#if UNITY_ANDROID
        : UnityEngine.AndroidJavaProxy
    {
        private readonly IConsentInfoUpdateListener listener;

        internal ConsentInfoUpdateCallbacks(IConsentInfoUpdateListener listener) : base(
            "com.explorestack.consent.ConsentInfoUpdateListener")
        {
            this.listener = listener;
        }

        private void onConsentInfoUpdated(UnityEngine.AndroidJavaObject joConsent)
        {
            listener.onConsentInfoUpdated(new Consent(new AndroidConsent(joConsent)));
        }

        private void onFailedToUpdateConsentInfo(UnityEngine.AndroidJavaObject error)
        {
            listener.onFailedToUpdateConsentInfo(new ConsentManagerException(new AndroidConsentManagerException(error)));
        }
    }
#else
    {
        public ConsentInfoUpdateCallbacks(IConsentInfoUpdateListener listener)
        {
        }
    }
#endif
}