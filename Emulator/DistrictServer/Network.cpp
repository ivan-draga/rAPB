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

	encryptionKey = NULL;
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

int Network::Receive(Packet p)
{
	//TODO: obviously improve this...
	if (p == Packet::Initial)
	{
		char* buffer = new char[2];
		int  result = recv(sock, buffer, 2, 0);
		if (result > 0)
		{
			buffer[result] = '\0';
			if (buffer[0] == '0')
			{
				char response = buffer[1];
				if (response == '0') Logger(lERROR, "Network::Receive()", "Not allowed to host a district");
				else if (response == '1' || response == '2') Logger(lERROR, "Network::Receive()", "District already exists");
				else if (response == '3')
				{
					Logger(lSUCCESS, "Network::Receive()", "Registered at World Server");
					return result;
				}
				else if (response == '4') Logger(lERROR, "Network::Receive()", "ID can not be 0");
			}
		}
		else if (result == 0) Logger(lERROR, "Network::Receive()", "Connection closed");
		else Logger(lERROR, "Network::Receive()", "Receiving failed! Error code: %d", WSAGetLastError());
		return 1;
	}
	else if (p == Packet::EncryptionKey)
	{
		char* buffer = new char[16];
		int result = recv(sock, buffer, 16, 0);
		if (result > 0)
		{
			buffer[result] = '\0';
			SetEncryptionKey(buffer); 
		}
		else if (result == 0) Logger(lERROR, "Network::Receive()", "Connection closed");
		else
		{
			Logger(lERROR, "Network::Receive()", "Receiving failed! Error code: %d", WSAGetLastError());
			Logger(lINFO, "Information", "Shutting down in 5 seconds");
			Sleep(5000);
			ExitProcess(0);
		}
		return result;
	}
}

char* Network::GetEncryptionKey()
{
	return encryptionKey;
}

void Network::SetEncryptionKey(char* encryptionKey)
{
	this->encryptionKey = encryptionKey;
}