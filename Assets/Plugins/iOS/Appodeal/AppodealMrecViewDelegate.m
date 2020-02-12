#import "AppodealMrecViewDelegate.h"

@implementation AppodealMrecViewDelegate

- (void)bannerViewDidLoadAd:(APDBannerView *)bannerView isPrecache:(BOOL)precache {
    if(self.mrecViewDidLoadAdCallback) {
        self.mrecViewDidLoadAdCallback(precache);
    }
}

- (void)bannerViewDidRefresh:(APDBannerView *)bannerView {
    if (bannerView) {
        UnitySetViewTouchProcessing(bannerView, touchesTransformedToUnityViewCoords);
    }
}

- (void)bannerViewDidReceiveTapAction:(APDBannerView *)bannerView {
    if(self.mrecViewDidClickCallback) {
        self.mrecViewDidClickCallback();
    }
}

- (void)bannerView:(APDBannerView *)bannerView didFailToLoadAdWithError:(NSError *)error {
    if(self.mrecViewDidFailToLoadAdCallback) {
        self.mrecViewDidFailToLoadAdCallback();
    }
}

- (void)bannerViewExpired:(APDBannerView *)bannerView{
    if(self.mrecViewDidExpiredCallback){
        self.mrecViewDidExpiredCallback();
    }
}

@end
