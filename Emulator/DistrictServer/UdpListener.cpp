#include "stdafx.h"
#include "UdpListener.h"

UdpListener::UdpListener()
{
	port = 6969;
	broadcast = new char[2048];
	slen = sizeof(sockaddr);
	assert((s = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP)) != -1);
	setsockopt(s, SOL_SOCKET, SO_BROADCAST, broadcast, 2048);
	memset(&si_me, 0, sizeof(si_me));
	si_me.sin_family = AF_INET;
	si_me.sin_port = htons(port);
	si_me.sin_addr.s_addr = INADDR_ANY;
	assert(::bind(s, (sockaddr*)&si_me, sizeof(sockaddr)) != -1);
}

char* UdpListener::Receive()
{
	char data[2048];
	int received = recvfrom(s, data, sizeof(data) - 1, 0, (sockaddr *)&si_other, &slen);
	data[received] = '\0';
	return data;
}