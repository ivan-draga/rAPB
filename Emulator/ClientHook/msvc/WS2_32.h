#include <winsock2.h>
#include <windows.h>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <io.h>
#include <fcntl.h>

class WS2_32
{
public:
	static void Patch();
	static int count;
};