/*
 * File: manager.h
 * Manager class definition.  Manager inherits from Employee.
 * In its class definition, we must list those things that
 * are new in Manager (i.e., that are not inherited from
 * Employee) and those things which we will redefine for a
 * Manager.
 */

#ifndef _MANAGER_H
#define _MANAGER_H

#include "Employee.h"

class Manager : public Employee
{
public:
  Manager(string theName,
          float thePayRate,
          bool isSalaried);

  // Redefine how pay is calculated.
 float pay(float hoursWorked) const;
 void print() const; // print the employee information including all attributes such as name, salaried, payrate, etc...

protected:
  bool salaried;
};

// Constructor
Manager::Manager(string theName,
                 float thePayRate,
                 bool isSalaried)
  : Employee(theName, thePayRate)
{
  salaried = isSalaried;
}


float Manager::pay(float hoursWorked) const
{
  if (salaried)
    return payRate;
  /* else */
  return Employee::pay(hoursWorked);
}

// Print manager data
void Manager::print() const
{

  string isSalaried;

  if(salaried)
  {
    string isSalaried = "Yes";
  }
  else
  {
    string isSalaried = "No";
  }

  Employee::print();
  cout << "Is salaried? " << isSalaried << endl;
}

#endif /* not defined _MANAGER_H */

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
