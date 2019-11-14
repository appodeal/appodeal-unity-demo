#import <Foundation/Foundation.h>
#import <Appodeal/Appodeal.h>

typedef void (*AppodealRewardedVideoCallbacks) ();
typedef void (*AppodealRewardedVideoDidLoadCallback) (BOOL isPrecache);
typedef void (*AppodealRewardedVideoDidFinishCallback) (double, const char *);
typedef void (*AppodealRewardedVideoDidDismissCallback) (BOOL isFnished);

@interface AppodealRewardedVideoDelegate : NSObject <AppodealRewardedVideoDelegate>

@property (assign, nonatomic) AppodealRewardedVideoDidLoadCallback rewardedVideoDidLoadAdCallback;
@property (assign, nonatomic) AppodealRewardedVideoCallbacks rewardedVideoDidFailToLoadAdCallback;
@property (assign, nonatomic) AppodealRewardedVideoCallbacks rewardedVideoDidFailToPresentCallback;
@property (assign, nonatomic) AppodealRewardedVideoDidDismissCallback rewardedVideoWillDismissCallback;
@property (assign, nonatomic) AppodealRewardedVideoCallbacks rewardedVideoDidPresentCallback;
@property (assign, nonatomic) AppodealRewardedVideoDidFinishCallback rewardedVideoDidFinishCallback;
@property (assign, nonatomic) AppodealRewardedVideoCallbacks rewardedVideoDidExpireCallback;
@property (assign, nonatomic) AppodealRewardedVideoCallbacks rewardedVideoDidRecieveTapActionCallback;

@end
