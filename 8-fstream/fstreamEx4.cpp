// Open a text file.
// Write to a file.

#include <iostream> //cin and cout
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream outFile; // o in "ofstream" for OUT. "outFile" is just a simple name.

    outFile.open("sample.txt"); // This doesn't exist. It will create it automatically for us.

    //Writing TO the file
    outFile << "First Number:  " << 5 << endl; // Prints "First Number: 5" in a text file it creates.

    outFile.close(); // whether inFile or outFile, it's good to CLOSE it. You may get errors without it.

    return 0;
}
