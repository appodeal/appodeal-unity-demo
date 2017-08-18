using System;
using AppodealAds.Unity;

namespace AppodealAds.Unity.Common {
	public interface IAppodealAdsClient {

		void initialize(String appKey, int type);

		void orientationChange();
		void disableNetwork(string network);
		void disableNetwork(string network, int type);
		void disableLocationPermissionCheck();
		void disableWriteExternalStoragePermissionCheck();

		void setInterstitialCallbacks (IInterstitialAdListener listener);
		void setNonSkippableVideoCallbacks (INonSkippableVideoAdListener listener);
		void setRewardedVideoCallbacks (IRewardedVideoAdListener listener);
		void setBannerCallbacks (IBannerAdListener listener);
		void requestAndroidMPermissions(IPermissionGrantedListener listener);
		void cache (int adTypes);

		bool isLoaded (int adTypes);
		bool isPrecache (int adTypes);
		bool show(int adTypes);
		bool show(int adTypes, string placement);
		bool showBannerView(int YAxis, int XGravity, string Placement);

		void hide (int adTypes);
		void hideBannerView();
		void setAutoCache (int adTypes, bool autoCache);
		void setTriggerOnLoadedOnPrecache (int adTypes, bool onLoadedTriggerBoth);
		void setTesting(bool test);
		void setLogging(bool logging);
		void setSmartBanners(bool value);
		void setBannerAnimation(bool value);
		void setBannerBackground(bool value);

		void trackInAppPurchase(double amount, string currency);
		void setCustomRule(string name, bool value);
		void setCustomRule(string name, int value);
		void setCustomRule(string name, double value);
		void setCustomRule(string name, string value);
		
		string getVersion();

		void setAge(int age);
		void setGender(int gender);
        void setUserId(string id);
        void getUserSettings();

	}
}
