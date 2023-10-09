#include <iostream>
using namespace std;

int main()
{
    // declare an int pointer
    int* pointVar;

    // dynamically allocate memory
    // using the new keyword 
    pointVar = new int;

    // assign value to allocated memory
    *pointVar = 45;

    cout << pointVar << endl; // Prints address "0x12a606720"
    cout << &pointVar << endl; // Prints "0x16ee6f528" ??? Why??
    cout << *pointVar << endl; // Prints "45"

    // deallocate the memory
    delete pointVar; // We use this when we don't need delete anymore

    return 0;
}
