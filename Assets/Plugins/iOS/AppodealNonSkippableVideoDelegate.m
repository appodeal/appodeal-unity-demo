#import "AppodealNonSkippableVideoDelegate.h"

@implementation AppodealNonSkippableVideoDelegate

-(void) nonSkippableVideoDidLoadAd {
    if(self.nonSkippableVideoDidLoadAdCallback) {
        self.nonSkippableVideoDidLoadAdCallback();
    }
}

-(void) nonSkippableVideoDidFailToLoadAd {
    if(self.nonSkippableVideoDidFailToLoadAdCallback) {
        self.nonSkippableVideoDidFailToLoadAdCallback();
    }
}

-(void) nonSkippableVideoDidFailToPresent {
    if(self.nonSkippableVideoDidFailToPresentCallback) {
        self.nonSkippableVideoDidFailToPresentCallback();
    }
}

-(void) nonSkippableVideoDidFinish {
    if(self.nonSkippableVideoDidFinishCallback) {
        _isFinishedVideo = true;
        self.nonSkippableVideoDidFinishCallback();
    }
}

-(void) nonSkippableVideoDidPresent {
    if(self.nonSkippableVideoDidPresentCallback) {
        _isFinishedVideo = false;
        self.nonSkippableVideoDidPresentCallback();
    }
}

-(void) nonSkippableVideoWillDismiss {
    if(self.nonSkippableVideoWillDismissCallback) {
        self.nonSkippableVideoWillDismissCallback(_isFinishedVideo);
    }
}

@end
