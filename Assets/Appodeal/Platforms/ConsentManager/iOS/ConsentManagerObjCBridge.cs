using System;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using System.Linq;
using System.Runtime.InteropServices;

namespace ConsentManager.Platforms.iOS
{
#if UNITY_IPHONE
    internal delegate void ConsentInfoUpdatedCallback(IntPtr consent);
    internal delegate void ConsentInfoUpdatedFailedCallback(IntPtr error);

    internal delegate void ConsentFormCallback();

    internal delegate void ConsentFormCallbackError(IntPtr error);

    internal delegate void ConsentFormCallbackClosed(IntPtr consent);

    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "MemberCanBeMadeStatic.Global")]
    internal class ConsentManagerObjCBridge
    {
        private readonly IntPtr consentManager;

        public ConsentManagerObjCBridge()
        {
            consentManager = GetConsentManager();
        }

        public ConsentManagerObjCBridge(IntPtr intPtr)
        {
            consentManager = intPtr;
        }

        public IntPtr getConsentManager()
        {
            return consentManager;
        }

        public static void requestConsentInfoUpdate(string appodealAppKey,
            ConsentInfoUpdatedCallback onConsentInfoUpdated,
            ConsentInfoUpdatedFailedCallback onFailedToUpdateConsentInfo)
        {
            RequestConsentInfoUpdate(appodealAppKey, onConsentInfoUpdated, onFailedToUpdateConsentInfo);
        }

        public static void disableAppTrackingTransparencyRequest()
        {
            DisableAppTrackingTransparencyRequest();
        }

        public void setCustomVendor(IntPtr customVendor)
        {
            SetCustomVendor(customVendor);
        }

        public IntPtr getCustomVendor(string bundle)
        {
            return GetCustomVendor(bundle);
        }

        public string getStorage()
        {
            return GetStorage();
        }

        public void setStorage(string storage)
        {
            SetStorage(storage);
        }

        public string getIabConsentString()
        {
            return GetIabConsentString();
        }

        public string shouldShowConsentDialog()
        {
            return ShouldShowConsentDialog();
        }

        public string getConsentZone()
        {
            return GetConsentZone();
        }

        public string getConsentStatus()
        {
            return GetConsentStatus();
        }

        public IntPtr getConsent()
        {
            return GetConsent();
        }

        [DllImport("__Internal")]
        private static extern void RequestConsentInfoUpdate(string appodealAppKey,
            ConsentInfoUpdatedCallback onConsentInfoUpdated,
            ConsentInfoUpdatedFailedCallback onFailedToUpdateConsentInfo);
        
        [DllImport("__Internal")]
        private static extern void DisableAppTrackingTransparencyRequest();

        [DllImport("__Internal")]
        private static extern IntPtr GetConsentManager();

        [DllImport("__Internal")]
        private static extern void SetCustomVendor(IntPtr customVendor);

        [DllImport("__Internal")]
        private static extern IntPtr GetCustomVendor(string bundle);

        [DllImport("__Internal")]
        private static extern string GetStorage();

        [DllImport("__Internal")]
        private static extern void SetStorage(string storage);

        [DllImport("__Internal")]
        private static extern string GetIabConsentString();

        [DllImport("__Internal")]
        private static extern string ShouldShowConsentDialog();

        [DllImport("__Internal")]
        private static extern string GetConsentZone();

        [DllImport("__Internal")]
        private static extern string GetConsentStatus();

        [DllImport("__Internal")]
        private static extern IntPtr GetConsent();
    }
    
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    internal class VendorBuilderObjCBridge
    {
        private readonly IntPtr nativeObject;

        public VendorBuilderObjCBridge(string name, string bundle, string url)
        {
            nativeObject = GetVendor(name, bundle, url);
        }

        public IntPtr getNativeObject()
        {
            return nativeObject;
        }

        public static void setPurposeIds(IEnumerable<int> purposeIds)
        {
            SetPurposeIds(CommaSeparatedStringFromList(purposeIds));
        }

        public static void setFeatureIds(IEnumerable<int> featureIds)
        {
            SetFeatureIds(CommaSeparatedStringFromList(featureIds));
        }

        public static void setLegitimateInterestPurposeIds(IEnumerable<int> legitimateInterestPurposeIds)
        {
            SetLegitimateInterestPurposeIds(CommaSeparatedStringFromList(legitimateInterestPurposeIds));
        }

        private static string CommaSeparatedStringFromList(IEnumerable<int> list)
        {
            return string.Join(",", list.Select(n => n.ToString()).ToArray());
        }

        [DllImport("__Internal")]
        private static extern IntPtr GetVendor(string name, string bundle, string url);

        [DllImport("__Internal")]
        private static extern void SetPurposeIds(string purposeIds);

        [DllImport("__Internal")]
        private static extern void SetFeatureIds(string featureIds);

        [DllImport("__Internal")]
        private static extern void SetLegitimateInterestPurposeIds(string purposeIds);
    }

    [SuppressMessage("ReSharper", "InconsistentNaming")]
    internal class VendorObjBridge
    {
        private readonly IntPtr vendor;

        public VendorObjBridge()
        {
            vendor = GetVendor();
        }

        public VendorObjBridge(IntPtr vendorIntPtr)
        {
            vendor = vendorIntPtr;
        }

        public IntPtr getVendor()
        {
            return vendor;
        }

        public static string getName()
        {
            return VendorGetName();
        }

        public static string getBundle()
        {
            return VendorGetBundle();
        }

        public static string getPolicyUrl()
        {
            return VendorGetPolicyUrl();
        }

        public static List<int> getPurposeIds()
        {
            return getList( VendorGetPurposeIds());
        }

        public static List<int> getFeatureIds()
        {
            return getList( VendorGetFeatureIds());
        }

        public static List<int> getLegitimateInterestPurposeIds()
        {
           return getList(VendorGetLegitimateInterestPurposeIds());
        }

        private static List<int> getList(string raw)
        {
            return raw.Split(new[] { "," }, 
                StringSplitOptions.RemoveEmptyEntries)
                .Select(item => Convert.ToInt32(item)).ToList();
        }

        [DllImport("__Internal")]
        private static extern IntPtr GetVendor();

        [DllImport("__Internal")]
        private static extern string VendorGetName();

        [DllImport("__Internal")]
        private static extern string VendorGetBundle();

        [DllImport("__Internal")]
        private static extern string VendorGetPolicyUrl();

        [DllImport("__Internal")]
        private static extern string VendorGetPurposeIds();

        [DllImport("__Internal")]
        private static extern string VendorGetFeatureIds();

        [DllImport("__Internal")]
        private static extern string VendorGetLegitimateInterestPurposeIds();
    }

    [SuppressMessage("ReSharper", "InconsistentNaming")]
    internal class ConsentObjBridge
    {
        private readonly IntPtr consent;

        public ConsentObjBridge(IntPtr intPtr)
        {
            consent = intPtr;
        }

        public IntPtr getConsent()
        {
            return consent;
        }

        public static string getZone()
        {
            return GetZone();
        }

        public static string getStatus()
        {
            return GetStatus();
        }

        public static string getAuthorizationStatus()
        {
            return GetAuthorizationStatus();
        }
        
        public static string getIabConsentString()
        {
            return GetIabConsentString();
        }

        public string hasConsentForVendor(string bundle)
        {
            return HasConsentForVendor(bundle);
        }

        [DllImport("__Internal")]
        private static extern string GetZone();

        [DllImport("__Internal")]
        private static extern string GetStatus();
        
        [DllImport("__Internal")]
        private static extern string GetAuthorizationStatus();

        [DllImport("__Internal")]
        private static extern string GetIabConsentString();

        [DllImport("__Internal")]
        private static extern string HasConsentForVendor(string bundle);
        
    }

    [SuppressMessage("ReSharper", "InconsistentNaming")]
    internal class ConsentFormObjCBridge
    {
        private readonly IntPtr consentForm;

        public ConsentFormObjCBridge()
        {
            consentForm = GetConsentForm();
        }

        public ConsentFormObjCBridge(IntPtr intPtr)
        {
            consentForm = intPtr;
        }

        public IntPtr getConsentForm()
        {
            return consentForm;
        }

        public static void load()
        {
            Load();
        }

        public static void showAsActivity()
        {
            ShowAsActivity();
        }

        public static void showAsDialog()
        {
            ShowAsDialog();
        }

        public static bool isLoaded()
        {
            return IsLoaded();
        }

        public static bool isShowing()
        {
            return IsShowing();
        }

        [DllImport("__Internal")]
        private static extern IntPtr GetConsentForm();

        [DllImport("__Internal")]
        private static extern void Load();

        [DllImport("__Internal")]
        private static extern void ShowAsActivity();

        [DllImport("__Internal")]
        private static extern void ShowAsDialog();

        [DllImport("__Internal")]
        private static extern bool IsLoaded();

        [DllImport("__Internal")]
        private static extern bool IsShowing();
    }

    [SuppressMessage("ReSharper", "InconsistentNaming")]
    internal class ConsentFormBuilderObjCBridge
    {
        private readonly IntPtr consentFormBuilder;

        public ConsentFormBuilderObjCBridge()
        {
            consentFormBuilder = GetConsentForm();
        }

        public ConsentFormBuilderObjCBridge(IntPtr intPtr)
        {
            consentFormBuilder = intPtr;
        }

        public IntPtr getConsentFormBuilder()
        {
            return consentFormBuilder;
        }

        public static void withListener(ConsentFormCallback onConsentFormLoaded,
            ConsentFormCallbackError onConsentFormError,
            ConsentFormCallback onConsentFormOpened,
            ConsentFormCallbackClosed onConsentFormClosed)
        {
            WithListener(onConsentFormLoaded, onConsentFormError, onConsentFormOpened, onConsentFormClosed);
        }

        [DllImport("__Internal")]
        private static extern IntPtr GetConsentForm();

        [DllImport("__Internal")]
        private static extern void WithListener(
            ConsentFormCallback onConsentFormLoaded,
            ConsentFormCallbackError onConsentFormError,
            ConsentFormCallback onConsentFormOpened,
            ConsentFormCallbackClosed onConsentFormClosed);
    }

    [SuppressMessage("ReSharper", "InconsistentNaming")]
    internal class ConsentManagerExceptionObjCBridge
    {
        private readonly IntPtr consentManagerException;

        public ConsentManagerExceptionObjCBridge(IntPtr intPtr)
        {
            consentManagerException = intPtr;
        }
        
        public ConsentManagerExceptionObjCBridge()
        {
            consentManagerException = GetConsentManagerException();
        }

        public IntPtr getConsentManagerException()
        {
            return consentManagerException;
        }

        public string getReason()
        {
            return GetReason();
        }

        public static int getCode()
        {
            return GetCode();
        }

        [DllImport("__Internal")]
        private static extern IntPtr GetConsentManagerException();

        [DllImport("__Internal")]
        private static extern string GetReason();

        [DllImport("__Internal")]
        private static extern int GetCode();
    }
#endif
}
