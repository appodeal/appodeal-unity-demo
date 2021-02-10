#import "AppodealBannerDelegate.h"
#import <WebKit/WebKit.h>


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

@interface AppodealBannerDelegate ()

@property (nonatomic, strong) NSHashTable<UIView *> *ignoresTouchViews;

@end

@implementation AppodealBannerDelegate

- (NSHashTable *)ignoresTouchViews {
    if (!_ignoresTouchViews) {
        _ignoresTouchViews = [NSHashTable weakObjectsHashTable];
    }
    return _ignoresTouchViews;
}

- (void)bannerDidLoadAdIsPrecache:(BOOL)precache {
    int height = (int)(Appodeal.banner.bounds.size.height);
    if (self.bannerDidLoadAdCallback) {
        self.bannerDidLoadAdCallback(height, precache);
    }
}

- (void)bannerDidShow {
    [self reattachTouchProcessingSubviews];
    
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

- (void)reattachTouchProcessingSubviews {
    for (UIView *view in self.ignoresTouchViews) {
        UnityDropViewTouchProcessing(view);
    }
    
    NSArray <UIView *> *ignoresTouchViews = [Appodeal.banner recursiveSubviews];
    for (UIView *view in ignoresTouchViews) {
        [self.ignoresTouchViews addObject:view];
        UnitySetViewTouchProcessing(view, touchesTransformedToUnityViewCoords);
    }
}

@end
