// Example of Structures
// Assign data to members of a structure and print it.
    // Use a structure in 2 different variables.

#include <iostream>
#include <string>
using namespace std;

struct car
{
    string brand;
    string model;
    int year;
}; // Now it needs a semicolon (;)

int main()
{

    // Create a car structure and store it in myCar1:
    car myCar1;
        myCar1.brand = "BMW";
        myCar1.model = "X3";
        myCar1.year = 2021;

    // Create another car structure and store it in myCar2:
    car myCar2;
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
