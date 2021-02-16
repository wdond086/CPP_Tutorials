#include "basicMath.h"
#include <vector>

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    //  The line below means for const string reference called 'word' in the variable 'msg' (which is a vector of strings), do the for loop
    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    int a = 10;
    int b = 5;
    cout << "The sum of " << a << " and " << b << " is " << add(a, b) << endl;
    cout << "The product of " << a << " and " << b << " is " << multiply(a, b) << endl;
    cout << "The subtraction of " << b << " from " << a << " is " << subtract(a, b) << endl;
    cout << "The division of " << a << " and " << b << " is " << divide(a, b) << endl;
    log("Logging from the 'HelloWorld' C++ script. " + msg[0]);
}
