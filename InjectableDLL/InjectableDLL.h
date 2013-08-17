// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the INJECTABLEDLL_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// INJECTABLEDLL_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef INJECTABLEDLL_EXPORTS
#define INJECTABLEDLL_API __declspec(dllexport)
#else
#define INJECTABLEDLL_API __declspec(dllimport)
#endif

// This class is exported from the InjectableDLL.dll
class INJECTABLEDLL_API CInjectableDLL {
public:
	CInjectableDLL(void);
	// TODO: add your methods here.
};

extern INJECTABLEDLL_API int nInjectableDLL;

INJECTABLEDLL_API int fnInjectableDLL(void);
