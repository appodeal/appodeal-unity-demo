#import "AppodealBannerDelegate.h"
@interface UIView (AppodealUnityPlugin)
@property (nonatomic, readonly) NSMutableArray <UIView *> *recursiveSubviews;
@end

@implementation UIView (AppodealUnityPlugin)
- (NSMutableArray<UIView *> *)recursiveSubviews {
    NSMutableArray <UIView *> *recursiveSubviews = [NSMutableArray arrayWithObject:self];
    for (UIView *view in self.subviews) {
        [recursiveSubviews addObjectsFromArray:view.recursiveSubviews];
    }
    return recursiveSubviews;
}
@end

@implementation AppodealBannerDelegate
- (void)bannerDidLoadAdIsPrecache:(BOOL)precache {
    int height = (int)(Appodeal.banner.bounds.size.height);
    if(self.bannerDidLoadAdCallback) {
        self.bannerDidLoadAdCallback(height, precache);
    }
}
- (void)bannerDidShow {
    NSArray <UIView *> *ignoresTouchViews = [[Appodeal banner] recursiveSubviews];
    for (UIView *view in ignoresTouchViews) {
        UnitySetViewTouchProcessing(view, touchesTransformedToUnityViewCoords);
    }
    if (self.bannerDidShowCallback) {
        self.bannerDidShowCallback();
    }
}

- (void)bannerDidClick {
    if (self.bannerDidClickCallback) {
        self.bannerDidClickCallback();
    }
}

- (void)bannerDidFailToLoadAd {
    if (self.bannerDidFailToLoadAdCallback) {
        self.bannerDidFailToLoadAdCallback();
    }
}

- (void)bannerDidExpired {
    if (self.bannerDidExpiredCallback) {
        self.bannerDidExpiredCallback();
    }
}
@end
