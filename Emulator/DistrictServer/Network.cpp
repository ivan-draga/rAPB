#include "stdafx.h"

#define _WINSOCK_DEPRECATED_NO_WARNINGS
#define WIN32_LEAN_AND_MEAN

#include "Network.h"

Network::Network()
{
}

int Network::Setup(char* address, int port)
{
	int result = WSAStartup(MAKEWORD(2, 2), &data);
	if (result != NO_ERROR) return result;

	sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (sock == INVALID_SOCKET) return WSACleanup();

	addr.sin_family = AF_INET;
	addr.sin_addr.s_addr = inet_addr(address);
	addr.sin_port = htons(port);
	return 0;
}

int Network::Connect()
{
	int result = connect(sock, (SOCKADDR*)&addr, sizeof(addr));
	if (result == SOCKET_ERROR) return Dispose();
	else return 0;
}

int Network::Dispose()
{
	closesocket(sock);
	WSACleanup();
	return 1;
}

int Network::Shutdown()
{
	int result = shutdown(sock, SD_SEND);
	if (result == SOCKET_ERROR) return Dispose();
	else return 0;
}

int Network::Send(char* buffer)
{
	int result = send(sock, buffer, (int)strlen(buffer), 0);
	if (result == SOCKET_ERROR) return Dispose();
	else return 0;
}

int Network::ReceiveInitial()
{
	char* buffer = new char[2];
	int  result = recv(sock, buffer, 2, 0);
	if (result > 0)
	{
		buffer[result] = '\0';
		if (buffer[0] == '0')
		{
			char response = buffer[1];
			if (response == '0')
			{
				Logger(lERROR, "Network::ReceiveInitial()", "Not allowed to host a district");
				return 1;
			}
			else if (response == '1' || response == '2')
			{
				Logger(lERROR, "Network::Receive()", "District already exists");
				return 1;
			}
			else if (response == '3')
			{
				Logger(lSUCCESS, "Network::ReceiveInitial()", "Registered at World Server");
				return 0;
			}
			else if (response == '4')
			{
				Logger(lERROR, "Network::ReceiveInitial()", "ID can not be 0");
				return 1;
			}
		}
	}
	else if (result == 0) 
	{
		Logger(lERROR, "Network::ReceiveInitial()", "Connection closed");
		return 1;
	}
	else 
	{
		Logger(lERROR, "Network::ReceiveInitial()", "Receiving failed! Error code: %d", WSAGetLastError());
		return 1;
	}
}

char* Network::ReceiveEncryptionKey()
{
	char* buffer = new char[16];
	int result = recv(sock, buffer, 16, 0);
	if (result > 0) buffer[result] = '\0';
	else if (result == 0) Logger(lERROR, "Network::ReceiveEncryptionKey()", "Connection closed");
	else Logger(lERROR, "Network::ReceiveEncryptionKey()", "Receiving failed! Error code: %d", WSAGetLastError());
	return buffer;
}