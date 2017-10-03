#import <Foundation/Foundation.h>
#import <Appodeal/Appodeal.h>

typedef void (*AppodealBannerCallbacks) ();
typedef void (*AppodealBannerDidLoadCallback) (BOOL isPrecache);

@interface AppodealBannerDelegate : NSObject <AppodealBannerDelegate>

@property (assign, nonatomic) AppodealBannerDidLoadCallback bannerDidLoadAdCallback;
@property (assign, nonatomic) AppodealBannerCallbacks bannerDidFailToLoadAdCallback;
@property (assign, nonatomic) AppodealBannerCallbacks bannerDidClickCallback;
@property (assign, nonatomic) AppodealBannerCallbacks bannerDidShowCallback;

@end
