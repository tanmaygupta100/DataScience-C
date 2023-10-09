// This code prints the maximum of two values it compares.

#include <iostream>
#include <string>
using namespace std;

template <typename T> // "T" is just a general data type, instead of saying "int" or "double"
inline T const& Max (T const& a, T const& b)
{
    return a < b ? b:a;
    // "?" indicates that the left expression should be a boolean evaluation true or false.
    // ":" delineates/portrays the true and false results.
    // AKA, tell me true or false for if "a" is smaller than "b"
}

int main ()
{
    int i = 39;
    int j = 20;
    cout << "Max(i, j): " << Max(i, j) << endl;
        // 39 is the maximum/bigger one

    double f1 = 13.5;
    double f2 = 20.7;
    cout << "Max(f1, f2): " << Max(f1, f2) << endl;
        // 20.7 is the maximum/bigger one

    string s1 = "Hello";
    string s2 = "World";
    cout << "Max(s1, s2): " << Max(s1, s2) << endl;
        // World is the maximum/bigger one

    return 0;
}

/*
Sample Output:
__________________
Max(i, j): 39
Max(f1, f2): 20.7
Max(s1, s2): World
__________________
*/
