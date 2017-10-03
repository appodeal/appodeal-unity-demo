#import <Foundation/Foundation.h>
#import <Appodeal/Appodeal.h>

typedef void (*AppodealRewardedVideoCallbacks) ();
typedef void (*AppodealRewardedVideoDidFinishCallback) (int, const char *);
typedef void (*AppodealRewardedVideoDidDismissCallback) (BOOL isFnished);

@interface AppodealRewardedVideoDelegate : NSObject <AppodealRewardedVideoDelegate>

@property (assign, nonatomic) BOOL isFnishedVideo;

@property (assign, nonatomic) AppodealRewardedVideoCallbacks rewardedVideoDidLoadAdCallback;
@property (assign, nonatomic) AppodealRewardedVideoCallbacks rewardedVideoDidFailToLoadAdCallback;
@property (assign, nonatomic) AppodealRewardedVideoCallbacks rewardedVideoDidFailToPresentCallback;
@property (assign, nonatomic) AppodealRewardedVideoDidDismissCallback rewardedVideoWillDismissCallback;
@property (assign, nonatomic) AppodealRewardedVideoCallbacks rewardedVideoDidPresentCallback;
@property (assign, nonatomic) AppodealRewardedVideoDidFinishCallback rewardedVideoDidFinishCallback;

@end
