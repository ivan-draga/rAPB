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

int Network::SendInitial(int districtType, int districtId, int language, char* address, char* port, char* token)
{
	char data[255];
	int a = 0;
	if (strlen(address) < 10) a = 1;
	else a = 2;
	sprintf_s(data, sizeof(data), "%d%d%d%d%d%d%s%d%d%s%d%d%s", 0, districtType, districtId, language, a, strlen(address), address, 0, strlen(port), port, 0, 8, token);
	return Send(data);
}

char* Network::Receive(int size)
{
	char* buffer = new char[size];
	int  result = recv(sock, buffer, size, 0);
	if (result > 0) buffer[result] = '\0';
	else if (result == 0) Logger(lERROR, "Network::Receive()", "Connection closed");
	else Logger(lERROR, "Network::Receive()", "Receiving failed! Error code: %d", WSAGetLastError());
	return buffer;
}