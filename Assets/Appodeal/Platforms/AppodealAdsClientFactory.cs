using AppodealAds.Unity.Common;
using UnityEngine;

namespace AppodealAds.Unity {
	internal class AppodealAdsClientFactory {
		internal static IAppodealAdsClient GetAppodealAdsClient () {
#if UNITY_ANDROID && !UNITY_EDITOR
			return new AppodealAds.Unity.Android.AndroidAppodealClient ();
#elif UNITY_IPHONE && !UNITY_EDITOR
			return AppodealAds.Unity.iOS.AppodealAdsClient.Instance;
#else
			return new AppodealAds.Unity.Dummy.DummyClient ();
#endif
		}
	}
}