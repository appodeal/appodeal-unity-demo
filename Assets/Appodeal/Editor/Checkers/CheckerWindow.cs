using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEditor;
using UnityEngine;
using UnityEngine.UI;

namespace AppodealAds.Unity.Editor.Checkers {
	public class CheckerWindow : EditorWindow {
		[SerializeField]
		private int currentStep = 0;
		private List<CheckingStep> steps;
		private List<FixProblemInstruction> fixes;
		private Vector2 scrollPositionSteps;
		private Vector2 scrollPositionFixes;
		private Texture checkmark;
		private Texture empty;

		public static CheckerWindow GetWindow () {
			Rect pos = new Rect (Vector2.zero, new Vector2 (800, 400));
			CheckerWindow window = (CheckerWindow) EditorWindow.GetWindowWithRect (typeof (CheckerWindow), pos, true, "Appodeal Integration Check");
			return window;
		}

		private void Awake () { }

		private void init () {
			checkmark = EditorGUIUtility.IconContent ("Collab").image;
			empty = AppodealUnityUtils.makeColorTexture (checkmark.width, checkmark.height, Color.clear);

			steps = new List<CheckingStep> ();
			steps.Add (new PlatformChecker ());
			steps.Add (new MultidexActivator ());
			steps.Add (new ManifestChecker ());
			//steps.Add(new PlayServicesChecker());

			steps = steps.Where (step => step.isRequiredForPlatform (EditorUserBuildSettings.activeBuildTarget)).ToList ();

			if (steps.Count > 0) {
				fixes = steps[currentStep].check ();
				for (int i = 0; i < steps.Count; i++) {
					if (i >= currentStep) return;
					steps[i].done = true;
				}
			}
		}

		void OnGUI () {
			if (steps == null) init ();
			while ((fixes == null || fixes.Count == 0) && currentStep < steps.Count - 1) {
				steps[currentStep].done = true;
				currentStep++;
				fixes = steps[currentStep].check ();
			}
			if ((fixes == null || fixes.Count == 0) && currentStep < steps.Count - 1) steps[currentStep].done = true;
			float w1 = position.width * 0.3f;
			GUIStyle styleWhiteBG = new GUIStyle (GUI.skin.scrollView);
			//styleWhiteBG.normal.background = Texture2D.whiteTexture;
			GUILayout.Label (new GUIContent ("This utility will cleck configuration only for the selected platform: " + EditorUserBuildSettings.activeBuildTarget + "\nIf you want to check your project for another patform, you should select it in the File > Build Settings.", EditorGUIUtility.FindTexture ("console.warnicon")));
			GUILayout.BeginHorizontal ();
			scrollPositionSteps = GUILayout.BeginScrollView (scrollPositionSteps, styleWhiteBG, GUILayout.Width (w1));
			GUIStyle selectedLabelStyle = new GUIStyle (GUI.skin.label);
			selectedLabelStyle.normal.background = AppodealUnityUtils.makeColorTexture (1, 1, Color.gray);
			foreach (CheckingStep step in steps) {
				GUIContent stepContent = new GUIContent (step.getName (), step.done ? checkmark : empty);
				GUILayout.Label (stepContent, step == steps[currentStep] && !step.done ? selectedLabelStyle : GUI.skin.label);
			}
			GUILayout.EndScrollView ();

			GUILayout.BeginVertical ();
			if (steps.Count > 0) {
				GUILayout.Label ("Checking Appodeal Integration. Step " + (currentStep + 1) + "/" + steps.Count);

				scrollPositionFixes = GUILayout.BeginScrollView (scrollPositionFixes, styleWhiteBG);
				if (fixes == null || fixes.Count == 0) {
					GUILayout.Label ("Checking finished. Your project is ready to build.");
				} else {
					foreach (FixProblemInstruction fix in fixes) {
						EditorGUI.BeginDisabledGroup (!fix.canBeResolvedAutomatically ());
						fix.checkedForResolve = GUILayout.Toggle (fix.checkedForResolve, fix.getDescription ());
						EditorGUI.EndDisabledGroup ();
					}
				}
				GUILayout.EndScrollView ();
				GUILayout.BeginHorizontal ();
				if (GUILayout.Button ("Deselect All", GUILayout.Width (80))) setTogglesState (false);
				if (GUILayout.Button ("Select All", GUILayout.Width (80))) setTogglesState (true);
				GUILayout.EndHorizontal ();
			} else {
				GUILayout.Label ("Nothing to check for the selected platform.");
			}
			GUILayout.EndVertical ();

			GUILayout.EndHorizontal ();

			GUILayout.BeginHorizontal ();
			GUILayout.FlexibleSpace ();
			if (GUILayout.Button ("Close", GUILayout.Width (80))) {
				Close ();
			}
			if (fixes != null && fixes.Count != 0) {
				if (GUILayout.Button ("Fix Selected", GUILayout.Width (80))) {
					foreach (FixProblemInstruction fix in fixes) {
						if (fix.checkedForResolve) fix.fixProblem ();
					}
					fixes.Clear ();
				}
			}
			GUILayout.EndHorizontal ();
		}

		private void setTogglesState (bool state) {
			foreach (FixProblemInstruction fix in fixes) {
				fix.checkedForResolve = state;
			}
		}
	}

	public class FixProblemInstruction {
		private bool _checkedForResolve;
		public bool checkedForResolve {
			get {
				return _checkedForResolve;
			}
			set {
				if (isAutoresolvePossible) _checkedForResolve = value;
			}
		}
		private string desc;
		private bool isAutoresolvePossible;

		public FixProblemInstruction (string description, bool autoresolve) {
			desc = description;
			this.isAutoresolvePossible = autoresolve;
		}
		public string getDescription () { return desc; }
		public bool canBeResolvedAutomatically () { return isAutoresolvePossible; }
		public virtual void fixProblem () { }
	}
	public abstract class CheckingStep {
		public bool done = false;
		public abstract string getName ();
		public abstract List<FixProblemInstruction> check ();
		public abstract bool isRequiredForPlatform (UnityEditor.BuildTarget target);
	}
}