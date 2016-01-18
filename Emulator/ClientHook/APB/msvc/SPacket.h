#using <System.dll>

#using "mscorlib.dll"

using namespace System;
using namespace System::IO;

public ref class SPacket : MemoryStream
{
public:
	SPacket();
	void WriteS(String ^s);
	void WriteC(char* c);
};
