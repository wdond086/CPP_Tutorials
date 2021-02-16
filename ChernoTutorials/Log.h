#pragma once
#include "EndBrace.h"

void Log(const char* msg);

void Log(int integer);

void LogFloat(float a);

void LogDouble(double a);

/*
* This will fix the linker problem we had originally
* 
inline void Log(const char* msg)
{
	std::cout << msg << std::endl;
}
*/
