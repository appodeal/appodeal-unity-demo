#if defined(__has_include) && __has_include("UnityAppController.h")
#import "UnityAppController.h"
#else
#import "EmptyUnityAppController.h"
#endif

#import <Appodeal/Appodeal.h>
#import <StackConsentManager/StackConsentManager.h>

#import "AppodealInterstitialDelegate.h"
#import "AppodealNonSkippableVideoDelegate.h"
#import "AppodealBannerDelegate.h"
#import "AppodealBannerViewDelegate.h"
#import "AppodealMrecViewDelegate.h"
#import "AppodealRewardedVideoDelegate.h"
#import "AppodealUnityMrecView.h"
#import "AppodealUnityBannerView.h"

static AppodealUnityBannerView *bannerUnity;
static AppodealUnityMrecView *mrecUnity;

UIViewController *RootViewController() {
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

void AppodealInitialize(const char *apiKey, int types, BOOL consent, const char *pluginVer, const char *engineVer) {
    [Appodeal setFramework:APDFrameworkUnity version: [NSString stringWithUTF8String:engineVer]];
    [Appodeal setPluginVersion:[NSString stringWithUTF8String:pluginVer]];
    [Appodeal initializeWithApiKey:[NSString stringWithUTF8String:apiKey] types:types hasConsent:consent];
}

void AppodealInitializeWithConsent(const char *apiKey, int types, const char *pluginVer, const char *engineVer) {
    [Appodeal setFramework:APDFrameworkUnity version: [NSString stringWithUTF8String:engineVer]];
    [Appodeal setPluginVersion:[NSString stringWithUTF8String:pluginVer]];
    [Appodeal initializeWithApiKey:[NSString stringWithUTF8String:apiKey] types:types consentReport:STKConsentManager.sharedManager.consent];
}

BOOL AppodealIsInitialized(int types) {
    return [Appodeal isInitalizedForAdType:types];
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
    if (bannerUnity) {
        [bannerUnity.bannerView removeFromSuperview];
    }
}

void AppodealHideMrecView() {
    if (mrecUnity) {
        [mrecUnity.mrecView removeFromSuperview];
    }
}

void AppodealSetSmartBanners(bool value) {
    [Appodeal setSmartBannersEnabled:value];
}

void AppodealSetTabletBanners(bool value) {
    if (!bannerUnity) {
        bannerUnity = [AppodealUnityBannerView sharedInstance];
    }
    
    if (value) {
        [Appodeal setPreferredBannerAdSize:kAppodealUnitSize_728x90];
    } else {
        [Appodeal setPreferredBannerAdSize:kAppodealUnitSize_320x50];
    }
    
    [bannerUnity setTabletBanner:value];
}

void AppodealSetBannerBackground(BOOL value) {
    [Appodeal setBannerBackgroundVisible:value];
}

void AppodealSetBannerAnimation(BOOL value) {
    [Appodeal setBannerAnimationEnabled:value];
}

void AppodealSetBannerRotation(int leftBannerRotation, int rightBannerRotation){
    [Appodeal setBannerLeftRotationAngleDegrees:leftBannerRotation rightRotationAngleDegrees: rightBannerRotation];
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

void AppodealUpdateConsent(BOOL value) {
    [Appodeal updateConsent:value];
}

void AppodealUpdateConsentReport() {
    [Appodeal updateConsent:STKConsentManager.sharedManager.consent];
}

void AppodealDisableNetwork(const char *networkName) {
    [Appodeal disableNetwork:[NSString stringWithUTF8String:networkName]];
}

void AppodealDisableNetworkForAdTypes(const char *networkName, int type) {
    [Appodeal disableNetworkForAdType:type name:[NSString stringWithUTF8String:networkName]];
}

void AppodealDisableLocationPermissionCheck() {
    [Appodeal setLocationTracking:NO];
}

void AppodealSetTriggerPrecacheCallbacks(bool value) {
    [Appodeal setTriggerPrecacheCallbacks:value];
}

char *AppodealGetVersion() {
    const char *cString = [[Appodeal getVersion] UTF8String];
    char *cStringCopy = calloc([[Appodeal getVersion] length]+1, 1);
    return strncpy(cStringCopy, cString, [[Appodeal getVersion] length]);
}

char *AppodealGetRewardCurrency(const char *placement) {
    NSString *rewardCurrencyName = [[Appodeal rewardForPlacement:[NSString stringWithUTF8String:placement]] currencyName];
    const char *cString = [rewardCurrencyName UTF8String];
    char *cStringCopy = calloc([rewardCurrencyName length]+1, 1);
    return strncpy(cStringCopy, cString, [rewardCurrencyName length]);
}

double AppodealGetRewardAmount(const char *placement) {
    float rewardAmount = [[Appodeal rewardForPlacement:[NSString stringWithUTF8String:placement]] amount];
    return (double)rewardAmount;
}

double AppodealGetPredictedEcpm(int types) {
    return [Appodeal predictedEcpmForAdType:types];
}

BOOL AppodealCanShow(int style) {
    return [Appodeal canShow:style forPlacement:@"default"];
}

BOOL AppodealCanShowWithPlacement(int style, const char *placement) {
    return [Appodeal canShow:style forPlacement:[NSString stringWithUTF8String:placement]];
}

BOOL AppodealIsPrecacheAd(int adType) {
    return [Appodeal isPrecacheAd:adType];
}

BOOL AppodealIsAutoCacheEnabled(int adType) {
    return [Appodeal isAutocacheEnabled:adType];
}

void AppodealSetSegmentFilterBool(const char *name, BOOL value) {
    NSString *key = [NSString stringWithUTF8String:name];
    NSNumber *valueNum = [NSNumber numberWithBool:value];
    NSDictionary *objCRule = key ? @{key : valueNum} : @{};
    [Appodeal setSegmentFilter:objCRule];
}

void AppodealSetSegmentFilterInt(const char *name, int value) {
    NSDictionary *tempDictionary = @{[NSString stringWithUTF8String:name]: [NSNumber numberWithInt:value]};
    NSDictionary *dict =  [NSDictionary dictionaryWithDictionary:tempDictionary];
    [Appodeal setSegmentFilter:dict];
}

void AppodealSetSegmentFilterDouble(const char *name, double value) {
    NSDictionary *tempDictionary = @{[NSString stringWithUTF8String:name]: [NSNumber numberWithDouble:value]};
    NSDictionary *dict = [NSDictionary dictionaryWithDictionary:tempDictionary];
    [Appodeal setSegmentFilter:dict];
}

void AppodealSetSegmentFilterString(const char *name, const char *value) {
    NSDictionary *tempDictionary = @{[NSString stringWithUTF8String:name]: [NSString stringWithUTF8String:value]};
    NSDictionary *dict = [NSDictionary dictionaryWithDictionary:tempDictionary];
    [Appodeal setSegmentFilter:dict];
}

void AppodealSetCustomFilterBool(const char *name, BOOL value) {
    NSString *key = [NSString stringWithUTF8String:name];
    NSNumber *valueNum = [NSNumber numberWithBool:value];
    NSDictionary *objCRule = key ? @{key : valueNum} : @{};
    [Appodeal setCustomState:objCRule];
}

void AppodealSetCustomFilterInt(const char *name, int value) {
    NSDictionary *tempDictionary = @{[NSString stringWithUTF8String:name]: [NSNumber numberWithInt:value]};
    NSDictionary *dict = [NSDictionary dictionaryWithDictionary:tempDictionary];
    [Appodeal setCustomState:dict];
}

void AppodealSetCustomFilterDouble(const char *name, double value) {
    NSDictionary *tempDictionary = @{[NSString stringWithUTF8String:name]: [NSNumber numberWithDouble:value]};
    NSDictionary *dict = [NSDictionary dictionaryWithDictionary:tempDictionary];
    [Appodeal setCustomState:dict];
}

void AppodealSetCustomFilterString(const char *name, const char *value) {
    NSDictionary *tempDictionary = @{[NSString stringWithUTF8String:name]: [NSString stringWithUTF8String:value]};
    NSDictionary *dict = [NSDictionary dictionaryWithDictionary:tempDictionary];
    [Appodeal setCustomState:dict];
}

void AppodealSetExtraDataBool(const char *name, BOOL value) {
    NSString *key = [NSString stringWithUTF8String:name];
    NSNumber *valueNum = [NSNumber numberWithBool:value];
    NSDictionary *objCRule = key ? @{} : @{key : valueNum};
    [Appodeal setExtras:objCRule];
}

void AppodealSetExtraDataInt(const char *name, int value) {
    NSDictionary *tempDictionary = @{[NSString stringWithUTF8String:name]: [NSNumber numberWithInt:value]};
    NSDictionary *dict = [NSDictionary dictionaryWithDictionary:tempDictionary];
    [Appodeal setExtras:dict];
}

void AppodealSetExtraDataDouble(const char *name, double value) {
    NSDictionary *tempDictionary = @{[NSString stringWithUTF8String:name]: [NSNumber numberWithDouble:value]};
    NSDictionary *dict = [NSDictionary dictionaryWithDictionary:tempDictionary];
    [Appodeal setExtras:dict];
}

void AppodealSetExtraDataString(const char *name, const char *value) {
    NSDictionary *tempDictionary = @{[NSString stringWithUTF8String:name]: [NSString stringWithUTF8String:value]};
    NSDictionary *dict = [NSDictionary dictionaryWithDictionary:tempDictionary];
    [Appodeal setExtras:dict];
}

void AppodealTrackInAppPurchase(int amount, const char *currency) {
    [[APDSdk sharedSdk] trackInAppPurchase:[NSNumber numberWithInt:amount] currency:[NSString stringWithUTF8String:currency]];
}

void AppodealSetUserAge(int age) {
    [Appodeal setUserAge:age];
}

void AppodealSetUserId(const char *userid) {
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
                                   AppodealBannerCallbacks bannerViewDidClick,
                                   AppodealBannerCallbacks bannerViewDidExpired) {
    
    AppodealBannerViewDelegateInstance = [AppodealBannerViewDelegate new];
    
    AppodealBannerViewDelegateInstance.bannerViewDidLoadAdCallback = bannerViewDidLoadAd;
    AppodealBannerViewDelegateInstance.bannerViewDidFailToLoadAdCallback = bannerViewDidFailToLoadAd;
    AppodealBannerViewDelegateInstance.bannerViewDidClickCallback = bannerViewDidClick;
    AppodealBannerViewDelegateInstance.bannerViewDidExpiredCallback = bannerViewDidExpired;
    
    if(!bannerUnity) {
        bannerUnity = [AppodealUnityBannerView sharedInstance];
    }
    [bannerUnity.bannerView setDelegate:AppodealBannerViewDelegateInstance];
}

static AppodealMrecViewDelegate *AppodealMrecViewDelegateInstance;
void AppodealSetMrecViewDelegate(AppodealMrecViewDidLoadCallback mrecViewDidLoadAd,
                                 AppodealMrecViewCallbacks mrecViewDidFailToLoadAd,
                                 AppodealMrecViewCallbacks mrecViewDidClick,
                                 AppodealMrecViewCallbacks mrecViewDidExpired) {
    
    AppodealMrecViewDelegateInstance = [AppodealMrecViewDelegate new];
    
    AppodealMrecViewDelegateInstance.mrecViewDidLoadAdCallback = mrecViewDidLoadAd;
    AppodealMrecViewDelegateInstance.mrecViewDidFailToLoadAdCallback = mrecViewDidFailToLoadAd;
    AppodealMrecViewDelegateInstance.mrecViewDidClickCallback = mrecViewDidClick;
    AppodealMrecViewDelegateInstance.mrecViewDidExpiredCallback = mrecViewDidExpired;
    
    if (!mrecUnity) {
        mrecUnity = [AppodealUnityMrecView sharedInstance];
    }
    [mrecUnity.mrecView setDelegate:AppodealMrecViewDelegateInstance];
}

BOOL AppodealShowBannerAdViewforPlacement(int YAxis, int XAxis, const char *placement) {
    if (!bannerUnity) {
        bannerUnity = [AppodealUnityBannerView sharedInstance];
    }
    [bannerUnity showBannerView:RootViewController() XAxis:XAxis YAxis:YAxis placement:[NSString stringWithUTF8String:placement]];
    return false;
}

BOOL AppodealShowMrecAdViewforPlacement(int YAxis, int XAxis, const char *placement) {
    if (!mrecUnity) {
        mrecUnity = [AppodealUnityMrecView sharedInstance];
    }
    [mrecUnity showMrecView:RootViewController() XAxis:XAxis YAxis:YAxis placement:[NSString stringWithUTF8String:placement]];
    return false;
}



static AppodealInterstitialDelegate *AppodealInterstitialDelegateInstance;
void AppodealSetInterstitialDelegate(AppodealInterstitialDidLoadCallback interstitialDidLoadAd,
                                     AppodealInterstitialCallbacks interstitialDidFailToLoadAd,
                                     AppodealInterstitialCallbacks interstitialDidFailToPresent,
                                     AppodealInterstitialCallbacks interstitialWillPresent,
                                     AppodealInterstitialCallbacks interstitialDidDismiss,
                                     AppodealInterstitialCallbacks interstitialDidClick,
                                     AppodealInterstitialCallbacks interstitialDidExpired) {
    
    AppodealInterstitialDelegateInstance = [AppodealInterstitialDelegate new];
    
    AppodealInterstitialDelegateInstance.interstitialDidLoadCallback = interstitialDidLoadAd;
    AppodealInterstitialDelegateInstance.interstitialDidFailToLoadAdCallback = interstitialDidFailToLoadAd;
    AppodealInterstitialDelegateInstance.interstitialDidFailToPresentCallback = interstitialDidFailToPresent;
    AppodealInterstitialDelegateInstance.interstitialWillPresentCallback = interstitialWillPresent;
    AppodealInterstitialDelegateInstance.interstitialDidDismissCallback = interstitialDidDismiss;
    AppodealInterstitialDelegateInstance.interstitialDidClickCallback = interstitialDidClick;
    AppodealInterstitialDelegateInstance.interstitialsDidExpiredCallback = interstitialDidExpired;
    
    [Appodeal setInterstitialDelegate:AppodealInterstitialDelegateInstance];
}


static AppodealBannerDelegate *AppodealBannerDelegateInstance;
void AppodealSetBannerDelegate(AppodealBannerDidLoadCallback bannerDidLoadAd,
                               AppodealBannerCallbacks bannerDidFailToLoadAd,
                               AppodealBannerCallbacks bannerDidClick,
                               AppodealBannerCallbacks bannerDidShow,
                               AppodealBannerCallbacks bannerDidExpired) {
    
    AppodealBannerDelegateInstance = [AppodealBannerDelegate new];
    
    AppodealBannerDelegateInstance.bannerDidLoadAdCallback = bannerDidLoadAd;
    AppodealBannerDelegateInstance.bannerDidFailToLoadAdCallback = bannerDidFailToLoadAd;
    AppodealBannerDelegateInstance.bannerDidClickCallback = bannerDidClick;
    AppodealBannerDelegateInstance.bannerDidShowCallback = bannerDidShow;
    AppodealBannerDelegateInstance.bannerDidExpiredCallback = bannerDidExpired;
    
    [Appodeal setBannerDelegate:AppodealBannerDelegateInstance];
}

static AppodealNonSkippableVideoDelegate *AppodealNonSkippableVideoDelegateInstance;
void AppodealSetNonSkippableVideoDelegate(AppodealNonSkippableVideoDidLoadCallback nonSkippableVideoDidLoadAd,
                                          AppodealNonSkippableVideoCallbacks nonSkippableVideoDidFailToLoadAd,
                                          AppodealNonSkippableVideoCallbacks nonSkippableVideoDidFailToPresent,
                                          AppodealNonSkippableVideoDidDismissCallback nonSkippableVideoWillDismiss,
                                          AppodealNonSkippableVideoCallbacks nonSkippableVideoDidFinish,
                                          AppodealNonSkippableVideoCallbacks nonSkippableVideoDidPresent,
                                          AppodealNonSkippableVideoCallbacks nonSkippableVideoDidExpired) {
    
    AppodealNonSkippableVideoDelegateInstance = [AppodealNonSkippableVideoDelegate new];
    
    AppodealNonSkippableVideoDelegateInstance.nonSkippableVideoDidLoadAdCallback = nonSkippableVideoDidLoadAd;
    AppodealNonSkippableVideoDelegateInstance.nonSkippableVideoDidFailToLoadAdCallback = nonSkippableVideoDidFailToLoadAd;
    AppodealNonSkippableVideoDelegateInstance.nonSkippableVideoDidFailToPresentCallback = nonSkippableVideoDidFailToPresent;
    AppodealNonSkippableVideoDelegateInstance.nonSkippableVideoWillDismissCallback = nonSkippableVideoWillDismiss;
    AppodealNonSkippableVideoDelegateInstance.nonSkippableVideoDidFinishCallback = nonSkippableVideoDidFinish;
    AppodealNonSkippableVideoDelegateInstance.nonSkippableVideoDidPresentCallback = nonSkippableVideoDidPresent;
    AppodealNonSkippableVideoDelegateInstance.nonSkippableVideoDidExpiredCallback =  nonSkippableVideoDidExpired;
    
    [Appodeal setNonSkippableVideoDelegate:AppodealNonSkippableVideoDelegateInstance];
}

static AppodealRewardedVideoDelegate *AppodealRewardedVideoDelegateInstance;
void AppodealSetRewardedVideoDelegate(AppodealRewardedVideoDidLoadCallback rewardedVideoDidLoadAd,
                                      AppodealRewardedVideoCallbacks rewardedVideoDidFailToLoadAd,
                                      AppodealRewardedVideoCallbacks rewardedVideoDidFailToPresent,
                                      AppodealRewardedVideoDidDismissCallback rewardedVideoWillDismiss,
                                      AppodealRewardedVideoDidFinishCallback rewardedVideoDidFinish,
                                      AppodealRewardedVideoCallbacks rewardedVideoDidPresent,
                                      AppodealRewardedVideoCallbacks rewardedVideoDidExpired,
                                      AppodealRewardedVideoCallbacks rewardedVideoDidReceiveTap) {
    
    AppodealRewardedVideoDelegateInstance = [AppodealRewardedVideoDelegate new];
    
    AppodealRewardedVideoDelegateInstance.rewardedVideoDidLoadAdCallback = rewardedVideoDidLoadAd;
    AppodealRewardedVideoDelegateInstance.rewardedVideoDidFailToLoadAdCallback = rewardedVideoDidFailToLoadAd;
    AppodealRewardedVideoDelegateInstance.rewardedVideoDidFailToPresentCallback = rewardedVideoDidFailToPresent;
    AppodealRewardedVideoDelegateInstance.rewardedVideoWillDismissCallback = rewardedVideoWillDismiss;
    AppodealRewardedVideoDelegateInstance.rewardedVideoDidFinishCallback = rewardedVideoDidFinish;
    AppodealRewardedVideoDelegateInstance.rewardedVideoDidPresentCallback = rewardedVideoDidPresent;
    AppodealRewardedVideoDelegateInstance.rewardedVideoDidExpireCallback = rewardedVideoDidExpired;
    AppodealRewardedVideoDelegateInstance.rewardedVideoDidRecieveTapActionCallback = rewardedVideoDidReceiveTap;
    
    [Appodeal setRewardedVideoDelegate:AppodealRewardedVideoDelegateInstance];
}

