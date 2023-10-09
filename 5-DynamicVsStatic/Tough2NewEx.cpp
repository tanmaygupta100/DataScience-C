// Initialize values for NEW.
    // NEW asks the system to create space to be used for a variable.

#include <iostream>
using namespace std;


int main()
{
    int *p = new int(25); // Creates a pointer to point at the value of 25 within p.
        // NEW creates enough space to hold 25...?
    float *q = new float(75.25);

    // Custom data type
    struct cust
    {
        int p;
        cust(int q) : p(q) {}
    };

    // Works fine, doesn’t require constructor
    //cust* var1 = new cust; // Error

        //OR
        
    // Works fine, doesn’t require constructor
    //cust* var1 = new cust(); // Error

    // Notice error if you comment this line
    cust* var = new cust(25);
    cout << var << endl; // Prints "0x153606740"
    cout << *p; // Prints "25"

    return 0;
}
