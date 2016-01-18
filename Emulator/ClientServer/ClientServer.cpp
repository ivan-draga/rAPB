#include "stdafx.h"

#undef UNICODE

#define WIN32_LEAN_AND_MEAN
#define _CRT_SECURE_NO_WARNINGS

#include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <stdlib.h>
#include <stdio.h>
#include <string>

#pragma comment (lib, "Ws2_32.lib")

#define DEFAULT_BUFLEN 512
#define DEFAULT_PORT 27015

#include "Server.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Console::Title = "rAPB Client Authorization Server";
	Log_Clear();
	Listener ^list = gcnew Listener("127.0.0.1", 2255);
    return 0;
}


