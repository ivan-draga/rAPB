#include "stdafx.h"

#include <stdio.h>
#include <iostream>

#include "Network.h"

#define DISTRICT_TYPE 1 //social
#define DISTRICT_ID 1
#define LANGUAGE 0 //English

int main()
{
	Log_Clear();
	Network *net = new Network();
	if (net->Setup("127.0.0.1", 2108) == OK)
	{
		Logger(lINFO, "Network::Setup()", "Ready to connect to World Server");
		if (net->Connect() == OK)
		{
			Logger(lSUCCESS, "Network::Connect()", "Connected to World Server");
			char data[10];
			sprintf_s(data, sizeof(data), "%d%d%d%d", 0, DISTRICT_TYPE, DISTRICT_ID, LANGUAGE); //TODO: make this read from config file
			if(net->Send(data) == OK)
			{
				Logger(lINFO, "Network::Send()", "Initial data sent");
				if(net->Receive(Network::Packet::Initial) == INIT_LEN)
				{
					int num = 0;
					while (1)
					{
						num += net->Receive(Network::Packet::EncryptionKey);
						if (num == ENCKEY_LEN)
						{
							char* encryptionKey = net->GetEncryptionKey();
							Logger(lINFO, "Network::Receive()", "XXTEA encryption key received");
							//TODO: further...
							net->SetEncryptionKey(NULL);
						}
						else num = 0;
					}
				}
			}
			else Logger(lERROR, "Network::Send()", "Data sending failed");
		}
		else Logger(lERROR, "Network::Connect()", "Connection failed");
	}
	else Logger(lERROR, "Network::Setup()", "Socket setup failed");
    return 0;
}

