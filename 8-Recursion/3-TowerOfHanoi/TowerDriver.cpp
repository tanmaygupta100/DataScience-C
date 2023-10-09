#include <iostream>
#include "TowerOfHanoi.h"
using namespace std;

int main()
{
    const char PEG1 = 'A',  // the three pegs
               PEG2 = 'B',
               PEG3 = 'C';
    unsigned moveNumber = 0; // move counter

    cout << "This program solves the Hanoi Towers puzzle.\n\n";
    cout << "Enter the number of disks: ";

    int numDisks;   // the number of disks to be moved
    cin >> numDisks;
    cout << endl;

    move(numDisks, moveNumber, PEG1, PEG3, PEG2); // call the function
    return 0;
}

/*
Sample Output:
____________________________________________
This program solves the Hanoi Towers puzzle.

Enter the number of disks: 3

1. Move the top disk from A to C
2. Move the top disk from A to B
3. Move the top disk from C to B
4. Move the top disk from A to C
5. Move the top disk from B to A
6. Move the top disk from B to C
7. Move the top disk from A to C
____________________________________________
*/
