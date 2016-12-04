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

void Network::Receive()
{
	char buffer[2048];
	int result;
	do 
	{
		result = recv(sock, buffer, sizeof(buffer), 0);
		if (result > 0) printf("Bytes received: %d\n", result);
		else if (result == 0) printf("Connection closed\n");
		else printf("recv failed: %d\n", WSAGetLastError());
	} 
	while (result > 0);
}