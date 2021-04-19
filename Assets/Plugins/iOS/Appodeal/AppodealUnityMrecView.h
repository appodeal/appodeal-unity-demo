#import <Appodeal/Appodeal.h>

@interface AppodealUnityMrecView : NSObject

+ (instancetype)sharedInstance;
UIViewController* RootViewControllerUnityMrec(void);
- (id)init;
- (void)didRecieveNotification;
- (void)setSharedMrecFrame:(CGFloat)XAxis YAxis:(CGFloat)YAxis;
- (void)hideMrecView;
- (void)showMrecView:(UIViewController*)rootViewController XAxis:(CGFloat)XAxis YAxis:(CGFloat)YAxis placement:(NSString*)placement;
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated"
@property(nonatomic, strong) APDMRECView *mrecView;
#pragma clang diagnostic pop
@property (nonatomic, assign) BOOL onScreen;

@end
