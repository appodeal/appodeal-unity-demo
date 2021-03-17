using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using System.Linq;
using AppodealAds.Unity.Editor.Utils;
using UnityEditor;
using UnityEngine;

namespace AppodealAds.Unity.Editor.Checkers
{
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    public class CheckerWindow : EditorWindow
    {
        [SerializeField] private int currentStep;
        private List<CheckingStep> steps;
        private List<FixProblemInstruction> fixes;
        private Vector2 scrollPositionSteps;
        private Vector2 scrollPositionFixes;
        private Texture checkmark;
        private Texture empty;

        public static CheckerWindow GetWindow()
        {
            var pos = new Rect(Vector2.zero, new Vector2(800, 400));
            var window = (CheckerWindow) GetWindowWithRect(typeof(CheckerWindow), pos, true,
                "Appodeal Integration Check");
            return window;
        }

        private void init()
        {
            checkmark = EditorGUIUtility.IconContent("Collab").image;
            empty = AppodealUnityUtils.makeColorTexture(checkmark.width, checkmark.height, Color.clear);
            steps = new List<CheckingStep> {new PlatformChecker(), new MultidexActivator(), new ManifestChecker()};
            steps = steps.Where(step => step.isRequiredForPlatform(EditorUserBuildSettings.activeBuildTarget)).ToList();

            if (steps.Count <= 0) return;
            fixes = steps[currentStep].check();
            for (var i = 0; i < steps.Count; i++)
            {
                if (i >= currentStep) return;
                steps[i].done = true;
            }
        }

        private void OnGUI()
        {
            if (steps == null) init();
            while ((fixes == null || fixes.Count == 0) && currentStep < steps.Count - 1)
            {
                steps[currentStep].done = true;
                currentStep++;
                fixes = steps[currentStep].check();
            }

            if ((fixes == null || fixes.Count == 0) && currentStep < steps.Count - 1) steps[currentStep].done = true;
            var w1 = position.width * 0.3f;
            var styleWhiteBG = new GUIStyle(GUI.skin.scrollView);
            GUILayout.Label(new GUIContent(
                "This utility will check configuration only for the selected platform: " +
                EditorUserBuildSettings.activeBuildTarget +
                "\nIf you want to check your project for another platform, you should select it in the File > Build Settings.",
                EditorGUIUtility.FindTexture("console.warnicon")));
            GUILayout.BeginHorizontal();
            scrollPositionSteps = GUILayout.BeginScrollView(scrollPositionSteps, styleWhiteBG, GUILayout.Width(w1));
            var selectedLabelStyle = new GUIStyle(GUI.skin.label)
            {
                normal = {background = AppodealUnityUtils.makeColorTexture(1, 1, Color.gray)}
            };
            foreach (var step in steps)
            {
                var stepContent = new GUIContent(step.getName(), step.done ? checkmark : empty);
                GUILayout.Label(stepContent,
                    step == steps[currentStep] && !step.done ? selectedLabelStyle : GUI.skin.label);
            }

            GUILayout.EndScrollView();

            GUILayout.BeginVertical();
            if (steps.Count > 0)
            {
                GUILayout.Label("Checking Appodeal Integration. Step " + (currentStep + 1) + "/" + steps.Count);

                scrollPositionFixes = GUILayout.BeginScrollView(scrollPositionFixes, styleWhiteBG);
                if (fixes == null || fixes.Count == 0)
                {
                    GUILayout.Label("Checking finished. Your project is ready to build.");
                }
                else
                {
                    foreach (var fix in fixes)
                    {
                        EditorGUI.BeginDisabledGroup(!fix.canBeResolvedAutomatically());
                        fix.checkedForResolve = GUILayout.Toggle(fix.checkedForResolve, fix.getDescription());
                        EditorGUI.EndDisabledGroup();
                    }
                }

                GUILayout.EndScrollView();
                GUILayout.BeginHorizontal();
                if (GUILayout.Button("Deselect All", GUILayout.Width(80))) setTogglesState(false);
                if (GUILayout.Button("Select All", GUILayout.Width(80))) setTogglesState(true);
                GUILayout.EndHorizontal();
            }
            else
            {
                GUILayout.Label("Nothing to check for the selected platform.");
            }

            GUILayout.EndVertical();

            GUILayout.EndHorizontal();

            GUILayout.BeginHorizontal();
            GUILayout.FlexibleSpace();
            if (GUILayout.Button("Close", GUILayout.Width(80)))
            {
                Close();
            }

            if (fixes != null && fixes.Count != 0)
            {
                if (GUILayout.Button("Fix Selected", GUILayout.Width(80)))
                {
                    foreach (var fix in fixes.Where(fix => fix.checkedForResolve))
                    {
                        fix.fixProblem();
                    }

                    fixes.Clear();
                }
            }

            GUILayout.EndHorizontal();
        }

        private void setTogglesState(bool state)
        {
            foreach (var fix in fixes)
            {
                fix.checkedForResolve = state;
            }
        }
    }

    [SuppressMessage("ReSharper", "InconsistentNaming")]
    public class FixProblemInstruction
    {
        private bool _checkedForResolve;

        public bool checkedForResolve
        {
            get
            {
                return _checkedForResolve;
            } 
            set
            {
                if (isAutoresolvePossible) _checkedForResolve = value;
            }
        }

        private readonly string desc;
        private readonly bool isAutoresolvePossible;

        public FixProblemInstruction(string description, bool autoresolve)
        {
            desc = description;
            isAutoresolvePossible = autoresolve;
        }

        public string getDescription()
        {
            return desc;
        }

        public bool canBeResolvedAutomatically()
        {
            return isAutoresolvePossible;
        }

        public virtual void fixProblem()
        {
        }
    }

    [SuppressMessage("ReSharper", "InconsistentNaming")]
    public abstract class CheckingStep
    {
        public bool done;
        public abstract string getName();
        public abstract List<FixProblemInstruction> check();
        public abstract bool isRequiredForPlatform(BuildTarget target);
    }
}