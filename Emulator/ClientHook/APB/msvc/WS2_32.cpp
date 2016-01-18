#include "WS2_32.h"
#include "StdAfx.h"

#define DISABLE_ADVANCED_LOGGING

typedef struct hostent* (WINAPI __stdcall* gethostbyname_t)(const char* name);
gethostbyname_t realgethostbyname = (gethostbyname_t)gethostbyname;

typedef int* (WINAPI __stdcall* connect_t)(SOCKET s, const struct sockaddr *name, int namelen);
connect_t realconnect = (connect_t)connect;

typedef int* (WINAPI __stdcall* send_t)(SOCKET s, const char *buf, int len, int flags);
send_t realsend = (send_t)send;

typedef int* (WINAPI __stdcall* recv_t)(SOCKET s, char *buf, int len, int flags);
recv_t realrecv = (recv_t)recv;

typedef int* (WINAPI __stdcall* bind_t)(SOCKET s, const struct sockaddr *name, int namelen);
bind_t realbind = (bind_t)bind;

typedef int* (WINAPI __stdcall* listen_t)(SOCKET s, int backlog);
listen_t reallisten = (listen_t)listen;

typedef SOCKET* (WINAPI __stdcall* accept_t)(SOCKET s, const struct sockaddr *addr, int *addrlen);
accept_t realaccept = (accept_t)accept;

typedef int* (WINAPI __stdcall* sendto_t)(SOCKET s, const char *buf, int len, int flags, const struct sockaddr *to, int tolen);
sendto_t realsendto = (sendto_t)sendto;

typedef int* (WINAPI __stdcall* recvfrom_t)(SOCKET s, char *buf, int len, int flags, struct sockaddr *from, int *fromlen);
recvfrom_t realrecvfrom = (recvfrom_t)recvfrom;

typedef int* (WINAPI __stdcall* ioctlsocket_t)(SOCKET s, __int32 cmd, u_long *argp);
ioctlsocket_t realioctlsocket = (ioctlsocket_t)ioctlsocket;

typedef SOCKET* (WINAPI __stdcall* socket_t)(int af, int type, int protocol);
socket_t realsocket = (socket_t)socket;

typedef unsigned __int32* (WINAPI __stdcall* inet_addr_t)(const char *cp);
inet_addr_t realinet_addr = (inet_addr_t)inet_addr;

typedef int* (WINAPI __stdcall* closesocket_t)(SOCKET s);
closesocket_t realclosesocket = (closesocket_t)closesocket;

typedef int* (WINAPI __stdcall* setsockopt_t)(SOCKET s, int level, int optname, const char *optval, int optlen);
setsockopt_t realsetsockopt = (setsockopt_t)setsockopt;

typedef int* (WINAPI __stdcall* select_t)(int nfds, fd_set *readfds, fd_set *writefds, fd_set *exceptfds, const struct timeval *timeout);
select_t realselect = (select_t)select;

typedef char* (WINAPI __stdcall* inet_ntoa_t)(struct in_addr in);
inet_ntoa_t realinet_ntoa = (inet_ntoa_t)inet_ntoa;

typedef int* (WINAPI __stdcall* shutdown_t)(SOCKET s, int how);
shutdown_t realshutdown = (shutdown_t)shutdown;

typedef int* (WINAPI __stdcall* gethostname_t)(char *name, int namelen);
gethostname_t realgethostname = (gethostname_t)gethostname;

typedef int* (WINAPI __stdcall* getsockopt_t)(SOCKET s, int level, int optname, char *optval, int *optlen);
getsockopt_t realgetsockopt = (getsockopt_t)getsockopt;

typedef u_long* (WINAPI __stdcall* htonl_t)(u_long hostlong);
htonl_t realhtonl = (htonl_t)htonl;

typedef u_long* (WINAPI __stdcall* ntohl_t)(u_long hostlong);
ntohl_t realntohl = (ntohl_t)ntohl;

