#include "SPacket.h"

using namespace System;
using namespace System::Net::Sockets;

public ref class Client
{
public:
	TcpClient ^tcp;
	String ^token;
	Client(TcpClient ^client);
	void Send(SPacket ^packet);
};
