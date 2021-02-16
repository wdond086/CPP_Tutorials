// Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

#define LOG(x) cout << x << endl;

// A pointer is an integer that stores a memory address
// For pointers, types do not matter

// Here we are passing by value, hence the actual variable will not be changed
void incrementByValue(int value) {
    value++;
}

// Here we are passing by reference, hence the actual variable will be affected as well
void incrementByReference(int& value) {
    value++;
}

// Here we are passing by pointer, hence the actual variable will be affected as well, just remember to dereference the pointer to access the value
void incrementByPointer(int* value) {
    (*value)++;
}

int main()
{
    // This is invalid because a pointer cannot be zero. The compiler automatically changes this to NULL or nullptr
    int var = 8;
    // By using the '&' sign infront of a variable, I can get the memory address of that variable and save in a pointer
    int* pointer = &var;
    // To access the data in a memory location stored by a pointer variable, we use the '*' operator infront of the pointer variable
    *pointer = 10;
    LOG(var);

    char* buffer = new char[8]; // The new keyword is used so this is heap allocated. Remember to delete after use of heap allocated memory
    memset(buffer, 0, 8);

    // You can also have a pointer to a pointer
    char** ptr = &buffer;

    delete[] buffer; // Square brackets because the buffer pointer is a char[]
    cin.get();
    cout << "Hello World!\n";

    //////////////////////////////////////////////////////////////////
    // REFERENCES
    //////////////////////////////////////////////////////////////////
    // A reference is a way for us to reference an existing variable
    // The reference is denoted by a type with a '&' sign following it: Ex: int& c

    int a = 5; // A classic variable
    int* b = &a; // A pointer to the variable a
    int& ref = a; // A reference or alias to the variable a. Hence we can use ref as if it were a

    incrementByValue(a);
    incrementByReference(ref);
    incrementByPointer(&a);
    LOG(a);
}

