// https://www.geeksforgeeks.org/c-classes-and-objects/
// MyAccessingDataMembersEx.cpp
// An example of Accessing Data Members

#include <iostream>
#include <string>
using namespace std;


class PapaJohns
{
    // Access specifier
    public:

        string topping;
            // Data Members
            // 'string topping = "nothing";' can be used to initialize a value

        void addToppings()
            // Member Function()
        {
            cout << "The added pizza topping is: " << topping;
                // Whenever this void is called, it performs the above task
        }
};


int main()
{
    // The object is used to CALL stuff FROM the Class.
    PapaJohns objectCashier;
        // Declare an Object of the Class
        // 'Through Papa John, I gave a topping to the cashier who "adds the topping".
    
    objectCashier.topping = "Pepperoni\n"; // \n simply goes to the next line
        // Accessing Data Member
        // Allows Object to add a value to the Data Member.

    objectCashier.addToppings();
        // Accessing Member Function
        // Does whatever task Member Function() wants using the object.

    return 0;
}


/*
Sample Output:
_____________________________________
The added pizza topping is: Pepperoni
_____________________________________
*/
