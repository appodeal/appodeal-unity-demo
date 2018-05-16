using System;
using AppodealAds.Unity.Api;

namespace AppodealAds.Unity.Common {
	public interface IAppodealAdsClient {

		void initialize(String appKey, int type);

		bool show(int adTypes);
		bool show(int adTypes, string placement);
		bool isLoaded (int adTypes);
		void cache (int adTypes);
		void hide (int adTypes);
		void setAutoCache (int adTypes, bool autoCache);
		bool isPrecache (int adTypes);

		void onResume();
		bool showBannerView(int YAxis, int XGravity, string Placement);
		void hideBannerView();
		void setSmartBanners(bool value);
		void setBannerAnimation(bool value);
		void setBannerBackground(bool value);
		void setTabletBanners(bool value);

		void setTesting(bool test);
		void setLogLevel(Appodeal.LogLevel level);
		void setChildDirectedTreatment(bool value);
		void disableNetwork(string network);
		void disableNetwork(string network, int type);
		void disableLocationPermissionCheck();
		void disableWriteExternalStoragePermissionCheck();
		void muteVideosIfCallsMuted(bool value);
		void showTestScreen();
		string getVersion();

		bool canShow(int adTypes);
		bool canShow(int adTypes, string placement);
        void setSegmentFilter(string name, bool value);
        void setSegmentFilter(string name, int value);
        void setSegmentFilter(string name, double value);
        void setSegmentFilter(string name, string value);
		string getRewardCurrency(string placement);
        double getRewardAmount(string placement);
		string getRewardCurrency();
        double getRewardAmount();

		void setTriggerOnLoadedOnPrecache (int adTypes, bool onLoadedTriggerBoth);

		void getUserSettings();
		void setAge(int age);
		void setGender(UserSettings.Gender gender);
		void setUserId(string id);
		void trackInAppPurchase(double amount, string currency);

		void setInterstitialCallbacks (IInterstitialAdListener listener);
		void setNonSkippableVideoCallbacks (INonSkippableVideoAdListener listener);
		void setRewardedVideoCallbacks (IRewardedVideoAdListener listener);
		void setBannerCallbacks (IBannerAdListener listener);
		void requestAndroidMPermissions(IPermissionGrantedListener listener);

	}
}
