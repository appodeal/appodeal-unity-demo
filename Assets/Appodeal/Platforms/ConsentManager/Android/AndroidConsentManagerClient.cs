using System;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using ConsentManager.Api;
using ConsentManager.Common;
using UnityEngine;

namespace ConsentManager.Platforms.Android
{
#if UNITY_ANDROID
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    public class AndroidConsentManager : IConsentManager
    {
        private AndroidJavaObject consentManagerInstance;
        private AndroidJavaObject activity;

        private AndroidJavaObject getInstance()
        {
            if (consentManagerInstance != null) return consentManagerInstance;
            var consentManagerClass = new AndroidJavaClass("com.explorestack.consent.ConsentManager");
            consentManagerInstance =
                consentManagerClass.CallStatic<AndroidJavaObject>("getInstance", getActivity());

            return consentManagerInstance;
        }

        private AndroidJavaObject getActivity()
        {
            if (activity != null) return activity;
            var playerClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
            activity = playerClass.GetStatic<AndroidJavaObject>("currentActivity");

            return activity;
        }

        public void requestConsentInfoUpdate(string appodealAppKey, IConsentInfoUpdateListener listener)
        {
            getInstance().Call("requestConsentInfoUpdate", appodealAppKey, new ConsentInfoUpdateCallbacks(listener));
        }

        public void setCustomVendor(Vendor customVendor)
        {
            var androidVendor = (AndroidVendor) customVendor.getNativeVendor();
            getInstance().Call("setCustomVendor", androidVendor.getVendor());
        }

        public Vendor getCustomVendor(string bundle)
        {
            return new Vendor(new AndroidVendor(getInstance()
                .Call<AndroidJavaObject>("getCustomVendor", Helper.getJavaObject(bundle))));
        }

        public Api.ConsentManager.Storage getStorage()
        {
            var storage = Api.ConsentManager.Storage.NONE;
            switch (getInstance().Call<AndroidJavaObject>("getStorage").Call<string>("name"))
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
            switch (iabStorage)
            {
                case Api.ConsentManager.Storage.NONE:
                    getInstance().Call("setStorage",
                        new AndroidJavaClass("com.explorestack.consent.ConsentManager$Storage")
                            .GetStatic<AndroidJavaObject>(
                                "NONE"));
                    break;
                case Api.ConsentManager.Storage.SHARED_PREFERENCE:
                    getInstance().Call("setStorage",
                        new AndroidJavaClass("com.explorestack.consent.ConsentManager$Storage")
                            .GetStatic<AndroidJavaObject>(
                                "SHARED_PREFERENCE"));
                    break;
                default:
                    throw new ArgumentOutOfRangeException(nameof(iabStorage), iabStorage, null);
            }
        }

        public Consent.ShouldShow shouldShowConsentDialog()
        {
            var shouldShow = Consent.ShouldShow.UNKNOWN;

            switch (getInstance().Call<AndroidJavaObject>("shouldShowConsentDialog").Call<string>("name"))
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
            switch (getInstance().Call<AndroidJavaObject>("getConsentZone").Call<string>("name"))
            {
                case "UNKNOWN":
                    zone = Consent.Zone.UNKNOWN;
                    break;
                case "NONE":
                    zone = Consent.Zone.NONE;
                    break;
                case "GDPR":
                    zone = Consent.Zone.GDPR;
                    break;
                case "CCPA":
                    zone = Consent.Zone.CCPA;
                    break;
            }

            return zone;
        }

        public Consent.Status getConsentStatus()
        {
            var status = Consent.Status.UNKNOWN;
            switch (getInstance().Call<AndroidJavaObject>("getConsentStatus").Call<string>("name"))
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
            return new Consent(new AndroidConsent(getInstance().Call<AndroidJavaObject>("getConsent")));
        }

        public void disableAppTrackingTransparencyRequest()
        {
            Debug.Log("Not supported on Android platform");
        }
    }

    [SuppressMessage("ReSharper", "InconsistentNaming")]
    public class AndroidVendorBuilder : IVendorBuilder
    {
        private readonly AndroidJavaObject builder;
        private AndroidJavaObject vendor;

        public AndroidVendorBuilder(string name, string bundle, string policyUrl)
        {
            builder = new AndroidJavaObject("com.explorestack.consent.Vendor$Builder", name, bundle,
                policyUrl);
        }

        private AndroidJavaObject getBuilder()
        {
            return builder;
        }

        public IVendor build()
        {
            vendor = new AndroidJavaObject("com.explorestack.consent.Vendor");
            vendor = getBuilder().Call<AndroidJavaObject>("build");
            return new AndroidVendor(vendor);
        }

