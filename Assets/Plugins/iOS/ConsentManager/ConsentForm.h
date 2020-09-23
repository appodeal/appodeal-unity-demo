
#import <Foundation/Foundation.h>
#import "ConsentManagerErrorBridge.h"
#import "ConsentBridge.h"

NS_ASSUME_NONNULL_BEGIN

@class ConsentForm;

typedef void (ConsentFormCallback)(void);
typedef void (ConsentFormCallbackError)(ConsentManagerErrorBridge *error);
typedef void (ConsentFormCallbackClosed)(ConsentBridge *consent);

FOUNDATION_EXPORT ConsentForm *GetConsentForm(void);
FOUNDATION_EXPORT void WithListener(ConsentFormCallback onConsentFormLoaded,
                                    ConsentFormCallbackError onConsentFormError,
                                    ConsentFormCallback onConsentFormOpened,
                                    ConsentFormCallbackClosed onConsentFormClosed);

FOUNDATION_EXPORT ConsentForm *GetConsentForm(void);
FOUNDATION_EXPORT void Load(void);
FOUNDATION_EXPORT void ShowAsActivity(void);
FOUNDATION_EXPORT void ShowAsDialog(void);
FOUNDATION_EXPORT bool IsLoaded(void);
FOUNDATION_EXPORT bool IsShowing(void);


@interface ConsentForm : NSObject

@end

NS_ASSUME_NONNULL_END
