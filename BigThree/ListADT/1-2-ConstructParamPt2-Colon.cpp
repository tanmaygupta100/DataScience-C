// Constructors with parameters.
    // NOW, we use colons to call the constructor like a function.

#include <iostream>
using namespace std;

class Car   // The class
{
    public:             // Access specifier
        string brand;   // Attribute
        string model;   // Attribute
        int year;       // Attribute

        // Constructor declaration:
        Car(string x, string y, int z);  // Constructor with parameters
};

// Constructor definition outside the classs
Car::Car(string x, string y, int z)
{
    brand = x;
    model = y;
    year = z;
}

int main()
{
    // Create Car objects and call the constructor with different values
    Car carObj1("BMW", "X5", 1999);
    Car carObj2("Ford", "Mustang", 1969);
        // Objects are used to store/input values to be used for the original class' parameters.

    // Print values
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";

    return 0;
}

/*
Sample Output:
_________________
BMW X5 1999
Ford Mustang 1969
_________________
*/
