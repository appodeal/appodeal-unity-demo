#import "AppodealNonSkippableVideoDelegate.h"

@implementation AppodealNonSkippableVideoDelegate

-(void) nonSkippableVideoDidLoadAdIsPrecache:(BOOL)precache {
    if(self.nonSkippableVideoDidLoadAdCallback) {
        self.nonSkippableVideoDidLoadAdCallback(precache);
    }
}

-(void) nonSkippableVideoDidFailToLoadAd {
    if(self.nonSkippableVideoDidFailToLoadAdCallback) {
        self.nonSkippableVideoDidFailToLoadAdCallback();
    }
}

-(void) nonSkippableVideoDidFailToPresentWithError:(NSError *)error {
    if(self.nonSkippableVideoDidFailToPresentCallback) {
        self.nonSkippableVideoDidFailToPresentCallback();
    }
}

-(void) nonSkippableVideoDidPresent {
    if(self.nonSkippableVideoDidPresentCallback) {
        self.nonSkippableVideoDidPresentCallback();
    }
}

-(void) nonSkippableVideoWillDismissAndWasFullyWatched:(BOOL)wasFullyWatched {
    if(self.nonSkippableVideoWillDismissCallback) {
        self.nonSkippableVideoWillDismissCallback(wasFullyWatched);
    }
}

-(void) nonSkippableVideoDidFinish {
    if(self.nonSkippableVideoDidFinishCallback) {
        self.nonSkippableVideoDidFinishCallback();
    }
}

-(void) nonSkippableVideoDidExpired{
    if(self.nonSkippableVideoDidExpiredCallback){
        self.nonSkippableVideoDidExpiredCallback();
    }
}

@end

