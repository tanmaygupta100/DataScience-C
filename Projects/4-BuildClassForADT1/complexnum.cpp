// Tanmay Gupta
// 9/24/22
// Program Description: This program makes use of a complex number class to
//                      execute several complex number operations. The user
//                      enters either one or two complex numbers, and the
//                      output of the appropriate mathematical function is
//                      shown in a readable format.
#include <cmath>
#include "complexnum.h"

// Default constructor sets both components to 0.
Complexno::Complexno()
{
  real = 0.0;
  complex = 0.0;
}

// Second constructor - creates a complex number of equal value to a real.
Complexno::Complexno(double r)
{
  real = r;
  complex = 0.0;
}

// (1) --------------------------------- standard constructor ------------------

//Define standard constructor - sets both of the real and complex components based on parameters
Complexno::Complexno(double r, double c)
{
  real = r;
  complex = c;
}



// Adds two complex numbers and returns the answer.
void operator +(Complexno num1, Complexno num2) //basically whatever didn't have the "num2" tag is not "num1"
//Complexno Complexno::add(const Complexno& num2)
{
  Complexno answer;
  answer.real = num1.real + num2.real;
  answer.complex = num1.complex + num2.complex;
  cout << answer;
  //return answer;
}

// (2) --------------------------------- subtract------------------
// Define sub to subtracts two complex numbers and returns the answer.
void operator -(Complexno num1, Complexno num2)
//Complexno Complexno::sub(const Complexno& num2)
{
  Complexno answer;
  answer.real = num1.real - num2.real;
  answer.complex = num1.complex + num2.complex;
  cout << answer;
  //return answer;
}

// (3) --------------------------------- Multiply------------------
// Multiplies two complex numbers and returns this answer.
void operator *(Complexno num1, Complexno num2)
{
  Complexno answer;
  answer.real = num1.real * num2.real - num1.complex * num2.complex;
  answer.complex = num1.real * num2.complex + num2.real * num1.complex;
  cout << answer;
  //return answer;
}

// ------------------------------------ Divide------------------
// Divides two complex numbers and returns this answer.
void operator /(Complexno num1, Complexno num2)
{
  Complexno answer;
  answer.real = num1.real / num2.real - num1.complex / num2.complex;
  answer.complex = num1.real / num2.complex + num2.real / num1.complex;
  cout << answer;
  //return answer;
}


// Negates a complex number.
Complexno Complexno::negate()
{
  Complexno answer;
  answer.real = -real;
  answer.complex = -complex;
  return answer;
}

// (4) --------------------------------- Magnitude ------------------
// Computes and returns the magnitude of a complex number.
double Complexno::magnitude()
{
  double answer;
  answer = sqrt(real * real + complex * complex);
  return answer;
}

// (5) --------------------------------- Print ------------------
// Prints out a complex number in a readable format.


ostream &operator <<(ostream &out, Complexno &answer) // Cannot use void because we need an output.
  // The & gives the address which stores the values/answers to be accessed.
{

  cout << "(" << answer.real;

  if (answer.complex > 0.0)
  {
    cout << "+" << answer.complex << "i";
  }
  else if (answer.complex < 0.0)
  {
    cout << "-" << fabs(answer.complex) << "i"; // fabs() prints out the absolute value.
  }
  
  cout << ")";

  return out;
}


// Reads in a complex number from the user.
void Complexno::enternum()
{
  cout << "Enter the real part of the complex number : ";
  cin >> real;
  cout << "Enter the imaginary part of the complex number : ";
  cin >> complex;
}


/*Sample run from Assign4Driver.cpp
____________________________________________________________________
*/
