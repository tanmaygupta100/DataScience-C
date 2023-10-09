// References.cpp

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string food = "Pizza"; // "food" variable
    string &meal = food; // reference to  "food"
        // Saves value of "food" to a location in "meal"

    cout << "'food' Output: " << food << "\n"; // Outputs "Pizza"
    cout << "'meal' Output: " << meal << "\n"; // Outputs "Pizza"
}

/*
Sample Output:
______________
Pizza
Pizza
______________
*/