typedef u_short* (WINAPI __stdcall* ntohs_t)(u_short netshort);
ntohs_t realntohs = (ntohs_t)ntohs;

typedef u_short* (WINAPI __stdcall* htons_t)(u_short netshort);
htons_t realhtons = (htons_t)htons;

typedef int* (WINAPI __stdcall* getsockname_t)(SOCKET s, struct sockaddr *name, int *namelen);
getsockname_t realgetsockname = (getsockname_t)getsockname;

struct hostent *__stdcall WINAPI custom_gethostbyname(const char* name) 
{
	#ifndef DISABLE_ADVANCED_LOGGING
	Logger(lINFO, "gethostbyname()", "Name: %s", name);
	#endif
	return realgethostbyname(name);
}

int *__stdcall WINAPI custom_connect(SOCKET s, const struct sockaddr *name, int namelen) 
{
	#ifndef DISABLE_ADVANCED_LOGGING
	Logger(lINFO, "connect()", "Socket: %s | Namelen: %d", s.ToString(), namelen);
	#endif
	return realconnect(s, name, namelen);
}

int *__stdcall WINAPI custom_send(SOCKET s, const char *buf, int len, int flags) 
{
	#ifndef DISABLE_ADVANCED_LOGGING
	Logger(lINFO, "send()", "Socket: %s | Len: %d | Flags: %d", s.ToString(), len, flags);
	#endif
	return realsend(s, buf, len, flags);
}

int *__stdcall WINAPI custom_recv(SOCKET s, char *buf, int len, int flags) 
{
	#ifndef DISABLE_ADVANCED_LOGGING
	Logger(lINFO, "recv()", "Socket: %s | Len: %d | Flags: %d", s.ToString(), len, flags);
	#endif
	return realrecv(s, buf, len, flags);
}

int *__stdcall WINAPI custom_bind(SOCKET s, const struct sockaddr *name, int namelen) 
{
	#ifndef DISABLE_ADVANCED_LOGGING
	Logger(lINFO, "bind()", "Socket: %s | Namelen: %d", s.ToString(), namelen);
	#endif
	return realbind(s, name, namelen);
}

int *__stdcall WINAPI custom_listen(SOCKET s, int backlog) 
{
	#ifndef DISABLE_ADVANCED_LOGGING
	Logger(lINFO, "listen()", "Socket: %s | Backlog: %d", s.ToString(), backlog);
	#endif
	return reallisten(s, backlog);
}

SOCKET *__stdcall WINAPI custom_accept(SOCKET s, const struct sockaddr *addr, int *addrlen) 
{
	#ifndef DISABLE_ADVANCED_LOGGING
	Logger(lINFO, "accept()", "Socket: %s | Addrlen: %d", s.ToString(), addrlen);
	#endif
	return realaccept(s, addr, addrlen);
}

int *__stdcall WINAPI custom_sendto(SOCKET s, const char *buf, int len, int flags, const struct sockaddr *to, int tolen) 
{
	#ifndef DISABLE_ADVANCED_LOGGING
	Logger(lINFO, "sendto()", "Socket: %s | Len: %d | Flags: %d | Tolen: %d", s.ToString(), len, flags, tolen);
	#endif
	return realsendto(s, buf, len, flags, to, tolen);
}

int *__stdcall WINAPI custom_recvfrom(SOCKET s, char *buf, int len, int flags, struct sockaddr *from, int *fromlen) 
{
	#ifndef DISABLE_ADVANCED_LOGGING
	Logger(lINFO, "recvfrom()", "Socket: %s | Len: %d | Flags: %d| Fromlen: %d", s.ToString(), len, flags, fromlen);
	#endif
	return realrecvfrom(s, buf, len, flags, from, fromlen);
}

