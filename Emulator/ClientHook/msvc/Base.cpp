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

#define NO_SDK_GEN
//#define USE_END_KEY
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
#include "Client.h"
#include "WS2_32.h"
#include "CXmlLite.h"
#include "CPatcher.h"
#include "CSDK.h"
#include "Addresses.h"
#include "Packet.h"

namespace APB
{
	namespace emu
	{
		Base* Base::gInstance = NULL;
		Base* Base::GetInstance()
		{
			if(gInstance == NULL) gInstance = new Base;
			return gInstance;
		}

		Base::Base()
		{
			HANDLE hModule = GetModuleHandle(NULL);
			dwCodeSize = Utils::GetSizeOfCode( hModule );
			dwCodeOffset = Utils::OffsetToCode( hModule );
			dwEntryPoint = (DWORD)hModule + dwCodeOffset;
		}

		void Base::InitHooks(bool pIsServer)
		{
			Utils::AllocateConsole(CONSOLE_NAME_STR);
			Log_Clear();
			FILE* apb = nullptr;
			errno_t err;
			if ((err = fopen_s(&apb, TOKEN_FILE_STR, "r")) != 0) 
			{
				Logger(lERROR, "InitHooks()", "File \"%s\" not found", TOKEN_FILE_STR);
				MessageBox(NULL, "Token file not found!", "ERROR", NULL);
				Logger(lWARN, "APB", "Process stopped");
				exit(2);
			}
			else 
			{
				
				Logger(lINFO, "InitHooks()", "Starting APB");
				Client^ client = gcnew Client("127.0.0.1", DEFAULT_PORT_INT); //TODO: retrieve client server IP from web
				CXmlLite::Patch();
				WS2_32::Patch();
				CSDK::Patch();
				System::Threading::Thread::Sleep(1000); //wait for 1 second due to config edits being faster than IP retrieval, which would then result in m_sLS1=(null) in all .ini files
				Patch_APB::Hook();
				#pragma region Loop
				#ifdef USE_END_KEY
				while(true)
				{
					if(GetKeyState(VK_END) & 1)
					{
						#ifndef NO_SDK_GEN
						LoadLibrary("SdkGen.dll");
						#endif
						Console::Beep();
					}
				}
				#endif
				#pragma endregion
			}
		}
	}
}
