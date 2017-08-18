#import <Appodeal/Appodeal.h>

@interface AppodealUnityBannerView : NSObject

+ (instancetype)sharedInstance;
- (id)init;
- (void)didRecieveNotification;
- (void)setSharedBannerFrame:(CGFloat)XAxis YAxis:(CGFloat)YAxis;
- (void)hideBannerView;
- (void)showBannerView:(UIViewController*)rootViewController XAxis:(CGFloat)XAxis YAxis:(CGFloat)YAxis placement:(NSString*)placement;

@property(nonatomic, strong) APDBannerView *bannerView;
@property (nonatomic, assign) BOOL onScreen;

@end
