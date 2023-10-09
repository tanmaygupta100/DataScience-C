/* For CMPSC 122 assignment 14 by Meng Su
 * File: Empltest.cpp
 * This driver tests the creation and use of employee, manager, and supervisor objects.
 * Don't modify this file!
 */



#include <iostream>
#include "Employee.h"
#include "Manager.h"
#include "Supervisor.h"
using namespace std;


int main()
{
  Employee * empl[3]=
          {
           new Employee ("Alex", 25.0),
           new Manager("Beth", 1200.0, true),
           new Supervisor ("Cassie", 1000.0, true, "Accounting",250)
          };
// Assume all employees worked 40 hours this period, print their information and payments.
  cout << "Their information and payments: \n";
  for (int i = 0; i < 3; ++i)
  {
       empl[i]->print();
       cout << "Pay: " << empl[i]->pay(40.0) << endl<< endl<< flush;
  }

// Change the names
  empl[0]->setName("Alexander");
  empl[1]->setName("Elizabeth");
  empl[2]->setName("Cassandra");

// Assume all employees' pay rate are changed
  empl[0]->setPayRate(50);
  for (int i = 1; i < 3; ++i)
      empl[i]->setPayRate(1500);
    
  
 // Assume all employees worked 60 hours this period, print their information and payments.

 cout << "The employee information and payments after the updates: \n\n";
 for (int i = 0; i < 3; ++i)
  {
       empl[i]->print();
       cout << "Pay: " << empl[i]->pay(60.0) << endl<< endl<< flush;
  }
  return 0;
}

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
