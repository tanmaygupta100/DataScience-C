// Insert example - ADT
    // Except this time, we also set how many letters to keep.

#include <iostream>
using namespace std;

int main()
{
    string str = "Maths is not favourite subject";

    cout << "String contains: " << str << '\n';
    cout << "After insertion, string contains: " << str.insert(13, "MY ", 3) << '\n';

    return 0;
}

/*
Sample Output:
___________________________________________________________________
String contains: Maths is not favourite subject
After insertion, string contains: Maths is not MY favourite subject
___________________________________________________________________
*/
