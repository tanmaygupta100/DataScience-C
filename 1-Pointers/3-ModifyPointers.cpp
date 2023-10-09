// Modify the Pointer Value

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string food = "Pizza";
    string* ptr = &food;

    // Output the VALUE of "food"
    cout << food << "\n";
        // Pizza

    // Output the memory ADDRESS of "food"
    cout << &food << "\n";
        // 0x16fd27580

    // Access the memory address of food and output its VALUE
    cout << *ptr << "\n"; // So it went to where ptr points to, and prints the value it's pointing at.
        // Pizza

    // Change the value of the pointer
    *ptr = "Hamburger"; // Basically changed the cursor

    // Output the new value of the pointer
    cout << *ptr << "\n";
        // Hamburger

    // Output the new value of the food variable
    cout << food << "\n";
        // Hamburger


    return 0;
}

/*
A POINTER is basically a computer's cursor.
The VALUE is the button the pointer is clicking on.
The ADDRESS is where the button is located on the screen.
*/
