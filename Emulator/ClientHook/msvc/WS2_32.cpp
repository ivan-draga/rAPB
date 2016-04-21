#include "WS2_32.h"
#include "StdAfx.h"
#include <detours\detours.h>
#include "CPatcher.h"
#include "CustomArgs.h"

#define DISABLE_ADVANCED_LOGGING

int (WINAPI *real_send)(SOCKET s, const char* buf, int len, int flags) = send;
int WINAPI custom_send(SOCKET s, const char* buf, int len, int flags);

int (WINAPI *real_recv)(SOCKET s, char* buf, int len, int flags) = recv;
int WINAPI custom_recv(SOCKET s, char* buf, int len, int flags);

struct hostent* (WINAPI *real_gethostbyname)(const char* name) = gethostbyname;
struct hostent* WINAPI custom_gethostbyname(const char* name);

int (WINAPI *real_connect)(SOCKET s, const struct sockaddr *name, int namelen) = connect;
int WINAPI custom_connect(SOCKET s, const struct sockaddr *name, int namelen);

int (WINAPI *real_bind)(SOCKET s, const struct sockaddr *name, int namelen) = bind;
int WINAPI custom_bind(SOCKET s, const struct sockaddr *name, int namelen);

int (WINAPI *real_listen)(SOCKET s, int backlog) = listen;
int WINAPI custom_listen(SOCKET s, int backlog);

SOCKET (WINAPI *real_accept)(SOCKET s, sockaddr *addr, int *addrlen) = accept;
SOCKET WINAPI custom_accept(SOCKET s, sockaddr *addr, int *addrlen);

int (WINAPI *real_sendto)(SOCKET s, const char *buf, int len, int flags, const struct sockaddr *to, int tolen) = sendto;
int WINAPI custom_sendto(SOCKET s, const char *buf, int len, int flags, const struct sockaddr *to, int tolen);

int (WINAPI *real_recvfrom)(SOCKET s, char *buf, int len, int flags, struct sockaddr *from, int *fromlen) = recvfrom;
int WINAPI custom_recvfrom(SOCKET s, char *buf, int len, int flags, struct sockaddr *from, int *fromlen);

SOCKET (WINAPI *real_socket)(int af, int type, int protocol) = socket;
SOCKET WINAPI custom_socket(int af, int type, int protocol);

int (WINAPI *real_closesocket)(SOCKET s) = closesocket;
int WINAPI custom_closesocket(SOCKET s);

int (WINAPI *real_setsockopt)(SOCKET s, int level, int optname, const char *optval, int optlen) = setsockopt;
int WINAPI custom_setsockopt(SOCKET s, int level, int optname, const char *optval, int optlen);

int (WINAPI *real_select)(int nfds, fd_set *readfds, fd_set *writefds, fd_set *exceptfds, const struct timeval *timeout) = select;
int WINAPI custom_select(int nfds, fd_set *readfds, fd_set *writefds, fd_set *exceptfds, const struct timeval *timeout);

int (WINAPI *real_shutdown)(SOCKET s, int how) = shutdown;
int WINAPI custom_shutdown(SOCKET s, int how);

int (WINAPI *real_gethostname)(char *name, int namelen) = gethostname;
int WINAPI custom_gethostname(char *name, int namelen);

int (WINAPI *real_getsockopt)(SOCKET s, int level, int optname, char *optval, int *optlen) = getsockopt;
int WINAPI custom_getsockopt(SOCKET s, int level, int optname, char *optval, int *optlen);

int (WINAPI *real_getsockname)(SOCKET s, struct sockaddr *name, int *namelen) = getsockname;
int WINAPI custom_getsockname(SOCKET s, struct sockaddr *name, int *namelen);

int WINAPI custom_send(SOCKET s, const char* buf, int len, int flags)
{
	if(CustomArgs::advlog == true) Logger(lINFO, "send()", "%s | %d | %d", buf, len, flags);
	return real_send(s, buf, len, flags);
}

