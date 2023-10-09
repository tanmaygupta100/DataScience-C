// proj10.cpp
// Tanmay Gupta
// Designing Recursive Code

#include <iostream>
#include "timer.h"
using namespace std;

class myVars // class to store variables needed throughout project
{
    public:
        int moveNorth;
        int moveEast;
        char inputs;
        int pathCounter(int x, int y)
        {
            // base case
            if (x==0 || y==0)
                return 1;
            // recursive case
            else
                return (pathCounter(x-1, y) + pathCounter(x, y-1));
        }
};


int main()
{
    myVars c; // object to call from class storing variables and function
    Timer t; // object to call the timer class from header

    do // keeps performing until y or Y are pressed.
    {
        cout << "How many points north of A is B? ";
            cin >> c.moveNorth;
        cout << "How many points east of A is B? ";
            cin >> c.moveEast;

    t.start(); // use t.start() for the beginning of running the following codes.

        // segment of codes, such as statements and function calls.
        cout << "There are "
             << c.pathCounter(c.moveNorth, c.moveEast) // 0 because we don't need the last position.
             << " northeast paths between A and B.\n\n";

    t.stop(); //  for the ending, right after the last statement of this segment of codes.

    t.show(); // anywhere after t.stop() for printing the time the above segment of codes run.

        cout << "Enter y or Y to continue next example or any other letter to exit: ";
        cin >> c.inputs;
        cout << "\n\n";
        
    }
    while (c.inputs == 'y' || c.inputs == 'Y');

    return 0;
}


/*
Sample Output:
____________________________________________________________________
How many points north of A is B? 2
How many points east of A is B? 3
There are 10 northeast paths between A and B.

  Process Timer
  -------------------------------
  User CPU Time  : 0 s
  System CPU Time: 0 s
  Wait Time      : 0.001 s
  -------------------------------
  Elapsed Time   : 0.001 s

Enter y or Y to continue next example or any other letter to exit: y


How many points north of A is B? 12
How many points east of A is B? 14
There are 9657700 northeast paths between A and B.

  Process Timer
  -------------------------------
  User CPU Time  : 0.07 s
  System CPU Time: 0 s
  Wait Time      : 0.01 s
  -------------------------------
  Elapsed Time   : 0.08 s

Enter y or Y to continue next example or any other letter to exit: Y


How many points north of A is B? 16
How many points east of A is B? 16
There are 601080390 northeast paths between A and B.

  Process Timer
  -------------------------------
  User CPU Time  : 2.28 s
  System CPU Time: 0.01 s
  Wait Time      : 0.07 s
  -------------------------------
  Elapsed Time   : 2.36 s

Enter y or Y to continue next example or any other letter to exit: N
____________________________________________________________________
*/
