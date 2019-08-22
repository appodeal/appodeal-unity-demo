using AppodealAds.Unity.Api;
using AppodealAds.Unity.Common;
using UnityEngine;

// Example script showing how to invoke the Appodeal Ads Unity plugin.
public class InterstitialSample : MonoBehaviour, IInterstitialAdListener
{
#if UNITY_EDITOR && !UNITY_ANDROID && !UNITY_IPHONE
	string appKey = "";
#elif UNITY_ANDROID
    string appKey = "fee50c333ff3825fd6ad6d38cff78154de3025546d47a84f";
#elif UNITY_IPHONE
    string appKey = "4b46ef930cd37cf11da84ae4d41019abb7234d5bbce3f000";
#else
	string appKey = "";
#endif

    private int buttonWidth, buttonHeight, heightScale, widthScale;
    private GUIStyle buttonStyle;

    private void initAppodealSdk()
    {
        /*
         * To enable debug logging use the following method before initialization: 
         */
        Appodeal.setLogLevel(Appodeal.LogLevel.Verbose);

        /*
        To enable test mode use the following method before initialization: 
        Test mode allows you to show our test ads with 100% filtrate.
        */
        Appodeal.setTesting(true);

        /*
         * To initialize Appodeal SDK use the following method:
         * Publishers need to pass the boolean consent flag(with 'false' meaning that the user declined to give the consent)
         * to the Appodeal.initialize() method of our SDK.
         */
        Appodeal.initialize(appKey, Appodeal.INTERSTITIAL, false);

        /*
         * The callbacks are used to track different events in the lifecycle of an ad, e.g.
         * when an ad was clicked on or closed. To implement them, you need to follow these steps:
         * - Extend your class with IInterstitialAdListener
         * - to call the following method:
         */
        Appodeal.setInterstitialCallbacks(this);
    }

    private void showNonSkippableVideo()
    {
        /*
         * To show interstitial use the method below:
         */
        if (Appodeal.isLoaded(Appodeal.INTERSTITIAL))
        {
            Appodeal.show(Appodeal.INTERSTITIAL);
        }
    }

    #region Interstitial callback handlers
    public void onInterstitialLoaded (bool isPrecache) { print ("Appodeal. Interstitial loaded");}
    public void onInterstitialFailedToLoad () { print ("Appodeal. Interstitial failed"); }
    public void onInterstitialShown () { print ("Appodeal. Interstitial opened");}
    public void onInterstitialClosed () { print ("Appodeal. Interstitial closed"); }
    public void onInterstitialClicked () { print ("Appodeal. Interstitial clicked"); }
    public void onInterstitialExpired () { print ("Appodeal. Interstitial expired"); }
    #endregion

    private void OnGUI()
    {
        initStyles();

        if (GUI.Button(new Rect(widthScale, heightScale, buttonWidth, buttonHeight), "INITIALIZE", buttonStyle))
            initAppodealSdk();


        if (GUI.Button(new Rect(widthScale, heightScale + heightScale, buttonWidth, buttonHeight), "SHOW INTERSTITIAL",
            buttonStyle))
            showNonSkippableVideo();
    }

    private void initStyles()
    {
        if (buttonStyle != null) return;
        buttonWidth = Screen.width - Screen.width / 5;
        buttonHeight = Screen.height / 18;
        heightScale = Screen.height / 15;
        widthScale = Screen.width / 10;

        buttonStyle = new GUIStyle(GUI.skin.button);
        buttonStyle.fontSize = buttonHeight / 2;
        buttonStyle.normal.textColor = Color.red;
        buttonStyle.hover.textColor = Color.red;
        buttonStyle.active.textColor = Color.red;
        buttonStyle.focused.textColor = Color.red;

        buttonStyle.active.background = makeTexture(buttonWidth, buttonHeight, Color.grey);
        buttonStyle.focused.background = makeTexture(buttonWidth, buttonHeight, Color.grey);
        buttonStyle.normal.background = makeTexture(buttonWidth, buttonHeight, Color.white);
        buttonStyle.hover.background = makeTexture(buttonWidth, buttonHeight, Color.white);

        GUI.skin.toggle = buttonStyle;
    }

    private Texture2D makeTexture(int width, int height, Color color)
    {
        Color[] pix = new Color[width * height];
        for (var i = 0; i < pix.Length; ++i)
        {
            pix[i] = color;
        }

        Texture2D result = new Texture2D(width, height);
        result.SetPixels(pix);
        result.Apply();
        return result;
    }
}