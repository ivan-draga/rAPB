#include "stdafx.h"

#include "Network.h"
#include "Account.h"
#include "Configuration.h"
#include "UdpListener.h"
#include "WS_DS_COM.h"

Configuration* cfg;
vector<Account*>* accounts;
vector<thread*>* threads;
Network* world;
WS2DS* packet;
bool ProcessWorldPacket(WS2DS* packet);
bool ContainsAccount(int id);
void Thread(Account* acc);

int main()
{
	Log_Clear();
	cfg = new Configuration("Configs\\District.conf");
	char* token = new char[8];
	strcpy(token, GetTokenFromFile("Configs\\token.id"));
	accounts = new vector<Account*>();
	threads = new vector<thread*>();
	world = new Network();
	if (world->Setup(cfg->GetWorldIP(), atoi(cfg->GetWorldPort())) == OK)
	{
		Logger(lINFO, "Network::Setup()", "Ready to connect to World Server");
		if (world->Connect() == OK)
		{
			Logger(lSUCCESS, "Network::Connect()", "Connected to World Server");
			if(world->SendInitial(cfg->GetDistrictType(), cfg->GetDistrictID(), cfg->GetDistrictLanguage(), GetPublicIP(), "6969", token) == OK)
			{
				Logger(lINFO, "Network::Send()", "Initial data sent");
				packet = new WS2DS(world->Receive(2));
				if(ProcessWorldPacket(packet))
				{
					bool loop = true;
					while (loop)
					{
						packet = new WS2DS(world->Receive(2));
						loop = ProcessWorldPacket(packet);
					}
					Logger(lERROR, "main()", "Exiting in 5 seconds...");
					Sleep(5000);
					exit(1);
				}
				else Logger(lERROR, "ProcessPacket()", "Initial packet failed to process");
			}
			else Logger(lERROR, "Network::Send()", "Data sending failed");
		}
		else Logger(lERROR, "Network::Connect()", "Connection failed");
	}
	else Logger(lERROR, "Network::Setup()", "Socket setup failed");
    return 0;
}

bool ProcessWorldPacket(WS2DS* packet)
{
	if (packet->ReadHeader() == WS2DS::ResponseToInitial)
	{
		Logger(lINFO, "ProcessWorldPacket()", "Received response for initial packet");
		switch (packet->ReadChar())
		{
			case WS2DS::NotAllowed:
				Logger(lERROR, "ProcessWorldPacket()", "Not allowed to host a district");
				return false;

			case WS2DS::DistrictAlreadyExists1:
			case WS2DS::DistrictAlreadyExists2:
				Logger(lERROR, "ProcessWorldPacket()", "District already exists");
				return false;

			case WS2DS::RegisterSuccess:
				Logger(lSUCCESS, "ProcessWorldPacket()", "Registered at World Server");
				return true;

			case WS2DS::IDis0:
				Logger(lERROR, "ProcessWorldPacket()", "ID can not be 0");
				return false;
				
			default:
				return false;
		}
	}
	else if (packet->ReadHeader() == WS2DS::AccountEntersDistrict)
	{
		int accountId = (int)packet->ReadChar();
		char* encryptionKey = world->Receive(16);
		Account* acc = new Account(accountId, encryptionKey);
		if (ContainsAccount(acc->GetId())) return true;
		Logger(lINFO, "ProcessPacket()", "District enter from account ID: %d (key: %s)", acc->GetId(), acc->GetEncryptionKey());
		accounts->push_back(acc);
		thread *t = new thread(Thread, acc);
		threads->push_back(t);
		threads->back()->join();
		return true;
	}
	else return false;
}

bool ContainsAccount(int id)
{
	for (std::vector<Account*>::iterator it = accounts->begin(); it != accounts->end(); ++it) 
	{
		Account* acc = *it;
		if (acc->GetId() == id) return true;
	}
	return false;
}

void Thread(Account* acc)
{
	UdpListener* listener = new UdpListener();
	while (1)
	{
		char t[30];
		sprintf_s(t, sizeof(t), "Thread(%d)", acc->GetId());
		char data[2048];
		strcpy(data, listener->Receive());
		int len = strlen(data);
		if (len > 0) Logger(lINFO, t, "Received data, size = %d", len);
	}
}
