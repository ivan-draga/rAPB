#pragma once

using namespace std;
#include "targetver.h"
#include <stdio.h>
#include <tchar.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <thread>

#define lINFO 0
#define lWARN 1
#define lSUCCESS 3
#define lERROR 2
#define lDEBUG 4
#define BLUE 1
#define GREEN 2
#define RED 4
#define DARKGREY 8
#define LIGHTCYAN 11
#define YELLOW 14
#define WHITE 15

void Logger(unsigned int lvl, char* caller, char* logline, ...);
void Log_Clear();