#import <Foundation/Foundation.h>
#import <Appodeal/Appodeal.h>

typedef void (*AppodealMrecViewCallbacks) ();
typedef void (*AppodealMrecViewDidLoadCallback) ();

@interface AppodealMrecViewDelegate : NSObject <APDBannerViewDelegate>

@property (assign, nonatomic) AppodealMrecViewDidLoadCallback mrecViewDidLoadAdCallback;
@property (assign, nonatomic) AppodealMrecViewCallbacks mrecViewDidFailToLoadAdCallback;
@property (assign, nonatomic) AppodealMrecViewCallbacks mrecViewDidClickCallback;
@property (assign, nonatomic) AppodealMrecViewCallbacks mrecViewDidShowCallback;
@property (assign, nonatomic) AppodealMrecViewCallbacks mrecViewDidExpiredCallback;

@end
