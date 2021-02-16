// HeadersInCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Log.h"

int main()
{
    InitLog();
    Log("Hello World!");
    std::cout << "Hello World!\n";
    std::cin.get();
}

