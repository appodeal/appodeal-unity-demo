#import <Appodeal/Appodeal.h>

@interface AppodealUnityMrecView : NSObject

+ (instancetype)sharedInstance;
- (id)init;
- (void)didRecieveNotification;
- (void)setSharedMrecFrame:(CGFloat)XAxis YAxis:(CGFloat)YAxis;
- (void)hideMrecView;
- (void)showMrecView:(UIViewController*)rootViewController XAxis:(CGFloat)XAxis YAxis:(CGFloat)YAxis placement:(NSString*)placement;

@property(nonatomic, strong) APDMRECView *mrecView;
@property (nonatomic, assign) BOOL onScreen;

@end
