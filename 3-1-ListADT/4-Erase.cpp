// Erase function example - ADT

#include <iostream>
using namespace std;

int main()
{
    string str1 = "I like memesss a lot";
    str1.erase(12,2);
        // "12" is the position
        // "2" is length to remove

    string str2 = "I like memess a lot";
    str2.erase(str2.begin()+12);
        // remove one character counting from the beginning

    string str3 = "I like memes a lottt";
    str3.erase(str3.begin()+18, str3.end());
        // remove one character counting from beginning
        // then remove the rest from that point

    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;
    cout << "str3: " << str3 << endl;

    return 0;
}
