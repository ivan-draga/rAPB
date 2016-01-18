#include <windows.h>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <io.h>
#include <fcntl.h>

#include "Base.h"

class Patch_APB
{
public:
	static void* HOOK();
};
