using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using ConsentManager.Api;


namespace ConsentManager.Common
{
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "UnusedParameter.Global")]
    public interface IConsentManager
    {
        void requestConsentInfoUpdate(string appodealAppKey, IConsentInfoUpdateListener listener);
        void setCustomVendor(Vendor customVendor);
        Vendor getCustomVendor(string bundle);
        Api.ConsentManager.Storage getStorage();
        void setStorage(Api.ConsentManager.Storage iabStorage);
        Consent.ShouldShow shouldShowConsentDialog();
        Consent.Zone getConsentZone();
        Consent.Status getConsentStatus();
        Consent getConsent();
        void disableAppTrackingTransparencyRequest();
    }

    [SuppressMessage("ReSharper", "InconsistentNaming")]
    public interface IConsentForm
    {
        void load();
        void showAsActivity();
        void showAsDialog();
        bool isLoaded();
        bool isShowing();
    }

    [SuppressMessage("ReSharper", "InconsistentNaming")]
    public interface IVendor
    {
        string getName();
        string getBundle();
        string getPolicyUrl();
        List<int> getPurposeIds();
        List<int> getFeatureIds();
        List<int> getLegitimateInterestPurposeIds();
    }

    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "UnusedParameter.Global")]
    public interface IVendorBuilder
    {
        IVendor build();
        void setPurposeIds(IEnumerable<int> purposeIds);
        void setFeatureIds(IEnumerable<int> featureIds);
        void setLegitimateInterestPurposeIds(IEnumerable<int> legitimateInterestPurposeIds);
    }

    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "UnusedParameter.Global")]
    public interface IConsentFormBuilder
    {
        IConsentForm build();
        void withListener(IConsentFormListener consentFormListener);
    }

    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "UnusedParameter.Global")]
    public interface IConsent
    {
        Consent.Zone getZone();
        Consent.Status getStatus();
        Consent.AuthorizationStatus getAuthorizationStatus();
        Consent.HasConsent hasConsentForVendor(string bundle);
        string getIabConsentString();
    }

    [SuppressMessage("ReSharper", "InconsistentNaming")]
    public interface IConsentManagerException
    {
        string getReason();
        int getCode();
    }
    
}