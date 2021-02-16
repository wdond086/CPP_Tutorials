#include "EndBrace.h"
/*
    The compiler will go through the code and search for every occurrence of
    'INTEGER' and replace it with 'int' because of the #define preprocessor we 
    included in it.
*/
#define INTEGER int

void Log(const char* message);

/*
    The '#if' can let us include or exclude code based on a given condition.
    In the example below, since its true, the code will be included.
*/

#if 1

INTEGER Multiply(int a, int b)
{
    Log("Multiply");
    return a * b;
}
#endif

int main()
{
    std::cout << Multiply(5, 8) << std::endl;
    std::cin.get();
    return 0;
}