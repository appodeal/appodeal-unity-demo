using UnityEngine;

public class GDPR : MonoBehaviour {

    GUIStyle logoBackgroundStyle = new GUIStyle();
    GUIStyle mainLabelStyle = new GUIStyle();
    GUIStyle mainTextStyle = new GUIStyle();
    GUIStyle button1Style = new GUIStyle();
    GUIStyle button2Style = new GUIStyle();
    GUIContent logoContent;
    public Texture2D logoImage;
    public Texture2D closeImage;
    Texture2D closeTex;

    bool answerYes = false;
    bool answerNo = false;

    string mainText = " personalizes your \n" +
        "advertising experience using Appodeal.\n" +
        "Appodeal and its partners may collect\n" +
        "and process personal data such as\n" +
        "device identifiers, location data, and\n" +
        "demographic and interest data to provide\n" +
        "other advertising experience tailored to\n" +
        "you. By consenting to this improved ad\n" +
        "experience, you'll see ads that Appodeal\n" +
        "and its partners believe are more\n" +
        "relevant to you.";

    string mainText1 = "Great. We hope you enjoy\n" +
        "your personalized ad experience.";

    string mainText2 = "Appodeal won't collect your data\n" +
        "through this app for personalized\n" +
        "advertising. If you consent yo Appodeal\n" +
        "personalizing your advertising experience\n" +
        "in a different app, we will still\n" +
        "collect your data through that app.";

    string additionalText = "By agreeing, you confirm that you are\n" +
        "over the age of 16 and would like a" +
        "\npersonalized ad experience.";

    string additionalText1 = "I understand that i will still see ads, \n" +
        "but they may not be as relevant\n" +
        "to my interests.";

   

    void Start()
    {
        //Logo
        Texture2D logoTex = Instantiate(logoImage);
        logoContent = new GUIContent(logoTex);

        int heightRatio = logoImage.width / logoImage.height;
        int logoWidth = Screen.width - Screen.width / 3;
        int logoHeight = logoWidth / heightRatio;
        TextureScale.Bilinear(logoTex, logoWidth, logoHeight);

        closeTex = Instantiate(closeImage);
        TextureScale.Bilinear(closeTex, Screen.width / 8, Screen.width / 8);

        Texture2D logoBackImg = MakeTexure(Screen.width, Screen.height / 6, Color.red);
        logoBackgroundStyle.normal.background = logoBackImg;
        logoBackgroundStyle.contentOffset = new Vector2((Screen.width - logoTex.width) / 2, 40);

        //Page Label
        mainLabelStyle.normal.textColor = Color.black;
        mainLabelStyle.fontStyle = FontStyle.Bold;
        mainLabelStyle.alignment = TextAnchor.UpperCenter;
        mainLabelStyle.fontSize = Screen.height / 30;

        //Main Text
        mainTextStyle.normal.textColor = Color.black;
        mainTextStyle.alignment = TextAnchor.UpperLeft;
        mainTextStyle.fontSize = Screen.height / 40;
        mainTextStyle.richText = true;

        //Button 1
        button1Style.fontSize = Screen.height / 40;
        button1Style.active.background = MakeTexure(Screen.width - 40, Screen.height / 15, Color.red);
        button1Style.focused.background = MakeTexure(Screen.width - 40, Screen.height / 15, Color.red);
        button1Style.normal.background = MakeTexure(Screen.width - 40, Screen.height / 15, Color.red);
        button1Style.hover.background = MakeTexure(Screen.width - 40, Screen.height / 15, Color.red);
        button1Style.alignment = TextAnchor.MiddleCenter;
        button1Style.normal.textColor = Color.white;
        button1Style.hover.textColor = Color.white;
        button1Style.active.textColor = Color.white;
        button1Style.focused.textColor = Color.white;

        //Button 2
        button2Style.fontSize = Screen.height / 40;
        button2Style.active.background = MakeTexure(Screen.width - 40, Screen.height / 15, Color.white);
        button2Style.focused.background = MakeTexure(Screen.width - 40, Screen.height / 15, Color.white);
        button2Style.normal.background = MakeTexure(Screen.width - 40, Screen.height / 15, Color.white);
        button2Style.hover.background = MakeTexure(Screen.width - 40, Screen.height / 15, Color.white);
        button2Style.alignment = TextAnchor.MiddleCenter;
        button2Style.normal.textColor = Color.black;
        button2Style.hover.textColor = Color.black;
        button2Style.active.textColor = Color.black;
        button2Style.focused.textColor = Color.black;
    }

    private Texture2D MakeTexure(int width, int height, Color color)
    {
        Color[] pix = new Color[width * height];
        for (int i = 0; i < pix.Length; ++i)
        {
            pix[i] = color;
        }
        Texture2D result = new Texture2D(width, height);
        result.SetPixels(pix);
        result.Apply();
        return result;
    }

	void OnGUI()
	{
        GUI.Box(new Rect(0, 0, Screen.width, Screen.height / 6), logoContent, logoBackgroundStyle);
        GUI.Label(new Rect(20, Screen.height / 5 - 30, Screen.width - 40, Screen.height / 6), "Personalize Your \nAd Experience", mainLabelStyle);

        if (!answerYes && !answerNo)
        {
            GUI.Label(new Rect(20, Screen.height / 4 + 20, Screen.width - 40, Screen.height / 6), Application.productName + mainText, mainTextStyle);
            GUI.Label(new Rect(20, Screen.height - Screen.height / 3 - 40, Screen.width - 20, Screen.height / 6), additionalText, mainTextStyle);
            if (GUI.Button(new Rect(20, Screen.height - Screen.height / 4 - 10, Screen.width - 40, Screen.height / 15), "YES, I AGREE", button1Style))
            {
                PlayerPrefs.SetInt("result_gdpr", 1);
                answerYes = true;
            }
            if (GUI.Button(new Rect(20, Screen.height - Screen.height / 5 + 10, Screen.width - 40, Screen.height / 15), "NO, THANKS", button2Style))
            {
                PlayerPrefs.SetInt("result_gdpr", 0);
                answerNo = true;
            }
            GUI.Label(new Rect(20, Screen.height - Screen.height / 8, Screen.width - 40, Screen.height / 6), additionalText1, mainTextStyle);
        } else if (answerYes) {
            GUI.Label(new Rect(20, Screen.height / 4 + 20, Screen.width - 40, Screen.height / 6), mainText1, mainTextStyle);
            if (GUI.Button(new Rect(20, Screen.height - Screen.height / 5, Screen.width - 40, Screen.height / 15), closeTex, button2Style))
            {
                UnityEngine.SceneManagement.SceneManager.LoadScene("AppodealDemo");
            }
            if (GUI.Button(new Rect(20, Screen.height - Screen.height / 8, Screen.width - 40, Screen.height / 15), "CLOSE", button2Style))
            {
                UnityEngine.SceneManagement.SceneManager.LoadScene("AppodealDemo");
            }
        } else if (answerNo) {
            GUI.Label(new Rect(20, Screen.height / 4 + 20, Screen.width - 40, Screen.height / 6),  mainText2, mainTextStyle);
            if (GUI.Button(new Rect(20, Screen.height - Screen.height / 5, Screen.width - 40, Screen.height / 15), closeTex, button2Style))
            {
                UnityEngine.SceneManagement.SceneManager.LoadScene("AppodealDemo");
            }
            if (GUI.Button(new Rect(20, Screen.height - Screen.height / 8, Screen.width - 40, Screen.height / 15), "CLOSE", button2Style))
            {
                UnityEngine.SceneManagement.SceneManager.LoadScene("AppodealDemo");
            }
        }
    }
}