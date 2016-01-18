#using <System.dll>

#using "mscorlib.dll"

#include "Client.h"

using namespace System;
using namespace System::IO;
using namespace System::Text;

public ref class Packet : MemoryStream
{
public:
	Packet();
	String ^ReadS();
	int Handle(Client ^client, Byte opcode);
};
