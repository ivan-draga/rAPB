#include "StdAfx.h"
#include "CustomArgs.h"
#include "CPatcher.h"

void CustomArgs::ProcessArgs(array<String^>^ args)
{
	int arglen = ((args->Length)-1);
	if(arglen > 0)
	{
		if(arglen == 1) Logger(lINFO, "Arguments", "Trying to process 1 argument");
		else Logger(lINFO, "Arguments", "Trying to process %d arguments", arglen);
		for each(String^ s in args)
		{
			if(s == "+allowshadermod")  
			{
				allowshadermod = true;
				Logger(lINFO, "Shader", "Modifications of shader files are now allowed");
			}
			else if(s == "+disableinifileupdates") 
			{
					disableini = true;
					Logger(lINFO, "Configuration", "Auto-updating disabled for configuration files");
			}
			else if(s == "+disableeulatosupdates") 
			{
				disableeulatos = true;
				Logger(lINFO, "EULA/TOS", "Auto-updating disabled for 'EULA.*' and 'TOS.*' files");
			}
			else if(s == "+offline")
			{
				offline = true;
				Logger(lINFO, "Server", "Connection with server disabled");
			}
			else if(s == "+sdkdump")
			{
				sdkdump = true;
				Logger(lINFO, "SDK", "Use 'END' key to dump SDK");
			}
			else if(s == "+advlog")
			{
				advlog = true;
				Logger(lINFO, "Log", "Advanced logging of XmlLite and WS2 functions enabled");
			}
			else if(s->Contains("+server=") == true)
			{
				array<wchar_t> ^id = { '=' };
				array<String^>^ split = s->Split(id, 2, System::StringSplitOptions::None);
				serverip = (char*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(split[1]).ToPointer();
			}
			else if(s->Contains("+nop=") == true)
			{
				array<wchar_t> ^id = { '=' };
				array<String^>^ split = s->Split(id, 2, System::StringSplitOptions::None);
				DWORD d = Convert::ToUInt32(split[1], 16);
				CPatcher::InstallNopPatch(d);
				Logger(lINFO, "Patch", "Patched address '0x%X' with NOP", d);
			}
			else if(s->Contains("+ret=") == true)
			{
				array<wchar_t> ^id = { '=' };
				array<String^>^ split = s->Split(id, 2, System::StringSplitOptions::None);
				DWORD d = Convert::ToUInt32(split[1], 16);
				CPatcher::InstallRetnPatch(d);
				Logger(lINFO, "Patch", "Patched address '0x%X' with RETN", d);
			}
			else if(s->Contains("+str=") == true)
			{
				array<wchar_t> ^id = { '=' };
				array<String^>^ split = s->Split(id, 3, System::StringSplitOptions::None);
				DWORD d = Convert::ToUInt32(split[1], 16);
				char* str = (char*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(split[2]).ToPointer();
				char* test = (char*)d;
				int len1 = strlen(test);
				int len2 = strlen(str);
				if(len1 > len2) Logger(lWARN, "Warning", "Length of string '%s'(%d) is bigger than length of string '%s'(%d), thus causing some leftover letters if the sizes are not the same", (char*)d, len1, str, len2);
				CPatcher::InstallStringPatch(d, str, split[2]->Length);
				Logger(lINFO, "Patch", "Pushed string '%s' to address '0x%X'", str, d);
			}
			else if(s == "+fixeditorcrash") fixeditorcrash = true;
			else
			{
				if(!s->Contains("APB")) Logger(lWARN, "Warning", "Argument '%s' is either unknown or from APB", s);
			}
		}
	}
	else Logger(lINFO, "Arguments", "There are no arguments to process");
}