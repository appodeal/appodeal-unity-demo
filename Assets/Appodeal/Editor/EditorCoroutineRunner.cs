using UnityEditor;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using System.Linq;

namespace AppodealAds.Unity.Editor
{
    [SuppressMessage("ReSharper", "MemberHidesStaticFromOuterClass")]
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "DelegateSubtraction")]
    [SuppressMessage("ReSharper", "UnusedMember.Global")]
    public static class EditorCoroutineRunner
    {
        private class EditorCoroutine : IEnumerator
        {
            private readonly Stack<IEnumerator> executionStack;

            public EditorCoroutine(IEnumerator iterator)
            {
                executionStack = new Stack<IEnumerator>();
                executionStack.Push(iterator);
            }

            public bool MoveNext()
            {
                var i = executionStack.Peek();

                if (i.MoveNext())
                {
                    var result = i.Current;
                    var enumerator = result as IEnumerator;
                    if (enumerator != null)
                    {
                        executionStack.Push(enumerator);
                    }

                    return true;
                }

                if (executionStack.Count <= 1) return false;
                executionStack.Pop();
                return true;
            }

            public void Reset()
            {
                throw new System.NotSupportedException("This Operation Is Not Supported.");
            }

            public object Current => executionStack.Peek().Current;

            public bool Find(IEnumerator iterator)
            {
                return executionStack.Contains(iterator);
            }
        }

        private static List<EditorCoroutine> editorCoroutineList;
        private static List<IEnumerator> buffer;

        public static IEnumerator StartEditorCoroutine(IEnumerator iterator)
        {
            if (editorCoroutineList == null)
            {
                editorCoroutineList = new List<EditorCoroutine>();
            }

            if (buffer == null)
            {
                buffer = new List<IEnumerator>();
            }

            if (editorCoroutineList.Count == 0)
            {
                EditorApplication.update += Update;
            }

            buffer.Add(iterator);

            return iterator;
        }

        private static bool Find(IEnumerator iterator)
        {
            return editorCoroutineList.Any(editorCoroutine => editorCoroutine.Find(iterator));
        }

        private static void Update()
        {
            editorCoroutineList.RemoveAll
            (
                coroutine => coroutine.MoveNext() == false);

            if (buffer.Count > 0)
            {
                foreach (var iterator in buffer.Where(iterator => !Find(iterator)))
                {
                    editorCoroutineList.Add(new EditorCoroutine(iterator));
                }

                buffer.Clear();
            }

          
            if (editorCoroutineList.Count == 0)
            {
                EditorApplication.update -= Update;
            }
        }
    }
}