#if defined(__has_include) && __has_include("UnityAppController.h")
#import "UnityAppController.h"
#else
#import "EmptyUnityAppController.h"
#endif

#import <Appodeal/Appodeal.h>

#import "AppodealInterstitialDelegate.h"
#import "AppodealNonSkippableVideoDelegate.h"
#import "AppodealBannerDelegate.h"
#import "AppodealBannerViewDelegate.h"
#import "AppodealRewardedVideoDelegate.h"

#import "AppodealUnityBannerView.h"

static AppodealUnityBannerView *bannerUnity;

static UIViewController* RootViewController() {
    return ((UnityAppController *)[UIApplication sharedApplication].delegate).rootViewController;
}

static NSDateFormatter *DateFormatter() {
    static dispatch_once_t onceToken;
    static NSDateFormatter *formatter;
    dispatch_once(&onceToken, ^{
        formatter = [[NSDateFormatter alloc] init];
        formatter.dateFormat = @"dd/MM/yyyy";
    });
    return formatter;
}

void AppodealInitializeWithTypes(const char *apiKey, int types, const char *pluginVer) {
    [Appodeal setFramework:APDFrameworkUnity];
    [Appodeal setPluginVersion:[NSString stringWithUTF8String:pluginVer]];
    [Appodeal initializeWithApiKey:[NSString stringWithUTF8String:apiKey] types:types];
}

BOOL AppodealShowAd(int style) {
    return [Appodeal showAd:style rootViewController: RootViewController()];
}

BOOL AppodealShowAdforPlacement(int style, const char *placement) {
    return [Appodeal showAd:style forPlacement:[NSString stringWithUTF8String:placement] rootViewController:RootViewController()];
}

BOOL AppodealIsReadyWithStyle(int style) {
    return [Appodeal isReadyForShowWithStyle:style];
}

void AppodealCacheAd(int types) {
    [Appodeal cacheAd:types];
}

void AppodealSetAutocache(BOOL autocache, int types) {
    [Appodeal setAutocache:autocache types:types];
}

void AppodealHideBanner() {
    [Appodeal hideBanner];
}

void AppodealHideBannerView() {
    if(bannerUnity) {
        [bannerUnity.bannerView removeFromSuperview];
    }
}

void setSmartBanners(bool value) {
    [Appodeal setSmartBannersEnabled:value];
}

void setBannerBackground(BOOL value) {
    [Appodeal setBannerBackgroundVisible:value];
}

void setBannerAnimation(BOOL value) {
    [Appodeal setBannerAnimationEnabled:value];
}

void AppodealSetLogLevel(int level) {
    switch (level) {
        case 1:
            [Appodeal setLogLevel:APDLogLevelOff];
            break;
        case 2:
            [Appodeal setLogLevel:APDLogLevelDebug];
            break;
        case 3:
            [Appodeal setLogLevel:APDLogLevelVerbose];
            break;
        default:
            break;
    }
}

void AppodealSetTestingEnabled(BOOL testingEnabled) {
    [Appodeal setTestingEnabled:testingEnabled];
}

void AppodealSetChildDirectedTreatment(BOOL value) {
    [Appodeal setChildDirectedTreatment:value];
}

void AppodealDisableNetwork(const char * networkName) {
    [Appodeal disableNetworkForAdType:AppodealAdTypeInterstitial name:[NSString stringWithUTF8String:networkName]];
    [Appodeal disableNetworkForAdType:AppodealAdTypeSkippableVideo name:[NSString stringWithUTF8String:networkName]];
    [Appodeal disableNetworkForAdType:AppodealAdTypeBanner name:[NSString stringWithUTF8String:networkName]];
    [Appodeal disableNetworkForAdType:AppodealAdTypeRewardedVideo name:[NSString stringWithUTF8String:networkName]];
    [Appodeal disableNetworkForAdType:AppodealAdTypeNonSkippableVideo name:[NSString stringWithUTF8String:networkName]];
}

void AppodealDisableNetworkForAdTypes(const char * networkName, int type) {
    [Appodeal disableNetworkForAdType:type name:[NSString stringWithUTF8String:networkName]];
}

void AppodealDisableLocationPermissionCheck() {
    [Appodeal setLocationTracking:NO];
}

char * AppodealGetVersion() {
    const char *cString = [[Appodeal getVersion] UTF8String];
    char *cStringCopy = calloc([[Appodeal getVersion] length]+1, 1);
    return strncpy(cStringCopy, cString, [[Appodeal getVersion] length]);
}

char * AppodealGetRewardCurrency(const char *placement) {
    NSString *rewardCurrencyName = [[Appodeal rewardForPlacement:[NSString stringWithUTF8String:placement]] currencyName];
    const char *cString = [rewardCurrencyName UTF8String];
    char *cStringCopy = calloc([rewardCurrencyName length]+1, 1);
    return strncpy(cStringCopy, cString, [rewardCurrencyName length]);
}

