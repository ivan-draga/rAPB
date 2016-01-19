#include "StdAfx.h"
#include "Addresses.h"

#define DEBUG 1

#define BLACK 0
#define BLUE 1
#define GREEN 2
#define CYAN 3
#define RED 4
#define MAGENTA 5
#define BROWN 6
#define LIGHTGREY 7
#define DARKGREY 8
#define LIGHTBLUE 9
#define LIGHTGREEN 10
#define LIGHTCYAN 11
#define LIGHTRED 12
#define LIGHTMAGENTA 13
#define YELLOW 14
#define WHITE 15
#define BLINK 128

bool isLogging = false;

void setColor(unsigned int color)
{
   HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
   SetConsoleTextAttribute(screen, color);
}

void Log_Clear()
{
	FILE *file = nullptr; 
	file = fopen(LOG_FILE_STR, "w");
	fprintf(file, "\0");
	fclose(file);
}

void Logger(unsigned int lvl, char* caller, char* logline, ...)
{
	while(isLogging) Sleep(10);
	isLogging = true;
	FILE *file; 
	file = fopen(LOG_FILE_STR,"a+");
	char* timeStr = (char*)malloc(sizeof(char) * 9);
	char* logOut = (char*)malloc(sizeof(char) * 1024);
	_strtime( timeStr );
	setColor(DARKGREY);
	printf("[%s] ", timeStr);
	fprintf(file, "[%s] ", timeStr);
	setColor(LIGHTCYAN);
	printf("%s: ", caller);
	fprintf(file, "%s: ", caller);
	if ( lvl == lINFO ) setColor(WHITE);
	else if ( lvl == lWARN ) setColor(YELLOW);
	else if ( lvl == lERROR ) setColor(RED);
	else if ( lvl == lSUCCESS ) setColor(GREEN);
	va_list argList;
	va_start(argList, logline);
	vsnprintf(logOut, 1024, logline, argList);
	va_end(argList);
	printf("%s\n", logOut);
	fprintf(file, "%s\n", logOut);
	fclose(file);
	isLogging = false;
	free(timeStr);
	free(logOut);
}