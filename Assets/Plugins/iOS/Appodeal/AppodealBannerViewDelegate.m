#import "AppodealBannerViewDelegate.h"

@implementation AppodealBannerViewDelegate

- (void)bannerViewDidLoadAd:(APDBannerView *)bannerView isPrecache:(BOOL)precache {
    int height = (int)(Appodeal.banner.bounds.size.height);
    if(self.bannerViewDidLoadAdCallback) {
        self.bannerViewDidLoadAdCallback(height,precache);
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

- (void)bannerViewExpired:(APDBannerView *)bannerView{
    if(self.bannerViewDidExpiredCallback){
        self.bannerViewDidExpiredCallback();
    }
}

@end
