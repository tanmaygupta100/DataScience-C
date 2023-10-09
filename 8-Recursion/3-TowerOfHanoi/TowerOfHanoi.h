// header code for tower of hanoi game
//the header does the math, the driver uses the math.
    //the header is like the engine of a car, the driver is like the pedal that works the engine.

#include <iostream>
using namespace std;

void move(unsigned n, unsigned & moveNumber,
            char source, char destination, char spare)
            //  A           B               C
{
    if (n==1)   // base case
    {
        moveNumber++;
        cout << moveNumber // prints the number of which move it is.
            << ". Move the top disk from " << source // source is where the top disk currently is of the 3 spots.
            << " to " << destination << endl; // prints where the top disk moves.
    }
    else    // recursive case
    {   //                      A       B           C
        move(n-1, moveNumber, source, spare, destination);
        move(1, moveNumber, source, destination, spare);
        move(n-1, moveNumber, spare, destination, source);
    }   //                      B       C           A
        // The above else stuff is the algorithm for calculating where the disks should move around.
}
