#import <Foundation/Foundation.h>
#import <Appodeal/Appodeal.h>

typedef void (*AppodealInterstitialCallbacks) ();
typedef void (*AppodealInterstitialDidLoadCallback) (BOOL isPrecache);

@interface AppodealInterstitialDelegate : NSObject <AppodealInterstitialDelegate>

@property (assign, nonatomic) AppodealInterstitialDidLoadCallback interstitialDidLoadCallback;
@property (assign, nonatomic) AppodealInterstitialCallbacks interstitialDidFailToLoadAdCallback;
@property (assign, nonatomic) AppodealInterstitialCallbacks interstitialWillPresentCallback;
@property (assign, nonatomic) AppodealInterstitialCallbacks interstitialDidDismissCallback;
@property (assign, nonatomic) AppodealInterstitialCallbacks interstitialDidClickCallback;
@property (assign, nonatomic) AppodealInterstitialCallbacks interstitialDidFailToPresentCallback;

@end
