/*#include "CSDK.h"
#include <SdkHeaders.h>
#include "vmthooks.h"
#include <detours.h>

AcAPBPlayerController* PlayerController = NULL;
UObject *pCallObject = NULL;
UFunction *pFunction = NULL;
void *pParms = NULL;
void *pResult = NULL;
char cBuffer[256];
typedef int* (__thiscall* ProcessEvent_t)(UObject*, UFunction*, void*, void*);
static ProcessEvent_t pProcessEvent = NULL;

void CSDK::PostRender(UCanvas* pCanvas) 
{
	if(pCanvas)
	{					
		//draw here	
	}	   
}

FColor CSDK::MakeColor(int R, int G, int B, int A)
{
	FColor ReturnedColor;
	ReturnedColor.R = R;
	ReturnedColor.G = G;
	ReturnedColor.B = B;
	ReturnedColor.A = A;
	return ReturnedColor;
}

void __declspec(naked)ProcessEventHook()
{
    __asm
    {
        push ebp;
        mov ebp, esp;
        sub esp, 0x4C;
    }
    __asm pushad;
    __asm
    {
        mov pCallObject, ecx;
        push eax;
        mov eax, [ebp + 0x8];
        mov pFunction, eax;
        mov eax, [ebp + 0xC];
        mov pParms, eax;
        mov eax, [ebp + 0x10];
        mov pResult, eax;
        pop eax;
    }
    if (pFunction)
    {
        strcpy(cBuffer, pFunction->GetFullName());
        if (!strcmp (cBuffer, "Function Engine.GameViewportClient.PostRender"))
        {
            UGameViewportClient_eventPostRender_Parms* parameters= (UGameViewportClient_eventPostRender_Parms*)pParms;
			//if(parameters) CSDK::PostRender(parameters->Canvas); 
        }
        else if (!strcmp (cBuffer, "Function Engine.PlayerController.PlayerTick")) PlayerController = (AcAPBPlayerController*)pCallObject;
        else if (!strcmp (cBuffer, "Function APBGame.cAPBPlayerController.Destroyed")) if (PlayerController) PlayerController = NULL;
    }
    __asm
    {
        popad;
        //retn;
    }
	pProcessEvent(pCallObject, pFunction, pParms, pResult);
}

void CSDK::Patch()
{
	pProcessEvent = (ProcessEvent_t)(DetourFunction((PBYTE)0x10CEFF80, (PBYTE)ProcessEventHook));  //0x109B3D40
}*/

//121BECF4