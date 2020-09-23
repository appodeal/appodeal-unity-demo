
#if defined(__has_include) && __has_include("UnityAppController.h")
#import "UnityAppController.h"
#else
#import "EmptyUnityAppController.h"
#endif

#import "ConsentForm.h"
#import "ConsentManagerBridge.h"

#import <StackConsentManager/StackConsentManager.h>

#pragma mark - ConsentForm

@interface ConsentForm () <STKConsentManagerDisplayDelegate>

@property (nonatomic, assign) ConsentFormCallback *onConsentFormLoaded;
@property (nonatomic, assign) ConsentFormCallbackError *onConsentFormError;
@property (nonatomic, assign) ConsentFormCallback *onConsentFormOpened;
@property (nonatomic, assign) ConsentFormCallbackClosed *onConsentFormClosed;

@end


@implementation ConsentForm

+ (instancetype)sharedInstance {
    static ConsentForm *_form;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _form = [ConsentForm new];
    });
    return _form;
}

- (BOOL)isReady {
    return STKConsentManager.sharedManager.consentDialogReady;
}

- (BOOL)isPresenting {
    return STKConsentManager.sharedManager.isConsentDialogPresenting;
}

- (void)loadConsentForm {
    [STKConsentManager.sharedManager loadConsentDialog:^(NSError *error) {
        if (error) {
            if (self.onConsentFormError != NULL) {
                SetCurrentError(error);
                self.onConsentFormError(GetCurrentErrorBridge());
            }
        } else {
            if (self.onConsentFormLoaded != NULL) {
                self.onConsentFormLoaded();
            }
        }
    }];
}

- (void)showDialog {
    UIViewController *rootViewController;
    if ([UIApplication.sharedApplication.delegate respondsToSelector:@selector(rootViewController)]) {
        rootViewController = [UIApplication.sharedApplication.delegate performSelector:@selector(rootViewController)];
    } else {
        UIWindow *keyWindow;
        if (@available(iOS 13, *)) {
            NSPredicate *sceneFilter = [NSPredicate predicateWithBlock:^BOOL(UIScene *scene, NSDictionary<NSString *,id> *bindings) {
                return [scene isKindOfClass:UIWindowScene.class] && scene.activationState == UISceneActivationStateForegroundActive;
            }];
            NSPredicate *winodwFilter = [NSPredicate predicateWithBlock:^BOOL(UIWindow *window, NSDictionary<NSString *,id> *bindings) {
                return [window isKeyWindow];
            }];
            
            NSArray <UIWindowScene *> *scenes = (NSArray <UIWindowScene *> *)[[UIApplication.sharedApplication.connectedScenes filteredSetUsingPredicate: sceneFilter] allObjects];
            NSArray <UIWindow *> *windows = scenes.firstObject.windows;
            keyWindow = [[windows filteredArrayUsingPredicate:winodwFilter] firstObject];
        } else {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated"
            keyWindow = UIApplication.sharedApplication.keyWindow;
#pragma clang diagnostic pop
        }
        rootViewController = keyWindow.rootViewController;
        while (rootViewController.presentedViewController != nil) {
            rootViewController = rootViewController.presentedViewController;
        }
    }
    
    [STKConsentManager.sharedManager showConsentDialogFromRootViewController:rootViewController
                                                                    delegate:self];
}

#pragma mark - STKConsentManagerDisplayDelegate

- (void)consentManager:(STKConsentManager *)consentManager didFailToPresent:(NSError *)error {
    if (self.onConsentFormError != NULL) {
        SetCurrentError(error);
        self.onConsentFormError(GetCurrentErrorBridge());
    }
}

- (void)consentManagerDidDismissDialog:(STKConsentManager *)consentManager {
    if (self.onConsentFormClosed != NULL) {
        self.onConsentFormClosed(GetConsent());
    }
}

- (void)consentManagerWillShowDialog:(STKConsentManager *)consentManager {
    if (self.onConsentFormOpened != NULL) {
        self.onConsentFormOpened();
    }
}

@end

#pragma mark - Static API

void WithListener(ConsentFormCallback onConsentFormLoaded,
                  ConsentFormCallbackError onConsentFormError,
                  ConsentFormCallback onConsentFormOpened,
                  ConsentFormCallbackClosed onConsentFormClosed) {
    
    ConsentForm.sharedInstance.onConsentFormLoaded = onConsentFormLoaded;
    ConsentForm.sharedInstance.onConsentFormError = onConsentFormError;
    ConsentForm.sharedInstance.onConsentFormOpened = onConsentFormOpened;
    ConsentForm.sharedInstance.onConsentFormClosed = onConsentFormClosed;
}

ConsentForm *GetConsentForm(void) {
    return [ConsentForm sharedInstance];
}

void Load(void) {
    NSLog(@"Consent Load");
    [ConsentForm.sharedInstance loadConsentForm];
}

void ShowAsActivity(void) {
    [ConsentForm.sharedInstance showDialog];
}

void ShowAsDialog(void) {
    [ConsentForm.sharedInstance showDialog];
}

bool IsLoaded(void) {
    return [ConsentForm.sharedInstance isReady];
}

bool IsShowing(void) {
    return [ConsentForm.sharedInstance isPresenting];
}