int AppodealGetRewardAmount(const char *placement) {
    NSUInteger rewardAmount = [[Appodeal rewardForPlacement:[NSString stringWithUTF8String:placement]] amount];
    return (int)rewardAmount;
}

BOOL AppodealCanShow(int style) {
    return [Appodeal canShowAd:style forPlacement:@""];
}

BOOL AppodealCanShowWithPlacement(int style, const char *placement) {
    return [Appodeal canShowAd:style forPlacement:[NSString stringWithUTF8String:placement]];
}

void setCustomSegmentBool(const char *name, BOOL value) {
    NSString *ValueFromBOOL;
    if(value) {
        ValueFromBOOL = @"YES";
    } else {
        ValueFromBOOL = @"NO";
    }
    
    NSDictionary *tempDictionary = @{[NSString stringWithUTF8String:name]: ValueFromBOOL};
    NSDictionary *dict =  [NSDictionary dictionaryWithDictionary:tempDictionary];
    [Appodeal setCustomRule:dict];
}

void setCustomSegmentInt(const char *name, int value) {
    NSDictionary *tempDictionary = @{[NSString stringWithUTF8String:name]: [NSNumber numberWithInt:value]};
    NSDictionary *dict =  [NSDictionary dictionaryWithDictionary:tempDictionary];
    [Appodeal setCustomRule:dict];
}

void setCustomSegmentDouble(const char *name, double value) {
    NSDictionary *tempDictionary = @{[NSString stringWithUTF8String:name]: [NSNumber numberWithDouble:value]};
    NSDictionary *dict =  [NSDictionary dictionaryWithDictionary:tempDictionary];
    [Appodeal setCustomRule:dict];
}

void setCustomSegmentString(const char *name, const char *value) {
    NSDictionary *tempDictionary = @{[NSString stringWithUTF8String:name]: [NSString stringWithUTF8String:value]};
    NSDictionary *dict =  [NSDictionary dictionaryWithDictionary:tempDictionary];
    [Appodeal setCustomRule:dict];
}

void trackInAppPurchase(int amount, const char * currency) {
    [[APDSdk sharedSdk] trackInAppPurchase:[NSNumber numberWithInt:amount] currency:[NSString stringWithUTF8String:currency]];
}

void AppodealSetUserAge(int age) {
    [Appodeal setUserAge:age];
}

void AppodealSetUserId(const char * userid) {
    [Appodeal setUserId:[NSString stringWithUTF8String:userid]];
}

void AppodealSetUserGender(int gender) {
    switch (gender) {
        case 0:
            [Appodeal setUserGender:APDUserGenderOther];
            break;
        case 1:
            [Appodeal setUserGender:APDUserGenderMale];
            break;
        case 2:
            [Appodeal setUserGender:APDUserGenderFemale];
            break;
        default:
            break;
    }
}

static AppodealBannerViewDelegate *AppodealBannerViewDelegateInstance;
void AppodealSetBannerViewDelegate(AppodealBannerViewDidLoadCallback bannerViewDidLoadAd,
                                   AppodealBannerCallbacks bannerViewDidFailToLoadAd,
                                   AppodealBannerCallbacks bannerViewDidClick) {
    
    AppodealBannerViewDelegateInstance = [AppodealBannerViewDelegate new];
    
    AppodealBannerViewDelegateInstance.bannerViewDidLoadAdCallback = bannerViewDidLoadAd;
    AppodealBannerViewDelegateInstance.bannerViewDidFailToLoadAdCallback = bannerViewDidFailToLoadAd;
    AppodealBannerViewDelegateInstance.bannerViewDidClickCallback = bannerViewDidClick;
    
    if(!bannerUnity) {
        bannerUnity = [AppodealUnityBannerView sharedInstance];
    }
    [bannerUnity.bannerView setDelegate:AppodealBannerViewDelegateInstance];
}

BOOL AppodealShowBannerAdViewforPlacement(int YAxis, int XAxis, const char *placement) {
    if(!bannerUnity) {
        bannerUnity = [AppodealUnityBannerView sharedInstance];
    }
    [bannerUnity showBannerView:RootViewController() XAxis:XAxis YAxis:YAxis placement:[NSString stringWithUTF8String:placement]];
    return false;
}


