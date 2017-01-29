#pragma once

class Configuration
{
private:
	char* ip;
	char* port;
	int districtType;
	int districtId;
	int language;
public:
	Configuration(char* file);
	char* GetWorldIP();
	char* GetWorldPort();
	int GetDistrictType();
	int GetDistrictID();
	int GetDistrictLanguage();
};