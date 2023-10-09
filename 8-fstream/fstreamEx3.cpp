// Open a text file.
// Check for errors.
// Find out how many instances of a certain text is present in the file?
    // AKA how many times do we get repeasts?

#include <iostream> //cin and cout
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream inFile; // i in ifstream class for input, and inFile is just an easy name of the object.
    inFile.open("list.txt"); // open the "list" text file

    //Check for error:
    if(inFile.fail())
    {
        cerr << "Enter Opening File" << endl; // cerr instread of cout for error messages
        exit(1); // for exiting from the program. Closes the application without crashing.
    }

    // for list.txt :
    string item;
    int count = 0; // we need a counter for the while loop until the end of the file.

    //figure out how many time "orange" repeats in the file.
    while(!inFile.eof()) // read a file until you've reached the end.
        // eof is "end of file"
    {
        //take whatever is on the current life of code from the file,
        //and set it equal to the string "item".
        inFile >> item;
        
        if (item == "Orange")
        {
            count++;
                //Everytime we go through the loop, "item" will go to the next line that has "orange"
        }
    }

    cout << count << " instanges of 'Orange' found!" << endl; // "8 items found!"

    return 0;
}
