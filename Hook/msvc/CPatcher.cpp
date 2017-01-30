#include "CPatcher.h" 
#include <malloc.h> 

#ifndef WIN32 
    #include <sys/mman.h> 
    #ifndef PAGESIZE 
        #define PAGESIZE 4096 
    #endif 
#endif 

ProtectionInfo CPatcher::Unprotect(DWORD dwAddress, int iSize) 
{ 
    ProtectionInfo protectionInfo; 
    protectionInfo.dwAddress = dwAddress; 
    protectionInfo.iSize = iSize; 
    #ifdef WIN32 
    VirtualProtect((void *)dwAddress, iSize, PAGE_EXECUTE_READWRITE, &protectionInfo.dwOldProtection); 
    #else 
    mprotect((void *)((dwAddress / PAGESIZE) * PAGESIZE), PAGESIZE, (PROT_EXEC | PROT_READ | PROT_WRITE)); 
    #endif 
    return protectionInfo; 
} 

void CPatcher::Reprotect(ProtectionInfo protectionInfo) 
{ 
    #ifdef WIN32 
    DWORD dwProtection; 
    VirtualProtect((void *)protectionInfo.dwAddress, protectionInfo.iSize, protectionInfo.dwOldProtection, &dwProtection); 
    #else 
    //get old protection 
    #endif 
} 

void CPatcher::InstallNopPatch(DWORD dwAddress, int iSize) 
{ 
    DWORD dwAddr = dwAddress; 
    ProtectionInfo protectionInfo = Unprotect(dwAddr, iSize);  
    memset((void *)dwAddr, X86_NOP, iSize);  
    Reprotect(protectionInfo); 
} 

void * CPatcher::InstallDetourPatchInternal(DWORD dwAddress, DWORD dwDetourAddress, BYTE byteType, int iSize) 
{ 
    BYTE * pbyteTrampoline = (BYTE *)malloc(iSize + 5);  
    Unprotect((DWORD)pbyteTrampoline, (iSize + 5));  
    ProtectionInfo protectionInfo = Unprotect(dwAddress, (iSize + 5)); 
    memcpy(pbyteTrampoline, (void *)dwAddress, iSize); 
    DWORD dwTrampoline = (DWORD)(pbyteTrampoline + iSize); 
    *(BYTE *)dwTrampoline = byteType; 
    *(DWORD *)(dwTrampoline + 1) = ((dwAddress + iSize) - dwTrampoline - 5); 
    *(BYTE *)dwAddress = byteType; 
    *(DWORD *)(dwAddress + 1) = (dwDetourAddress - dwAddress - 5);  
    Reprotect(protectionInfo); 
    return pbyteTrampoline; 
} 

void CPatcher::UninstallDetourPatchInternal(DWORD dwAddress, void * pTrampoline, int iSize) 
{ 
    ProtectionInfo protectionInfo = Unprotect(dwAddress, iSize);  
    memcpy((void *)dwAddress, pTrampoline, iSize);  
    Reprotect(protectionInfo);  
    free(pTrampoline); 
} 

void CPatcher::InstallPatchType(DWORD dwAddress, DWORD dwTypeAddress, BYTE byteType, int iSize) 
{ 
    switch(byteType) 
    { 
        case X86_JMP: 
            { 
                InstallDetourPatchInternal(dwAddress, dwTypeAddress, X86_JMP, iSize); 
            } 
        case X86_CALL: 
            { 
                InstallDetourPatchInternal(dwAddress, dwTypeAddress, X86_CALL, iSize); 
            } 
    } 
} 

void CPatcher::InstallRetnPatch(DWORD dwAddress) 
{ 
    DWORD dwAddr = dwAddress;  
    ProtectionInfo protectionInfo = Unprotect(dwAddr, 1);  
    *(BYTE *)dwAddr = X86_RETN;  
    Reprotect(protectionInfo); 
} 

void CPatcher::InstallStringPatch(DWORD dwAddress, char * szString, int iSize) 
{ 
    DWORD dwAddr = dwAddress; 
    ProtectionInfo protectionInfo = Unprotect(dwAddr, iSize); 
    memcpy((void *)dwAddr, szString, iSize); 
    Reprotect(protectionInfo); 
} 

void CPatcher::InstallMethodPatch(DWORD dwHookAddress, DWORD dwFunctionAddress) 
{ 
    DWORD dwHookAddr = dwHookAddress; 
    ProtectionInfo protectionInfo = Unprotect(dwHookAddr, 4); 
    *(DWORD *)dwHookAddr = (DWORD)dwFunctionAddress; 
    Reprotect(protectionInfo); 
} 

DWORD CPatcher::GetFunctionAddress(char * szLibrary, char * szFunction) 
{ 
    return (DWORD)GetProcAddress(LoadLibrary(szLibrary), szFunction); 
} 

DWORD CPatcher::GetFunctionAddress(char * szLibrary, unsigned int uOrdinal) 
{ 
    return GetFunctionAddress(szLibrary, (char *)MAKELONG(uOrdinal, 0)); 
} 

void * CPatcher::InstallDetourPatch(char * szLibrary, char * szFunction, DWORD dwFunctionAddress) 
{ 
    return InstallDetourPatchInternal(GetFunctionAddress(szLibrary, szFunction), dwFunctionAddress, X86_JMP, 5); 
} 

void * CPatcher::InstallDetourPatch(char * szLibrary, unsigned int uOrdinal, DWORD dwFunctionAddress) 
{ 
    return InstallDetourPatchInternal(GetFunctionAddress(szLibrary, uOrdinal), dwFunctionAddress, X86_JMP, 5); 
} 

void CPatcher::UninstallDetourPatch(void * pTrampoline, DWORD dwFunctionAddress) 
{ 
    ProtectionInfo protectionInfo = Unprotect(dwFunctionAddress, 5); 
    memcpy((void *)dwFunctionAddress, pTrampoline, 5); 
    Reprotect(protectionInfo); 
    free(pTrampoline); 
} 

BYTE CPatcher::InstallDetourPatchWithData(char * szLibrary, unsigned int uOrdinal, DWORD dwFunctionAddress) 
{ 
    DWORD dwAddress = GetFunctionAddress(szLibrary, uOrdinal); 
    DWORD dwDetourAddress = dwFunctionAddress; 
    BYTE byteType = X86_JMP; 
    int iSize = 5; 
    BYTE * pbyteTrampoline = (BYTE *)malloc(iSize + 5); 
    Unprotect((DWORD)pbyteTrampoline, (iSize + 5)); 
    ProtectionInfo protectionInfo = Unprotect(dwAddress, (iSize + 5)); 
    memcpy(pbyteTrampoline, (void *)dwAddress, iSize); 
    DWORD dwTrampoline = (DWORD)(pbyteTrampoline + iSize); 
    *(BYTE *)dwTrampoline = byteType; 
    *(DWORD *)(dwTrampoline + 1) = ((dwAddress + iSize) - dwTrampoline - 5); 
    *(BYTE *)dwAddress = byteType; 
    *(DWORD *)(dwAddress + 1) = (dwDetourAddress - dwAddress - 5); 
    Reprotect(protectionInfo); 
    return (pbyteTrampoline != NULL); 
} 

void CPatcher::InstallPushPatch(DWORD dwAddress, DWORD dwFunc) 
{ 
     ProtectionInfo protectionInfo = Unprotect(dwAddress, 5); 
     *(BYTE*)(dwAddress) = 0x68; 
     *(DWORD*)(dwAddress+1) = dwFunc;  
     Reprotect(protectionInfo); 
}  