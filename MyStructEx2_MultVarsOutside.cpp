// https://www.w3schools.com/cpp/cpp_structs.asp
// MyStructEx1.cpp
// Example of Structures
// Assign data to members of a structure and print it.
    // Use a structure to access multiple variables.
    // Also use a named structure as a data type outside the main function.
        // This allows creating variables with struct anywhere in the program and at anytime.

#include <iostream>
#include <string>
using namespace std;

struct pizza
{
    string brand;
    string toppings;
    int slices;
}; // Now it needs a semicolon (;) outside the main function.


int main()
{

    // Create a car structure and store it in myCar1:
    pizza mySlice; // Structure variable
        mySlice.brand = "Papa John's";
        mySlice.toppings = "Pepperoni";
        mySlice.slices = 2;

    // Create another car structure and store it in myCar2:
    pizza yourSlice;
        yourSlice.brand = "Lil Caesar's";
        yourSlice.toppings = "3 Cheese";
        yourSlice.slices = 4;


    // Print the structure members
    cout << "Brand, topping, and slices:\n";
    cout << mySlice.brand << ", " << mySlice.toppings << ", " << mySlice.slices << "\n";
    cout << yourSlice.brand << ", " << yourSlice.toppings << ", " << yourSlice.slices << "\n";

    return 0;
}


/*
Sample Output:
___________________
Brand, topping, and slices:
Papa John's, Pepperoni, 2
Lil Caesar's, 3 Cheese, 4
___________________
*/
