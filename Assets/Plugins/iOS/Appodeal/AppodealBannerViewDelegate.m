#import "AppodealBannerViewDelegate.h"


@interface AppodealBannerViewDelegate ()

@property (nonatomic, weak) UIView *touchIgnoresView;

@end

@implementation AppodealBannerViewDelegate

- (void)bannerViewDidLoadAd:(APDBannerView *)bannerView isPrecache:(BOOL)precache {
    if (self.bannerViewDidLoadAdCallback) {
        self.bannerViewDidLoadAdCallback(precache);
    }
}

- (void)bannerViewDidRefresh:(APDBannerView *)bannerView {
    [self reattachTouchProcessingView:bannerView];
}

- (void)bannerViewDidInteract:(APDBannerView *)bannerView {
    if(self.bannerViewDidClickCallback) {
        self.bannerViewDidClickCallback();
    }
}

- (void)bannerViewDidShow:(APDBannerView *)bannerView {
    if(self.bannerViewDidShowCallback) {
        self.bannerViewDidShowCallback();
    }
}

- (void)bannerView:(APDBannerView *)bannerView didFailToLoadAdWithError:(NSError *)error {
    if (self.bannerViewDidFailToLoadAdCallback) {
        self.bannerViewDidFailToLoadAdCallback();
    }
}

- (void)bannerViewExpired:(APDBannerView *)bannerView{
    if (self.bannerViewDidExpiredCallback) {
        self.bannerViewDidExpiredCallback();
    }
}

- (void)reattachTouchProcessingView:(UIView *)view {
    if (self.touchIgnoresView) {
        UnityDropViewTouchProcessing(self.touchIgnoresView);
    }
    
    if (view) {
        self.touchIgnoresView = view;
        UnitySetViewTouchProcessing(view, touchesTransformedToUnityViewCoords);
    }
}

@end
