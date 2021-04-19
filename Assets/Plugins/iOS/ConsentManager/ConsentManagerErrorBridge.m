
#if defined(__has_include) && __has_include("UnityAppController.h")
#import "UnityAppController.h"
#else
#import "EmptyUnityAppController.h"
#endif

#import "ConsentManagerErrorBridge.h"
#import "ConsentManagerBridge.h"


@interface ConsentManagerErrorBridge ()

@property (nonatomic, copy) NSString *reason;
@property (nonatomic, assign) NSInteger code;

@end

@implementation ConsentManagerErrorBridge

- (instancetype)initWithCode:(NSInteger)code
                      reason:(NSString *)reason {
    if (self = [super init]) {
        self.reason = reason;
        self.code = code;
    }
    return self;
}

@end


ConsentManagerErrorBridge *GetConsentManagerException(void) {
    return GetCurrentErrorBridge();
    
}

const char *GetReason() {
    const char *cString = GetCurrentErrorBridge().reason.UTF8String;
    char *cStringCopy = calloc([GetCurrentErrorBridge().reason length]+1, 1);
    return strncpy(cStringCopy, cString, [GetCurrentErrorBridge().reason length]);
}

int GetCode() {
    return (int)GetCurrentErrorBridge().code;
}

