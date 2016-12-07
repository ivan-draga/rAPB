#pragma once

#include <winsock2.h>
#include <Ws2tcpip.h>
using namespace std;
#pragma comment(lib, "Ws2_32.lib")

#define OK 0
#define INIT_LEN 2
#define ENCKEY_LEN	16

class Network
{
private:
	WSAData data;
	SOCKET sock;
	struct sockaddr_in addr;
	char* encryptionKey;
public:
	Network();
	int Setup(char* address, int port);
	int Connect();
	int Dispose();
	int Shutdown();
	int Send(char* buffer);
	enum Packet { Initial = 0, EncryptionKey = 1 };
	int Receive(Packet p);
	char* GetEncryptionKey();
	void SetEncryptionKey(char* encryptionKey);
};
