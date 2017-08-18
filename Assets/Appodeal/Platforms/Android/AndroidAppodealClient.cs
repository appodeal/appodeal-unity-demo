using System;
using System.Collections.Generic;

using UnityEngine;
using AppodealAds.Unity.Api;
using AppodealAds.Unity.Common;

#if UNITY_ANDROID
namespace AppodealAds.Unity.Android
{
	public class AndroidAppodealClient : IAppodealAdsClient 
	{
        private bool isShow;
		AndroidJavaClass appodealClass;
		AndroidJavaClass appodealBannerClass;
		AndroidJavaObject appodealBannerInstance;
		AndroidJavaObject userSettings;
		AndroidJavaObject activity;
		AndroidJavaObject popupWindow, resources, displayMetrics, window, decorView, attributes, rootView;

		public AndroidJavaClass getAppodealClass() {
			if (appodealClass == null) {
				appodealClass = new AndroidJavaClass("com.appodeal.ads.Appodeal");
			}
			return appodealClass;
		}

		public AndroidJavaObject getAppodealBannerInstance() {
			if (appodealBannerInstance == null) {
				appodealBannerClass = new AndroidJavaClass("com.appodeal.unity.AppodealUnityBannerView");
				appodealBannerInstance = appodealBannerClass.CallStatic<AndroidJavaObject>("getInstance");
			}
			return appodealBannerInstance;
		}

		public AndroidJavaObject getActivity() {
			if (activity == null) {
				AndroidJavaClass playerClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
				activity = playerClass.GetStatic<AndroidJavaObject>("currentActivity");
			}
			return activity;
		}

		public void initialize(string appKey, int adTypes) 
		{
			getAppodealClass().CallStatic("setFramework", "unity", "2.8.0");
#if UNITY_5_6_0 || UNITY_5_6_1
				getAppodealClass().CallStatic("disableNetwork", getActivity(), "amazon_ads", Appodeal.BANNER);
#endif

			if((adTypes & Appodeal.BANNER_VIEW) > 0) {
				getAppodealClass().CallStatic("disableNetwork", getActivity(), "amazon_ads", Appodeal.BANNER);
			}

			getAppodealClass().CallStatic("initialize", getActivity(), appKey, adTypes);
		}


		public void setInterstitialCallbacks(IInterstitialAdListener listener) 
		{
			getAppodealClass().CallStatic("setInterstitialCallbacks", new AppodealInterstitialCallbacks(listener));
		}
		
		public void setNonSkippableVideoCallbacks(INonSkippableVideoAdListener listener)
		{
			getAppodealClass().CallStatic("setNonSkippableVideoCallbacks", new AppodealNonSkippableVideoCallbacks(listener));
		}

		public void setRewardedVideoCallbacks(IRewardedVideoAdListener listener)
		{
			getAppodealClass().CallStatic("setRewardedVideoCallbacks", new AppodealRewardedVideoCallbacks(listener));
		}
		
		public void setBannerCallbacks(IBannerAdListener listener)
		{
			getAppodealClass().CallStatic("setBannerCallbacks", new AppodealBannerCallbacks(listener));
		}

		public void cache(int adTypes)
		{
			getAppodealClass().CallStatic("cache", getActivity(), adTypes);
		}
		
		public bool isLoaded(int adTypes) 
		{
			return getAppodealClass().CallStatic<Boolean>("isLoaded", adTypes);
		}
		
		public bool isPrecache(int adTypes) 
		{
			return getAppodealClass().CallStatic<Boolean>("isPrecache", adTypes);
		}
		
		public bool show(int adTypes)
		{
            isShow = false;
            getActivity().Call("runOnUiThread", new AndroidJavaRunnable(() =>
            {
#if UNITY_5_6_0 || UNITY_5_6_1
                if ((adTypes & Appodeal.BANNER_TOP) > 0)
                {
                    isShow = showBannerView(Appodeal.BANNER_TOP, Appodeal.BANNER_HORIZONTAL_SMART, "default");
                }
                else if ((adTypes & Appodeal.BANNER_BOTTOM) > 0)
                {
                    isShow = showBannerView(Appodeal.BANNER_BOTTOM, Appodeal.BANNER_HORIZONTAL_SMART, "default");
                }
                else if ((adTypes & Appodeal.BANNER) > 0)
                {
                    isShow = showBannerView(Appodeal.BANNER_BOTTOM, Appodeal.BANNER_HORIZONTAL_SMART, "default");
                }
                else {
                    isShow =  getAppodealClass().CallStatic<Boolean>("show", getActivity(), adTypes);
                }
#elif UNITY_ANDROID
			    isShow = getAppodealClass().CallStatic<Boolean>("show", getActivity(), adTypes);
#endif
            }));
            return isShow;
        }

		public bool show(int adTypes, string placement)
		{
            isShow = false;
            getActivity().Call("runOnUiThread", new AndroidJavaRunnable(() =>
            {
#if UNITY_5_6_0 || UNITY_5_6_1
			    if((adTypes & Appodeal.BANNER_TOP) > 0) {
				    isShow = showBannerView(Appodeal.BANNER_TOP, Appodeal.BANNER_HORIZONTAL_SMART, placement);
			    } else if((adTypes & Appodeal.BANNER_BOTTOM) > 0) {
				    isShow = showBannerView(Appodeal.BANNER_BOTTOM, Appodeal.BANNER_HORIZONTAL_SMART, placement);
			    } else if((adTypes & Appodeal.BANNER) > 0) {
				    isShow = showBannerView(Appodeal.BANNER_BOTTOM, Appodeal.BANNER_HORIZONTAL_SMART, placement);
			    } else {
				    isShow = getAppodealClass().CallStatic<bool>("show", getActivity(), adTypes, placement);
			    }
#elif UNITY_ANDROID
			    isShow = getAppodealClass().CallStatic<Boolean>("show", getActivity(), adTypes, placement);
#endif
            }));
            return isShow;
		}

