namespace AppodealAds.Unity.Common {
	public interface IBannerAdListener {
		void onBannerLoaded (int height, bool isPrecache);
		void onBannerFailedToLoad ();
		void onBannerShown ();
		void onBannerClicked ();
		void onBannerExpired ();
	}
}