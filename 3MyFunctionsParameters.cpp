// https://www.w3schools.com/cpp/cpp_function_param.asp
// Create parameters for a function.
    // The parameters will store values for the function to use.

#include <iostream>
#include <string>
using namespace std;

// Function DECLARATION
void sayNames(string fname, string lname) // Create the function
{
    //Function definition
    cout << "Full: " << fname << " " << lname << endl;
    cout << "   Last name: " << lname << endl;
}


int main() // The MAIN method
{
    sayNames("Danny","Devito"); // CALL the function
    sayNames("Steve", "Buscemi");

    return 0;
}


/*
Sample Output:
_____________________
Full: Danny Devito
   Last name: Devito
Full: Steve Buscemi
   Last name: Buscemi
_____________________
*/