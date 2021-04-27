using System;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using System.Linq;
using AOT;
using ConsentManager.Api;
using ConsentManager.Common;
using UnityEngine;

namespace ConsentManager.Platforms.iOS
{
#if UNITY_IPHONE
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "CollectionNeverUpdated.Local")]
    [SuppressMessage("ReSharper", "UnusedType.Global")]
    [SuppressMessage("ReSharper", "UnusedMember.Global")]
    public class iOSConsentManager : IConsentManager
    {
        private readonly ConsentManagerObjCBridge consentManagerObjCBridge;
        private static IConsentInfoUpdateListener consentInfoUpdateListener;

        public iOSConsentManager()
        {
            consentManagerObjCBridge = new ConsentManagerObjCBridge();
        }

        public iOSConsentManager(IntPtr intPtr)
        {
            consentManagerObjCBridge = new ConsentManagerObjCBridge(intPtr);
        }

        public void requestConsentInfoUpdate(string appodealAppKey, IConsentInfoUpdateListener listener)
        {
            consentInfoUpdateListener = listener;
            ConsentManagerObjCBridge.requestConsentInfoUpdate(appodealAppKey, onConsentInfoUpdated,
                onFailedToUpdateConsentInfo);
        }
        
        public void disableAppTrackingTransparencyRequest()
        {
            ConsentManagerObjCBridge.disableAppTrackingTransparencyRequest();
        }

        public void setCustomVendor(Vendor customVendor)
        {
            var vendor = (iOSVendor) customVendor.getNativeVendor();
            consentManagerObjCBridge.setCustomVendor(vendor.getIntPtr());
        }

        public Vendor getCustomVendor(string bundle)
        {
            return new Vendor(new iOSVendor(consentManagerObjCBridge.getCustomVendor(bundle)));
        }

        public Api.ConsentManager.Storage getStorage()
        {
            var storage = Api.ConsentManager.Storage.NONE;
            switch (consentManagerObjCBridge.getStorage())
            {
                case "NONE":
                    storage = Api.ConsentManager.Storage.NONE;
                    break;
                case "SHARED_PREFERENCE":
                    storage = Api.ConsentManager.Storage.SHARED_PREFERENCE;
                    break;
            }

            return storage;
        }

        public void setStorage(Api.ConsentManager.Storage iabStorage)
        {
            consentManagerObjCBridge.setStorage(iabStorage.ToString());
        }

        public string getIabConsentString()
        {
            return consentManagerObjCBridge.getIabConsentString();
        }

        public Consent.ShouldShow shouldShowConsentDialog()
        {
            var shouldShow = Consent.ShouldShow.UNKNOWN;

            switch (consentManagerObjCBridge.shouldShowConsentDialog())
            {
                case "UNKNOWN":
                    shouldShow = Consent.ShouldShow.UNKNOWN;
                    break;
                case "TRUE":
                    shouldShow = Consent.ShouldShow.TRUE;
                    break;
                case "FALSE":
                    shouldShow = Consent.ShouldShow.FALSE;
                    break;
            }

            return shouldShow;
        }

        public Consent.Zone getConsentZone()
        {
            var zone = Consent.Zone.UNKNOWN;

            switch (consentManagerObjCBridge.getConsentZone())
            {
                case "UNKNOWN":
                    zone = Consent.Zone.UNKNOWN;
                    break;
                case "CCPA":
                    zone = Consent.Zone.CCPA;
                    break;
                case "GDPR":
                    zone = Consent.Zone.GDPR;
                    break;
                case "NONE":
                    zone = Consent.Zone.NONE;
                    break;
            }

            return zone;
        }

        public Consent.Status getConsentStatus()
        {
            var status = Consent.Status.UNKNOWN;

            switch (consentManagerObjCBridge.getConsentStatus())
            {
                case "UNKNOWN":
                    status = Consent.Status.UNKNOWN;
                    break;
                case "PERSONALIZED":
                    status = Consent.Status.PERSONALIZED;
                    break;
                case "NON_PERSONALIZED":
                    status = Consent.Status.NON_PERSONALIZED;
                    break;
                case "PARTLY_PERSONALIZED":
                    status = Consent.Status.PARTLY_PERSONALIZED;
                    break;
            }

            return status;
        }

        public Consent getConsent()
        {
            return new Consent(new iOSConsent(consentManagerObjCBridge.getConsent()));
        }

        #region ConsentInfoUpdate delegate

        [MonoPInvokeCallback(typeof(ConsentInfoUpdatedCallback))]
        private static void onConsentInfoUpdated(IntPtr consent)
        {
            Debug.Log("onConsentInfoUpdated");

            consentInfoUpdateListener?.onConsentInfoUpdated(new Consent(new iOSConsent(consent)));
        }

        [MonoPInvokeCallback(typeof(ConsentInfoUpdatedFailedCallback))]
        private static void onFailedToUpdateConsentInfo(IntPtr error)
        {
            consentInfoUpdateListener?.onFailedToUpdateConsentInfo(
                new ConsentManagerException(new iOSConsentManagerException(error)));
        }

        #endregion
    }

    [SuppressMessage("ReSharper", "InconsistentNaming")]
    public class iOSVendor : IVendor
    {
        private readonly VendorObjBridge vendorObjBridge;

        public iOSVendor(IntPtr vendor)
        {
            vendorObjBridge = new VendorObjBridge(vendor);
        }

        public IntPtr getIntPtr()
        {
            return vendorObjBridge.getVendor();
        }

        public string getName()
        {
            return VendorObjBridge.getName();
        }

        public string getBundle()
        {
            return VendorObjBridge.getBundle();
        }

        public string getPolicyUrl()
        {
            return VendorObjBridge.getPolicyUrl();
        }

        public List<int> getPurposeIds()
        {
            return VendorObjBridge.getPurposeIds();
        }

        public List<int> getFeatureIds()
        {
            return VendorObjBridge.getFeatureIds();
        }

        public List<int> getLegitimateInterestPurposeIds()
        {
            return VendorObjBridge.getLegitimateInterestPurposeIds();
        }
    }

    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "UnusedType.Global")]
    public class iOSVendorBuilder : IVendorBuilder
    {
        private readonly VendorBuilderObjCBridge vendorBuilderObjCBridge;

        public iOSVendorBuilder(string name, string bundle, string url)
        {
            vendorBuilderObjCBridge = new VendorBuilderObjCBridge(name, bundle, url);
        }

        private IntPtr GetIntPtr()
        {
            return vendorBuilderObjCBridge.getNativeObject();
        }

        public IVendor build()
        {
            return new iOSVendor(GetIntPtr());
        }

        public void setPurposeIds(IEnumerable<int> purposeIds)
        {
            VendorBuilderObjCBridge.setPurposeIds(Helper.getEnumerable(purposeIds));
        }

        public void setFeatureIds(IEnumerable<int> featureIds)
        {
            VendorBuilderObjCBridge.setFeatureIds(Helper.getEnumerable(featureIds));
        }

        public void setLegitimateInterestPurposeIds(IEnumerable<int> legitimateInterestPurposeIds)
        {
            VendorBuilderObjCBridge.setLegitimateInterestPurposeIds(Helper.getEnumerable(legitimateInterestPurposeIds));
        }
    }

    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "ObjectCreationAsStatement")]
    public class iOSConsentForm : IConsentForm
    {
        public iOSConsentForm(IntPtr intPtr)
        {
            new ConsentFormObjCBridge(intPtr);
        }

        public void load()
        {
            ConsentFormObjCBridge.load();
        }

        public void showAsActivity()
        {
            ConsentFormObjCBridge.showAsActivity();
        }

        public void showAsDialog()
        {
            ConsentFormObjCBridge.showAsDialog();
        }

        public bool isLoaded()
        {
            return ConsentFormObjCBridge.isLoaded();
        }

        public bool isShowing()
        {
            return ConsentFormObjCBridge.isShowing();
        }
    }

    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "UnassignedField.Global")]
    [SuppressMessage("ReSharper", "MemberCanBePrivate.Global")]
    [SuppressMessage("ReSharper", "UnusedType.Global")]
    public class iOSConsentFormBuilder : IConsentFormBuilder
    {
        private readonly ConsentFormBuilderObjCBridge consentFormBuilderObjCBridge;
        public static IConsentFormListener consentFormListeners;

        public iOSConsentFormBuilder()
        {
            consentFormBuilderObjCBridge = new ConsentFormBuilderObjCBridge();
        }

        public iOSConsentFormBuilder(IntPtr intPtr)
        {
            consentFormBuilderObjCBridge = new ConsentFormBuilderObjCBridge(intPtr);
        }

        private IntPtr GetIntPtr()
        {
            return consentFormBuilderObjCBridge.getConsentFormBuilder();
        }

        public IConsentForm build()
        {
            return new iOSConsentForm(GetIntPtr());
        }

        public void withListener(IConsentFormListener listener)
        {
            consentFormListeners = listener;
            ConsentFormBuilderObjCBridge.withListener(onConsentFormLoaded, onConsentFormError, onConsentFormOpened,
                onConsentFormClosed);
        }

        #region ConsentForm Callbacks

        [MonoPInvokeCallback(typeof(ConsentFormCallback))]
        private static void onConsentFormLoaded()
        {
            consentFormListeners?.onConsentFormLoaded();
        }

        [MonoPInvokeCallback(typeof(ConsentFormCallbackError))]
        private static void onConsentFormError(IntPtr exception)
        {
            consentFormListeners?.onConsentFormError(
                new ConsentManagerException(new iOSConsentManagerException(exception)));
        }

        [MonoPInvokeCallback(typeof(ConsentFormCallback))]
        private static void onConsentFormOpened()
        {
            consentFormListeners?.onConsentFormOpened();
        }

        [MonoPInvokeCallback(typeof(ConsentFormCallbackClosed))]
        private static void onConsentFormClosed(IntPtr consent)
        {
            consentFormListeners?.onConsentFormClosed(new Consent(new iOSConsent(consent)));
        }

        #endregion
    }

    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "UnusedMember.Global")]
    public class iOSConsentManagerException : IConsentManagerException
    {
        private readonly ConsentManagerExceptionObjCBridge consentManagerExceptionObjCBridge;

        public iOSConsentManagerException()
        {
            consentManagerExceptionObjCBridge = new ConsentManagerExceptionObjCBridge();
        }

        public iOSConsentManagerException(IntPtr intPtr)
        {
            consentManagerExceptionObjCBridge = new ConsentManagerExceptionObjCBridge(intPtr);
        }

        public string getReason()
        {
            return consentManagerExceptionObjCBridge.getReason();
        }

        public int getCode()
        {
            return ConsentManagerExceptionObjCBridge.getCode();
        }
    }

    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "UnusedMember.Global")]
    public class iOSConsent : IConsent
    {
        private readonly ConsentObjBridge consentObjBridge;

        public iOSConsent(IntPtr intPtr)
        {
            consentObjBridge = new ConsentObjBridge(intPtr);
        }

        public IntPtr GetIntPtr()
        {
            return consentObjBridge.getConsent();
        }

        public Consent.Zone getZone()
        {
            var zone = Consent.Zone.UNKNOWN;

            switch (ConsentObjBridge.getZone())
            {
                case "UNKNOWN":
                    zone = Consent.Zone.UNKNOWN;
                    break;
                case "NONE":
                    zone = Consent.Zone.NONE;
                    break;
                case "CCPA":
                    zone = Consent.Zone.CCPA;
                    break;
                case "GDPR":
                    zone = Consent.Zone.GDPR;
                    break;
            }

            return zone;
        }

        public Consent.Status getStatus()
        {
            var status = Consent.Status.UNKNOWN;
            switch (ConsentObjBridge.getStatus())
            {
                case "UNKNOWN":
                    status = Consent.Status.UNKNOWN;
                    break;
                case "PERSONALIZED":
                    status = Consent.Status.PERSONALIZED;
                    break;
                case "NON_PERSONALIZED":
                    status = Consent.Status.NON_PERSONALIZED;
                    break;
                case "PARTLY_PERSONALIZED":
                    status = Consent.Status.PARTLY_PERSONALIZED;
                    break;
            }

            return status;
        }

        public Consent.AuthorizationStatus getAuthorizationStatus()
        {
            var authorizationStatus = Consent.AuthorizationStatus.NOT_DETERMINED;
            switch (ConsentObjBridge.getAuthorizationStatus())
            {
                case "NOT_DETERMINED":
                    authorizationStatus = Consent.AuthorizationStatus.NOT_DETERMINED;
                    break;
                case "DENIED":
                    authorizationStatus = Consent.AuthorizationStatus.DENIED;
                    break;
                case "RESTRICTED":
                    authorizationStatus = Consent.AuthorizationStatus.RESTRICTED;
                    break;
                case "AUTHORIZED":
                    authorizationStatus = Consent.AuthorizationStatus.AUTHORIZED;
                    break;
            }

            return authorizationStatus;
        }

        public Consent.HasConsent hasConsentForVendor(string bundle)
        {
            var hasConsent = Consent.HasConsent.UNKNOWN;

            switch (ConsentObjBridge.getStatus())
            {
                case "UNKNOWN":
                    hasConsent = Consent.HasConsent.UNKNOWN;
                    break;
                case "TRUE":
                    hasConsent = Consent.HasConsent.TRUE;
                    break;
                case "FALSE":
                    hasConsent = Consent.HasConsent.FALSE;
                    break;
            }

            return hasConsent;
        }

        public string getIabConsentString()
        {
            return ConsentObjBridge.getIabConsentString();
        }
    }

    [SuppressMessage("ReSharper", "InconsistentNaming")]
    public static class Helper
    {
        public static IEnumerable<int> getEnumerable(IEnumerable<int> enumerable)
        {
            return enumerable as int[] ?? enumerable.ToArray();
        }
    }

#endif
}