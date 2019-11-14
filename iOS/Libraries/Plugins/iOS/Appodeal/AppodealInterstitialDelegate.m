#import "AppodealInterstitialDelegate.h"

@implementation AppodealInterstitialDelegate

-(void) interstitialDidLoadAdIsPrecache:(BOOL)precache {
    if(self.interstitialDidLoadCallback) {
        self.interstitialDidLoadCallback(precache);
    }
}

-(void) interstitialDidFailToLoadAd {
    if(self.interstitialDidFailToLoadAdCallback) {
        self.interstitialDidFailToLoadAdCallback();
    }
}

-(void) interstitialDidFailToPresent {
    if(self.interstitialDidFailToPresentCallback){
        self.interstitialDidFailToPresentCallback();
    }
}

-(void) interstitialWillPresent {
    if(self.interstitialWillPresentCallback) {
        self.interstitialWillPresentCallback();
    }
}

-(void) interstitialDidDismiss {
    if(self.interstitialDidDismissCallback) {
        self.interstitialDidDismissCallback();
    }
}

-(void) interstitialDidClick {
    if(self.interstitialDidClickCallback) {
        self.interstitialDidClickCallback();
    }
}

-(void) interstitialDidExpired{
    if(self.interstitialsDidExpiredCallback){
        self.interstitialsDidExpiredCallback();
    }
}

@end

