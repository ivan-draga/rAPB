#include "StdAfx.h"
#include "Packet.h"

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

int Packet::Handle(Byte opcode)
{
	switch(opcode)
	{
		case 1:
		{
			Position = 0;
			String ^response = ReadS();
			String ^response2 = ReadS();
			if(response == "t")
			{
				Logger(lINFO, "Client", "Correct client version");
				if(response2 == "t")
				{
					Logger(lINFO, "Auth", "Authorization successful");
					return 1;
				}
				else if(response2 == "f")
				{
					Logger(lINFO, "Auth", "Authorization failed");
					MessageBox(NULL, "Authorization failed due to invalid token!\n\nPlease make sure you have valid token ID.", "ERROR", NULL);
					return 0;
				}
			}
			else if(response == "f" && response2 == "f")
			{
				Logger(lINFO, "Client", "Wrong client version");
				MessageBox(NULL, "You don't have the latest client version!\n\nPlease make sure you've downloaded our latest client DLL.", "ERROR", NULL);
				return 0;
			}
			break;
		}
	}
	return 0;
}