// ChernoTutorials.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "EndBrace.h"
#include "Log.h"

// This a declaration for the 'Log' function in the Log.cpp file
// void Log(const char* message);

/*
// Header files are included into the file by the preprocessor
// Header files are not compiled.
// The are added to the cpp file in which they are include and there they are compiled.
// The result of compilation is the creation of an object file for that file.
// From there, the linker combines all the object files into a single executable file.
// No linking happens when you compile files individually.
*/

/**
 * For linking the code must have an entrypoint which is a C++ file with a main() function.
 * Generally stick to having the main function as the entrypoint. It is possible to have another function
 * serve the role of entrypoint though.
 */

 /*
    Here I am demonstrating what happens with happens with multiple C++ files
    Files have no meaning in C++.
    The compiler converts each C++ file that is not included into another c++
    file into an object file. Hence, if you have 'n' C++ files in your project
    and they all stand alone without using each other, you will get 'n' object files
 */

// Declaration for the 'Multiply' function in the Math.cpp file
int Multiply(int a, int b);

int main()
{
    std::cout << Multiply(5, 8) << "\n" << std::endl;
    int input = std::cin.get();
    std::cout << "The text entered was: " << input << std::endl;

    // int is 4Bytes large. Hence the range is -2 billion  -> 2 billion
    int variable = 8;
    Log(variable);
    variable = 20;
    Log(variable);

    // An unsigned integer does not have a sign, so it is always positive as compared 
    // to the signed integer which is the default integer
    // By virtue of being unsigned, the range is 0 - 4.29 billion
    unsigned int newVariable = 2000;
    Log(newVariable);

    /**
    * char -> 1 Byte -> Can be used to store both numbers and characters, but when std::cout is 
    * called on a char variable, the char equivalent of that number will be printed out.
    * short -> 2 Bytes
    * int -> 4 Bytes
    * long -> 4 Bytes
    * long long -> 8 Bytes
    * 
    * For decimals, we have:
    * float -> 4 Bytes
    * double -> 
    * 
    * The 'unsigned' keyword can be added to any of these.
    * 
    * To get the size of any variable, use the sizeof operator.
    */
    float flo = 5.5;
    LogDouble(flo);

    bool boolean = true;
    std::cout << "The size of 'boolean' is " << sizeof(boolean) << std::endl;

    return 0;
}