		public bool showBannerView(int YAxis, int XAxis, string Placement) {
			bool show = false;
			getActivity().Call("runOnUiThread", new AndroidJavaRunnable(() => {
				show = getAppodealBannerInstance().Call<bool>("showBannerView", getActivity(), XAxis, YAxis, Placement);	
			}));
			return show;
		}

		public void hide(int adTypes)
		{
			getAppodealClass().CallStatic("hide", getActivity(), adTypes);
#if UNITY_5_6_0 || UNITY_5_6_1
			getActivity().Call("runOnUiThread", new AndroidJavaRunnable(() => {
				getAppodealBannerInstance().Call("hideBannerView", getActivity());	
			}));
#endif
		}

		public void hideBannerView()
		{
			getAppodealClass().CallStatic("hide", getActivity(), Appodeal.BANNER);
			getActivity().Call("runOnUiThread", new AndroidJavaRunnable(() => {
				getAppodealBannerInstance().Call("hideBannerView", getActivity());	
			}));
		}
		
		public void setAutoCache(int adTypes, Boolean autoCache) 
		{
			getAppodealClass().CallStatic("setAutoCache", adTypes, autoCache);	
		}
		
		public void setTriggerOnLoadedOnPrecache(int adTypes, Boolean onLoadedTriggerBoth) 
		{
			getAppodealClass().CallStatic("setTriggerOnLoadedOnPrecache", adTypes, onLoadedTriggerBoth);
		}

		public void disableNetwork(String network) 
		{
			getAppodealClass().CallStatic("disableNetwork", getActivity(), network);
		}

		public void disableNetwork(String network, int adTypes) 
		{
			getAppodealClass().CallStatic("disableNetwork", getActivity(), network, adTypes);
		}
		
		public void disableLocationPermissionCheck() 
		{
			getAppodealClass().CallStatic("disableLocationPermissionCheck");
		}

		public void disableWriteExternalStoragePermissionCheck() 
		{
			getAppodealClass().CallStatic("disableWriteExternalStoragePermissionCheck");
		}

		public void requestAndroidMPermissions(IPermissionGrantedListener listener) 
		{
			getAppodealClass().CallStatic("requestAndroidMPermissions", getActivity(), new AppodealPermissionCallbacks(listener));
		}
		
		public void orientationChange()
		{
			getAppodealClass().CallStatic("onResume", getActivity(), Appodeal.BANNER);
		}

		public void setTesting(Boolean test)
		{
			getAppodealClass().CallStatic("setTesting", test);
		}

		public void setLogging(Boolean logging)
		{
			if(logging) {
				getAppodealClass().CallStatic("setLogLevel", new AndroidJavaClass("com.appodeal.ads.utils.Log$LogLevel").GetStatic<AndroidJavaObject>("verbose"));
			} else {
				getAppodealClass().CallStatic("setLogLevel", new AndroidJavaClass("com.appodeal.ads.utils.Log$LogLevel").GetStatic<AndroidJavaObject>("none"));
			}
		}
		
		public string getVersion()
		{
			return getAppodealClass().CallStatic<string>("getVersion");
		}

		public void trackInAppPurchase(double amount, string currency)
		{
			getAppodealClass().CallStatic("trackInAppPurchase", getActivity(), amount, currency);
		}

		public void setCustomRule(string name, Boolean value) {
			getAppodealClass().CallStatic("setCustomRule", name, value);
		}

		public void setCustomRule(string name, int value) {
			getAppodealClass().CallStatic("setCustomRule", name, value);
		}

		public void setCustomRule(string name, double value) {
			getAppodealClass().CallStatic("setCustomRule", name, value);
		}

		public void setCustomRule(string name, string value) {
			getAppodealClass().CallStatic("setCustomRule", name, value);
		}

		public void setSmartBanners(Boolean value) {
			getAppodealClass().CallStatic("setSmartBanners", value);
            getAppodealBannerInstance().Call("setSmartBanners", value);
		}

		public void setBannerAnimation(bool value) {
			getAppodealClass().CallStatic("setBannerAnimation", value);
		}

		public void setBannerBackground(bool value) {
			//getAppodealClass().CallStatic("setBannerBackground", value);
		}

		//User Settings

		public void getUserSettings() 
		{
			userSettings = getAppodealClass().CallStatic<AndroidJavaObject>("getUserSettings", getActivity());
		}

        public void setUserId(string id) 
		{
			userSettings.Call<AndroidJavaObject>("setUserId", id);
		}

		public void setAge(int age) 
		{
			userSettings.Call<AndroidJavaObject>("setAge", age);
		}

		public void setGender(int gender)
		{
			switch(gender) 
			{
				case 1:
				{
					userSettings.Call<AndroidJavaObject> ("setGender", new AndroidJavaClass("com.appodeal.ads.UserSettings$Gender").GetStatic<AndroidJavaObject>("OTHER"));	
					break;
				} 
				case 2:
				{
					userSettings.Call<AndroidJavaObject> ("setGender", new AndroidJavaClass("com.appodeal.ads.UserSettings$Gender").GetStatic<AndroidJavaObject>("MALE"));
					break;
				} 
				case 3:
				{
					userSettings.Call<AndroidJavaObject> ("setGender", new AndroidJavaClass("com.appodeal.ads.UserSettings$Gender").GetStatic<AndroidJavaObject>("FEMALE"));
					break;
				}
			}
		}

	}
}
#endif