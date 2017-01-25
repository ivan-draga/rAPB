#pragma once

class Configuration
{
private:
	char* ip;
	int port;
	int districtType;
	int districtId;
	int language;
public:
	Configuration(char* file);
	char* GetWorldIP();
	int GetWorldPort();
	int GetDistrictType();
	int GetDistrictID();
	int GetDistrictLanguage();
};