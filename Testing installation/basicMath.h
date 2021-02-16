#include <string>
#include <iostream>

using namespace std;

int multiply(int a, int b)
{
    /**
     * Returns the multiple of the two numbers
     * 
     * @param a The first integer operand
     * @param b The second integer operand
     */
    return a * b;
}


int add(int a, int b)
{
    /**
     * Returns the sum of the two provided operands.
     * 
     * @param a The first integer operand
     * @param b The second integer operand
     */
    return a + b;
}

int subtract(int a, int b)
{
    /**
     * Returns the result of subtracting the operand b from the operand a
     * 
     * @param a The first integer operand
     * @param b The second integer operand
     */
    return a - b;
}

double divide(int a, int b)
{
    /**
     * Returns the result a / b
     * 
     * @param a The numerator
     * @param b The divisor / denominator
     */
    return a / b;
}

void log(const string& msg)
{
    /**
     * Prints the provided string to the console.
     * 
     * @param msg The string to be printed.
     */
    cout << msg << endl;
}
