#include "stdafx.h"
#include "Configuration.h"

Configuration::Configuration(char* file)
{
	ifstream in(file);
	char str[255];
	int line = 0;
	this->ip = new char[16];
	this->port = 0;
	this->districtId = 0;
	this->districtType = 0;
	this->language = 0;

	if (!in)
	{
		cout << "Cannot open config file.\n";
		return;
	}

	while (in) 
	{
		in.getline(str, 255);
		if (in)
		{
			if (line == 0) strcpy(this->ip, str);
			else if (line == 1) this->port = atoi(str);
			else if (line == 2)
			{
				if (strcmp(str, "Social") == 0) this->districtType = 1;
				else if (strcmp(str, "Financial") == 0) this->districtType = 2;
				else if (strcmp(str, "Waterfront") == 0) this->districtType = 21;
				else if (strcmp(str, "FinancialHardcore") == 0) this->districtType = 8;
				else if (strcmp(str, "WaterfrontHardcore") == 0) this->districtType = 27;
				else if (strcmp(str, "Tutorial") == 0) this->districtType = 14;
				else this->districtType = 1;
			}
			else if (line == 3) this->districtId = atoi(str);
			else if (line == 4)
			{
				if (strcmp(str, "English") == 0) this->language = 0;
				else if (strcmp(str, "French") == 0) this->language = 1;
				else if (strcmp(str, "Italian") == 0) this->language = 2;
				else if (strcmp(str, "German") == 0) this->language = 3;
				else if (strcmp(str, "Spanish") == 0) this->language = 4;
				else if (strcmp(str, "Russian") == 0) this->language = 5;
				else this->language = 0;
			}
			line++;
		}
	}
	in.close();
}

char* Configuration::GetWorldIP()
{
	return this->ip;
}

int Configuration::GetWorldPort()
{
	return this->port;
}

int Configuration::GetDistrictType()
{
	return this->districtType;
}

int Configuration::GetDistrictID()
{
	return this->districtId;
}

int Configuration::GetDistrictLanguage()
{
	return this->language;
}