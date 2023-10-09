// Example of using bool

#include <iostream>
using namespace std;

int main()
{
    //Boolean values in boolean variables:
    bool redIsBlue = false;
    bool redIsRed = true;
    cout << "Red is blue: " << redIsBlue << endl;
    cout << "Red is red: " << redIsRed << endl << endl;

    // Boolean expressions:
    int x = 9;
    int y = 10;
    cout << "x = 9,  y = 10: \n";
    cout << "x > y: " << (x > y) << endl; // Returns "0" for false
    cout << "x = 7: " << (x == 7) << endl; // Returns "0" for false


    return 0;
}


/*
SAMPLE OUTPUT:
________________
Red is blue: 0
Red is red: 1

x = 9,  y = 10: 
x > y: 0
x = 7: 0
________________
*/
