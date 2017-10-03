#import "AppodealBannerViewDelegate.h"

@implementation AppodealBannerViewDelegate

- (void)bannerViewDidLoadAd:(APDBannerView *)bannerView {
    if(self.bannerViewDidLoadAdCallback) {
        self.bannerViewDidLoadAdCallback(false);
    }
}

- (void)bannerViewDidRefresh:(APDBannerView *)bannerView {
    if (bannerView) {
        UnitySetViewTouchProcessing(bannerView, touchesTransformedToUnityViewCoords);
    }
}

- (void)bannerViewDidReceiveTapAction:(APDBannerView *)bannerView {
    if(self.bannerViewDidClickCallback) {
        self.bannerViewDidClickCallback();
    }
}

- (void)bannerView:(APDBannerView *)bannerView didFailToLoadAdWithError:(NSError *)error {
    if(self.bannerViewDidFailToLoadAdCallback) {
        self.bannerViewDidFailToLoadAdCallback();
    }
}

@end
