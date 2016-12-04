#include "stdafx.h"

#include <stdio.h>
#include <iostream>

#include "Network.h"

int main()
{
	Network *net = new Network();
	if (net->Setup("127.0.0.1", 2108) == 0)
	{
		if (net->Connect() == 0)
		{
			char data[10];
			sprintf_s(data, sizeof(data), "%d%d%d%d", 0, 1, 1, 0); //packet id, district type, district id, language
			net->Send(data);
			//todo: rest
			system("pause");
		}
	}
    return 0;
}

