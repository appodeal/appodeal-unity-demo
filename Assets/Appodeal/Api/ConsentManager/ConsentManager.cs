using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using ConsentManager.Common;
using ConsentManager.Platforms;

namespace ConsentManager.Api
{
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "UnusedMember.Global")]
    public class ConsentManager
    {
        private readonly IConsentManager nativeConsentManager;

        private IConsentManager GetNativeConsentManager()
        {
            return nativeConsentManager;
        }

        private ConsentManager()
        {
            nativeConsentManager = ConsentManagerClientFactory.GetConsentManager();
        }

        public static ConsentManager getInstance()
        {
            return new ConsentManager();
        }

        public enum Storage
        {
            NONE,
            SHARED_PREFERENCE
        }

        public void requestConsentInfoUpdate(string appodealAppKey, IConsentInfoUpdateListener listener)
        {
            GetNativeConsentManager().requestConsentInfoUpdate(appodealAppKey, listener);
        }

        public void disableAppTrackingTransparencyRequest()
        {
            GetNativeConsentManager().disableAppTrackingTransparencyRequest();
        }

        public void setCustomVendor(Vendor customVendor)
        {
            nativeConsentManager.setCustomVendor(customVendor);
        }

        public Vendor getCustomVendor(string bundle)
        {
            return nativeConsentManager.getCustomVendor(bundle);
        }

        public Storage getStorage()
        {
            return nativeConsentManager.getStorage();
        }

        public Consent.ShouldShow shouldShowConsentDialog()
        {
            return nativeConsentManager.shouldShowConsentDialog();
        }

        public void setStorage(Storage iabStorage)
        {
            nativeConsentManager.setStorage(iabStorage);
        }

        public Consent.Zone getConsentZone()
        {
            return nativeConsentManager.getConsentZone();
        }

        public Consent.Status getConsentStatus()
        {
            return nativeConsentManager.getConsentStatus();
        }

        public Consent getConsent()
        {
            return nativeConsentManager.getConsent();
        }
    }

    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "UnusedMember.Global")]
    public class ConsentForm
    {
        private readonly IConsentForm nativeConsentForm;

        private ConsentForm(IConsentForm builder)
        {
            nativeConsentForm = builder;
        }

        public IConsentForm GetNativeConsent()
        {
            return nativeConsentForm;
        }

        public void load()
        {
            nativeConsentForm.load();
        }

        public void showAsActivity()
        {
            nativeConsentForm.showAsActivity();
        }

        public void showAsDialog()
        {
            nativeConsentForm.showAsDialog();
        }

        public bool isLoaded()
        {
            return nativeConsentForm.isLoaded();
        }

        public bool isShowing()
        {
            return nativeConsentForm.isShowing();
        }

        public class Builder
        {
            private readonly IConsentFormBuilder nativeConsentFormBuilder;

            public Builder()
            {
                nativeConsentFormBuilder = ConsentManagerClientFactory.GetConsentFormBuilder();
            }

            public ConsentForm build()
            {
                return new ConsentForm(nativeConsentFormBuilder.build());
            }

            public Builder withListener(IConsentFormListener consentFormListener)
            {
                nativeConsentFormBuilder.withListener(consentFormListener);
                return this;
            }
        }
    }

    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "MemberCanBePrivate.Global")]
    [SuppressMessage("ReSharper", "UnusedMember.Global")]
    public class Vendor : IVendor
    {
        private readonly IVendor nativeVendor;

        public Vendor(IVendor builder)
        {
            nativeVendor = builder;
        }

        public IVendor getNativeVendor()
        {
            return nativeVendor;
        }

        public class Builder
        {
            private readonly IVendorBuilder nativeVendorBuilder;

            public Builder(string customVen, string customVendor, string httpsCustomVendorCom)
            {
                nativeVendorBuilder =
                    ConsentManagerClientFactory.GetVendorBuilder(customVen, customVendor, httpsCustomVendorCom);
            }

            public Vendor build()
            {
                return new Vendor(nativeVendorBuilder.build());
            }

            public Builder setPurposeIds(IEnumerable<int> purposeIds)
            {
                nativeVendorBuilder.setPurposeIds(purposeIds);
                return this;
            }

            public Builder setFeatureId(IEnumerable<int> featureIds)
            {
                nativeVendorBuilder.setFeatureIds(featureIds);
                return this;
            }

            public Builder setLegitimateInterestPurposeIds(IEnumerable<int> legitimateInterestPurposeIds)
            {
                nativeVendorBuilder.setLegitimateInterestPurposeIds(legitimateInterestPurposeIds);
                return this;
            }
        }

        public string getName()
        {
            return nativeVendor.getName();
        }

        public string getBundle()
        {
            return nativeVendor.getBundle();
        }

        public string getPolicyUrl()
        {
            return nativeVendor.getPolicyUrl();
        }

        public List<int> getPurposeIds()
        {
            return nativeVendor.getPurposeIds();
        }

        public List<int> getFeatureIds()
        {
            return nativeVendor.getFeatureIds();
        }

        public List<int> getLegitimateInterestPurposeIds()
        {
            return nativeVendor.getLegitimateInterestPurposeIds();
        }
    }

    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "ClassNeverInstantiated.Global")]
    [SuppressMessage("ReSharper", "UnusedMember.Global")]
    public class Consent : IConsent
    {
        private readonly IConsent consent;

        public Consent(IConsent consent)
        {
            this.consent = consent;
        }

        public IConsent getConsent()
        {
            return consent;
        }

        public enum Status
        {
            UNKNOWN,
            NON_PERSONALIZED,
            PARTLY_PERSONALIZED,
            PERSONALIZED
        }

        public enum Zone
        {
            UNKNOWN,
            NONE,
            GDPR,
            CCPA
        }

        public enum HasConsent
        {
            UNKNOWN,
            TRUE,
            FALSE
        }

        public enum ShouldShow
        {
            UNKNOWN,
            TRUE,
            FALSE
        }

        public enum AuthorizationStatus
        {
            NOT_DETERMINED,
            RESTRICTED,
            DENIED,
            AUTHORIZED
        }

        public Zone getZone()
        {
            return consent.getZone();
        }

        public Status getStatus()
        {
            return consent.getStatus();
        }

        public AuthorizationStatus getAuthorizationStatus()
        {
            return consent.getAuthorizationStatus();
        }

        public HasConsent hasConsentForVendor(string bundle)
        {
            return consent.hasConsentForVendor(bundle);
        }

        public string getIabConsentString()
        {
            return consent.getIabConsentString();
        }
    }

    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "ClassNeverInstantiated.Global")]
    [SuppressMessage("ReSharper", "UnusedMember.Global")]
    public class ConsentManagerException : IConsentManagerException
    {
        private readonly IConsentManagerException consentManagerException;

        public ConsentManagerException()
        {
            consentManagerException = ConsentManagerClientFactory.GetConsentManagerException();
        }

        public ConsentManagerException(IConsentManagerException androidConsentManagerException)
        {
            consentManagerException = androidConsentManagerException;
        }

        public string getReason()
        {
            return consentManagerException.getReason();
        }

        public int getCode()
        {
            return consentManagerException.getCode();
        }
    }
}