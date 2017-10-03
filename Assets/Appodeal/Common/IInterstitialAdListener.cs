using System;

namespace AppodealAds.Unity.Common {
	public interface IInterstitialAdListener {
		void onInterstitialLoaded(bool isPrecache);
		void onInterstitialFailedToLoad();
		void onInterstitialShown();
		void onInterstitialClosed();
		void onInterstitialClicked();
	}
}
