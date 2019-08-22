using System.Diagnostics.CodeAnalysis;
using AppodealAds.Unity.Api;
using AppodealAds.Unity.Common;
using UnityEngine;

// Example script showing how to invoke the Appodeal Ads Unity plugin.
public class MrecSample : MonoBehaviour, IMrecAdListener
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

    public void init()
    {
        /*
         * To enable debug logging use the following method before initialization: 
         */
        Appodeal.setLogLevel(Appodeal.LogLevel.Verbose);

        /*
         * To enable test mode use the following method before initialization:
         * Test mode allows you to show our test ads with 100% filtrate.
         */
        Appodeal.setTesting(true);

        /*
         * To initialize Appodeal SDK use the following method:
         * Publishers need to pass the boolean consent flag(with 'false' meaning that the user declined to give the consent)
         * to the Appodeal.initialize() method of our SDK.
         */
        Appodeal.initialize(appKey, Appodeal.MREC, false);

        /*
         * The callbacks are used to track different events in the lifecycle of an ad, e.g.
         * when an ad was clicked on or closed. To implement them, you need to follow these steps:
         * - Extend your class with IBannerAdListener
         * - to call the following method:
         */
        Appodeal.setMrecCallbacks(this);
    }

    private void OnGUI()
    {
        initStyles();

        if (GUI.Button(new Rect(widthScale, heightScale, buttonWidth, buttonHeight), "INITIALIZE", buttonStyle))
            init();

        if (GUI.Button(new Rect(widthScale, heightScale + 1 * heightScale, buttonWidth, buttonHeight),
            "SHOW MREC",
            buttonStyle))
            showMrec();

        if (GUI.Button(new Rect(widthScale, heightScale + 2 * heightScale, buttonWidth, buttonHeight),
            "HIDE MREC", buttonStyle))
            hideMrec();
    }

    public void showMrec()
    {
        /*
         * To show Appodeal.MREC use the following code:
         * For xPosition and yPosition use custom int value.
         */
        Appodeal.showMrecView (Screen.currentResolution.height - Screen.currentResolution.height / 10, 
            Appodeal.BANNER_HORIZONTAL_CENTER, "mrec_view");
    }

    public void hideMrec()
    {
        /*
         * To hide Mrec use the following method:
         */
        Appodeal.hideMrecView ();
    }

    /*
    * The screen rotation always recreates the Unity activity, which may cause a banner disappearing.
    * To prevent that, add the following code within the OnApplicationFocus() method of your MonoBehaviour:
    */
    private void OnApplicationFocus(bool hasFocus)
    {
        if (hasFocus)
        {
            Appodeal.onResume(Appodeal.BANNER_BOTTOM);
        }
    }

    #region Mrec callback handlers
    public void onMrecLoaded (bool precache) { print ("mrec loaded"); }
    public void onMrecFailedToLoad () { print ("mrec failed"); }
    public void onMrecShown () { print ("mrec opened"); }
    public void onMrecClicked () { print ("mrec clicked"); }
    public void onMrecExpired () { print ("mrec expired"); }
    #endregion

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

    [SuppressMessage("ReSharper", "SuggestVarOrType_Elsewhere")]
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