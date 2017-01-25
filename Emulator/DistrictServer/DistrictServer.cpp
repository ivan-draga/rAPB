#include "stdafx.h"
#include "Network.h"
#include "Account.h"
#include "Configuration.h"

Configuration* cfg;
vector<Account*>* accounts;
Network* net;

bool ProcessPacket(char* buffer);
bool ContainsAccount(int id);
void Thread(Account* acc);

int main()
{
	Log_Clear();
	cfg = new Configuration("Configs\\District.conf");
	accounts = new vector<Account*>();
	net = new Network();
	if (net->Setup(cfg->GetWorldIP(), cfg->GetWorldPort()) == OK)
	{
		Logger(lINFO, "Network::Setup()", "Ready to connect to World Server");
		if (net->Connect() == OK)
		{
			Logger(lSUCCESS, "Network::Connect()", "Connected to World Server");
			char data[10];
			sprintf_s(data, sizeof(data), "%d%d%d%d", 0, cfg->GetDistrictType(), cfg->GetDistrictID(), cfg->GetDistrictLanguage()); 
			if(net->Send(data) == OK)
			{
				Logger(lINFO, "Network::Send()", "Initial data sent");
				char* initial = net->Receive(2);
				if(ProcessPacket(initial))
				{
					bool loop = true;
					while (loop)
					{
						char* districtEnter = net->Receive(2);
						loop = ProcessPacket(districtEnter);
					}
					Logger(lERROR, "main()", "Failed to process packet, exiting in 5 seconds...");
					Sleep(5000);
					exit(-1);
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

bool ProcessPacket(char* buffer)
{
	if (buffer[0] == '0')
	{
		Logger(lINFO, "ProcessPacket()", "Received response for initial packet");
		char response = buffer[1];
		if (response == '0')
		{
			Logger(lERROR, "ProcessPacket()", "Not allowed to host a district");
			return false;
		}
		else if (response == '1' || response == '2')
		{
			Logger(lERROR, "ProcessPacket()", "District already exists");
			return false;
		}
		else if (response == '3')
		{
			Logger(lSUCCESS, "ProcessPacket()", "Registered at World Server");
			return true;
		}
		else if (response == '4')
		{
			Logger(lERROR, "ProcessPacket()", "ID can not be 0");
			return false;
		}
		else return false;
	}
	else if (buffer[0] == '1')
	{
		int accountId = (int)buffer[1];
		char* encryptionKey = net->Receive(16);
		Account* acc = new Account(accountId, encryptionKey);
		if (ContainsAccount(acc->GetId())) return true;
		Logger(lINFO, "ProcessPacket()", "District enter from account ID: %d (key: %s)", accountId, encryptionKey);
		accounts->push_back(acc);
		thread t(Thread, acc);
		t.join();
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
	//TODO: udp packet receiving
}