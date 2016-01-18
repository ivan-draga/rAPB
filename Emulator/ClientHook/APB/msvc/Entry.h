#ifndef ENTRY_H
#define ENTRY_H

#include <Windows.h>
#include <string>
#include <vector>

namespace Entry
{
	extern HMODULE g_hRendereModule;
	extern HMODULE g_hMemoryModule;
	extern DWORD dwCodeSize;
	extern DWORD dwCodeOffset;
	extern DWORD dwEntryPoint;
};

#endif