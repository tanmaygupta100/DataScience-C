//proj13.cpp
//Tanmay Gupta

#include <iostream>
using namespace std;

// Given Hash code:
unsigned Hash1(const string & key, const int h_size)
{
    unsigned int value = 0;
    for (int i=0; i<key.length(); i++)
        value = (value + key[i])*16;
    return value % h_size;
}

// Altered Hash code:
unsigned Hash2(const string & key, const int h_size)
{
    unsigned int value = 0;
    for (int i=0; i<key.length(); i++)
        value = value*31 + key[i];
    return value % h_size;
}


int main(void)
{
    cout << Hash1("hello", 64) << endl;
    cout << Hash1("world", 64) << endl;
    cout << Hash1("you", 64) << endl;
    cout << Hash1("me", 64) << endl;
    cout << Hash1("his", 64) << endl;
    cout << Hash1("her", 64) << endl;
    cout << Hash1("asdas", 64) << endl;
    cout << Hash1("rguehg", 64) << endl << endl;

    cout << Hash2("hello", 71) << endl;
    cout << Hash2("world", 71) << endl;
    cout << Hash2("you", 71) << endl;
    cout << Hash2("me", 71) << endl;
    cout << Hash2("his", 71) << endl;
    cout << Hash2("her", 71) << endl;
    cout << Hash2("asdas", 71) << endl;
    cout << Hash2("rguehg", 71) << endl;
    return 0;
}

/*
Sample Output:
48
0
16
16
48
32
48
48

30
33
62
1
9
26
22
38
______________
Question A:
hash = key[n-1]*16^n +key[n-2]*16^(n-1) + ... + key[0]*16
______________
Question B:
This isn't a good hash function because there is a total of 64 values, which is not a prime number.
We can even see from the sample output how there is overlapping possible.
______________
Question C:
hash = key[n-1]*31^n +key[n-2]*31^(n-1) + ... + key[0]*31
______________
Question D:
This is clearly a better hash function, because there is a prime number and a clear way to reduce overlapped values.
As can be seen in the sample code, the numbers are unique in their own positions, unlike the first set.
______________
*/
