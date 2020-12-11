#import <Foundation/Foundation.h>
#import <Appodeal/Appodeal.h>

typedef void (*AppodealBannerViewCallbacks) ();
typedef void (*AppodealBannerViewDidLoadCallback) ();

@interface AppodealBannerViewDelegate : NSObject <APDBannerViewDelegate>

@property (assign, nonatomic) AppodealBannerViewDidLoadCallback bannerViewDidLoadAdCallback;
@property (assign, nonatomic) AppodealBannerViewCallbacks bannerViewDidFailToLoadAdCallback;
@property (assign, nonatomic) AppodealBannerViewCallbacks bannerViewDidClickCallback;
@property (assign, nonatomic) AppodealBannerViewCallbacks bannerViewDidShowCallback;
@property (assign, nonatomic) AppodealBannerViewCallbacks bannerViewDidExpiredCallback;

@end
