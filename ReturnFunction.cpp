// https://www.w3schools.com/cpp/cpp_function_return.asp
// Create a function that returns a value.
    // Pass parameters to a function.

#include <iostream>
using namespace std;

// Declare the FUNCTION
int addNumbersFunc (int x, int y) // int x and y are PARAMETERS
{
    return x + y; // since it's not a void, it can RETURN a value.
}


int main()
{
    cout << "return: " << addNumbersFunc(5, 3) << endl; // Inserts the values here into the myFunction

    int z = addNumbersFunc(4, 7);
        cout << "int z for return: " << z << endl;

    return 0;
}

/*
Sample Output:
____________________
return: 8
int z for return: 11
____________________
*/
