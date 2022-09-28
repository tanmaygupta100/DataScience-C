// https://www.w3schools.com/cpp/cpp_functions.asp
// Call a function (Pt.2)
    // Declare a function first, and write how to call a function, and actually define it at the end.

#include <iostream>
#include <string>
using namespace std;

// Function DECLARATION
void sayCatchphrase();

// The main method
int main()
{
    sayCatchphrase(); // Call the function // alternately called "myFunction"
    sayCatchphrase(); // Call it again
    sayCatchphrase(); // 3rd time's the charm.
    return 0;
}

// Function DEFINITION
void sayCatchphrase() // Create a function
{
    cout << "I like spaghetti and meatballs!\n";
}

/*
Sample Output:
____________________
I like spaghetti and meatballs!
I like spaghetti and meatballs!
I like spaghetti and meatballs!
____________________
*/