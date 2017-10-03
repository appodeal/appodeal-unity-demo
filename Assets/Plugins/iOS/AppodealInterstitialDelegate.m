#import "AppodealInterstitialDelegate.h"

@implementation AppodealInterstitialDelegate

-(void) interstitialDidLoadAdisPrecache:(BOOL)precache {
    if(self.interstitialDidLoadCallback) {
        self.interstitialDidLoadCallback(precache);
    }
}

-(void) interstitialDidClick {
    if(self.interstitialDidClickCallback) {
        self.interstitialDidClickCallback();
    }
}

-(void) interstitialDidDismiss {
    if(self.interstitialDidDismissCallback) {
        self.interstitialDidDismissCallback();
    }
}

-(void) interstitialDidFailToLoadAd {
    if(self.interstitialDidFailToLoadAdCallback) {
        self.interstitialDidFailToLoadAdCallback();
    }
}

-(void) interstitialDidFailToPresent {
    
}

-(void) interstitialWillPresent {
    if(self.interstitialWillPresentCallback) {
        self.interstitialWillPresentCallback();
    }
}

@end
