// https://www.w3schools.com/cpp/cpp_pointers_modify.asp
// MyPointerEx.cpp
// An example of pointers


#include <iostream>
#include <string>
using namespace std;

int main()
{
    string foodOrder = "Pizza"; // "foodOrder" is a string variable
    string *Menu = &foodOrder;
        // "*Menu" is a pointer, making foodOrder a pointee.
        // "&foodOrder" gives us the memory address

    cout << "Pointee - foodOrder: " << foodOrder << endl; // without an asterisk, this outputs "foodOrder"'s value.
    cout << "Pointee - foodOrder location: " << &foodOrder << endl; // with an ampersand, it outputs the location of the variable "foodOrder"
    cout << "Pointer - *Menu: " << *Menu << endl << endl; // shows value of address the pointer is pointing at.

    *Menu = "Calzone\n"; // Modify the pointer.
    cout << "Pointer for new value for same pointee -" << endl;
    cout << "       Pointer - *Menu: " << *Menu; // for some reason endl added a whole empty line.
    cout << "Pointee - foodOrder: " << foodOrder << endl;

    return 0;
}


/*
Sample Output:
_________________________________________
Pointee - foodOrder: Pizza
Pointee - foodOrder location: 0x16b153580
Pointer - *Menu: Pizza

Pointer for new value for same pointee -
       Pointer - *Menu: Calzone
Pointee - foodOrder: Calzone
_________________________________________
*/
