// Get Memory Address and Value

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string food = "Pizza"; // "food" variable declaration
        // This is saving "Pizza\0" to "food", taking 6 spaces.
    string* ptr = &food; // "ptr" pointer declaration
        // This is literally the same as "string *ptr = &food;", it's about preferences.
        // This one points a "ptr" at the address of "food".
            // So basically, it it pointing at the whole array of addresses.

    //Reference: Output the memory ADDRESS of "food" with the pointer
    cout << ptr << "\n";
        //0x16d5cf5b0

    //Dereference: Output the VALUE of "food" with the pointer
    cout << *ptr << "\n";
        //Pizza

    return 0;
}
