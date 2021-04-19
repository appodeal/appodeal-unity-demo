
#import <Foundation/Foundation.h>
#import "ConsentManagerErrorBridge.h"
#import "ConsentBridge.h"

NS_ASSUME_NONNULL_BEGIN

typedef void (ConsentInfoUpdatedCallback)(ConsentBridge *consent);
typedef void (ConsentInfoUpdatedFailedCallback)(ConsentManagerErrorBridge *error);

FOUNDATION_EXPORT void RequestConsentInfoUpdate(const char *appodealAppKey,
                                                ConsentInfoUpdatedCallback onConsentInfoUpdated,
                                                ConsentInfoUpdatedFailedCallback onFailedToUpdateConsentInfo);

FOUNDATION_EXPORT id GetConsentManager(void);
FOUNDATION_EXPORT id GetCustomVendor(const char *bundle);
FOUNDATION_EXPORT ConsentBridge *GetConsent(void);
FOUNDATION_EXPORT const char *GetConstChar(NSString *message);

FOUNDATION_EXPORT const char *GetStorage(void);
FOUNDATION_EXPORT const char *ShouldShowConsentDialog(void);
FOUNDATION_EXPORT const char *GetConsentZone(void);
FOUNDATION_EXPORT const char *GetConsentStatus(void);

FOUNDATION_EXPORT void SetStorage(const char *storage);
FOUNDATION_EXPORT void SetCustomVendor(id customVendor);

FOUNDATION_EXPORT void SetCurrentError(NSError *error);
FOUNDATION_EXPORT ConsentManagerErrorBridge *GetCurrentErrorBridge(void);
FOUNDATION_EXPORT void DisableAppTrackingTransparencyRequest();

NS_ASSUME_NONNULL_END
