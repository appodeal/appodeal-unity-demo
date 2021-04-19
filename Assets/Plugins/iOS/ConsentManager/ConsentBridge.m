
#if defined(__has_include) && __has_include("UnityAppController.h")
#import "UnityAppController.h"
#else
#import "EmptyUnityAppController.h"
#endif

#import "ConsentBridge.h"
#import <StackConsentManager/StackConsentManager.h>


const char *GetZone(void) {
    switch (STKConsentManager.sharedManager.regulation) {
        case STKConsentRegulationCCPA: return GetChar(@"CCPA"); break;
        case STKConsentRegulationGDPR: return GetChar(@"GDPR"); break;
        case STKConsentRegulationNone: return GetChar(@"NONE"); break;
        case STKConsentRegulationUnknown: return GetChar(@"UNKNOWN"); break;
    }
}

const char *GetStatus(void) {
    switch (STKConsentManager.sharedManager.consentStatus) {
        case STKConsentStatusUnknown: return GetChar(@"UNKNOWN"); break;
        case STKConsentStatusPersonalized: return GetChar(@"PERSONALIZED"); break;
        case STKConsentStatusNonPersonalized: return GetChar(@"NON_PERSONALIZED"); break;
        case STKConsentStatusPartlyPersonalized: return GetChar(@"PARTLY_PERSONALIZED"); break;
    }
}

const char *GetIabConsentString(void) {
    if(STKConsentManager.sharedManager.iabConsentString == NULL){
        return GetChar(@"EMPTY");
    }
    return GetChar(STKConsentManager.sharedManager.iabConsentString);
}

const char *HasConsentForVendor(const char *bundle) {
    if (bundle == NULL) {
        return GetChar(@"UNKNOWN");
    }
    
    NSString *bundleString = [[NSString alloc] initWithUTF8String:bundle];
    STKConsentBool result = [STKConsentManager.sharedManager hasConsentForVendorBundle:bundleString];
    switch (result) {
        case STKConsentBoolTrue: return GetChar(@"TRUE"); break;
        case STKConsentBoolFalse: return GetChar(@"FALSE"); break;
        case STKConsentBoolUnknown: return GetChar(@"UNKNOWN"); break;
    }
}

const char *GetAuthorizationStatus(void) {
    switch (STKConsentManager.sharedManager.trackingAuthorizationStatus) {
        case STKTrackingAuthorizationStatusNotDetermined: return GetChar(@"NOT_DETERMINED"); break;
        case STKTrackingAuthorizationStatusRestricted: return GetChar(@"RESTRICTED"); break;
        case STKTrackingAuthorizationStatusDenied: return GetChar(@"DENIED"); break;
        case STKTrackingAuthorizationStatusAuthorized: return GetChar(@"AUTHORIZED"); break;
    }
}

const char *GetChar(NSString *message){
    const char *cString = [message UTF8String];
    char *cStringCopy = calloc([message length]+1, 1);
    return strncpy(cStringCopy, cString, [message length]);
}

@implementation ConsentBridge

@end
