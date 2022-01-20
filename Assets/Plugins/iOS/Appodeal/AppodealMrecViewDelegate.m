#import "AppodealMrecViewDelegate.h"


@interface AppodealMrecViewDelegate ()

@property (nonatomic, weak) UIView *touchIgnoresView;

@end

@implementation AppodealMrecViewDelegate

- (void)bannerViewDidLoadAd:(APDBannerView *)bannerView isPrecache:(BOOL)precache {
    if (self.mrecViewDidLoadAdCallback) {
        self.mrecViewDidLoadAdCallback(precache);
    }
}

- (void)bannerViewDidRefresh:(APDBannerView *)bannerView {
    [self reattachTouchProcessingView:bannerView];
}

- (void)bannerViewDidInteract:(APDBannerView *)bannerView {
    if (self.mrecViewDidClickCallback) {
        self.mrecViewDidClickCallback();
    }
}

- (void)bannerViewDidShow:(APDBannerView *)bannerView {
    if(self.mrecViewDidShowCallback) {
        self.mrecViewDidShowCallback();
    }
}

- (void)bannerView:(APDBannerView *)bannerView didFailToLoadAdWithError:(NSError *)error {
    if (self.mrecViewDidFailToLoadAdCallback) {
        self.mrecViewDidFailToLoadAdCallback();
    }
}

- (void)bannerViewExpired:(APDBannerView *)bannerView {
    if (self.mrecViewDidExpiredCallback) {
        self.mrecViewDidExpiredCallback();
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
