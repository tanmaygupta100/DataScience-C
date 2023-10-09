// Copy Constructor

#include <iostream>
using namespace std;

// Declare a class
class Wall
{
    private:
        double length;
        double height;

    public:
        
        // Initialize variables with parameterized constructor
        Wall(double len, double hgt)
        {
            length = len;
            height = hgt;
        }

        // Copy constructor with a Wall object as parmeter
        // Copies data of the obj parameter
        Wall(Wall &obj)
        {
            length = obj.length;
            height = obj.height;
        }

        double calculateArea()
        {
            return length * height;
        }
};

int main()
{
    // Create an object of Wall class
    Wall wall1(10.5, 8.6);

    // Copy contents of wall1 to wall2
    Wall wall2 = wall1;

    // Print areas of wall1 and wall2
    cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
    cout << "Area of Wall 2: " << wall2.calculateArea() << endl;

    return 0;
}

/*
Sample Output:
____________________
Area of Wall 1: 90.3
Area of Wall 2: 90.3
____________________
*/
