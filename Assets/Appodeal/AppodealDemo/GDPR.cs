using System;
using System.Diagnostics.CodeAnalysis;
using UnityEngine;
using UnityEngine.UI;

[SuppressMessage("ReSharper", "InconsistentNaming")]
public class GDPR : MonoBehaviour
{
    public Image mainPanel;
    public Image yesPanel;
    public Image noPanel;
    public Text mainText;

    private const string MainString = " personalizes your advertising experience using Appodeal. " +
                                      "Appodeal and its partners may collect and process personal data such as device identifiers, " +
                                      "location data, and other demographic and interest data to provide advertising experience tailored to you. " +
                                      "By consenting to this improved ad experience, you'll see ads that Appodeal and " +
                                      "its partners believe are more relevant to you. Learn more." +
                                      " By agreeing, you confirm that you are over the age of 16 and would like a personalized ad experience.";

    private void Start()
    {
        mainText.text = "Appodeal Demo" + MainString;
    }

    public void onYesClick()
    {
        PlayerPrefs.SetInt("result_gdpr", 1);
        PlayerPrefs.SetInt("result_gdpr_sdk", 1);
        mainPanel.gameObject.SetActive(false);
        yesPanel.gameObject.SetActive(true);
    }

    public void onNoClick()
    {
        PlayerPrefs.SetInt("result_gdpr", 1);
        PlayerPrefs.SetInt("result_gdpr_sdk", 0);
        mainPanel.gameObject.SetActive(false);
        noPanel.gameObject.SetActive(true);
    }

    public void onPLClick()
    {
        Application.OpenURL("https://www.appodeal.com/privacy-policy");
    }

    [Obsolete]
    public void onCloseClick()
    {
        Application.LoadLevel("AppodealDemo");
    }
}