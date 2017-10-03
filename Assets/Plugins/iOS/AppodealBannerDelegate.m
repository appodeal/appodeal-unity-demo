#import "AppodealBannerDelegate.h"

@implementation AppodealBannerDelegate


-(void) bannerDidLoadAdIsPrecache:(BOOL)precache {
    if(self.bannerDidLoadAdCallback) {
        self.bannerDidLoadAdCallback(precache);
    }
}

-(void) bannerDidShow {
    UIView * bannerView = [[[UnityGetGLViewController() view] subviews] lastObject];
    if (bannerView) {
        UnitySetViewTouchProcessing(bannerView, touchesTransformedToUnityViewCoords);
    }
    if(self.bannerDidShowCallback) {
        self.bannerDidShowCallback();
    }
}

-(void) bannerDidClick {
    if(self.bannerDidClickCallback) {
        self.bannerDidClickCallback();
    }
}

-(void) bannerDidFailToLoadAd {
    if(self.bannerDidFailToLoadAdCallback) {
        self.bannerDidFailToLoadAdCallback();
    }
}

@end
