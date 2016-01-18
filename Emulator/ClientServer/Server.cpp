#include "stdafx.h"
#include "Server.h"
#include "Packet.h"
#include "Auth.h"

int dced = 0;

Listener::Listener(String ^ip, Int32 port)
{
	IPAddress ^address = IPAddress::Any;
	try
	{
		address = IPAddress::Parse(ip);
	}
	catch (...)
	{
	}
	IP = address->ToString();
	Port = port;
	tcpListener = gcnew TcpListener(address, port);
	listenThread = gcnew Thread(gcnew ThreadStart(this, &Listener::listenForClients));
	listenThread->Start();
	Logger(lDEBUG, "Listener()", "Client listener started");
}

void Listener::listenForClients()
{
	try
	{
		this->tcpListener->Start();
		Logger(lINFO, "listenForClients()", "Listening for clients");
	}
	catch (SocketException ^e1)
	{
		Thread::Sleep(5 * 1000);
		listenForClients();
	}
	while (true)
	{
		TcpClient ^client = this->tcpListener->AcceptTcpClient();
		Thread ^clientThread = gcnew Thread(gcnew ParameterizedThreadStart(this, &Listener::handleServer));
		clientThread->Start(client);
	}
}

void Listener::handleServer(Object ^client)
{
	Logger(lINFO, "handleServer()", "Received connection from client");
	TcpClient ^tcpClient = safe_cast<TcpClient^>(client);
	Client ^cclient = gcnew Client(tcpClient);
	NetworkStream ^clientStream = tcpClient->GetStream();
	array<Byte> ^message = gcnew array<Byte>(4096);
	Int32 bytesRead;
	while (true)
	{
		bytesRead = 0;
		try
		{
			bytesRead = clientStream->Read(message, 0, 4096);
		}
		catch (...)
		{
			break;
		}
		if (bytesRead == 0)
		{
			break;
		}

		Packet ^packet = nullptr;
		switch (message[0])
		{
			case safe_cast<Byte>(0):
			{
				packet = gcnew Packet();
				packet->Write(message, 1, bytesRead - 1);
				int res = packet->Handle(cclient, 0);
				if(res == 0) 
				{
					Auth::PerformLogout(cclient->token);
					Logger(lINFO, "PerformLogout()", "Client logged out");
					Logger(lERROR, "handleServer()", "Client disconnected: %s", cclient->token);
					tcpClient->Close();
					dced = 1;
				}
				break;
			}
		}
	}
	if(dced == 0)
	{
		Auth::PerformLogout(cclient->token);
		Logger(lINFO, "PerformLogout()", "Client logged out");
		Logger(lERROR, "handleServer()", "Client disconnected: %s", cclient->token);
		tcpClient->Close();
	}
	dced = 0;
}
