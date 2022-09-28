// https://www.w3schools.com/cpp/cpp_function_reference.asp
// Create a function that uses references.
    // Pass parameters to a function.

#include <iostream>
using namespace std;

void swapNums(int &x, int &y) // function that swaps variables' values.
{
    int z = x;
    x = y;
    y = z;
}


int main()
{
    //initialize values
    int firstNum = 10;
    int secondNum = 20;

    cout << "Before swap:" << endl;
    cout << firstNum << secondNum << endl << endl;

    // Call the functio - which will change the values of int variables.
    swapNums(firstNum, secondNum);

    cout << "After swap:" << endl;
    cout << firstNum << secondNum << endl;

    return 0;
}


/*
Sample output:
______________
Before swap:
1020

After swap:
2010
______________
*/
