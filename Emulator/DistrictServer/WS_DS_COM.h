#pragma once

#include "stdafx.h"

class WS2DS
{
public:
	WS2DS(char* data)
	{
		this->data = new char[strlen(data)];
		strcpy(this->data, data);
		pos = 1;
	}

	char ReadHeader()
	{
		return data[0];
	}

	char ReadChar()
	{
		if (pos + 1 <= strlen(data)) return data[pos++];
		else return '\0';
	}

	static enum Headers
	{
		ResponseToInitial = '0',
		AccountEntersDistrict = '1'
	};

	static enum InitialResponseCodes
	{
		NotAllowed = '0',
		DistrictAlreadyExists1 = '1',
		DistrictAlreadyExists2 = '2',
		RegisterSuccess = '3',
		IDis0 = '4'
	};

private:
	char* data;
	int pos;
};