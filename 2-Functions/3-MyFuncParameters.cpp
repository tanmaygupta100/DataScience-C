// Create parameters for a function.
    // The parameters will store values for the function to use.

#include <iostream>
#include <string>
using namespace std;

// Function DECLARATION, AKA Create the functions
void sayNames(string fname, string lname) // List the parameters to be used by the function.
{
    //Function DEFINITION, AKA What the function does
    cout << "Full: " << fname << " " << lname << endl;
    cout << "   Last name: " << lname << endl;
}


int main() // The MAIN method
{
    sayNames("Danny","Devito"); // CALL the function and store values to the parameters
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
