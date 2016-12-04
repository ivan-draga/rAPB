#include "stdafx.h"

#include <stdio.h>
#include <iostream>

#include "Network.h"

int main()
{
	Network *net = new Network();
	if (net->Setup("127.0.0.1", 2108) == 0)
	{
		Logger(lINFO, "Network::Setup()", "Ready to connect to World Server");
		if (net->Connect() == 0)
		{
			Logger(lSUCCESS, "Network::Connect()", "Connected to World Server");
			char data[10];
			sprintf_s(data, sizeof(data), "%d%d%d%d", 0, 1, 1, 0); //packet id, district type, district id, language
			if(net->Send(data) == 0)
			{
				Logger(lINFO, "Network::Send()", "Initial data sent");
				if(net->ReceiveInitial() == 0)
				{
					char* encryptionKey = net->ReceiveEncryptionKey();
					Logger(lINFO, "Network::ReceiveEncryptionKey()", "%s (length: %d)", encryptionKey, strlen(encryptionKey));
					//TODO: further...
				}
				system("pause");
			}
			else Logger(lERROR, "Network::Send()", "Data sending failed");
		}
		else Logger(lERROR, "Network::Connect()", "Connection failed");
	}
	else Logger(lERROR, "Network::Setup()", "Socket setup failed");
    return 0;
}

