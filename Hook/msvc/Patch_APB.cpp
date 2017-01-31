#include "Patch_APB.h"
#include "CPatcher.h"
#include "Addresses.h"

void Patches()
{
}

void* Patch_APB::Hook() 
{
	char* path = new char[512];
	GetModuleFileNameA(NULL, path, 512);
	Logger(lINFO, "APB path", "%s", path);
	char* newloc = new char[512];
	int count = 0;
	for(int i = 0; i != strlen(path); i++) 
	{
		if(path[i] == '\\' ) count++;
		if(count == 4) 
		{
			newloc[i] = NULL;
			break;
		}
		newloc[i] = path[i];
	}
	Logger(lINFO, "Game folder", "%s", newloc);
	Patches();
	Logger(lSUCCESS, "APB", "All patches/updates applied");
	return 0;
}

