// Show how "empty()" checks if a string is empty in 2 cases.

#include <iostream>
using namespace std;

int main()
{
    string str1 = "Shmello Shtinkey";
    string str2;


    if (str1.empty())
    {
        cout << "1st string is empty\n";
    }
    else
    {
        cout << "1st string is NOT empty\n";
    }


    if (str2.empty())
    {
        cout << "2nd string is empty\n";
    }
    else
    {
        cout << "2nd string is NOT empty\n";
    }

    return 0;
}

/*
Sample Output:
_______________________
1st string is NOT empty
2nd string is empty
_______________________
*/
