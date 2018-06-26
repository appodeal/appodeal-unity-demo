#import "AppodealRewardedVideoDelegate.h"

@implementation AppodealRewardedVideoDelegate

-(void) rewardedVideoDidLoadAd {
    if(self.rewardedVideoDidLoadAdCallback) {
        self.rewardedVideoDidLoadAdCallback();
    }
}

-(void) rewardedVideoDidFailToLoadAd {
    if(self.rewardedVideoDidFailToLoadAdCallback) {
        self.rewardedVideoDidFailToLoadAdCallback();
    }
}

-(void) rewardedVideoDidFailToPresent { }

-(void) rewardedVideoDidPresent {
    if(self.rewardedVideoDidPresentCallback) {
        _isFnishedVideo = false;
        self.rewardedVideoDidPresentCallback();
    }
}

-(void) rewardedVideoWillDismiss {
    if(self.rewardedVideoWillDismissCallback) {
        self.rewardedVideoWillDismissCallback(_isFnishedVideo);
    }
}

- (void)rewardedVideoDidFinish:(NSUInteger)rewardAmount name:(NSString *)rewardName {
    if (self.rewardedVideoDidFinishCallback) {
        _isFnishedVideo = true;
        self.rewardedVideoDidFinishCallback((int)rewardAmount, [rewardName UTF8String]);
    }
}

@end
