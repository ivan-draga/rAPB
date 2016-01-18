#undef UNICODE

#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <stdlib.h>
#include <stdio.h>
#include <string>

#pragma comment (lib, "Ws2_32.lib")

#using <System.dll>
#using "mscorlib.dll"
using namespace System;

#include <mysql.h>
#pragma comment(lib, "libmysql.lib")

public ref class Auth
{
public:
	static int PerformLogin(String ^token);
	static int PerformLogout(String ^token);
};