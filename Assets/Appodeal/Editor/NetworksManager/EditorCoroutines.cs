/*
Copyright (c) 2017 Marijn Zwemmer

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

using UnityEngine;
using System.Collections;
using UnityEditor;
using System.Collections.Generic;
using System;
using System.Diagnostics.CodeAnalysis;
using System.Reflection;
// ReSharper disable All

namespace marijnz.EditorCoroutines
{
	[Obsolete]
	[SuppressMessage("ReSharper", "InconsistentNaming")]
	[SuppressMessage("ReSharper", "ConditionIsAlwaysTrueOrFalse")]
	public class EditorCoroutines
	{
		public class EditorCoroutine
		{
			public ICoroutineYield currentYield = new YieldDefault();
			public readonly IEnumerator routine;
			public readonly string routineUniqueHash;
			public readonly string ownerUniqueHash;
			public readonly string MethodName = "";

			public int ownerHash;
			public string ownerType;
			public bool finished = false;

			public EditorCoroutine(IEnumerator routine, int ownerHash, string ownerType)
			{
				this.routine = routine;
				this.ownerHash = ownerHash;
				this.ownerType = ownerType;
				ownerUniqueHash = ownerHash + "_" + ownerType;

				if (routine != null)
				{
					var split = routine.ToString().Split('<', '>');
					if (split.Length == 3)
					{
						MethodName = split[1];
					}
				}

				routineUniqueHash = ownerHash + "_" + ownerType + "_" + MethodName;
			}

			public EditorCoroutine(string methodName, int ownerHash, string ownerType)
			{
				MethodName = methodName;
				this.ownerHash = ownerHash;
				this.ownerType = ownerType;
				ownerUniqueHash = ownerHash + "_" + ownerType;
				routineUniqueHash = ownerHash + "_" + ownerType + "_" + MethodName;
			}
		}

		public interface ICoroutineYield
		{
			bool IsDone(float deltaTime);
		}

		private struct YieldDefault : ICoroutineYield
		{
			public bool IsDone(float deltaTime)
			{
				return true;
			}
		}

		private struct YieldWaitForSeconds : ICoroutineYield
		{
			public float timeLeft;

			public bool IsDone(float deltaTime)
			{
				timeLeft -= deltaTime;
				return timeLeft < 0;
			}
		}

		private struct YieldCustomYieldInstruction : ICoroutineYield
		{
			public CustomYieldInstruction customYield;

			public bool IsDone(float deltaTime)
			{
				return !customYield.keepWaiting;
			}
		}

		private struct YieldWWW : ICoroutineYield
		{
			public WWW Www;

			public bool IsDone(float deltaTime)
			{
				return Www.isDone;
			}
		}

		private struct YieldAsync : ICoroutineYield
		{
			public AsyncOperation asyncOperation;

			public bool IsDone(float deltaTime)
			{
				return asyncOperation.isDone;
			}
		}

		private struct YieldNestedCoroutine : ICoroutineYield
		{
			public EditorCoroutine coroutine;

			public bool IsDone(float deltaTime)
			{
				return coroutine.finished;
			}
		}

		private static EditorCoroutines instance;

		private readonly Dictionary<string, List<EditorCoroutine>> coroutineDict = new Dictionary<string, List<EditorCoroutine>>();
		private readonly List<List<EditorCoroutine>> tempCoroutineList = new List<List<EditorCoroutine>>();

		private readonly Dictionary<string, Dictionary<string, EditorCoroutine>> coroutineOwnerDict =
			new Dictionary<string, Dictionary<string, EditorCoroutine>>();

		private DateTime previousTimeSinceStartup;

		/// <summary>Starts a coroutine.</summary>
		/// <param name="routine">The coroutine to start.</param>
		/// <param name="thisReference">Reference to the instance of the class containing the method.</param>
		public static EditorCoroutine StartCoroutine(IEnumerator routine, object thisReference)
		{
			CreateInstanceIfNeeded();
			return instance.GoStartCoroutine(routine, thisReference);
		}

		/// <summary>Starts a coroutine.</summary>
		/// <param name="methodName">The name of the coroutine method to start.</param>
		/// <param name="thisReference">Reference to the instance of the class containing the method.</param>
		public static EditorCoroutine StartCoroutine(string methodName, object thisReference)
		{
			return StartCoroutine(methodName, null, thisReference);
		}

		/// <summary>Starts a coroutine.</summary>
		/// <param name="methodName">The name of the coroutine method to start.</param>
		/// <param name="value">The parameter to pass to the coroutine.</param>
		/// <param name="thisReference">Reference to the instance of the class containing the method.</param>
		public static EditorCoroutine StartCoroutine(string methodName, object value, object thisReference)
		{
			var methodInfo = thisReference.GetType()
				.GetMethod(methodName, BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance);
			if (methodInfo == null)
			{
				Debug.LogError("Coroutine '" + methodName + "' couldn't be started, the method doesn't exist!");
			}
			object returnValue;

			System.Diagnostics.Debug.Assert(methodInfo != null, nameof(methodInfo) + " != null");
			returnValue = methodInfo.Invoke(thisReference, value == null ? null : new[] {value});

			if (returnValue is IEnumerator)
			{
				CreateInstanceIfNeeded();
				return instance.GoStartCoroutine((IEnumerator) returnValue, thisReference);
			}

			Debug.LogError("Coroutine '" + methodName + "' couldn't be started, the method doesn't return an IEnumerator!");

			return null;
		}

		/// <summary>Stops all coroutines being the routine running on the passed instance.</summary>
		/// <param name="routine"> The coroutine to stop.</param>
		/// <param name="thisReference">Reference to the instance of the class containing the method.</param>
		public static void StopCoroutine(IEnumerator routine, object thisReference)
		{
			CreateInstanceIfNeeded();
			instance.GoStopCoroutine(routine, thisReference);
		}

		/// <summary>
		/// Stops all coroutines named methodName running on the passed instance.</summary>
		/// <param name="methodName"> The name of the coroutine method to stop.</param>
		/// <param name="thisReference">Reference to the instance of the class containing the method.</param>
		public static void StopCoroutine(string methodName, object thisReference)
		{
			CreateInstanceIfNeeded();
			instance.GoStopCoroutine(methodName, thisReference);
		}

		/// <summary>
		/// Stops all coroutines running on the passed instance.</summary>
		/// <param name="thisReference">Reference to the instance of the class containing the method.</param>
		public static void StopAllCoroutines(object thisReference)
		{
			CreateInstanceIfNeeded();
			instance.GoStopAllCoroutines(thisReference);
		}

		private static void CreateInstanceIfNeeded()
		{
			if (instance != null) return;
			instance = new EditorCoroutines();
			instance.Initialize();
		}

		private void Initialize()
		{
			previousTimeSinceStartup = DateTime.Now;
			EditorApplication.update += OnUpdate;
		}

		private void GoStopCoroutine(IEnumerator routine, object thisReference)
		{
			GoStopActualRoutine(CreateCoroutine(routine, thisReference));
		}

		private void GoStopCoroutine(string methodName, object thisReference)
		{
			GoStopActualRoutine(CreateCoroutineFromString(methodName, thisReference));
		}

		private void GoStopActualRoutine(EditorCoroutine routine)
		{
			if (!coroutineDict.ContainsKey(routine.routineUniqueHash)) return;
			coroutineOwnerDict[routine.ownerUniqueHash].Remove(routine.routineUniqueHash);
			coroutineDict.Remove(routine.routineUniqueHash);
		}

		private void GoStopAllCoroutines(object thisReference)
		{
			var coroutine = CreateCoroutine(null, thisReference);
			if (!coroutineOwnerDict.ContainsKey(coroutine.ownerUniqueHash)) return;
			foreach (var couple in coroutineOwnerDict[coroutine.ownerUniqueHash])
			{
				coroutineDict.Remove(couple.Value.routineUniqueHash);
			}
			coroutineOwnerDict.Remove(coroutine.ownerUniqueHash);
		}

		private EditorCoroutine GoStartCoroutine(IEnumerator routine, object thisReference)
		{
			if (routine == null)
			{
				Debug.LogException(new Exception("IEnumerator is null!"), null);
			}
			var coroutine = CreateCoroutine(routine, thisReference);
			GoStartCoroutine(coroutine);
			return coroutine;
		}

		private void GoStartCoroutine(EditorCoroutine coroutine)
		{
			if (!coroutineDict.ContainsKey(coroutine.routineUniqueHash))
			{
				var newCoroutineList = new List<EditorCoroutine>();
				coroutineDict.Add(coroutine.routineUniqueHash, newCoroutineList);
			}
			coroutineDict[coroutine.routineUniqueHash].Add(coroutine);

			if (!coroutineOwnerDict.ContainsKey(coroutine.ownerUniqueHash))
			{
				var newCoroutineDict = new Dictionary<string, EditorCoroutine>();
				coroutineOwnerDict.Add(coroutine.ownerUniqueHash, newCoroutineDict);
			}

			// If the method from the same owner has been stored before, it doesn't have to be stored anymore,
			// One reference is enough in order for "StopAllCoroutines" to work
			if (!coroutineOwnerDict[coroutine.ownerUniqueHash].ContainsKey(coroutine.routineUniqueHash))
			{
				coroutineOwnerDict[coroutine.ownerUniqueHash].Add(coroutine.routineUniqueHash, coroutine);
			}

			MoveNext(coroutine);
		}

		private static EditorCoroutine CreateCoroutine(IEnumerator routine, object thisReference)
		{
			return new EditorCoroutine(routine, thisReference.GetHashCode(), thisReference.GetType().ToString());
		}

		private static EditorCoroutine CreateCoroutineFromString(string methodName, object thisReference)
		{
			return new EditorCoroutine(methodName, thisReference.GetHashCode(), thisReference.GetType().ToString());
		}

		private void OnUpdate()
		{
			var deltaTime = (float) (DateTime.Now.Subtract(previousTimeSinceStartup).TotalMilliseconds / 1000.0f);

			previousTimeSinceStartup = DateTime.Now;
			if (coroutineDict.Count == 0)
			{
				return;
			}

			tempCoroutineList.Clear();
			foreach (var pair in coroutineDict)
				tempCoroutineList.Add(pair.Value);

			for (var i = tempCoroutineList.Count - 1; i >= 0; i--)
			{
				var coroutines = tempCoroutineList[i];

				for (var j = coroutines.Count - 1; j >= 0; j--)
				{
					var coroutine = coroutines[j];

					if (!coroutine.currentYield.IsDone(deltaTime))
					{
						continue;
					}

					if (!MoveNext(coroutine))
					{
						coroutines.RemoveAt(j);
						coroutine.currentYield = null;
						coroutine.finished = true;
					}

					if (coroutines.Count == 0)
					{
						coroutineDict.Remove(coroutine.ownerUniqueHash);
					}
				}
			}
		}

		private static bool MoveNext(EditorCoroutine coroutine)
		{
			return coroutine.routine.MoveNext() && Process(coroutine);
		}

		private static bool Process(EditorCoroutine coroutine)
		{
			var current = coroutine.routine.Current;
			if (current == null)
			{
				coroutine.currentYield = new YieldDefault();
			}
			else if (current is WaitForSeconds)
			{
				var seconds = float.Parse(GetInstanceField(typeof(WaitForSeconds), current, "m_Seconds").ToString());
				coroutine.currentYield = new YieldWaitForSeconds {timeLeft = seconds};
			}
			else if (current is CustomYieldInstruction)
			{
				coroutine.currentYield = new YieldCustomYieldInstruction()
				{
					customYield = current as CustomYieldInstruction
				};
			}
			else if (current is WWW)
			{
				coroutine.currentYield = new YieldWWW {Www = (WWW) current};
			}
			else if (current is WaitForFixedUpdate || current is WaitForEndOfFrame)
			{
				coroutine.currentYield = new YieldDefault();
			}
			else if (current is AsyncOperation)
			{
				coroutine.currentYield = new YieldAsync {asyncOperation = (AsyncOperation) current};
			}
			else if (current is EditorCoroutine)
			{
				coroutine.currentYield = new YieldNestedCoroutine { coroutine= (EditorCoroutine) current};
			}
			else
			{
				Debug.LogException(
					new Exception("<" + coroutine.MethodName + "> yielded an unknown or unsupported type! (" + current.GetType() + ")"),
					null);
				coroutine.currentYield = new YieldDefault();
			}
			return true;
		}

		private static object GetInstanceField(Type type, object instance, string fieldName)
		{
			const BindingFlags bindFlags = BindingFlags.Instance | BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Static;
			var field = type.GetField(fieldName, bindFlags);
			System.Diagnostics.Debug.Assert(field != null, nameof(field) + " != null");
			return field.GetValue(instance);
		}
	}
}
