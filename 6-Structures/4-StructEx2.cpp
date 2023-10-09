// Example of Structures
// Assign data to members of a structure and print it.
    // Use a structure in 2 different variables.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    struct
    {
        string brand;
        string model;
        int year;
    }
    myCar1, myCar2; // Multiple structure variables separated with commas.
        // We can add variables by separating them with a comma here.
        // Now we can use ONE STRUCT to represent TWO DIFFERENT VARIABLES.

    // Put data into the first structure
    myCar1.brand = "BMW";
    myCar1.model = "X3";
    myCar1.year = 2021;

    // Put data into the second structure
    myCar2.brand = "Subaru";
    myCar2.model = "Impreza";
    myCar2.year = 2020;


    // Print the structure members
    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

    return 0;
}

/*
Sample Output:
___________________
BMW X3 2021
Subaru Impreza 2020
___________________
*/
