#import <Appodeal/Appodeal.h>

@interface AppodealUnityBannerView : NSObject

+ (instancetype)sharedInstance;
UIViewController* RootViewControllerUnityBannerView(void);
- (id)init;
- (void)didRecieveNotification;
- (void)setSharedBannerFrame:(CGFloat)XAxis YAxis:(CGFloat)YAxis;
- (void)hideBannerView;
- (void)showBannerView:(UIViewController*)rootViewController XAxis:(CGFloat)XAxis YAxis:(CGFloat)YAxis placement:(NSString*)placement;
- (void)reinitAppodealBannerView;
- (void)setTabletBanner: (BOOL) value;

@property(nonatomic, strong) APDBannerView *bannerView;
@property(nonatomic, assign) BOOL onScreen;
@property(nonatomic, assign) BOOL tabletBanner;

@end
