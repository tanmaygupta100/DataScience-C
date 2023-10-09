// https://www.geeksforgeeks.org/c-classes-and-objects/
// MyClassEx_Inside.cpp
// An example of Accessing Data Members.
    // Also access objects OUTSIDE the Class here.

#include <iostream>
#include <string>
using namespace std;


class PapaJohns
{
    // Access specifier
    public:

        string topping; // Data Member
        int quantity; // Data Member
        void printTopping(); // Member Function
        void printQuantity() // Member Function
        {
            cout << "# of toppings is: " << quantity;
        }
};


// Definition of printTopping Function using scope resolution operator (::):
void PapaJohns::printTopping() // Member Function
{
    cout << "The topping is: " << topping;
}


int main()
{
    PapaJohns objectCashier; // Calls the class through the object
    objectCashier.topping = "Pepperoni";
    objectCashier.quantity = 7;
        // Assigns values to the 

    objectCashier.printTopping();
    cout << endl;

    objectCashier.printQuantity();
    cout << endl;

    return 0;
}


/*
Sample Output:
_____________________________________
The topping is: Pepperoni
# of toppings is: 7
_____________________________________
*/