int *__stdcall custom_ioctlsocket(SOCKET s, __int32 cmd, u_long *argp)
{
	#ifndef DISABLE_ADVANCED_LOGGING
	Logger(lINFO, "ioctlsocket()", "Socket: %s", s.ToString());
	#endif
	return realioctlsocket(s, cmd, argp);
}

SOCKET *__stdcall custom_socket(int af, int type, int protocol)
{
	#ifndef DISABLE_ADVANCED_LOGGING
	Logger(lINFO, "socket()", "af: %d | Type: %d | Protocol: %d", af, type, protocol);
	#endif
	return realsocket(af, type, protocol);
}

unsigned __int32 *__stdcall custom_inet_addr(const char *cp)
{
	#ifndef DISABLE_ADVANCED_LOGGING
	Logger(lINFO, "inet_addr()", "cp: %s", cp);
	#endif
	return realinet_addr(cp);
}

int *__stdcall custom_closesocket(SOCKET s)
{
	#ifndef DISABLE_ADVANCED_LOGGING
	Logger(lINFO, "closesocket()", "Socket: %s", s.ToString());
	#endif
	return realclosesocket(s);
}

int *__stdcall custom_setsockopt(SOCKET s, int level, int optname, const char *optval, int optlen)
{
	#ifndef DISABLE_ADVANCED_LOGGING
	Logger(lINFO, "setsockopt()", "Socket: %s | Level: %d | Optname: %d | Optlen: %d", s.ToString(), level, optname, optlen);
	#endif
	return realsetsockopt(s, level, optname, optval, optlen);
}

int *__stdcall custom_select(int nfds, fd_set *readfds, fd_set *writefds, fd_set *exceptfds, const struct timeval *timeout)
{
	#ifndef DISABLE_ADVANCED_LOGGING
	Logger(lINFO, "select()", "nfds: %d", nfds);
	#endif
	return realselect(nfds, readfds, writefds, exceptfds, timeout);
}

char *__stdcall custom_inet_ntoa(struct in_addr in)
{
	#ifndef DISABLE_ADVANCED_LOGGING
	Logger(lINFO, "inet_ntoa()", "/");
	#endif
	return realinet_ntoa(in);
}

int *__stdcall custom_shutdown(SOCKET s, int how)
{
	#ifndef DISABLE_ADVANCED_LOGGING
	Logger(lINFO, "shutdown()", "Socket: %s | How: %d", s.ToString(), how);
	#endif
	return realshutdown(s, how);
}

int *__stdcall custom_gethostname(char *name, int namelen)
{
	#ifndef DISABLE_ADVANCED_LOGGING
	Logger(lINFO, "gethostname()", "Namelen: %d", namelen);
	#endif
	return realgethostname(name, namelen);
}

int *__stdcall custom_getsockopt(SOCKET s, int level, int optname, char *optval, int *optlen)
{
	#ifndef DISABLE_ADVANCED_LOGGING
	Logger(lINFO, "getsockopt()", "Socket: %s | Level: %d | Optname: %d | Optlen: %d", s.ToString(), level, optname, optlen);
	#endif
	return realgetsockopt(s, level, optname, optval, optlen);
}

u_long *__stdcall custom_htonl(u_long hostlong)
{
	#ifndef DISABLE_ADVANCED_LOGGING
	Logger(lINFO, "htonl()", "Hostlong: %s", hostlong.ToString());
	#endif
	return realhtonl(hostlong);
}

u_long *__stdcall custom_ntohl(u_long hostlong)
{
	#ifndef DISABLE_ADVANCED_LOGGING
	Logger(lINFO, "ntohl()", "Hostlong: %s", hostlong.ToString());
	#endif
	return realntohl(hostlong);
}

u_short *__stdcall custom_ntohs(u_short netshort)
{
	#ifndef DISABLE_ADVANCED_LOGGING
	Logger(lINFO, "ntohs()", "Netshort: %s", netshort.ToString());
	#endif
	return realntohs(netshort);
}

