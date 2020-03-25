using System;
using System.Diagnostics.CodeAnalysis;
using UnityEngine;

[SuppressMessage("ReSharper", "InconsistentNaming")]
public class loading : MonoBehaviour
{
    [Obsolete]
    private void Start()
    {
        var consentInt = PlayerPrefs.GetInt("result_gdpr", 0);
        var consent = consentInt != 0;
        Application.LoadLevel(consent ? "AppodealDemo" : "GDPR");
    }
}