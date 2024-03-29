﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using System.IO;
using RGiesecke.DllExport;
using System.Net.Http;

namespace a4es_debug
{
    class A4ESDebugExtension
    {

        public static ExtensionCallback callback;
        public delegate int ExtensionCallback([MarshalAs(UnmanagedType.LPStr)] string name, [MarshalAs(UnmanagedType.LPStr)] string function, [MarshalAs(UnmanagedType.LPStr)] string data);

        public static string logsDirPath = Environment.GetFolderPath(Environment.SpecialFolder.LocalApplicationData) + "\\Arma 3";
        public static string currentRPTFilePath = "";
        public static int lastRPTLineNumber = 0;

        public static FileSystemWatcher rptWatcher;

        public static List<string> logsList = new List<string>();

        [DllExport("RVExtensionRegisterCallback", CallingConvention = CallingConvention.Winapi)]
        public static void RVExtensionRegisterCallback([MarshalAs(UnmanagedType.FunctionPtr)] ExtensionCallback func)
        {
            callback = func;
        }

        [DllExport("RVExtensionVersion", CallingConvention = CallingConvention.Winapi)]
        public static void RvExtensionVersion(StringBuilder output, int outputSize)
        {
            output.Append("A4ES Debug Extension v1.1.0");
        }

        [DllExport("RVExtension", CallingConvention = CallingConvention.Winapi)]
        public static void RvExtension(StringBuilder output, int outputSize,
            [MarshalAs(UnmanagedType.LPStr)] string function)
        {
            // Force rpt update
            if (function == "updateLogsList")
            {
                Task.Run(UpdateLogsList);

                output.Append("true");
                return;
            }

            // Force rpt scan
            if (function == "scanRPTFiles")
            {
                Task.Run(ScanRPTFiles);

                output.Append("true");
                return;
            }

            // Return logs count
            if (function == "getLogsListCount")
            {
                int count = logsList.Count();
                output.Append("" + count);
                return;
            }

            // Return next log
            if (function == "getLog")
            {
                if (logsList.Count() > 0)
                {
                    string log = logsList.First();
                    logsList.RemoveAt(0);

                    output.Append(log);
                }
                else
                {
                    output.Append("");
                }

                return;
            }

            // Start watching rpt
            if (function == "missionPreviewStart")
            {
                logsList.Clear();
                ScanRPTFiles();

                if (rptWatcher == null)
                {
                    rptWatcher = new FileSystemWatcher(logsDirPath);
                    rptWatcher.NotifyFilter = NotifyFilters.Attributes
                                         | NotifyFilters.CreationTime
                                         | NotifyFilters.DirectoryName
                                         | NotifyFilters.FileName
                                         | NotifyFilters.LastAccess
                                         | NotifyFilters.LastWrite
                                         | NotifyFilters.Security
                                         | NotifyFilters.Size;

                    rptWatcher.Changed += OnRPTChanged;
                    rptWatcher.Created += OnRPTCreated;
                    rptWatcher.Deleted += OnRPTDeleted;
                    rptWatcher.Renamed += OnRPTRenamed;

                    rptWatcher.Filter = "*.rpt";
                    rptWatcher.IncludeSubdirectories = false;
                }

                rptWatcher.EnableRaisingEvents = true;

                output.Append("true");
                return;
            }

            // Stop watching rpt
            if (function == "missionPreviewEnd")
            {
                if (rptWatcher != null)
                {
                    rptWatcher.EnableRaisingEvents = false;
                }
                logsList.Clear();

                output.Append("true");
                return;
            }
        }

        [DllExport("RVExtensionArgs", CallingConvention = CallingConvention.Winapi)]
        public static int RvExtensionArgs(StringBuilder output, int outputSize,
            [MarshalAs(UnmanagedType.LPStr)] string function,
            [MarshalAs(UnmanagedType.LPArray, ArraySubType = UnmanagedType.LPStr, SizeParamIndex = 4)] string[] args, int argCount)
        {
            foreach (var arg in args)
            {
                output.Append(arg);
            }
            return 0;
        }

        private static void OnRPTChanged(object sender, FileSystemEventArgs e)
        {
            if (e.ChangeType != WatcherChangeTypes.Changed)
            {
                return;
            }

            if (e.FullPath == currentRPTFilePath)
            {
                UpdateLogsList();
            }
            else
            {
                ScanRPTFiles();
            }
        }

        private static void OnRPTCreated(object sender, FileSystemEventArgs e)
        {
            ScanRPTFiles();
        }

        private static void OnRPTDeleted(object sender, FileSystemEventArgs e)
        {
            if (e.FullPath == currentRPTFilePath)
            {
                ScanRPTFiles();
            }
        }


        private static void OnRPTRenamed(object sender, RenamedEventArgs e)
        {
            if (e.OldFullPath == currentRPTFilePath)
            {
                ScanRPTFiles();
            }
        }

        // Scan RPT files, find newset and update last line for it
        public static void ScanRPTFiles()
        {
            FileInfo[] rptFiles = new DirectoryInfo(logsDirPath).GetFiles("*.rpt");
            if (rptFiles.Count() == 0)
            {
                currentRPTFilePath = "";
                lastRPTLineNumber = 0;
                return;
            }

            string newestRPTFile = rptFiles.OrderByDescending(f => f.LastWriteTime).First().FullName;
            if (newestRPTFile != currentRPTFilePath)
            {
                currentRPTFilePath = newestRPTFile;
                lastRPTLineNumber = 0;
            }

            int lineNumber = 0;
            try
            {
                using (FileStream fs = new FileStream(currentRPTFilePath, FileMode.Open, FileAccess.Read, FileShare.ReadWrite))
                {
                    using (StreamReader sr = new StreamReader(fs))
                    {
                        while (!sr.EndOfStream)
                        {
                            sr.ReadLine();
                            lineNumber++;
                        }
                    }
                }
            }
            catch { }

            lastRPTLineNumber = lineNumber;
        }

        // Read current RPT file, add new lines to logs list
        public static void UpdateLogsList()
        {
            int lineNumber = 0;
            try
            {
                using (FileStream fs = new FileStream(currentRPTFilePath, FileMode.Open, FileAccess.Read, FileShare.ReadWrite))
                {
                    using (StreamReader sr = new StreamReader(fs))
                    {
                        while (!sr.EndOfStream)
                        {
                            string line = sr.ReadLine();
                            lineNumber++;

                            if (lineNumber > lastRPTLineNumber && line != "")
                            {
                                // Replace XML chars for A3 structured text
                                string structLine = line
                                    .Replace("&", "&amp;")
                                    .Replace("<", "&lt;")
                                    .Replace(">", "&gt;")
                                    .Replace("\"", "&quot;")
                                    .Replace("'", "&apos;");

                                logsList.Add(structLine);
                            }
                        }
                    }
                }
            }
            catch { }

            lastRPTLineNumber = lineNumber;

            int logsCount = logsList.Count();
            // Notify arma about new logs
            if (logsCount > 0)
            {
                callback?.Invoke("a4es_debug", "logsListUpdated", "" + logsCount);
            }
        }
    }
}
