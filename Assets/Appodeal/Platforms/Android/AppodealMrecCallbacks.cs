using AppodealAds.Unity.Common;
using UnityEngine;

namespace AppodealAds.Unity.Android {
	public class AppodealMrecCallbacks
#if UNITY_ANDROID
		: AndroidJavaProxy {
			IMrecAdListener listener;

			internal AppodealMrecCallbacks (IMrecAdListener listener) : base ("com.appodeal.ads.MrecCallbacks") {
				this.listener = listener;
			}

			void onMrecLoaded (bool isPrecache) {
				listener.onMrecLoaded (isPrecache);
			}

			void onMrecFailedToLoad () {
				listener.onMrecFailedToLoad ();
			}

			void onMrecShown () {
				listener.onMrecShown ();
			}

			void onMrecClicked () {
				listener.onMrecClicked ();
			}

			void onMrecExpired () {
				listener.onMrecExpired ();
			}
		}
#else
	{
		public AppodealMrecCallbacks (IMrecAdListener listener) { }
	}
#endif
}