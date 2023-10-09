// Constructors in List ADT

#include <iostream>
using namespace std;

class MyClass       // The Class
{
    public:         // Access specifier
        MyClass()   // Constructor
        {
            cout << "Hello World!";
        }
};

int main()
{
    MyClass myObj;  // Create an object of MyClass (this will call the constructor)
        // Prints "Hello World!"

    // Above has to be used to print/produce something, because below don't work.
        //cout << MyClass();
        //cout << myObj;

    return 0;
}
