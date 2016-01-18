#include "SPacket.h"

SPacket::SPacket() : MemoryStream()
{
}

void SPacket::WriteS(String ^s)
{
	WriteByte(safe_cast<Byte>(s->Length));
	for (int i = 0; i < s->Length; i++) WriteByte(safe_cast<Byte>(s[i]));
}

void SPacket::WriteC(char* c)
{
	WriteByte(safe_cast<Byte>(sizeof(c)));
	for (int i = 0; i < sizeof(c); i++) WriteByte(safe_cast<Byte>(c[i]));
}



