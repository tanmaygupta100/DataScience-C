// Base case and recursive case
// Consider a recursive power function.

#include <iostream>
using namespace std;


double power(double x, unsigned n)
{
    //Base case:
    if (n==0)
        return 1.0;
    //Recursive case:
    else
        return x * power(x, n-1); // this is basically "x * x^(n-1)"
}
