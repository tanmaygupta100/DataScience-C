// Tanmay Gupta
// 9/22/22
// Program Description: This program makes use of a complex number class to
//                      execute several complex number operations. The user
//                      enters either one or two complex numbers, and the
//                      output of the appropriate mathematical function is
//                      shown in a readable format.
#include "complexno.h"

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
Complexno Complexno::add(const Complexno& num2)
{
  Complexno answer;
  answer.real = real + num2.real;
  answer.complex = complex + num2.complex;
  return answer;
}

// (2) --------------------------------- subtract------------------
// Define sub to subtracts two complex numbers and returns the answer.
Complexno Complexno::sub(const Complexno& num2)
{
  Complexno answer;
  answer.real = real - num2.real;
  answer.complex = complex - num2.complex;
  return answer;
}

// (3) --------------------------------- Multiply------------------
// Multiplies two complex numbers and returns this answer.
Complexno Complexno::mult(const Complexno& num2)
{
  Complexno answer;
  answer.real = real * num2.real - complex * num2.complex;
  answer.complex = real * num2.complex + num2.real * complex;
  return answer;
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
void Complexno::shownum()
{
  cout << "(" << real;

  if (complex > 0.0)
  {
    cout << "+" << complex << "i";
  }
  else if (complex < 0.0)
  {
    cout << "-" << fabs(complex) << "i"; // fabs() prints out the absolute value.
  }
  
  cout << ")";
}


// Reads in a complex number from the user.
void Complexno::enternum()
{
  cout << "Enter the real part of the complex number : ";
  cin >> real;
  cout << "Enter the imaginary part of the complex number : ";
  cin >> complex;
}

// Displays the answer to a complex number operation.
void display(Complexno n1, Complexno n2, Complexno n3, char op)
{
  n1.shownum();
  cout << " " << op << " "; // This posts the operators defined in Assign3Drive.cpp
  n2.shownum();
  cout << " = ";
  n3.shownum();
  cout << endl;
}


/*Sample run from Assign3Drive.cpp
____________________________________________________________________
Welcome to the complex number calculator.
Would you like to
1. Add 2 complex numbers.
2. Subtract 2 complex numbers.
3. Multiply 2 complex numbers.
4. Find the magnitude of a complex number.
5. Negate a complex number
6. Quit
1
Enter the first complex number : 
Enter the real part of the complex number : 1
Enter the imaginary part of the complex number : 2
Enter the second complex number : 
Enter the real part of the complex number : 3
Enter the imaginary part of the complex number : 4
(1.0+2.0i) + (3.0+4.0i) = (4.0+6.0i)
Would you like to
1. Add 2 complex numbers.
2. Subtract 2 complex numbers.
3. Multiply 2 complex numbers.
4. Find the magnitude of a complex number.
5. Negate a complex number
6. Quit
2
Enter the first complex number : 
Enter the real part of the complex number : 1
Enter the imaginary part of the complex number : 2
Enter the second complex number : 
Enter the real part of the complex number : 3
Enter the imaginary part of the complex number : 4
(1.0+2.0i) - (3.0+4.0i) = (-2.0-2.0i)
Would you like to
1. Add 2 complex numbers.
2. Subtract 2 complex numbers.
3. Multiply 2 complex numbers.
4. Find the magnitude of a complex number.
5. Negate a complex number
6. Quit
3
Enter the first complex number : 
Enter the real part of the complex number : 1
Enter the imaginary part of the complex number : 2
Enter the second complex number : 
Enter the real part of the complex number : 3
Enter the imaginary part of the complex number : 4
(1.0+2.0i) * (3.0+4.0i) = (-5.0+10.0i)
Would you like to
1. Add 2 complex numbers.
2. Subtract 2 complex numbers.
3. Multiply 2 complex numbers.
4. Find the magnitude of a complex number.
5. Negate a complex number
6. Quit
4
Enter the first complex number : 
Enter the real part of the complex number : 1
Enter the imaginary part of the complex number : 2
|(1.0+2.0i)| = 2.2
Would you like to
1. Add 2 complex numbers.
2. Subtract 2 complex numbers.
3. Multiply 2 complex numbers.
4. Find the magnitude of a complex number.
5. Negate a complex number
6. Quit
5
Enter the first complex number : 
Enter the real part of the complex number : 1
Enter the imaginary part of the complex number : 2
-(1.0+2.0i) = (-1.0-2.0i)
Would you like to
1. Add 2 complex numbers.
2. Subtract 2 complex numbers.
3. Multiply 2 complex numbers.
4. Find the magnitude of a complex number.
5. Negate a complex number
6. Quit
6
You quit the calculator.
____________________________________________________________________
*/
