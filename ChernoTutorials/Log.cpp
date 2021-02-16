#include "EndBrace.h"
#include "Log.h"

void Log(const char* msg)
{
	/**
	* Print out the provided text to the console.
	*
	* @param msg The message to be printed to the console.
	*/
	std::cout << msg << std::endl;
}

void Log(int integer)
{
	/**
	* Print out the provided integer to the console.
	* 
	* @param integer The integer to be printed to the console.
	*/
	std::cout << integer << std::endl;
}


void LogFloat(float a)
{
	/**
	* Print out the provided float to the console.
	*
	* @param integer The float to be printed to the console.
	*/
	std::cout << a << std::endl;
}

void LogDouble(double a)
{
	/**
	* Print out the provided double to the console.
	*
	* @param double The integer to be printed to the console.
	*/
	std::cout << a << std::endl;
}

void InitLog()
{
	Log("Initialized Log");
}