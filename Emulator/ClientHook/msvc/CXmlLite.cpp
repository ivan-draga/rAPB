#include "CXmlLite.h"
#include "StdAfx.h"
#include <detours\detours.h>
#include <xmllite.h>

#define DISABLE_ADVANCED_LOGGING

HRESULT (WINAPI *real_CreateXmlReader)(REFIID riid, void ** ppvObject, IMalloc * pMalloc) = CreateXmlReader;
HRESULT WINAPI custom_CreateXmlReader(REFIID riid, void ** ppvObject, IMalloc * pMalloc);

HRESULT (WINAPI *real_CreateXmlReaderInputWithEncodingName)(IUnknown * pInputStream, IMalloc * pMalloc, const WCHAR * pwszEncodingName , BOOL fEncodingHint, const WCHAR * pwszBaseUri , IXmlReaderInput ** ppInput ) = CreateXmlReaderInputWithEncodingName;
HRESULT WINAPI custom_CreateXmlReaderInputWithEncodingNamer(IUnknown * pInputStream, IMalloc * pMalloc, const WCHAR * pwszEncodingName , BOOL fEncodingHint, const WCHAR * pwszBaseUri , IXmlReaderInput ** ppInput );

HRESULT (WINAPI *real_CreateXmlWriter)(REFIID riid, void ** ppvObject, IMalloc * pMalloc) = CreateXmlWriter;
HRESULT WINAPI custom_CreateXmlWriter(REFIID riid, void ** ppvObject, IMalloc * pMalloc);

HRESULT (WINAPI *real_CreateXmlWriterOutputWithEncodingName)(IUnknown *pOutputStream, IMalloc *pMalloc, LPCWSTR pwszEncodingName, IXmlWriterOutput **ppOutput) = CreateXmlWriterOutputWithEncodingName;
HRESULT WINAPI custom_CreateXmlWriterOutputWithEncodingName(IUnknown *pOutputStream, IMalloc *pMalloc, LPCWSTR pwszEncodingName, IXmlWriterOutput **ppOutput);

HRESULT WINAPI custom_CreateXmlReader(REFIID riid, void ** ppvObject, IMalloc * pMalloc)
{
	#ifndef DISABLE_ADVANCED_LOGGING
	Logger(lINFO, "XmlLite", "CreateXmlReader()");
	#endif
	return real_CreateXmlReader(riid, ppvObject, pMalloc);
}

HRESULT WINAPI custom_CreateXmlReaderInputWithEncodingName(IUnknown * pInputStream, IMalloc * pMalloc, const WCHAR * pwszEncodingName , BOOL fEncodingHint, const WCHAR * pwszBaseUri , IXmlReaderInput ** ppInput)
{
	#ifndef DISABLE_ADVANCED_LOGGING
	Logger(lINFO, "XmlLite", "CreateXmlReaderInputWithEncodingName()");
	#endif
	return real_CreateXmlReaderInputWithEncodingName(pInputStream, pMalloc, pwszEncodingName, fEncodingHint, pwszBaseUri, ppInput);
}

HRESULT WINAPI custom_CreateXmlWriter(REFIID riid, void ** ppvObject, IMalloc * pMalloc)
{
	#ifndef DISABLE_ADVANCED_LOGGING
	Logger(lINFO, "XmlLite", "CreateXmlWriter()");
	#endif
	return real_CreateXmlWriter(riid, ppvObject, pMalloc);
}

HRESULT WINAPI custom_CreateXmlWriterOutputWithEncodingName(IUnknown *pOutputStream, IMalloc *pMalloc, LPCWSTR pwszEncodingName, IXmlWriterOutput **ppOutput)
{
	#ifndef DISABLE_ADVANCED_LOGGING
	Logger(lINFO, "XmlLite", "CreateXmlWriterOutputWithEncodingName()");
	#endif
	return real_CreateXmlWriterOutputWithEncodingName(pOutputStream, pMalloc, pwszEncodingName, ppOutput);
}

void CXmlLite::Patch()
{
	DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourAttach(&(PVOID&)real_CreateXmlReader, custom_CreateXmlReader);
    if(DetourTransactionCommit() != NO_ERROR) Logger(lERROR, "CreateXmlReader()", "Detour failed");

	DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourAttach(&(PVOID&)real_CreateXmlReaderInputWithEncodingName, custom_CreateXmlReaderInputWithEncodingName);
    if(DetourTransactionCommit() != NO_ERROR) Logger(lERROR, "CreateXmlReaderInputWithEncodingName()", "Detour failed");

	DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourAttach(&(PVOID&)real_CreateXmlWriter, custom_CreateXmlWriter);
    if(DetourTransactionCommit() != NO_ERROR) Logger(lERROR, "CreateXmlWriter()", "Detour failed");

	DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourAttach(&(PVOID&)real_CreateXmlWriterOutputWithEncodingName, custom_CreateXmlWriterOutputWithEncodingName);
    if(DetourTransactionCommit() != NO_ERROR) Logger(lERROR, "CreateXmlWriterOutputWithEncodingName()", "Detour failed");

	Logger(lINFO, "XmlLite", "Functions detoured");
}