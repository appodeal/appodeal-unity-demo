
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class VendorBridge;

FOUNDATION_EXPORT VendorBridge *GetVendor(const char *appName, const char *appBundle, const char *appURL);
FOUNDATION_EXPORT const char *VendorGetName(void);
FOUNDATION_EXPORT const char *VendorGetBundle(void);
FOUNDATION_EXPORT const char *VendorGetPolicyUrl(void);
FOUNDATION_EXPORT const char *VendorGetPurposeIds(void);
FOUNDATION_EXPORT const char *VendorGetFeatureIds(void);
FOUNDATION_EXPORT const char *VendorGetLegitimateInterestPurposeIds(void);
FOUNDATION_EXPORT const char *GetConChar(NSString *message);
FOUNDATION_EXPORT NSArray <NSNumber *> *ArrayFromCommaSeparatedString(NSString *string);
FOUNDATION_EXPORT NSString *CommaSeparatedStringFromArray(NSArray <NSNumber *> *array);
FOUNDATION_EXPORT NSArray <NSNumber *> *ArrayFromCommaSeparatedString(NSString *string);

FOUNDATION_EXPORT void SetPurposeIds(const char *purposeIds);
FOUNDATION_EXPORT void SetFeatureIds(const char *featureIds);
FOUNDATION_EXPORT void SetLegitimateInterestPurposeIds(const char *legitimateInterestPurposeIds);


@interface VendorBridge : NSObject

@property (nonatomic, copy, readonly) NSString *bundle;

+ (instancetype)sharedVendorBridge;
- (void)registerCustomVendor;

@end

NS_ASSUME_NONNULL_END