int WINAPI custom_recv(SOCKET s, char* buf, int len, int flags)
{
	if(CustomArgs::advlog == true) Logger(lINFO, "recv", "%s | %d | %d", buf, len, flags);
	return real_recv(s, buf, len, flags);
}

struct hostent* WINAPI custom_gethostbyname(const char* name) 
{
	if(CustomArgs::advlog == true) Logger(lINFO, "gethostbyname()", "Name: %s", name);
	return real_gethostbyname(name);
}

int WINAPI custom_connect(SOCKET s, const struct sockaddr *name, int namelen) 
{
	if(CustomArgs::advlog == true) Logger(lINFO, "connect()", "Socket: %s | Namelen: %d", s.ToString(), namelen);
	return real_connect(s, name, namelen);
}

int WINAPI custom_bind(SOCKET s, const struct sockaddr *name, int namelen) 
{
	if(CustomArgs::advlog == true) Logger(lINFO, "bind()", "Socket: %s | Namelen: %d", s.ToString(), namelen);
	return real_bind(s, name, namelen);
}

int WINAPI custom_listen(SOCKET s, int backlog) 
{
	if(CustomArgs::advlog == true) Logger(lINFO, "listen()", "Socket: %s | Backlog: %d", s.ToString(), backlog);
	return real_listen(s, backlog);
}

SOCKET WINAPI custom_accept(SOCKET s, sockaddr *addr, int *addrlen) 
{
	if(CustomArgs::advlog == true) Logger(lINFO, "accept()", "Socket: %s | Addrlen: %d", s.ToString(), addrlen);
	return real_accept(s, addr, addrlen);
}

int WINAPI custom_sendto(SOCKET s, const char *buf, int len, int flags, const struct sockaddr *to, int tolen) 
{
	if(CustomArgs::advlog == true) Logger(lINFO, "sendto()", "Socket: %s | Len: %d | Flags: %d | Tolen: %d", s.ToString(), len, flags, tolen);
	return real_sendto(s, buf, len, flags, to, tolen);
}

int WINAPI custom_recvfrom(SOCKET s, char *buf, int len, int flags, struct sockaddr *from, int *fromlen) 
{
	if(CustomArgs::advlog == true) Logger(lINFO, "recvfrom()", "Socket: %s | Len: %d | Flags: %d| Fromlen: %d", s.ToString(), len, flags, fromlen);
	return real_recvfrom(s, buf, len, flags, from, fromlen);
}

SOCKET WINAPI custom_socket(int af, int type, int protocol)
{
	if(CustomArgs::advlog == true) Logger(lINFO, "socket()", "af: %d | Type: %d | Protocol: %d", af, type, protocol);
	return real_socket(af, type, protocol);
}
int WINAPI custom_closesocket(SOCKET s)
{
	if(CustomArgs::advlog == true) Logger(lINFO, "closesocket()", "Socket: %s", s.ToString());
	return real_closesocket(s);
}

int WINAPI custom_setsockopt(SOCKET s, int level, int optname, const char *optval, int optlen)
{
	if(CustomArgs::advlog == true) Logger(lINFO, "setsockopt()", "Socket: %s | Level: %d | Optname: %d | Optlen: %d", s.ToString(), level, optname, optlen);
	return real_setsockopt(s, level, optname, optval, optlen);
}

int WINAPI custom_select(int nfds, fd_set *readfds, fd_set *writefds, fd_set *exceptfds, const struct timeval *timeout)
{
	if(CustomArgs::advlog == true) Logger(lINFO, "select()", "nfds: %d", nfds);
	return real_select(nfds, readfds, writefds, exceptfds, timeout);
}

int WINAPI custom_shutdown(SOCKET s, int how)
{
	if(CustomArgs::advlog == true) Logger(lINFO, "shutdown()", "Socket: %s | How: %d", s.ToString(), how);
	return real_shutdown(s, how);
}

int WINAPI custom_gethostname(char *name, int namelen)
{
	if(CustomArgs::advlog == true) Logger(lINFO, "gethostname()", "Namelen: %d", namelen);
	return real_gethostname(name, namelen);
}

