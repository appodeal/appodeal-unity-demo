#import <Foundation/Foundation.h>
#import <Appodeal/Appodeal.h>

typedef void (*AppodealBannerViewCallbacks) ();

@interface AppodealBannerViewDelegate : NSObject <APDBannerViewDelegate>

@property (assign, nonatomic) AppodealBannerViewCallbacks bannerViewDidLoadAdCallback;
@property (assign, nonatomic) AppodealBannerViewCallbacks bannerViewDidFailToLoadAdCallback;
@property (assign, nonatomic) AppodealBannerViewCallbacks bannerViewDidClickCallback;
@property (assign, nonatomic) AppodealBannerViewCallbacks bannerViewDidShowCallback;

@end
