
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT const char *GetZone(void);
FOUNDATION_EXPORT const char *GetStatus(void);
FOUNDATION_EXPORT const char *GetIabConsentString(void);
FOUNDATION_EXPORT const char *HasConsentForVendor(const char *bundle);
FOUNDATION_EXPORT const char *GetChar(NSString *message);
FOUNDATION_EXPORT const char *GetAuthorizationStatus(void);
@interface ConsentBridge : NSObject

@end

NS_ASSUME_NONNULL_END
