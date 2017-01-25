#pragma once

#include <winsock2.h>
#include <assert.h>

class UdpListener
{
private:
	int port, s, slen;
	sockaddr_in si_me, si_other;
	char* broadcast;
public:
	UdpListener();
	char* Receive();
};