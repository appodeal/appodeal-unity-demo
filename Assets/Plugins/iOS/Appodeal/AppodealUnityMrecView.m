#if defined(__has_include) && __has_include("UnityAppController.h")
#import "UnityAppController.h"
#else
#import "EmptyUnityAppController.h"
#endif

#import <Foundation/Foundation.h>
#import "AppodealUnityMrecView.h"

#define BANNER_X_POSITION_SMART     -1
#define BANNER_X_POSITION_CENTER    -2
#define BANNER_X_POSITION_RIGHT     -3
#define BANNER_X_POSITION_LEFT      -4

@implementation AppodealUnityMrecView

+ (instancetype)sharedInstance {
    static AppodealUnityMrecView *sharedInstance;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        sharedInstance = [[self alloc] init];
    });
    return sharedInstance;
}

UIViewController* RootViewControllerUnityMrec() {
    return ((UnityAppController *)[UIApplication sharedApplication].delegate).rootViewController;
}

- (id)init {
    self = [super init];
    if(self) {
        #pragma clang diagnostic push
        #pragma clang diagnostic ignored "-Wdeprecated"
        self.mrecView = [[APDMRECView alloc] init];
        #pragma clang diagnostic pop
        self.mrecView.frame = CGRectMake(0, 0, 300, 250);
        self.mrecView.usesSmartSizing = NO;
        self.onScreen = NO;
        
        [[UIDevice currentDevice] beginGeneratingDeviceOrientationNotifications];
        [[NSNotificationCenter defaultCenter] addObserver:self
                                                 selector:@selector(didRecieveNotification)
                                                     name:UIApplicationDidChangeStatusBarOrientationNotification
                                                   object:nil];
    }
    return self;
}

- (void)didRecieveNotification {
    if (self.onScreen) {
        UIInterfaceOrientation orientation = [UIApplication sharedApplication].statusBarOrientation;
        [self.mrecView rotateToOrientation:orientation];
    }
}

- (void)setSharedMrecFrame:(CGFloat)XAxis YAxis:(CGFloat)YAxis {
    UIViewAutoresizing mask = UIViewAutoresizingNone;
    
    CGSize  superviewSize = RootViewControllerUnityMrec().view.bounds.size;
    CGFloat screenScale = [[UIScreen mainScreen] scale];
    
    CGFloat mrecHeight    = self.mrecView.frame.size.height;
    CGFloat mrecWidth     = self.mrecView.frame.size.width;
    
    CGFloat xOffset = .0f;
    CGFloat yOffset = .0f;
    //Сalculate X offset
    if (XAxis == BANNER_X_POSITION_LEFT) { //Left
        mask |= UIViewAutoresizingFlexibleRightMargin;
    } else if (XAxis == BANNER_X_POSITION_RIGHT) { //Right
        mask |= UIViewAutoresizingFlexibleLeftMargin;
        xOffset = superviewSize.width - mrecWidth;
    } else if (XAxis == BANNER_X_POSITION_CENTER) { //Center
        xOffset = (superviewSize.width - mrecWidth) / 2;
        mask |= UIViewAutoresizingFlexibleRightMargin | UIViewAutoresizingFlexibleLeftMargin;
    } else if (XAxis / screenScale > superviewSize.width - mrecWidth) { //User defined offset more than screen width
        NSLog(@"[Appodeal Banner view][error] Banner view x offset can'not be more than Screen width - acutual banner width");
        xOffset = superviewSize.width - mrecWidth;
        mask |= UIViewAutoresizingFlexibleLeftMargin;
    } else if (XAxis < -5) {
        NSLog(@"[Appodeal Banner view][error] Banner view x offset can'not be less than 0");
        xOffset = 0;
    } else {
        mask |= UIViewAutoresizingFlexibleRightMargin | UIViewAutoresizingFlexibleLeftMargin;
        xOffset = XAxis / screenScale;
    }
    
    //Calculate Y offset
    if (YAxis / screenScale > superviewSize.height - mrecHeight) { //User defined offset more than banner width
        NSLog(@"[Appodeal Banner view][error] Banner view y offset can'not be more than Screen height - acutual banner height");
        yOffset = superviewSize.height - mrecHeight;
        mask |= UIViewAutoresizingFlexibleTopMargin;
    } else if (YAxis < 0) {
        NSLog(@"[Appodeal Banner view][error] Banner view y offset can'not be less than 0");
        yOffset = 0;
    } else if (YAxis == .0f) { // All good
        mask |= UIViewAutoresizingFlexibleBottomMargin;
    } else {
        yOffset = YAxis / screenScale;
        mask |= UIViewAutoresizingFlexibleTopMargin | UIViewAutoresizingFlexibleBottomMargin;
    }
    
    NSLog(@"Creating banner frame with parameters: xOffset = %f, yOffset = %f", xOffset, yOffset);
    CGRect mrecRect = CGRectMake(xOffset, yOffset, mrecWidth, mrecHeight);
    [self.mrecView setAutoresizingMask:mask];
    [self.mrecView setFrame:mrecRect];
    [self.mrecView layoutSubviews];
}

- (void)showMrecView:(UIViewController*)rootViewController
               XAxis:(CGFloat)XAxis
               YAxis:(CGFloat)YAxis
           placement:(NSString*)placement {
    [self.mrecView removeFromSuperview];
    self.mrecView.rootViewController = rootViewController;
    self.mrecView.placement = placement;
    [rootViewController.view addSubview:self.mrecView];
    [rootViewController.view bringSubviewToFront:self.mrecView];
    [self setSharedMrecFrame:XAxis YAxis:YAxis];
    [self setupTouchProcessing];
    self.onScreen = YES;
    [self.mrecView loadAd];
}

- (void)hideMrecView {
    if (self.mrecView) {
        [self.mrecView removeFromSuperview];
        self.onScreen = NO;
    }
}

- (void)setupTouchProcessing {
    if (self.mrecView) {
        UnityDropViewTouchProcessing(self.mrecView);
        UnitySetViewTouchProcessing(self.mrecView, touchesTransformedToUnityViewCoords);
    }
}

@end
