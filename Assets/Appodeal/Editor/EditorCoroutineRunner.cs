using UnityEditor;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using System.Linq;

namespace Appodeal.Unity.Editor
{
    [SuppressMessage("ReSharper", "MemberHidesStaticFromOuterClass")]
    [SuppressMessage("ReSharper", "InconsistentNaming")]
    [SuppressMessage("ReSharper", "DelegateSubtraction")]
    public static class EditorCoroutineRunner
    {
        private class EditorCoroutine : IEnumerator
        {
            private Stack<IEnumerator> executionStack;

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
                    object result = i.Current;
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

            public object Current
            {
                get { return executionStack.Peek().Current;} 
            }

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

            // add iterator to buffer first
            buffer.Add(iterator);

            return iterator;
        }

        private static bool Find(IEnumerator iterator)
        {
            // If this iterator is already added
            // Then ignore it this time
            return editorCoroutineList.Any(editorCoroutine => editorCoroutine.Find(iterator));
        }

        private static void Update()
        {
            // EditorCoroutine execution may append new iterators to buffer
            // Therefore we should run EditorCoroutine first
            editorCoroutineList.RemoveAll
            (
                coroutine => coroutine.MoveNext() == false);

            // If we have iterators in buffer
            if (buffer.Count > 0)
            {
                foreach (var iterator in buffer.Where(iterator => !Find(iterator)))
                {
                    // Added this as new EditorCoroutine
                    editorCoroutineList.Add(new EditorCoroutine(iterator));
                }

                // Clear buffer
                buffer.Clear();
            }

            // If we have no running EditorCoroutine
            // Stop calling update anymore
            if (editorCoroutineList.Count == 0)
            {
                EditorApplication.update -= Update;
            }
        }
    }
}