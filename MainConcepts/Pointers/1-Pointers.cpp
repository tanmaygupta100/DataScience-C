// Creating a pointer.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string food = "Pizza"; // A food variable of type string

    cout << food << "\n"; // outputs VALUE of food
        // Pizza
    cout << &food << "\n"; // outputs memory ADDRESS of food
        // 0x16d0935c0

    return 0;
}
