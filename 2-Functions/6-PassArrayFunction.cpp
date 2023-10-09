// Create a function that uses arrays.
    // Pass arrays to a function.

#include <iostream>
using namespace std;

void myFunction (int myNumbers[5]) // 5 means it can store a total of 5 values (in rows) in the array.
{
    for (int i = 0; i < 5; i++) // Keeps a count going until "i" reaches less than 5, adding by 1.
    {
        cout << myNumbers[i] << endl;
        // Depending on which row "i",
            // a different value in column "myNumbers" will display.
    }
}


int main()
{
    int myNumbers[5] = {10, 20, 30, 40, 50};
    myFunction(myNumbers);
    return 0;
}

/*
Sample output:
______________
10
20
30
40
50
______________
*/
