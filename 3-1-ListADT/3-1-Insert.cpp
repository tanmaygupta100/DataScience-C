// Insert example.
    // Except this time, we even set how many letters to keep.

#include <iostream>
using namespace std;

int main()
{
    string str1 = "C++ is a language";
    string str2 = "programming ";

    cout << "String contains: " << str1 << '\n';
    cout << "After insertion, String is: " << str1.insert(9,str2,0,12) << '\n';
        // "9" - where the str1 starts printing.
        // "0" - the starting point of str1. "1" would print "rogramming"
        // "12" - the ending point of str1. "10" would print "programmin"

    return 0;
}

/*
Sample Output:
_________________________________________________________
String contains: C++ is a language
After insertion, String is: C++ is a programming language
_________________________________________________________
*/
