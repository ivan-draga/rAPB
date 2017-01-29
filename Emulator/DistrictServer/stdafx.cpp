#include "stdafx.h"

#include <Windows.h>
#include <string>
#include <sys/stat.h>
#include <cstdio>
#include <ctime>

void setColor(unsigned int color)
{
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(screen, color);
}

void Log_Clear()
{
	FILE *file;
	file = fopen("Logs\\DistrictLog.txt", "w");
	fprintf(file, "\0");
}

void Logger(unsigned int lvl, char* caller, char* logline, ...)
{
	FILE *file;
	file = fopen("Logs\\DistrictLog.txt", "a+");
	char timeStr[9];
	char logOut[1024];
	_strtime_s(timeStr);
	setColor(DARKGREY);
	printf("[%s] ", timeStr);
	fprintf(file, "[%s] ", timeStr);
	setColor(LIGHTCYAN);
	printf("%s: ", caller);
	fprintf(file, "%s: ", caller);
	if (lvl == lINFO) setColor(WHITE);
	else if (lvl == lWARN) setColor(YELLOW);
	else if (lvl == lSUCCESS) setColor(GREEN);
	else if (lvl == lERROR) setColor(RED);
	else if (lvl == lDEBUG) setColor(BLUE);
	va_list argList;
	va_start(argList, logline);
	vsnprintf(logOut, 1024, logline, argList);
	va_end(argList);
	printf("%s\n", logOut);
	fprintf(file, "%s\n", logOut);
	fclose(file);
}

char* GetTokenFromFile(char* file)
{
	ifstream in(file);
	char str[255];

	if (!in)
	{
		cout << "Cannot open config file.\n";
		return "";
	}

	in.getline(str, 255);
	in.close();
	return str;
}

char* GetPublicIP()
{
	//TODO
	return "127.0.0.1";
}

long btea(long* v, long n, long* k) 
{
	unsigned long z = v[n - 1], y = v[0], sum = 0, e, DELTA = 0x9e3779b9;
	long p, q;
	if (n > 1) 
	{
		q = 6 + 52 / n;
		while (q-- > 0)
		{
			sum += DELTA;
			e = (sum >> 2) & 3;
			for (p = 0; p < n - 1; p++) y = v[p + 1], z = v[p] += MX;
			y = v[0];
			z = v[n - 1] += MX;
		}
		return 0;
	}
	else if (n < -1) 
	{
		n = -n;
		q = 6 + 52 / n;
		sum = q*DELTA;
		while (sum != 0) 
		{
			e = (sum >> 2) & 3;
			for (p = n - 1; p > 0; p--) z = v[p - 1], y = v[p] -= MX;
			z = v[n - 1];
			y = v[0] -= MX;
			sum -= DELTA;
		}
		return 0;
	}
	return 1;
}