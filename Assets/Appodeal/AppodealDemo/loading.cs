using UnityEngine;

public class loading : MonoBehaviour {

	void Start () {
		int consentInt = PlayerPrefs.GetInt ("result_gdpr", 0);
		bool consent = consentInt != 0;
		if (consent) {
#if UNITY_5_3_OR_NEWER
			UnityEngine.SceneManagement.SceneManager.LoadScene ("AppodealDemo");
#else
			Application.LoadLevel ("AppodealDemo");
#endif
		} else {
#if UNITY_5_3_OR_NEWER
			UnityEngine.SceneManagement.SceneManager.LoadScene ("GDPR");
#else
			Application.LoadLevel ("GDPR");
#endif
		}
	}
}