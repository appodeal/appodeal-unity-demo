using System.Collections;
using AppodealAds.Unity.Common;
using UnityEngine;

namespace AppodealAds.Unity.Android {
	public class AppodealRewardedVideoCallbacks
#if UNITY_ANDROID
		: AndroidJavaProxy {
			IRewardedVideoAdListener listener;

			internal AppodealRewardedVideoCallbacks (IRewardedVideoAdListener listener) : base ("com.appodeal.ads.RewardedVideoCallbacks") {
				this.listener = listener;
			}

			void onRewardedVideoLoaded (bool precache) {
				listener.onRewardedVideoLoaded (precache);
			}

			void onRewardedVideoFailedToLoad () {
				listener.onRewardedVideoFailedToLoad ();
			}

			void onRewardedVideoShown () {
				listener.onRewardedVideoShown ();
			}

			void onRewardedVideoFinished (double amount, AndroidJavaObject name) {
				listener.onRewardedVideoFinished (amount, null);
			}

			void onRewardedVideoFinished (double amount, string name) {
				listener.onRewardedVideoFinished (amount, name);
			}

			void onRewardedVideoClosed (bool finished) {
				listener.onRewardedVideoClosed (finished);
			}

			void onRewardedVideoExpired () {
				listener.onRewardedVideoExpired ();
			}
			void onRewardedVideoClicked () {
				listener.onRewardedVideoClicked ();
			}

		}
#else
	{
		public AppodealRewardedVideoCallbacks (IRewardedVideoAdListener listener) { }
	}
#endif
}