using System;
using UnityEngine;

public class loading : MonoBehaviour
{
    [Obsolete]
    void Start()
    {
        int consentInt = PlayerPrefs.GetInt("result_gdpr", 0);
        bool consent = consentInt != 0;
        if (consent)
        {
            Application.LoadLevel("AppodealDemo");
        }
        else
        {
            Application.LoadLevel("GDPR");
        }
    }
}