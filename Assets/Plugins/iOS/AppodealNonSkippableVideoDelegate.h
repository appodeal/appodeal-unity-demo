#import <Foundation/Foundation.h>
#import <Appodeal/Appodeal.h>

typedef void (*AppodealNonSkippableVideoCallbacks) ();
typedef void (*AppodealNonSkippableVideoDidDismissCallback) (BOOL isFinished);

@interface AppodealNonSkippableVideoDelegate : NSObject <AppodealNonSkippableVideoDelegate>

@property (assign, nonatomic) BOOL isFinishedVideo;

@property (assign, nonatomic) AppodealNonSkippableVideoCallbacks nonSkippableVideoDidLoadAdCallback;
@property (assign, nonatomic) AppodealNonSkippableVideoCallbacks nonSkippableVideoDidFailToLoadAdCallback;
@property (assign, nonatomic) AppodealNonSkippableVideoCallbacks nonSkippableVideoDidFailToPresentCallback;
@property (assign, nonatomic) AppodealNonSkippableVideoCallbacks nonSkippableVideoDidPresentCallback;
@property (assign, nonatomic) AppodealNonSkippableVideoDidDismissCallback nonSkippableVideoWillDismissCallback;
@property (assign, nonatomic) AppodealNonSkippableVideoCallbacks nonSkippableVideoDidFinishCallback;

@end
