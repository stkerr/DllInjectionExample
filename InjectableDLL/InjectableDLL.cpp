// InjectableDLL.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "InjectableDLL.h"


// This is an example of an exported variable
INJECTABLEDLL_API int nInjectableDLL=0;

// This is an example of an exported function.
INJECTABLEDLL_API int fnInjectableDLL(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see InjectableDLL.h for the class definition
CInjectableDLL::CInjectableDLL()
{
	return;
}
