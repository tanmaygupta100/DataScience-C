// Meng Su
// 5/23/22
// Program Description: This program makes use of a complex number class to
//                      execute several complex number operations. The user
//                      enters either one or two complex numbers, and the
//                      output of the appropriate mathematical function is
//                      shown in a readable format.
#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <cmath>
using namespace std;

class Complexno
{
  public :
    Complexno();
        // Default constructor
    Complexno(double r);
        // Second constructor - creates a complex number of equal value to a real.
    Complexno(double r, double c);
        // (1) Standard constructor - sets both of the real and complex components based on parameters.
    
    Complexno add(const Complexno& num2);
        // Adds two complex numbers and returns the answer.
    
    // Your codes to add the prototypes of required methods here.
    
    Complexno sub(const Complexno& num2);
        //(2) Subtracts two complex numbers and returns the answer.

    Complexno mult(const Complexno& num2);
        //(3) Multiplies two complex numbers and returns this answer.
    
    double magnitude();
        //(4) Computes and returns the magnitude of a complex number.

    void shownum();
        //(5) Prints out a complex number in a readable format.
    
    Complexno negate();
        // Negates a complex number.

    void enternum();
        // Reads in a complex number from the user.
  

  private :
    double real; // Stores real component of complex number
    double complex; // Stores complex component of complex number
};

void display(Complexno, Complexno, Complexno, char);
    // Displays the answer to a complex number operation.

#endif
