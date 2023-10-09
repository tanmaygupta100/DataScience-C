// insert(): Inserts a value in a specified location, moving the numbers down a space.

#include <iostream>
using namespace std;

int main()
{
    string str1 = "Shmello Shtinkey\n";

    cout << "String contains:   " << str1;
    cout << "After insertion, string value is:   " << str1.insert(7, " lil");

    return 0;
}

/*
Sample Output:
________________________________________________________
String contains:   Shmello Shtinkey
After insertion, string value is:   Shmello lil Shtinkey
________________________________________________________
*/
