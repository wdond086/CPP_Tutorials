#include "EndBrace.h"

// Here I am demonstrating what happens with happens with multiple C++ files
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
    return 0;
}