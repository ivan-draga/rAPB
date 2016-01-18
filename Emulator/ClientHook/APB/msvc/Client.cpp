#include "StdAfx.h"
#include "Client.h"
#include "Packet.h"
#include "Addresses.h"

Client::Client(String ^ip, int Port)
{
	address = gcnew IPEndPoint(IPAddress::Parse(ip), Port);
	client = gcnew TcpClient();
	connect(address);
	stream = client->GetStream();
	clientThread = gcnew Thread(gcnew ThreadStart(this, &Client::handleServer));
	clientThread->Start();
}

void Client::connect(IPEndPoint ^serverEndPoint)
{
	try
	{
		client->Connect(serverEndPoint);
		Logger(lDEBUG, "Server", "Connected to main server");
	}
	catch (SocketException ^ex)
	{
		Logger(lERROR, "Server", "Main server is offline");
		MessageBox(NULL, "Main server is offline!", "ERROR", NULL);
		Logger(lWARN, "APB", "Process stopped");
		exit(2);
	}
}

void Client::handleServer()
{
	SPacket ^initPacket = gcnew SPacket();
	char token[9];
	FILE* apb;
	errno_t err;
	if ((err = fopen_s(&apb, TOKEN_FILE_STR,"r")) == 0) fgets(token, sizeof(token), apb), fclose(apb);
	initPacket->WriteByte(0);
	initPacket->WriteS(System::Convert::ToString((int)BUILDNUM));
	char* token1;
	char* tken = (char*)token;
	for(int i = 0; i < 4; i++) token1[i] = tken[i];
	char* token2;
	for(int i = 0, j = 4; j < 8; i++, j++) token2[i] = tken[j];
	initPacket->WriteC((char*)token1);
	initPacket->WriteC((char*)token2);
	stream->Write(initPacket->ToArray(), 0, initPacket->ToArray()->Length);
	stream->Flush();
	array<Byte> ^message = gcnew array<Byte>(4096);
	int bytesRead;
	while (true)
	{
		bytesRead = 0;
		try
		{
			bytesRead = stream->Read(message, 0, 4096);
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
			case safe_cast<Byte>(1):
			{
				packet = gcnew Packet();
				packet->Write(message, 1, bytesRead - 1);
				int res = packet->Handle(1);
				if(res == 0)
				{
					client->Close();
					delete stream;
					Logger(lERROR, "Server", "Disconnected");
					Logger(lWARN, "APB", "Process stopped");
					exit(2);
				}
			}
		}
	}
	client->Close();
	delete stream;
	client = gcnew TcpClient();
	connect(address);
}

void Client::Send(SPacket ^packet)
{
	array<Byte> ^array_Renamed = packet->ToArray();
	stream->Write(array_Renamed, 0, array_Renamed->Length);
	stream->Flush();
}