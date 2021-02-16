#include "Log.h"
#include "Common.h"
#include <iostream>

void Log(const char* message)
{
	std::cout << message << std::endl;
}

void InitLog()
{
	Log("Initializing Log");
}