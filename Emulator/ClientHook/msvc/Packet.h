#using <System.dll>
#using "mscorlib.dll"

using namespace System;
using namespace System::IO;
using namespace System::Text;

public ref class Packet : MemoryStream
{
public:
	Packet();
	String ^ReadS();
	int Handle(Byte opcode);
	static String ^loginServerIP;
	static String ^worldServerIP;
	//static String ^dbInfo = nullptr;
};
