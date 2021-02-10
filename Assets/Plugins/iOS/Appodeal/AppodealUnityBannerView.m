#if defined(__has_include) && __has_include("UnityAppController.h")
#import "UnityAppController.h"
#else
#import "EmptyUnityAppController.h"
#endif

#import <Foundation/Foundation.h>
#import "AppodealUnityBannerView.h"

#define BANNER_X_POSITION_SMART     -1
#define BANNER_X_POSITION_CENTER    -2
#define BANNER_X_POSITION_RIGHT     -3
#define BANNER_X_POSITION_LEFT      -4

@implementation AppodealUnityBannerView

+ (instancetype)sharedInstance {
    static AppodealUnityBannerView *sharedInstance;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        sharedInstance = [[self alloc] init];
    });
    return sharedInstance;
}

UIViewController* RootViewControllerUnityBannerView() {
    return ((UnityAppController *)[UIApplication sharedApplication].delegate).rootViewController;
}

- (id)init {
    self = [super init];
    _tabletBanner = YES;
    [self reinitAppodealBannerView];
    if(self) {
        [[UIDevice currentDevice] beginGeneratingDeviceOrientationNotifications];
        [[NSNotificationCenter defaultCenter] addObserver:self
                                                 selector:@selector(didRecieveNotification)
                                                     name:UIApplicationDidChangeStatusBarOrientationNotification
                                                   object:nil];
    }
    return self;
}

- (void)setTabletBanner:(BOOL)value {
    _tabletBanner = value;
    [self reinitAppodealBannerView];
}

- (void)reinitAppodealBannerView {
    BOOL tabletOrPhoneSize = UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad && self.tabletBanner;
    CGSize size = tabletOrPhoneSize ? kAPDAdSize728x90 : kAPDAdSize320x50;
    self.bannerView = [[APDBannerView alloc] initWithSize:size];
    self.onScreen = NO;
}

- (void)didRecieveNotification {
    if (self.onScreen) {
        UIInterfaceOrientation orientation = [UIApplication sharedApplication].statusBarOrientation;
        [self.bannerView rotateToOrientation:orientation];
    }
}

- (void)setSharedBannerFrame:(CGFloat)XAxis YAxis:(CGFloat)YAxis {
    UIViewAutoresizing mask = UIViewAutoresizingNone;
    
    CGSize  superviewSize = RootViewControllerUnityBannerView().view.bounds.size;
    CGFloat screenScale = [[UIScreen mainScreen] scale];
    
    CGFloat bannerHeight    = self.bannerView.frame.size.height;
    CGFloat bannerWidth     = self.bannerView.frame.size.width;
    
    CGFloat xOffset = .0f;
    CGFloat yOffset = .0f;
    
    //Сalculate X offset
    if (XAxis == BANNER_X_POSITION_SMART) { //Smart banners
        mask |= UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleBottomMargin | UIViewAutoresizingFlexibleTopMargin;
        self.bannerView.usesSmartSizing = YES;
        bannerWidth = superviewSize.width;
    } else if (XAxis == BANNER_X_POSITION_LEFT) { //Left
        mask |= UIViewAutoresizingFlexibleRightMargin;
    } else if (XAxis == BANNER_X_POSITION_RIGHT) { //Right
        mask |= UIViewAutoresizingFlexibleLeftMargin;
        xOffset = superviewSize.width - bannerWidth;
    } else if (XAxis == BANNER_X_POSITION_CENTER) { //Center
        xOffset = (superviewSize.width - bannerWidth) / 2;
        mask |= UIViewAutoresizingFlexibleRightMargin | UIViewAutoresizingFlexibleLeftMargin;
    } else if (XAxis / screenScale > superviewSize.width - bannerWidth) { //User defined offset more than screen width
        NSLog(@"[Appodeal Banner view][error] Banner view x offset can'not be more than Screen width - acutual banner width");
        xOffset = superviewSize.width - bannerWidth;
        mask |= UIViewAutoresizingFlexibleLeftMargin;
    } else if (XAxis < -5) {
        NSLog(@"[Appodeal Banner view][error] Banner view x offset can'not be less than 0");
        xOffset = 0;
    } else {
        mask |= UIViewAutoresizingFlexibleRightMargin | UIViewAutoresizingFlexibleLeftMargin;
        xOffset = XAxis / screenScale;
    }
    
    //Calculate Y offset
    if (YAxis / screenScale > superviewSize.height - bannerHeight) { //User defined offset more than banner width
        NSLog(@"[Appodeal Banner view][error] Banner view y offset can'not be more than Screen height - acutual banner height");
        yOffset = superviewSize.height - bannerHeight;
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
    CGRect bannerRect = CGRectMake(xOffset, yOffset, bannerWidth, bannerHeight);
    [self.bannerView setAutoresizingMask:mask];
    [self.bannerView setFrame:bannerRect];
    [self.bannerView layoutSubviews];
}

- (void)showBannerView:(UIViewController*)rootViewController
                 XAxis:(CGFloat)XAxis
                 YAxis:(CGFloat)YAxis
             placement:(NSString*)placement {
    [self.bannerView removeFromSuperview];
    self.bannerView.rootViewController = rootViewController;
    self.bannerView.placement = placement;
    [rootViewController.view addSubview:self.bannerView];
    [rootViewController.view bringSubviewToFront:self.bannerView];
    [self setSharedBannerFrame:XAxis YAxis:YAxis];
    
    self.onScreen = YES;
    [self.bannerView loadAd];
}

- (void)hideBannerView {
    if(self.bannerView) {
        [self.bannerView removeFromSuperview];
        self.onScreen = NO;
    }
}

- (void)setupTouchProcessing {
    if (self.bannerView) {
        UnityDropViewTouchProcessing(self.bannerView);
        UnitySetViewTouchProcessing(self.bannerView, touchesTransformedToUnityViewCoords);
    }
}

@end
