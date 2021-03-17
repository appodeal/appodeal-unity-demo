using System;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using System.IO;
using System.Xml;
using UnityEngine;

namespace Appodeal.Editor.AppodealManager
{
    [SuppressMessage("ReSharper", "MemberInitializerValueIgnored")]
    [SuppressMessage("ReSharper", "UnusedVariable")]
    [SuppressMessage("ReSharper", "UnusedMethodReturnValue.Local")]
    [SuppressMessage("ReSharper", "RedundantToStringCall")]
    internal class XmlUtilities
    {
        public static int Num;
        internal static bool ParseXmlTextFileElements(
            string filename,
            ParseElement parseElement)
        {
            if (!File.Exists(filename))
                return false;
            try
            {
                using (var xmlTextReader = new XmlTextReader(new StreamReader(filename)))
                {
                    var elementNameStack = new List<string>();
                    Func<string> func = () => elementNameStack.Count > 0 ? elementNameStack[0] : "";
                    var reader = new Reader(xmlTextReader);
                    while (reader.Reading)
                    {
                        var name = xmlTextReader.Name;
                        var parentElementName = func();
                        if (xmlTextReader.NodeType == XmlNodeType.Element)
                        {
                            if (parseElement(xmlTextReader, name, true, parentElementName, elementNameStack))
                                elementNameStack.Insert(0, name);
                            if (reader.XmlReaderIsAhead)
                            {
                                reader.Read();
                                continue;
                            }
                        }

                        if ((xmlTextReader.NodeType == XmlNodeType.EndElement ||
                             xmlTextReader.NodeType == XmlNodeType.Element && xmlTextReader.IsEmptyElement) &&
                            !string.IsNullOrEmpty(parentElementName))
                        {
                            if (elementNameStack[0] == name)
                                elementNameStack.RemoveAt(0);
                            else
                                elementNameStack.Clear();
                            Num = parseElement(xmlTextReader, name, false, func(), elementNameStack) ? 1 : 0;
                        }

                        reader.Read();
                    }
                }
            }
            catch (XmlException ex)
            {
                Debug.Log(string.Format("Failed while parsing XML file {0}\n{1}\n", filename, ex.ToString()));
                return false;
            }

            return true;
        }

        private class Reader
        {
            private int lineNumber = -1;
            private int linePosition = -1;
            private readonly XmlTextReader reader;

            public Reader(XmlTextReader xmlReader)
            {
                reader = xmlReader;
                Reading = reader.Read();
                lineNumber = reader.LineNumber;
                linePosition = reader.LinePosition;
            }

            public bool Reading { private set; get; }

            public bool XmlReaderIsAhead
            {
                get
                {
                    if (lineNumber == reader.LineNumber)
                        return linePosition != reader.LinePosition;
                    return true;
                }
            }

            public bool Read()
            {
                var flag = false;
                if (Reading && !XmlReaderIsAhead)
                {
                    Reading = reader.Read();
                    flag = true;
                }

                lineNumber = reader.LineNumber;
                linePosition = reader.LinePosition;
                return flag;
            }
        }

        internal delegate bool ParseElement(
            XmlTextReader reader,
            string elementName,
            bool isStart,
            string parentElementName,
            List<string> elementNameStack);
    }
}