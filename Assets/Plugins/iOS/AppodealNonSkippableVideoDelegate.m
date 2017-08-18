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


-(void) nonSkippableVideoDidClick { }

-(void) nonSkippableVideoDidFinish {
    if(self.nonSkippableVideoDidFinishCallback) {
        self.nonSkippableVideoDidFinishCallback();
    }
}

-(void) nonSkippableVideoDidPresent {

}

-(void) nonSkippableVideoWillDismiss {
    if(self.nonSkippableVideoWillDismissCallback) {
        self.nonSkippableVideoWillDismissCallback();
    }
}

@end