u_short *__stdcall custom_htons(u_short netshort)
{
	#ifndef DISABLE_ADVANCED_LOGGING
	Logger(lINFO, "htons", "Netshort: %s", netshort.ToString());
	#endif
	return realhtons(netshort);
}

int *__stdcall custom_getsockname(SOCKET s, struct sockaddr *name, int *namelen)
{
	#ifndef DISABLE_ADVANCED_LOGGING
	Logger(lINFO, "getsockname()", "Socket: %s | Namelen: %d", s.ToString(), namelen);
	#endif
	return realgetsockname(s, name, namelen);
}

void WS2_32::Patch()
{	
	Logger(lINFO, "gethostbyname()", "Detoured");
	PBYTE offset1 = (PBYTE)GetProcAddress(GetModuleHandleA("ws2_32.dll"), "gethostbyname");
	realgethostbyname = (gethostbyname_t)DetourFunction(offset1, (PBYTE)&custom_gethostbyname);
	Logger(lINFO, "gethostbyname()", "Detoured");
	PBYTE offset2 = (PBYTE)GetProcAddress(GetModuleHandleA("ws2_32.dll"), "connect");
	realconnect = (connect_t)DetourFunction(offset2, (PBYTE)&custom_connect);
	Logger(lINFO, "connect()", "Detoured");
	PBYTE offset3 = (PBYTE)GetProcAddress(GetModuleHandleA("ws2_32.dll"), "send");
	realsend = (send_t)DetourFunction(offset3, (PBYTE)&custom_send);
	Logger(lINFO, "send()", "Detoured");
	PBYTE offset4 = (PBYTE)GetProcAddress(GetModuleHandleA("ws2_32.dll"), "recv");
	realrecv = (recv_t)DetourFunction(offset4, (PBYTE)&custom_recv);
	Logger(lINFO, "recv()", "Detoured");
	PBYTE offset5 = (PBYTE)GetProcAddress(GetModuleHandleA("ws2_32.dll"), "bind");
	realbind = (bind_t)DetourFunction(offset5, (PBYTE)&custom_bind);
	Logger(lINFO, "bind()", "Detoured");
	PBYTE offset6 = (PBYTE)GetProcAddress(GetModuleHandleA("ws2_32.dll"), "listen");
	reallisten = (listen_t)DetourFunction(offset6, (PBYTE)&custom_listen);
	Logger(lINFO, "listen()", "Detoured");
	PBYTE offset7 = (PBYTE)GetProcAddress(GetModuleHandleA("ws2_32.dll"), "accept");
	realaccept = (accept_t)DetourFunction(offset7, (PBYTE)&custom_accept);
	Logger(lINFO, "accept()", "Detoured");
	PBYTE offset8 = (PBYTE)GetProcAddress(GetModuleHandleA("ws2_32.dll"), "sendto");
	realsendto = (sendto_t)DetourFunction(offset8, (PBYTE)&custom_sendto);
	Logger(lINFO, "sendto()", "Detoured");
	PBYTE offset9 = (PBYTE)GetProcAddress(GetModuleHandleA("ws2_32.dll"), "recvfrom");
	realrecvfrom = (recvfrom_t)DetourFunction(offset9, (PBYTE)&custom_recvfrom);
	Logger(lINFO, "recvfrom()", "Detoured");
	PBYTE offset10 = (PBYTE)GetProcAddress(GetModuleHandleA("ws2_32.dll"), "ioctlsocket");
	realioctlsocket = (ioctlsocket_t)DetourFunction(offset10, (PBYTE)&custom_ioctlsocket);
	Logger(lINFO, "ioctlsocket()", "Detoured");
	PBYTE offset11 = (PBYTE)GetProcAddress(GetModuleHandleA("ws2_32.dll"), "socket");
	realsocket = (socket_t)DetourFunction(offset11, (PBYTE)&custom_socket);
	Logger(lINFO, "socket()", "Detoured");
	PBYTE offset12 = (PBYTE)GetProcAddress(GetModuleHandleA("ws2_32.dll"), "inet_addr");
	realinet_addr = (inet_addr_t)DetourFunction(offset12, (PBYTE)&custom_inet_addr);
	Logger(lINFO, "inet_addr()", "Detoured");
	PBYTE offset13 = (PBYTE)GetProcAddress(GetModuleHandleA("ws2_32.dll"), "closesocket");
	realclosesocket = (closesocket_t)DetourFunction(offset13, (PBYTE)&custom_closesocket);
	Logger(lINFO, "closesocket()", "Detoured");
	PBYTE offset14 = (PBYTE)GetProcAddress(GetModuleHandleA("ws2_32.dll"), "setsockopt");
	realsetsockopt = (setsockopt_t)DetourFunction(offset14, (PBYTE)&custom_setsockopt);
	Logger(lINFO, "setsockopt()", "Detoured");
	PBYTE offset15 = (PBYTE)GetProcAddress(GetModuleHandleA("ws2_32.dll"), "select");
	realselect = (select_t)DetourFunction(offset15, (PBYTE)&custom_select);
	Logger(lINFO, "select()", "Detoured");
	PBYTE offset16 = (PBYTE)GetProcAddress(GetModuleHandleA("ws2_32.dll"), "inet_ntoa");
	realinet_ntoa = (inet_ntoa_t)DetourFunction(offset16, (PBYTE)&custom_inet_ntoa);
	Logger(lINFO, "inet_ntoa()", "Detoured");
	PBYTE offset17 = (PBYTE)GetProcAddress(GetModuleHandleA("ws2_32.dll"), "shutdown");
	realshutdown = (shutdown_t)DetourFunction(offset17, (PBYTE)&custom_shutdown);
	Logger(lINFO, "shutdown()", "Detoured");
	PBYTE offset18 = (PBYTE)GetProcAddress(GetModuleHandleA("ws2_32.dll"), "gethostname");
	realgethostname = (gethostname_t)DetourFunction(offset18, (PBYTE)&custom_gethostname);
	Logger(lINFO, "gethostname()", "Detoured");
	PBYTE offset19 = (PBYTE)GetProcAddress(GetModuleHandleA("ws2_32.dll"), "getsockopt");
	realgetsockopt = (getsockopt_t)DetourFunction(offset19, (PBYTE)&custom_getsockopt);
	Logger(lINFO, "getsockopt()", "Detoured");
	PBYTE offset20 = (PBYTE)GetProcAddress(GetModuleHandleA("ws2_32.dll"), "htonl");
	realhtonl = (htonl_t)DetourFunction(offset20, (PBYTE)&custom_htonl);
	Logger(lINFO, "htonl()", "Detoured");
	PBYTE offset21 = (PBYTE)GetProcAddress(GetModuleHandleA("ws2_32.dll"), "ntohl");
	realntohl = (ntohl_t)DetourFunction(offset21, (PBYTE)&custom_ntohl);
	Logger(lINFO, "ntohl()", "Detoured");
	PBYTE offset22 = (PBYTE)GetProcAddress(GetModuleHandleA("ws2_32.dll"), "ntohs");
	realntohs = (ntohs_t)DetourFunction(offset22, (PBYTE)&custom_ntohs);
	Logger(lINFO, "ntohs()", "Detoured");
	PBYTE offset23 = (PBYTE)GetProcAddress(GetModuleHandleA("ws2_32.dll"), "htons");
	realhtons = (htons_t)DetourFunction(offset23, (PBYTE)&custom_htons);
	Logger(lINFO, "htons()", "Detoured");
	PBYTE offset24 = (PBYTE)GetProcAddress(GetModuleHandleA("ws2_32.dll"), "getsockname");
	realgetsockname = (getsockname_t)DetourFunction(offset24, (PBYTE)&custom_getsockname);
	Logger(lINFO, "getsockname()", "Detoured");
}