#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>

#pragma comment (lib, "Ws2_32.lib")
#pragma comment (lib, "Mswsock.lib")
#pragma comment (lib, "AdvApi32.lib")
#pragma comment (lib, "xmllite.lib")
#pragma comment (lib, "user32.lib")
#pragma comment (lib, "d3d10.lib")

#define DEFAULT_PORT_INT 2255

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <io.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include "define.h"
#include "Base.h"
#include "Patch_APB.h"
#include "WS2_32.h"
#include "CPatcher.h"
#include "CSDK.h"
#include "Addresses.h"

namespace APB
{
	namespace emu
	{
		Base* Base::gInstance = NULL;
		Base* Base::GetInstance()
		{
			if (gInstance == NULL) gInstance = new Base;
			return gInstance;
		}

		Base::Base()
		{
			HANDLE hModule = GetModuleHandle(NULL);
			dwCodeSize = Utils::GetSizeOfCode(hModule);
			dwCodeOffset = Utils::OffsetToCode(hModule);
			dwEntryPoint = (DWORD)hModule + dwCodeOffset;
		}

		void Base::InitHooks(bool pIsServer)
		{
			Utils::AllocateConsole(CONSOLE_NAME_STR);
			Log_Clear();
			Logger(lINFO, "InitHooks()", "Starting APB");
			WS2_32::Patch();
			Patch_APB::Hook();

			#ifndef DONT_BUILD_WITH_SDK
			CSDK::Patch();
			#endif

			#ifndef DISABLE_SDK_GENERATING
			while (true)
			{
				if (GetKeyState(VK_END) & 1)
				{
					LoadLibrary("SdkGen.dll");
					Console::Beep();
					Logger(lWARN, "SDK", "SDK is generating, please wait for few minutes before exiting the game");
				}
			}
			#endif
		}
	}
}