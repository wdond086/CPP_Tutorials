#include "EndBrace.h"
#include "Log.h"
/*
    The compiler will go through the code and search for every occurrence of
    'INTEGER' and replace it with 'int' because of the #define preprocessor we
    included in it.
*/
#define INTEGER int

/*
    The '#if' can let us include or exclude code based on a given condition.
    In the example below, since its true, the code will be included.
*/

#if 1
/* 
    Adding static to the function description will make the Linker not try to link
    any function declaration in this translation unit if the method is not actually called.
    In other words, adding static to a function definition is a way of telling the compiler 
    that the static function will only be called by the file in which it was declared.

    Things to avoid to avoid having linking errors:
        * Functions signatures that the linker cannot match to any existing fucntion implementation in the project
        * Have multiple implementations of the same function decleration either in the same file, or multiple 
            files in the same project. This can happen easily when you have function definitions in a header file.
            Including that header file in multiple files creates a new implementation of the same function in each 
            of those files. To solve this, make the linking internal only by using the 'static' keyword on the 
            original function declaration. This means each of those files where the function will be included will 
            have their own unique signature. Another option is to use the 'inline' keyword which will literally 
            replace every call of the function by the implementation in the header file. The preffered way to solve 
            the problem will be to have only the declaration of the function in the header file, and keep the 
            implementation in a cpp file. That way, only the declaration is added to the files where the header is 
            included, and the programmer no longer has to manually add that declaration.
*/
INTEGER Multiply(int a, int b)
{
    Log("Multiply\n");
    return a * b;
}
#endif