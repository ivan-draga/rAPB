#include "stdafx.h"
#include "Packet.h"
#include <string>
#include "Auth.h"

Packet::Packet() : MemoryStream()
{
}

String ^Packet::ReadS()
{
	int length = ReadByte();
	if (length > Length - Position) return "";
	array<Byte> ^str = gcnew array<Byte>(length);
	Read(str, 0, length);
	return Encoding::ASCII->GetString(str);
}

int Packet::Handle(Client ^client, Byte opcode)
{
	switch(opcode)
	{
		case 0:
		{
			char build[6];
			FILE* apb;
			errno_t err;
			if ((err = fopen_s(&apb, "Configs\\build.cfg","r")) == 0) fgets(build, sizeof(build), apb), fclose(apb);
			Position = 0;
			String ^num = ReadS();
			String ^token = ReadS();
			String ^token2 = ReadS();
			String ^ftoken = token + token2;
			Logger(lINFO, "Handle()", "Authorization packet received from %s (build: %s)", ftoken, num);
			if(num[0] == build[0] && num[1] == build[1] && num[2] == build[2])
			{
				Logger(lINFO, "Handle()", "Client version matches");
				Logger(lINFO, "Auth", "Performing authorization");
				if(Auth::PerformLogin(ftoken) == 0)
				{
					SPacket ^packet = gcnew SPacket();
					packet->WriteByte(1);
					packet->WriteS("t");
					packet->WriteS("t");
					packet->WriteS("127.0.0.1:2106"); //Login server IP
					packet->WriteS("127.0.0.1:2107"); //World server IP
					//packet->WriteS("DB_INFO_HERE"); //TODO: proper database info passing
					client->Send(packet);
					Logger(lINFO, "PerformLogin()", "Authorization successful for client token %s", ftoken);
					client->token = ftoken;
				}
				else
				{
					SPacket ^packet = gcnew SPacket();
					packet->WriteByte(1);
					packet->WriteS("t");
					packet->WriteS("f");
					packet->WriteS("0.0.0.0:0");
					packet->WriteS("0.0.0.0:0");
					//packet->WriteS("(null)"); //null for DB info
					client->Send(packet);
					Logger(lERROR, "PerformLogin()", "Authorization failed for client token %s", ftoken);
				}
				return 1;
			}
			else
			{
				SPacket ^packet = gcnew SPacket();
				packet->WriteByte(1);
				packet->WriteS("f");
				packet->WriteS("f");
				packet->WriteS("0.0.0.0:0");
				packet->WriteS("0.0.0.0:0");
				//packet->WriteS("(null)"); //null for DB info
				client->Send(packet);
				Logger(lERROR, "Handle()", "Client version mismatch for token %s", ftoken);
				return 0;
			}
			break;
		}
	}
	return 0;
}

