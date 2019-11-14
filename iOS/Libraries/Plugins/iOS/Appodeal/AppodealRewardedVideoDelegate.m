#import "AppodealRewardedVideoDelegate.h"

@implementation AppodealRewardedVideoDelegate

-(void) rewardedVideoDidLoadAdIsPrecache:(BOOL)precache {
    if(self.rewardedVideoDidLoadAdCallback) {
        self.rewardedVideoDidLoadAdCallback(precache);
    }
}

-(void) rewardedVideoDidFailToLoadAd {
    if(self.rewardedVideoDidFailToLoadAdCallback) {
        self.rewardedVideoDidFailToLoadAdCallback();
    }
}

-(void) rewardedVideoDidFailToPresentWithError:(NSError *)error {
    if (self.rewardedVideoDidFailToPresentCallback) {
        self.rewardedVideoDidFailToPresentCallback();
    }
}

-(void) rewardedVideoWillDismissAndWasFullyWatched:(BOOL)wasFullyWatched {
    if(self.rewardedVideoWillDismissCallback) {
        self.rewardedVideoWillDismissCallback(wasFullyWatched);
    }
}

-(void) rewardedVideoDidPresent {
    if(self.rewardedVideoDidPresentCallback) {
        self.rewardedVideoDidPresentCallback();
    }
}

- (void)rewardedVideoDidFinish:(float)rewardAmount name:(NSString *)rewardName {
    if (self.rewardedVideoDidFinishCallback) {
        self.rewardedVideoDidFinishCallback((double)rewardAmount, [rewardName UTF8String]);
    }
}

- (void)rewardedVideoDidExpired{
    if(self.rewardedVideoDidExpireCallback){
        self.rewardedVideoDidExpireCallback();
    }
}

- (void)rewardedVideoDidClick{
    if(self.rewardedVideoDidRecieveTapActionCallback){
        self.rewardedVideoDidRecieveTapActionCallback();
    }
}

@end

