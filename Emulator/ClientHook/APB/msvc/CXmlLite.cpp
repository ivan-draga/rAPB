#include "CXmlLite.h"
#include "StdAfx.h"
#include <xmllite.h>

#define DISABLE_ADVANCED_LOGGING

typedef HRESULT* (WINAPI __stdcall* CreateXmlReader_t)(REFIID riid, void ** ppvObject, IMalloc * pMalloc);
CreateXmlReader_t realCreateXmlReader = (CreateXmlReader_t)CreateXmlReader;

typedef HRESULT* (WINAPI __stdcall* CreateXmlReaderInputWithEncodingName_t)(IUnknown * pInputStream, IMalloc * pMalloc, const WCHAR * pwszEncodingName , BOOL fEncodingHint, const WCHAR * pwszBaseUri , IXmlReaderInput ** ppInput );
CreateXmlReaderInputWithEncodingName_t realCreateXmlReaderInputWithEncodingName = (CreateXmlReaderInputWithEncodingName_t)CreateXmlReaderInputWithEncodingName;

typedef HRESULT* (WINAPI __stdcall* CreateXmlWriter_t)(REFIID riid, void ** ppvObject, IMalloc * pMalloc);
CreateXmlWriter_t realCreateXmlWriter = (CreateXmlWriter_t)CreateXmlWriter;

typedef HRESULT* (WINAPI __stdcall* CreateXmlWriterOutputWithEncodingName_t)(ISequentialStream * pStream, IMalloc * pMalloc, const WCHAR * pwszEncodingName, IXmlWriterOutput ** ppOutput);
CreateXmlWriterOutputWithEncodingName_t realCreateXmlWriterOutputWithEncodingName = (CreateXmlWriterOutputWithEncodingName_t)CreateXmlWriterOutputWithEncodingName;

HRESULT* custom_CreateXmlReader(REFIID riid, void ** ppvObject, IMalloc * pMalloc)
{
	#ifndef DISABLE_ADVANCED_LOGGING
	Logger(lINFO, "XmlLite", "CreateXmlReader()");
	#endif
	return realCreateXmlReader(riid, ppvObject, pMalloc);
}

HRESULT* custom_CreateXmlReaderInputWithEncodingName(IUnknown * pInputStream, IMalloc * pMalloc, const WCHAR * pwszEncodingName , BOOL fEncodingHint, const WCHAR * pwszBaseUri , IXmlReaderInput ** ppInput)
{
	#ifndef DISABLE_ADVANCED_LOGGING
	Logger(lINFO, "XmlLite", "CreateXmlReaderInputWithEncodingName()");
	#endif
	return realCreateXmlReaderInputWithEncodingName(pInputStream, pMalloc, pwszEncodingName, fEncodingHint, pwszBaseUri, ppInput);
}

HRESULT* custom_CreateXmlWriter(REFIID riid, void ** ppvObject, IMalloc * pMalloc)
{
	#ifndef DISABLE_ADVANCED_LOGGING
	Logger(lINFO, "XmlLite", "CreateXmlWriter()");
	#endif
	return realCreateXmlWriter(riid, ppvObject, pMalloc);
}

HRESULT* custom_CreateXmlWriterOutputWithEncodingName(ISequentialStream * pStream, IMalloc * pMalloc, const WCHAR * pwszEncodingName, IXmlWriterOutput ** ppOutput)
{
	#ifndef DISABLE_ADVANCED_LOGGING
	Logger(lINFO, "XmlLite", "CreateXmlWriterOutputWithEncodingName()");
	#endif
	return realCreateXmlWriterOutputWithEncodingName(pStream, pMalloc, pwszEncodingName, ppOutput);
}

void CXmlLite::Patch()
{
	
	PBYTE offset1 = (PBYTE)GetProcAddress(GetModuleHandleA("xmllite.dll"), "CreateXmlReader");
	realCreateXmlReader = (CreateXmlReader_t)DetourFunction(offset1, (PBYTE)&custom_CreateXmlReader);
	Logger(lINFO, "CreateXmlReader()", "Detoured");
	PBYTE offset2 = (PBYTE)GetProcAddress(GetModuleHandleA("xmllite.dll"), "CreateXmlReaderInputWithEncodingName");
	realCreateXmlReaderInputWithEncodingName = (CreateXmlReaderInputWithEncodingName_t)DetourFunction(offset2, (PBYTE)&custom_CreateXmlReaderInputWithEncodingName);
	Logger(lINFO, "CreateXmlReaderInputWithEncodingName()", "Detoured");
	PBYTE offset3 = (PBYTE)GetProcAddress(GetModuleHandleA("xmllite.dll"), "CreateXmlWriter");
	realCreateXmlWriter= (CreateXmlWriter_t)DetourFunction(offset3, (PBYTE)&custom_CreateXmlWriter);
	Logger(lINFO, "CreateXmlWriter()", "Detoured");
	PBYTE offset4 = (PBYTE)GetProcAddress(GetModuleHandleA("xmllite.dll"), "CreateXmlWriterOutputWithEncodingName");
	realCreateXmlWriterOutputWithEncodingName = (CreateXmlWriterOutputWithEncodingName_t)DetourFunction(offset4, (PBYTE)&custom_CreateXmlWriterOutputWithEncodingName);
	Logger(lINFO, "CreateXmlWriterOutputWithEncodingName()", "Detoured");
}