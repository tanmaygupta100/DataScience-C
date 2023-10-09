/*
* File: Supervisor.h
* Name: Tanmay Gupta
* Class: CMPSC 122
*/

#ifndef _SUPERVISOR_H
#define _SUPERVISOR_H

#include "Employee.h"
#include "Manager.h"


class Supervisor : public Manager
{
public:
    Supervisor(string theName,
                float thePayRate,
                bool isSalaried,
                string departmentName,
                float bonus);

    float pay(float hoursWorked) const;
    void print() const;

protected:
    string departmentName;
    float bonusPay;
};


// Constructor
Supervisor::Supervisor(string theName,
                        float thePayRate,
                        bool isSalaried,
                        string departmentName,
                        float bonusPay)
    : Manager(theName, thePayRate, isSalaried)
    {
        this->departmentName = departmentName;
        this->bonusPay = bonusPay;
    }

// Payment for supervisor
float Supervisor::pay(float hoursWorked) const
{
    return Manager::pay(hoursWorked) + bonusPay;
}

// Print supervisor data
void Supervisor::print() const
{
    Manager::print();
    cout << "Department: " << departmentName << endl << "Compensation: " << bonusPay << endl;
}

#endif /* not defined _SUPERVISOR_H */

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
