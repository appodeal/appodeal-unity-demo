﻿using AppodealAds.Unity.Common;
using UnityEngine;

namespace AppodealAds.Unity.Android {
	public class AppodealInterstitialCallbacks
#if UNITY_ANDROID
		: AndroidJavaProxy {
			IInterstitialAdListener listener;

			internal AppodealInterstitialCallbacks (IInterstitialAdListener listener) : base ("com.appodeal.ads.InterstitialCallbacks") {
				this.listener = listener;
			}

			void onInterstitialLoaded (bool isPrecache) {
				listener.onInterstitialLoaded (isPrecache);
			}

			void onInterstitialFailedToLoad () {
				listener.onInterstitialFailedToLoad ();
			}

			void onInterstitialShown () {
				listener.onInterstitialShown ();
			}

			void onInterstitialClicked () {
				listener.onInterstitialClicked ();
			}

			void onInterstitialClosed () {
				listener.onInterstitialClosed ();
			}

			void onInterstitialExpired () {
				listener.onInterstitialExpired ();
			}
		}
#else
	{
		public AppodealInterstitialCallbacks (IInterstitialAdListener listener) { }
	}
#endif
}