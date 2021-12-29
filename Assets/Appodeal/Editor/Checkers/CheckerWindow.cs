using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using UnityEditor;

namespace AppodealAds.Unity.Editor.Checkers
{
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