        public void setPurposeIds(IEnumerable<int> purposeIds)
        {
            setNativeList(purposeIds, "setPurposeIds");
        }

        public void setFeatureIds(IEnumerable<int> featureIds)
        {
            setNativeList(featureIds, "setFeatureIds");
        }

        public void setLegitimateInterestPurposeIds(IEnumerable<int> legitimateInterestPurposeIds)
        {
            setNativeList(legitimateInterestPurposeIds, "setLegitimateInterestPurposeIds");
        }

        private void setNativeList(IEnumerable<int> list, string methodName)
        {
            var androidJavaObject = new AndroidJavaObject("java.util.ArrayList");
            foreach (var obj in list)
            {
                androidJavaObject.Call<bool>("add", Helper.getJavaObject(obj));
            }

            getBuilder().Call<AndroidJavaObject>(methodName, androidJavaObject);
        }
    }

    [SuppressMessage("ReSharper", "InconsistentNaming")]
    public class AndroidVendor : IVendor
    {
        private readonly AndroidJavaObject vendor;

        public AndroidVendor(AndroidJavaObject vendor)
        {
            this.vendor = vendor;
        }

        public AndroidJavaObject getVendor()
        {
            return vendor;
        }

        public string getName()
        {
            return vendor.Call<string>("getName");
        }

        public string getBundle()
        {
            return vendor.Call<string>("getBundle");
        }

        public string getPolicyUrl()
        {
            return vendor.Call<string>("getPolicyUrl");
        }

        public List<int> getPurposeIds()
        {
            return getNativeList("getPurposeIds", getVendor());
        }

        public List<int> getFeatureIds()
        {
            return getNativeList("getFeatureIds", getVendor());
        }

        public List<int> getLegitimateInterestPurposeIds()
        {
            return getNativeList("getLegitimateInterestPurposeIds", getVendor());
        }

        private static List<int> getNativeList(string methodName, AndroidJavaObject androidJavaObject)
        {
            var purposeIdsList = new List<int>();
            AndroidJNI.PushLocalFrame(100);
            using (var joPurposeIdsList = androidJavaObject.Call<AndroidJavaObject>(methodName))
            {
                for (var i = 0; i < joPurposeIdsList.Call<int>("size"); i++)
                {
                    using (var PurposeId = joPurposeIdsList.Call<AndroidJavaObject>("get", i))
                    {
                        purposeIdsList.Add(PurposeId.Call<int>("intValue"));
                    }
                }
            }

            AndroidJNI.PopLocalFrame(IntPtr.Zero);
            return purposeIdsList;
        }
    }

    [SuppressMessage("ReSharper", "InconsistentNaming")]
    public class AndroidConsentForm : IConsentForm
    {
        private readonly AndroidJavaObject consentForm;

        public AndroidConsentForm(AndroidJavaObject builder)
        {
            consentForm = builder;
        }

        private AndroidJavaObject getConsentForm()
        {
            return consentForm;
        }

        public void load()
        {
            getConsentForm().Call("load");
        }

        public void showAsActivity()
        {
            getConsentForm().Call("showAsActivity");
        }

        public void showAsDialog()
        {
            getConsentForm().Call("showAsDialog");
        }

        public bool isLoaded()
        {
            return getConsentForm().Call<bool>("isLoaded");
        }

        public bool isShowing()
        {
            return getConsentForm().Call<bool>("isShowing");
        }
    }

    [SuppressMessage("ReSharper", "InconsistentNaming")]
    public class AndroidConsentFormBuilder : IConsentFormBuilder
    {
        private readonly AndroidJavaObject nativeConsentBuilder;
        private AndroidJavaObject activity;
        private AndroidJavaObject consent;

        public AndroidConsentFormBuilder()
        {
            nativeConsentBuilder = new AndroidJavaObject("com.explorestack.consent.ConsentForm$Builder", getActivity());
        }

        private AndroidJavaObject getActivity()
        {
            if (activity != null) return activity;
            var playerClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
            activity = playerClass.GetStatic<AndroidJavaObject>("currentActivity");

            return activity;
        }

        private AndroidJavaObject getConsentBuilder()
        {
            return nativeConsentBuilder;
        }

        public IConsentForm build()
        {
            consent = getConsentBuilder().Call<AndroidJavaObject>("build");
            return new AndroidConsentForm(consent);
        }

        public void withListener(IConsentFormListener consentFormListener)
        {
            getConsentBuilder().Call<AndroidJavaObject>("withListener", new ConsentFormCallbacks(consentFormListener));
        }
    }

