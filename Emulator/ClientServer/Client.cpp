#include "stdafx.h"
#include "Client.h"

Client::Client(TcpClient ^client)
{
	tcp = client;
}

void Client::Send(SPacket ^packet)
{
	array<Byte> ^array_Renamed = packet->ToArray();
	tcp->GetStream()->Write(array_Renamed, 0, array_Renamed->Length);
	tcp->GetStream()->Flush();
}