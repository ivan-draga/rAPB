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