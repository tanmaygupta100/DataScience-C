// Open a text file with 2 numbers in different rows.
// Check for errors.
// Assign the numbers to variables.

#include <iostream> //cin and cout
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream inFile; // i in ifstream class for input, and inFile is just an easy name of the object.
    inFile.open("numbers.txt"); // open the numbers text file

    //Check for error:
    if(inFile.fail())
    {
        cerr << "Enter Opening File" << endl; // cerr instread of cout for error messages
        exit(1); // for exiting from the program. Closes the application without crashing.
    }

    // for numbers.txt :
    int x, y;

    inFile >> x >> y; // Everytime you use (>>), it automatically goes to the next line.
    // so it saves the first number in numbers.txt to x.

    cout << "Num 1 = " << x << endl;
    cout << "Num 2 = " << y << endl;


    return 0;
}