static AppodealInterstitialDelegate *AppodealInterstitialDelegateInstance;
void AppodealSetInterstitialDelegate(AppodealInterstitialDidLoadCallback interstitialDidLoadAd,
                                     AppodealInterstitialCallbacks interstitialDidFailToLoadAd,
                                     AppodealInterstitialCallbacks interstitialDidClick,
                                     AppodealInterstitialCallbacks interstitialDidDismiss,
                                     AppodealInterstitialCallbacks interstitialWillPresent) {
    
    AppodealInterstitialDelegateInstance = [AppodealInterstitialDelegate new];
    
    AppodealInterstitialDelegateInstance.interstitialDidLoadCallback = interstitialDidLoadAd;
    AppodealInterstitialDelegateInstance.interstitialDidFailToLoadAdCallback = interstitialDidFailToLoadAd;
    AppodealInterstitialDelegateInstance.interstitialDidClickCallback = interstitialDidClick;
    AppodealInterstitialDelegateInstance.interstitialDidDismissCallback = interstitialDidDismiss;
    AppodealInterstitialDelegateInstance.interstitialWillPresentCallback = interstitialWillPresent;
    
    [Appodeal setInterstitialDelegate:AppodealInterstitialDelegateInstance];
}


static AppodealBannerDelegate *AppodealBannerDelegateInstance;
void AppodealSetBannerDelegate(AppodealBannerDidLoadCallback bannerDidLoadAd,
                               AppodealBannerCallbacks bannerDidFailToLoadAd,
                               AppodealBannerCallbacks bannerDidClick,
                               AppodealBannerCallbacks bannerDidShow) {
    
    AppodealBannerDelegateInstance = [AppodealBannerDelegate new];
    
    AppodealBannerDelegateInstance.bannerDidLoadAdCallback = bannerDidLoadAd;
    AppodealBannerDelegateInstance.bannerDidFailToLoadAdCallback = bannerDidFailToLoadAd;
    AppodealBannerDelegateInstance.bannerDidClickCallback = bannerDidClick;
    AppodealBannerDelegateInstance.bannerDidShowCallback = bannerDidShow;
    
    [Appodeal setBannerDelegate:AppodealBannerDelegateInstance];
}

static AppodealNonSkippableVideoDelegate *AppodealNonSkippableVideoDelegateInstance;
void AppodealSetNonSkippableVideoDelegate(AppodealNonSkippableVideoCallbacks nonSkippableVideoDidLoadAd,
                                          AppodealNonSkippableVideoCallbacks nonSkippableVideoDidFailToLoadAd,
                                          AppodealNonSkippableVideoDidDismissCallback nonSkippableVideoWillDismiss,
                                          AppodealNonSkippableVideoCallbacks nonSkippableVideoDidFinish,
                                          AppodealNonSkippableVideoCallbacks nonSkippableVideoDidPresent) {
    
    AppodealNonSkippableVideoDelegateInstance = [AppodealNonSkippableVideoDelegate new];
    
    AppodealNonSkippableVideoDelegateInstance.nonSkippableVideoDidLoadAdCallback = nonSkippableVideoDidLoadAd;
    AppodealNonSkippableVideoDelegateInstance.nonSkippableVideoDidFailToLoadAdCallback = nonSkippableVideoDidFailToLoadAd;
    AppodealNonSkippableVideoDelegateInstance.nonSkippableVideoWillDismissCallback = nonSkippableVideoWillDismiss;
    AppodealNonSkippableVideoDelegateInstance.nonSkippableVideoDidFinishCallback = nonSkippableVideoDidFinish;
    AppodealNonSkippableVideoDelegateInstance.nonSkippableVideoDidPresentCallback = nonSkippableVideoDidPresent;
    
    [Appodeal setNonSkippableVideoDelegate:AppodealNonSkippableVideoDelegateInstance];
}

static AppodealRewardedVideoDelegate *AppodealRewardedVideoDelegateInstance;
void AppodealSetRewardedVideoDelegate(AppodealRewardedVideoCallbacks rewardedVideoDidLoadAd,
                                      AppodealRewardedVideoCallbacks rewardedVideoDidFailToLoadAd,
                                      AppodealRewardedVideoDidDismissCallback rewardedVideoWillDismiss,
                                      AppodealRewardedVideoDidFinishCallback rewardedVideoDidFinish,
                                      AppodealRewardedVideoCallbacks rewardedVideoDidPresent) {
    
    AppodealRewardedVideoDelegateInstance = [AppodealRewardedVideoDelegate new];
    
    AppodealRewardedVideoDelegateInstance.rewardedVideoDidLoadAdCallback = rewardedVideoDidLoadAd;
    AppodealRewardedVideoDelegateInstance.rewardedVideoDidFailToLoadAdCallback = rewardedVideoDidFailToLoadAd;
    AppodealRewardedVideoDelegateInstance.rewardedVideoWillDismissCallback = rewardedVideoWillDismiss;
    AppodealRewardedVideoDelegateInstance.rewardedVideoDidFinishCallback = rewardedVideoDidFinish;
    AppodealRewardedVideoDelegateInstance.rewardedVideoDidPresentCallback = rewardedVideoDidPresent;
    
    [Appodeal setRewardedVideoDelegate:AppodealRewardedVideoDelegateInstance];
}














