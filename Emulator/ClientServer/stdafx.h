#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>

#define lINFO 0
#define lWARN 1
#define lERROR 2
#define lDEBUG 4

void Logger(unsigned int lvl, char* caller, char* logline, ...);
void Log_Clear();