int WINAPI custom_getsockopt(SOCKET s, int level, int optname, char *optval, int *optlen)
{
	if(CustomArgs::advlog == true) Logger(lINFO, "getsockopt()", "Socket: %s | Level: %d | Optname: %d | Optlen: %d", s.ToString(), level, optname, optlen);
	return real_getsockopt(s, level, optname, optval, optlen);
}

int WINAPI custom_getsockname(SOCKET s, struct sockaddr *name, int *namelen)
{
	if(CustomArgs::advlog == true) Logger(lINFO, "getsockname()", "Socket: %s | Namelen: %d", s.ToString(), namelen);
	return real_getsockname(s, name, namelen);
}

void WS2_32::Patch()
{	
	DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourAttach(&(PVOID&)real_send, custom_send);
    if(DetourTransactionCommit() != NO_ERROR) Logger(lERROR, "send()", "Detour failed");

	DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourAttach(&(PVOID&)real_recv, custom_recv);
	if(DetourTransactionCommit() != NO_ERROR) Logger(lERROR, "recv()", "Detour failed");

	DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourAttach(&(PVOID&)real_gethostbyname, custom_gethostbyname);
    if(DetourTransactionCommit() != NO_ERROR) Logger(lERROR, "gethostbyname()", "Detour failed");

	DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourAttach(&(PVOID&)real_connect, custom_connect);
    if(DetourTransactionCommit() != NO_ERROR) Logger(lERROR, "connect()", "Detour failed");

	DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourAttach(&(PVOID&)real_bind, custom_bind);
    if(DetourTransactionCommit() != NO_ERROR) Logger(lERROR, "bind()", "Detour failed");

	DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourAttach(&(PVOID&)real_listen, custom_listen);
    if(DetourTransactionCommit() != NO_ERROR) Logger(lERROR, "listen()", "Detour failed");

	DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourAttach(&(PVOID&)real_accept, custom_accept);
    if(DetourTransactionCommit() != NO_ERROR) Logger(lERROR, "accept()", "Detour failed");

	DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourAttach(&(PVOID&)real_sendto, custom_sendto);
    if(DetourTransactionCommit() != NO_ERROR) Logger(lERROR, "sendto()", "Detour failed");

	DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourAttach(&(PVOID&)real_recvfrom, custom_recvfrom);
    if(DetourTransactionCommit() != NO_ERROR) Logger(lERROR, "recvfrom()", "Detour failed");

	DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourAttach(&(PVOID&)real_socket, custom_socket);
    if(DetourTransactionCommit() != NO_ERROR) Logger(lERROR, "socket()", "Detour failed");

	DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourAttach(&(PVOID&)real_closesocket, custom_closesocket);
    if(DetourTransactionCommit() != NO_ERROR) Logger(lERROR, "closesocket()", "Detour failed");

	DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourAttach(&(PVOID&)real_setsockopt, custom_setsockopt);
    if(DetourTransactionCommit() != NO_ERROR) Logger(lERROR, "setsockopt()", "Detour failed");

	DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourAttach(&(PVOID&)real_select, custom_select);
    if(DetourTransactionCommit() != NO_ERROR) Logger(lERROR, "select()", "Detour failed");

	DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourAttach(&(PVOID&)real_shutdown, custom_shutdown);
    if(DetourTransactionCommit() != NO_ERROR) Logger(lERROR, "shutdown()", "Detour failed");

	DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourAttach(&(PVOID&)real_gethostname, custom_gethostname);
    if(DetourTransactionCommit() != NO_ERROR) Logger(lERROR, "gethostname()", "Detour failed");

	DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourAttach(&(PVOID&)real_getsockopt, custom_getsockopt);
    if(DetourTransactionCommit() != NO_ERROR) Logger(lERROR, "getsockopt()", "Detour failed");

	DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourAttach(&(PVOID&)real_getsockname, custom_getsockname);
    if(DetourTransactionCommit() != NO_ERROR) Logger(lERROR, "getsockname()", "Detour failed");

	Logger(lINFO, "WinSock", "Functions detoured");
}