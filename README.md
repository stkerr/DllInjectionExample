DllInjectionExample
===================

An example of how to perform DLL injection in Windows using different techniques.

The example is composed of a Visual Studio 2010 solution with 3 projects.

Project Overview
----------------
DllInjector
	This project contains code to perform the actual DLL injection. It is most likely the project you are interested in.

InjectableDLL
	A barebones DLL example that shows a message box when it is loaded into a process.

TargetApplication
	A simple Windows Form application to inject a DLL into.

Note
----
Dll injection seems to fail on some Windows processes, such as calc.exe, on Windows 7 (the OS I'm testing on).
If you are running the sample on a Microsfot provided program and having troubles, try injecting into a different
process.
