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

void Network::Receive(int size)
{
	char* buffer = new char[size];
	int result = recv(sock, buffer, sizeof(buffer), 0);
	if (result > 0)
	{
		buffer[size] = '\0';
		switch(buffer[0])
		{
			case '0': //response packet to initial packet
			{
				char response = buffer[1];
				if (response == '0') Logger(lERROR, "Network::Receive()", "Not allowed to host a district");
				else if (response == '1' || response == '2') Logger(lERROR, "Network::Receive()", "District already exists");
				else if (response == '3') Logger(lSUCCESS, "Network::Receive()", "Registered at World Server");
				else if (response == '4') Logger(lERROR, "Network::Receive()", "ID can not be 0");
				break;
			}

			case '1': //packet that holds encryptionKey
			{
				break;
			}

			case '2': //packet that holds handshakeHash
			{
				break;
			}
		}
	}
	else if (result == 0) Logger(lERROR, "Network::Receive()", "Connection closed");
	else Logger(lERROR, "Network::Receive()", "Receiving failed! Error code: %d", WSAGetLastError());
}