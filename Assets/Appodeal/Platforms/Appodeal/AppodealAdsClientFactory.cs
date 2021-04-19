using AppodealAds.Unity.Common;

namespace AppodealAds.Unity
{
    internal static class AppodealAdsClientFactory
    {
        internal static IAppodealAdsClient GetAppodealAdsClient()
        {
#if UNITY_ANDROID && !UNITY_EDITOR
			return new Android.AndroidAppodealClient ();
#elif UNITY_IPHONE && !UNITY_EDITOR
			return iOS.AppodealAdsClient.Instance;
#else
            return new Dummy.DummyClient();
#endif
        }
    }
}