// Example of Structures
// Assign data to members of a structure and print it.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    struct // Structure declaration
    {
        int myNum; // Member (int variable)
        string myString; // Member (string variable)
    }
    myStructure; // Structure variable


    // Assign values to members of myStructure
    myStructure.myNum = 1;
    myStructure.myString = "Hello World!";

    // Print members of myStructure
    cout << myStructure.myNum << "\n";
    cout << myStructure.myString << "\n";

    return 0;
}

/*
Sample Output:
______________
1
Hello World!
______________
*/
