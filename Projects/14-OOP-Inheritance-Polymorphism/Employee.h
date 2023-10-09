/*
 * File: Employee.h
 * Skeleton codes for Employee class definition.
 */

#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H

#include <string>
#include <iostream>
using namespace std;

class Employee
{
public:
  Employee(string theName, float thePayRate);

  string getName() const;
  float getPayRate() const;

  void setName(string theName); // change the name of the employee
 
  virtual float pay(float hoursWorked) const; // calculate the total income
  virtual void print() const; // print the employee information including all attributes such as name, salaried, payrate, etc...
  void setPayRate(float thePayRate); // change the hourly or salary pay rates

protected:
  string name;
  float payRate;
};

// Constructor
Employee::Employee(string theName, float thePayRate)
{
  name = theName;
  payRate = thePayRate;
}

// Get employee name
string Employee::getName() const
{
  return name;
}

// Set employee name
void Employee::setName(string name)
{
	this->name = name;
}

// Get employee pay rate
float Employee::getPayRate() const
{
  return payRate;
}

// Set employee pay rate
void Employee::setPayRate(float payRate)
{
	this->payRate = payRate;
}

// Payment for employee
float Employee::pay(float hoursWorked) const
{
  return hoursWorked * payRate;
}

// Printing employee data
void Employee::print() const
{
	cout << endl << "Name: " << name << endl << "Pay Rate: " << payRate << endl;
}

#endif /* not defined _EMPLOYEE_H */

/*
SAMPLE OUTPUT:
________________________________________________________
Their information and payments: 

Name: Alex
Pay Rate: 25
Pay: 1000


Name: Beth
Pay Rate: 1200
Is salaried? 
Pay: 1200


Name: Cassie
Pay Rate: 1000
Is salaried? 
Department: Accounting
Compensation: 250
Pay: 1250

The employee information and payments after the updates: 


Name: Alexander
Pay Rate: 50
Pay: 3000


Name: Elizabeth
Pay Rate: 1500
Is salaried? 
Pay: 1500


Name: Cassandra
Pay Rate: 1500
Is salaried? 
Department: Accounting
Compensation: 250
Pay: 1750
________________________________________________________
*/
