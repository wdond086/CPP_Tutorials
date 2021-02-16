#include "EndBrace.h"

// This a declaration for the 'Log' function in the Log.cpp file
void Log(const char* message);

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
void Log(const char* message)
{
    /**
     * Prints the text provided as the parameter to the console. 
     * The data type used here is char pointer.
     * 
     * @param message The text to be printed to the console.
     */
    std::cout << message << std::endl;
}

int main()
{
    Log("Hello World!");
    std::cin.get();
    return 0;
}