#include "stdafx.h"

#include "Network.h"
#include "Account.h"
#include "Configuration.h"
#include "UdpListener.h"

Configuration* cfg;
vector<Account*>* accounts;
vector<thread*>* threads;
Network* world;
int count;

bool ProcessWorldPacket(char* buffer);
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
				char* response = world->Receive(2);
				if(ProcessWorldPacket(response))
				{
					bool loop = true;
					while (loop)
					{
						char* districtEnter = world->Receive(2);
						loop = ProcessWorldPacket(districtEnter);
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

bool ProcessWorldPacket(char* buffer)
{
	if (buffer[0] == '0')
	{
		Logger(lINFO, "ProcessWorldPacket()", "Received response for initial packet");
		char response = buffer[1];
		if (response == '0')
		{
			Logger(lERROR, "ProcessWorldPacket()", "Not allowed to host a district");
			return false;
		}
		else if (response == '1' || response == '2')
		{
			Logger(lERROR, "ProcessWorldPacket()", "District already exists");
			return false;
		}
		else if (response == '3')
		{
			Logger(lSUCCESS, "ProcessWorldPacket()", "Registered at World Server");
			return true;
		}
		else if (response == '4')
		{
			Logger(lERROR, "ProcessWorldPacket()", "ID can not be 0");
			return false;
		}
		else return false;
	}
	else if (buffer[0] == '1')
	{
		int accountId = (int)buffer[1];
		char* encryptionKey = world->Receive(16);
		Account* acc = new Account(accountId, encryptionKey);
		if (ContainsAccount(acc->GetId())) return true;
		Logger(lINFO, "ProcessPacket()", "District enter from account ID: %d (key: %s)", accountId, encryptionKey);
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
		if(len > 0) Logger(lINFO, t, "Received data, size = %d", len);
		//TODO: process data, packet size seems 88 always
	}
}