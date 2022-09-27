// https://www.w3schools.com/cpp/cpp_structs.asp
// Example of Structures
// Assign data to members of a structure and print it.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    struct // Structure declaration
    {
        int slices; // Member (int variable)
        string toppings; // Member (string variable)
    }
    Pizza; // Structure variable


    // Assign values to members of myStructure
    Pizza.slices = 2;
    Pizza.toppings = "Pepperoni";

    // Print members of myStructure
    cout << "Number of slices: " << Pizza.slices << "\n";
    cout << "Topping: " << Pizza.toppings << "\n";

    return 0;
}


/*
Sample Output:
___________________
Number of slices: 2
Topping: Pepperoni
___________________
*/