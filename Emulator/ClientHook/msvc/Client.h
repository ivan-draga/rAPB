#using <System.dll>

#using "mscorlib.dll"

#include "SPacket.h"

using namespace System;
using namespace System::Net;
using namespace System::Net::Sockets;
using namespace System::Text;
using namespace System::Threading;

public ref class Client
{
public:
	Client(String ^ip, int Port);
	TcpClient ^client;
	void Send(SPacket ^packet);
	Thread ^clientThread;
	NetworkStream ^stream;
	IPEndPoint ^address;
	void connect(IPEndPoint ^serverEndPoint);
	void handleServer();
};
