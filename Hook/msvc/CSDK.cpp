#include "CSDK.h"

#ifndef DONT_BUILD_WITH_SDK

#include <SdkHeaders.h>
#include "vmthooks.h"
#include <detours\detours.h>
#include "StdAfx.h"
#include "Addresses.h"

UObject* pCallObject = NULL;

typedef void (*tProcessEvent)(UFunction*, void*, void*);
tProcessEvent pProcessEvent = (tProcessEvent)PROCESS_EVENT;

void hkProcessEvent(UFunction* pFunction, void* pParms, void* pResult)
{
    _asm pushad;
    _asm mov pCallObject, ecx;

    _asm popad;
     pProcessEvent(pFunction, pParms, pResult);
}

void CSDK::Patch()
{
	DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourAttach(&(PVOID&)pProcessEvent, hkProcessEvent);
    if(DetourTransactionCommit() != NO_ERROR) Logger(lERROR, "CSDK", "Detour failed for ProcessEvent");
	Logger(lINFO, "SDK", "ProcessEvent detoured, SDK usage available");
}

#endif
