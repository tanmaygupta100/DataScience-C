// How to overload an operator with a friend.

#include <iostream> //cin and cout
//#include <conio.h>
using namespace std;

class Test2
{
    int b;
    public:
        void getb()
        {
            cout << "Enter b value";
            cin >> b;
        }
        friend void operator >(Test1, Test2);
};

class Test1
{
    int a; // "a" is a test member of the data class "Test1"
    
    public:
        void geta() // member function "geta()", just a name we made up for the void function.
        {
            cout << "Enter a value ";
            cin >> a;
        }
        friend void operator >(Test1, Test2); // friend returnType operator _(object1, object 2)
            // since there was no return type, we wrote "void"
};

// Instead of writing 2 functions, we were able to write the same friend function.^
    // The friend function declaration.

// Now we have to declare the friend function, but it cannot contain the word "friend".

void operator >(Test1 t1, Test2 t2) // returnType operator _(class1 argument1, class2 argument2)
{
    t1.a > t2.b ? cout << "a is big": // t1.object > t2.object
                  cout << "b is big"; // the objects can be equal to values like 1 or 10 or 100.
        // This is a CONDITIONAL operator. When condition falls/fails, it goes to the COLON!
            // so if a=100 and b=20, the output is "a is big"
}

int main()
{
    Test1 t1; //It is not required to keep the same names. Doesn't have to match.
    Test2 t2;
    //clrscr();

    t1.geta(); // t1 function of geta() is executed.
        // AKA it reads a value for "a"
    t2.getb();
    t1>t2;

    //getch();
}
