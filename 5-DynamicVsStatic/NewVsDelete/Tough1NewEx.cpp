// This example shows how to use NEW to create space for more data later.

#include <iostream>
using namespace std;

int main()
{
    // Syntax for NEW:
        // pointer-variable = new data-type;

    // 1st way:
    int *p = NULL; // Pointer initialized with NULL
    p = new int; // Requesting memory for the variable
        // Basically this one is asking to create new space for the variable.

    // 2nd alternate way:
    int *b = new int; // Combine declaration of pointer and their assignment.

    return 0;
}

// No output for this.
