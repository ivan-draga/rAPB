#include "stdafx.h"
#include "SPacket.h"

SPacket::SPacket() : MemoryStream()
{
}

void SPacket::WriteS(String ^s)
{
	WriteByte(safe_cast<Byte>(s->Length));
	for (int i = 0; i < s->Length; i++) WriteByte(safe_cast<Byte>(s[i]));
}





