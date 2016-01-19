// ==================================================================================
// Project : PROTection routines v2.1
// Author  : JohnD
// Date    : 6 Jun 2009
// ==================================================================================
#ifndef PROT_INCLUDE_H
#define PROT_INCLUDE_H

#pragma warning(disable: 4996)

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// ---- adapt c/c++ options of project un c/c++ -> optimisation
// Optimisation           : Disabled (/Od)
// #pragma optimize( "", off )			// should do this, but does not work.
// ---- adapt link options of project in  linker -> advanced
// BaseAddress :              <specify this for a DLL>
// Randomized BaseAddress :   /Dynamicbase:no
// Fixed BaseAddress      :   /FIXED
// for DLL specify :  Baseaddress  
//
// this way the code/text and data segment is merged and it will be rwx
// seems you get initialisation errors with this on XP
//#pragma comment(linker,"/merge:.data=.text")
//#pragma comment(linker,"/section:.text,RWE")


// functions which can be used :
// =============================

// -- string crypt/decrypt functon
// for decrypt a string always use a local temp string as destination
// this way the original string stays encrypted.
// example:  char tmp[81];  printf(PROT_str(encstr[1],tmp,1),val1,val2,val3);
// encrypted format string and is decrypted in tmp which pointer is returned
// so printf can use it
char         *PROT_str(char *src,char *dst=0,int seed=0, BYTE *key=0);
// -- find out if a strings is encrypted depending on high bit
#define isencrypted(str)  ((BYTE)(str[0])>=0x80)
#define isplain(str)      ((BYTE)(str[0])<0x80)

// get codeblock hash
// returns 0 if codeblock is not valid
// returns 1 if codeblock is valid
int		  PROT_crc(int id);

// internal functions which are used in the define
void _stdcall PROTi_clear(PBYTE pfunc, int no);
void _stdcall PROTi_encode(DWORD id);

// manually randomized function code with PROT_clear
#define		  PROT_clear(pfunc)	PROTi_clear((PBYTE)pfunc,0)


// --- some macros to use inside the c/c++ code, see example code
// end of code marker until where code is randomized
#define PROT_CLEAR \
	__asm _emit	0xEB \
	__asm _emit	0x08 \
	__asm _emit	0xFe \
	__asm _emit	0xFe \
	__asm _emit	0xFe \
	__asm _emit	0xFe \
	__asm _emit	0xFe \
	__asm _emit	0xFe \
	__asm _emit	0x54 \
	__asm _emit	0x37 

// will automatically randomized code when reached starting from given function address
#define PROT_IMMCLEAR(fnam) \
	DWORD protclradr=(DWORD)fnam; \
	__asm _emit	0xEB \
	__asm _emit	0x08 \
	__asm _emit	0xFe \
	__asm _emit	0xFe \
	__asm _emit	0xFe \
	__asm _emit	0xFe \
	__asm _emit	0xFe \
	__asm _emit	0xFe \
	__asm _emit	0x54 \
	__asm _emit	0x37 \
    __asm  push 0x0a \
	__asm  push protclradr \
    __asm  call PROTi_clear

// code start for dynamic code decryption
#define PROT_BEGIN \
	__asm _emit 0x68 \
	__asm _emit 0xfd \
	__asm _emit 0xfe \
	__asm _emit 0xfe \
	__asm _emit 0xfd \
	__asm  call PROTi_encode

// code start for dynamic code block encryption
#define PROT_END \
	__asm _emit 0x68 \
	__asm _emit 0xfd \
	__asm _emit 0xfe \
	__asm _emit 0xfe \
	__asm _emit 0xfd \
	__asm  call PROTi_encode

#endif
