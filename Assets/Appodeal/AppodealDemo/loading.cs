using UnityEngine;

public class loading : MonoBehaviour {

	void Start () {
        int consentInt = PlayerPrefs.GetInt("result_gdpr", 0);
        bool consent = consentInt != 0;
        Debug.Log("Appodeal loading...");
        if(consent) {
            UnityEngine.SceneManagement.SceneManager.LoadScene("AppodealDemo");
        } else {
            UnityEngine.SceneManagement.SceneManager.LoadScene("GDPR");
        }
	}
}
