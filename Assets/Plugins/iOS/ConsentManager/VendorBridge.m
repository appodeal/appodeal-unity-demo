
#if defined(__has_include) && __has_include("UnityAppController.h")
#import "UnityAppController.h"
#else
#import "EmptyUnityAppController.h"
#endif

#import "VendorBridge.h"
#import <StackConsentManager/StackConsentManager.h>


@interface VendorBridge ()

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *bundle;
@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, copy) NSArray <NSNumber *> *featuresIds;
@property (nonatomic, copy) NSArray <NSNumber *> *legIntPurposeIds;
@property (nonatomic, copy) NSArray <NSNumber *> *purposesIds;

@end


@implementation VendorBridge

 NSString *appName_;
 NSString *appBundle_;
 NSURL *appURL_;

+ (instancetype)sharedVendorBridge {
    static VendorBridge *_bridge;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _bridge = [VendorBridge new];
        _bridge.name = appName_;
        _bridge.bundle = appBundle_;
        _bridge.URL = appURL_;
    });
    return _bridge;
}

- (void)registerCustomVendor {
    if (self.bundle && self.URL) {
        [STKConsentManager.sharedManager registerCustomVendor:^(STKVendorBuilder *builder) {
            builder.appendName(appName_);
            builder.appendBundle(appBundle_);
            builder.appendPolicyURL(appURL_);
            builder.appendFeaturesIds(self.featuresIds);
            builder.appendLegIntPurposeIds(self.featuresIds);
            builder.appendPurposesIds(self.purposesIds);
        }];
    }
}

@end

VendorBridge *GetVendor(const char *appName, const char *appBundle, const char *appURL) {
    appName_ = [[NSString alloc] initWithUTF8String:appName];
    appBundle_ = [[NSString alloc] initWithUTF8String:appBundle];
    appURL_ = [NSURL URLWithString:[[[NSString alloc] initWithUTF8String:appURL] stringByAddingPercentEncodingWithAllowedCharacters:[NSCharacterSet URLQueryAllowedCharacterSet]]];
    return [VendorBridge sharedVendorBridge];
}

const char *VendorGetName(void) {
    const char *cString = VendorBridge.sharedVendorBridge.name.UTF8String;
    char *cStringCopy = calloc([VendorBridge.sharedVendorBridge.name length]+1, 1);
    return strncpy(cStringCopy, cString, [VendorBridge.sharedVendorBridge.name length]);
}

const char *VendorGetBundle(void) {
    const char *cString = VendorBridge.sharedVendorBridge.bundle.UTF8String;
    char *cStringCopy = calloc([VendorBridge.sharedVendorBridge.bundle length]+1, 1);
    return strncpy(cStringCopy, cString, [VendorBridge.sharedVendorBridge.bundle length]);
}

const char *VendorGetPolicyUrl(void) {
    const char *cString = VendorBridge.sharedVendorBridge.URL.absoluteString.UTF8String;
    char *cStringCopy = calloc([VendorBridge.sharedVendorBridge.URL.absoluteString length]+1, 1);
    return strncpy(cStringCopy, cString, [VendorBridge.sharedVendorBridge.URL.absoluteString length]);
}

const char *VendorGetPurposeIds(void) {
    int *purposeIds = malloc(VendorBridge.sharedVendorBridge.purposesIds.count);
    for (int idx = 0; idx < VendorBridge.sharedVendorBridge.purposesIds.count; idx++) {
        purposeIds[idx] = VendorBridge.sharedVendorBridge.purposesIds[idx].intValue;
    }
    return GetConChar(CommaSeparatedStringFromArray(VendorBridge.sharedVendorBridge.purposesIds));
}

const char *VendorGetFeatureIds(void) {
    return GetConChar(CommaSeparatedStringFromArray(VendorBridge.sharedVendorBridge.featuresIds));
}

const char *VendorGetLegitimateInterestPurposeIds(void) {
    return GetConChar(CommaSeparatedStringFromArray(VendorBridge.sharedVendorBridge.legIntPurposeIds));
}

void SetPurposeIds(const char *purposeIds) {
    VendorBridge.sharedVendorBridge.purposesIds = ArrayFromCommaSeparatedString([[NSString alloc] initWithUTF8String:purposeIds]);;
}

void SetFeatureIds(const char *featureIds) {
    VendorBridge.sharedVendorBridge.featuresIds = ArrayFromCommaSeparatedString([[NSString alloc] initWithUTF8String:featureIds]);
}

void SetLegitimateInterestPurposeIds(const char *legitimateInterestPurposeIds) {
    VendorBridge.sharedVendorBridge.legIntPurposeIds = ArrayFromCommaSeparatedString([[NSString alloc] initWithUTF8String:legitimateInterestPurposeIds]);
}

const char *GetConChar(NSString *message){
    const char *cString = [message UTF8String];
    char *cStringCopy = calloc([message length]+1, 1);
    return strncpy(cStringCopy, cString, [message length]);
}

NSArray <NSNumber *> *ArrayFromCommaSeparatedString(NSString *string) {
    NSArray <NSString *> *array = [string componentsSeparatedByString:@","];
    NSMutableArray <NSNumber *> *result = [NSMutableArray arrayWithCapacity:array.count];
    [array enumerateObjectsUsingBlock:^(NSString *obj, NSUInteger idx, BOOL *stop) {
        NSInteger integerValue = [obj integerValue];
        [result addObject:@(integerValue)];
    }];
    return result;
}

NSString *CommaSeparatedStringFromArray(NSArray <NSNumber *> *array) {
    NSMutableArray <NSString *> *stringArray = [NSMutableArray arrayWithCapacity:array.count];
    [array enumerateObjectsUsingBlock:^(NSNumber *obj, NSUInteger idx, BOOL *stop) {
        [stringArray addObject:obj.stringValue];
    }];
    NSString *result = [stringArray componentsJoinedByString:@","];
    return result;
}


