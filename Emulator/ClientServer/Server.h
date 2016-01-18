#using <System.dll>

#using "mscorlib.dll"

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Text;
using namespace System::Net::Sockets;
using namespace System::Threading;
using namespace System::Net;

public ref class Listener
{
public:
	TcpListener ^tcpListener;
	Thread ^listenThread;
	String ^IP;
	int Port;
	Listener(String ^ip, Int32 port);
	void listenForClients();
	void handleServer(Object ^client);
};
