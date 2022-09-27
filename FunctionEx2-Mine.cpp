// https://www.w3schools.com/cpp/cpp_functions.asp
// Call a function (Pt.2)

#include <iostream>
#include <string>
using namespace std;

// Function DECLARATION
void myFunction();

// The main method
int main()
{
    myFunction(); // Call the function
    myFunction(); // Call it again
    myFunction(); // 3rd time's the charm.
    return 0;
}

// Function DEFINITION
void myFunction() // Create a function
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