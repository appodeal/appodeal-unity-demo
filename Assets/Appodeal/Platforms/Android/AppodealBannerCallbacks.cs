﻿using AppodealAds.Unity.Common;
using UnityEngine;

namespace AppodealAds.Unity.Android {
	public class AppodealBannerCallbacks
#if UNITY_ANDROID
		: AndroidJavaProxy {
			IBannerAdListener listener;

			internal AppodealBannerCallbacks (IBannerAdListener listener) : base ("com.appodeal.ads.BannerCallbacks") {
				this.listener = listener;
			}

			void onBannerLoaded (int height, bool isPrecache) {
				listener.onBannerLoaded (isPrecache);
			}

			void onBannerFailedToLoad () {
				listener.onBannerFailedToLoad ();
			}

			void onBannerShown () {
				listener.onBannerShown ();
			}

			void onBannerClicked () {
				listener.onBannerClicked ();
			}

			void onBannerExpired () {
				listener.onBannerExpired ();
			}
		}
#else
	{
		public AppodealBannerCallbacks (IBannerAdListener listener) { }
	}
#endif
}