    [SuppressMessage("ReSharper", "InconsistentNaming")]
    public class AndroidConsentManagerException : IConsentManagerException
    {
        private readonly AndroidJavaObject consentManagerException;

        public AndroidConsentManagerException(AndroidJavaObject androidJavaObject)
        {
            consentManagerException = androidJavaObject;
        }

        public AndroidConsentManagerException()
        {
            consentManagerException =
                new AndroidJavaObject("com.explorestack.consent.exception.ConsentManagerException");
        }

        private AndroidJavaObject getConsentManagerException()
        {
            return consentManagerException;
        }

        public string getReason()
        {
            return getConsentManagerException().Call<string>("getReason");
        }

        public int getCode()
        {
            return getConsentManagerException().Call<int>("getCode");
        }
    }

    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "MemberCanBePrivate.Global")]
    [SuppressMessage("ReSharper", "UnusedMember.Local")]
    public class AndroidConsent : IConsent
    {
        private readonly AndroidJavaObject consent;

        public AndroidConsent(AndroidJavaObject joConsent)
        {
            consent = new AndroidJavaObject("com.explorestack.consent.Consent");
            consent = joConsent;
        }

        private AndroidConsent()
        {
            consent = new AndroidJavaObject("com.explorestack.consent.Consent");
        }

        public AndroidJavaObject getConsent()
        {
            return consent;
        }

        public Consent.Zone getZone()
        {
            var zone = Consent.Zone.UNKNOWN;

            switch (getConsent().Call<AndroidJavaObject>("getZone").Call<string>("name"))
            {
                case "UNKNOWN":
                    zone = Consent.Zone.UNKNOWN;
                    break;
                case "NONE":
                    zone = Consent.Zone.NONE;
                    break;
                case "GDPR":
                    zone = Consent.Zone.GDPR;
                    break;
                case "CCPA":
                    zone = Consent.Zone.CCPA;
                    break;
            }

            return zone;
        }

        public Consent.Status getStatus()
        {
            var status = Consent.Status.UNKNOWN;

            switch (getConsent().Call<AndroidJavaObject>("getStatus").Call<string>("name"))
            {
                case "UNKNOWN":
                    status = Consent.Status.UNKNOWN;
                    break;
                case "NON_PERSONALIZED":
                    status = Consent.Status.NON_PERSONALIZED;
                    break;
                case "PARTLY_PERSONALIZED":
                    status = Consent.Status.PARTLY_PERSONALIZED;
                    break;
                case "PERSONALIZED":
                    status = Consent.Status.PERSONALIZED;
                    break;
            }

            return status;
        }

        public Consent.AuthorizationStatus getAuthorizationStatus()
        {
            Debug.Log("Not supported on this platform");
            return Consent.AuthorizationStatus.NOT_DETERMINED;
        }

        public Consent.HasConsent hasConsentForVendor(string bundle)
        {
            var hasConsent = Consent.HasConsent.UNKNOWN;
            switch (getConsent().Call<AndroidJavaObject>("hasConsentForVendor", Helper.getJavaObject(bundle))
                .Call<string>("name"))
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

        public List<Vendor> getAcceptedVendors()
        {
            var vendors = new List<Vendor>();
            AndroidJNI.PushLocalFrame(100);
            using (var joPurposeIdsList = getConsent().Call<AndroidJavaObject>("getAcceptedVendors"))
            {
                for (var i = 0; i < joPurposeIdsList.Call<int>("size"); i++)
                {
                    using (var vendor = joPurposeIdsList.Call<AndroidJavaObject>("get", i))
                    {
                        vendors.Add(new Vendor(new AndroidVendor(vendor)));
                    }
                }
            }

            AndroidJNI.PopLocalFrame(IntPtr.Zero);
            return vendors;
        }

        public string getIabConsentString()
        {
            return getConsent().Call<string>("getIabConsentString");
        }
    }

    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "ConstantNullCoalescingCondition")]
    public static class Helper
    {
        public static object getJavaObject(object value)
        {
            if (value is string)
            {
                return value;
            }

            if (value is char)
            {
                return new AndroidJavaObject("java.lang.Character", value);
            }

            if ((value is bool))
            {
                return new AndroidJavaObject("java.lang.Boolean", value);
            }

            if (value is int)
            {
                return new AndroidJavaObject("java.lang.Integer", value);
            }

            if (value is long)
            {
                return new AndroidJavaObject("java.lang.Long", value);
            }

            if (value is float)
            {
                return new AndroidJavaObject("java.lang.Float", value);
            }

            if (value is double)
            {
                return new AndroidJavaObject("java.lang.Float", value);
            }

            return value ?? null;
        }
    }
#endif
}