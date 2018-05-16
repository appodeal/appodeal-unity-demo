using UnityEngine;

public class loading : MonoBehaviour {

	void Start () {
        int consentInt = PlayerPrefs.GetInt("result_gdpr", 0);
        bool consent = consentInt != 0;
        if(consent) {
            UnityEngine.SceneManagement.SceneManager.LoadScene("AppodealDemo");
        } else {
            UnityEngine.SceneManagement.SceneManager.LoadScene("GDPR");
        }
	}
}
