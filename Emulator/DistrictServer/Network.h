#pragma once

#include <winsock2.h>
#include <Ws2tcpip.h>
using namespace std;
#pragma comment(lib, "Ws2_32.lib")

class Network
{
private:
	WSAData data;
	SOCKET sock;
	struct sockaddr_in addr;
public:
	Network();
	int Setup(char* address, int port);
	int Connect();
	int Dispose();
	int Shutdown();
	int Send(char* buffer);
	int ReceiveInitial(); 
	char* ReceiveEncryptionKey();
};