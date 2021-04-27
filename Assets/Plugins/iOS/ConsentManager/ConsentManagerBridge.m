
#if defined(__has_include) && __has_include("UnityAppController.h")
#import "UnityAppController.h"
#else
#import "EmptyUnityAppController.h"
#endif

#import "ConsentManagerBridge.h"
#import "ConsentManagerErrorBridge.h"
#import "ConsentBridge.h"
#import "VendorBridge.h"

#import <StackConsentManager/StackConsentManager.h>

#pragma mark - Declarations

ConsentManagerErrorBridge *gCurrentError;
ConsentBridge *gConsent;

#pragma mark - Getters

id GetConsentManager(void) {
    return STKConsentManager.sharedManager;
}

id GetCustomVendor(const char *bundle) {
    if (bundle == NULL) {
        return nil;
    }
    
    NSString *bundleString = [[NSString alloc] initWithUTF8String:bundle];
    return [VendorBridge.sharedVendorBridge.bundle isEqualToString:bundleString] ? VendorBridge.sharedVendorBridge : nil;
}

void SetCurrentError(NSError *error) {
    gCurrentError = [[ConsentManagerErrorBridge alloc] initWithCode:error.code
                                                             reason:error.localizedFailureReason ?: @"unknown error"];
}

ConsentManagerErrorBridge *GetCurrentErrorBridge(void) {
    return gCurrentError;
}

const char *GetStorage(void) {
    switch (STKConsentManager.sharedManager.storage) {
        case STKConsentDialogStorageNone:
            return GetConstChar(@"NONE");
            break;
        case STKConsentDialogStorageUserDefaults:
            return GetConstChar(@"SHARED_PREFERENCE");
            break;
    }
}

const char *GetConstChar(NSString *message){
    const char *cString = [message UTF8String];
    char *cStringCopy = calloc([message length]+1, 1);
    return strncpy(cStringCopy, cString, [message length]);
}

const char *ShouldShowConsentDialog(void) {
    switch (STKConsentManager.sharedManager.shouldShowConsentDialog) {
        case STKConsentBoolTrue: return GetConstChar(@"TRUE"); break;
        case STKConsentBoolFalse: return GetConstChar(@"FALSE"); break;
        case STKConsentBoolUnknown: return GetConstChar(@"UNKNOWN"); break;
    }
}

const char *GetConsentZone(void) {
    switch (STKConsentManager.sharedManager.regulation) {
        case STKConsentRegulationCCPA: return GetConstChar(@"CCPA"); break;
        case STKConsentRegulationGDPR: return GetConstChar(@"GDPR"); break;
        case STKConsentRegulationNone: return GetConstChar(@"NONE"); break;
        case STKConsentRegulationUnknown: return GetConstChar(@"UNKNOWN"); break;
    }
}

const char *GetConsentStatus(void) {
    switch (STKConsentManager.sharedManager.consentStatus) {
        case STKConsentStatusUnknown: return GetConstChar(@"UNKNOWN"); break;
        case STKConsentStatusPersonalized: return GetConstChar(@"PERSONALIZED"); break;
        case STKConsentStatusNonPersonalized: return GetConstChar(@"NON_PERSONALIZED"); break;
        case STKConsentStatusPartlyPersonalized: return GetConstChar(@"PARTLY_PERSONALIZED"); break;
    }
}

id GetConsent(void) {
    if (gConsent) {
        gConsent = [ConsentBridge new];
    }
    return gConsent;
}

#pragma mark - Setters

void SetCustomVendor(id customVendor) {
    // TODO
}

void SetStorage(const char *storage) {
    if (storage == NULL) {
        return;
    }
    
    NSString *storageString = [[NSString alloc] initWithUTF8String:storage];
    if ([storageString isEqualToString: @"SHARED_PREFERENCE"]) {
        STKConsentManager.sharedManager.storage = STKConsentDialogStorageUserDefaults;
    } else {
        STKConsentManager.sharedManager.storage = STKConsentDialogStorageNone;
    }
}

#pragma mark - Synchronisation

void RequestConsentInfoUpdate(const char *appodealAppKey,
                              ConsentInfoUpdatedCallback onConsentInfoUpdated,
                              ConsentInfoUpdatedFailedCallback onFailedToUpdateConsentInfo) {
    if (appodealAppKey == NULL) {
        gCurrentError = [[ConsentManagerErrorBridge alloc] initWithCode:0
                                                              reason:@"Appodeal key can't be null"];
        onFailedToUpdateConsentInfo(gCurrentError);
        return;
    }
    
    NSString *key = [[NSString alloc] initWithUTF8String:appodealAppKey];
    
    [VendorBridge.sharedVendorBridge registerCustomVendor];
    [STKConsentManager.sharedManager synchronizeWithAppKey:key
                                                completion:^(NSError *error) {
        if (error) {
            SetCurrentError(error);
            onFailedToUpdateConsentInfo(gCurrentError);
        } else {
            if (!gConsent) {
                gConsent = [ConsentBridge new];
            }
            onConsentInfoUpdated(gConsent);
        }
    }];
}

void DisableAppTrackingTransparencyRequest(){
    [STKConsentManager.sharedManager disableAppTrackingTransparencyRequest];
}
