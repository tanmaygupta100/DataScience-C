//proj1.cpp
//Tanmay Gupta
//Guessing game. Computer picks # between/including 101-200.
    //Computer informs if guesses are too low, too high.
    //New game starts at guessing the correct number.


#include <iostream>
#include <cstdlib> // srand and rand functions
#include <ctime> // time function
using namespace std;


int main()
{
    const int C = 101; // generates between 0 and 101, except later 100 is added to the code, making it actually between 100 to 201
    char gametype; // either c or p for game mode
    int x; // value for x
    int xuser; // user's guess
    int xcomp;

    cout << "Would you like to (p)lay or watch the (c)omputer play?" << endl;
    cin >> gametype;


    do
    {
        srand(unsigned(time(NULL)));
            // uses the internal clock of the system to control choice of seed
                // seed is the starting point for a sequence of pseudo-random numbers.
            // set different seeds to make sure each run of this program will generate different random numbers
        x = ( rand() % C+100 ); // 100 is added to make the 0 to 101 into a 100 to 201
            cout << x << endl;
        xcomp = ( rand() % C+100 ); // generate a random integer between 0 and C-1
            //cout << x << endl;


        if (gametype == 'p' || gametype == 'P')
        {
            cout << "Enter your guess between 101 and 200." << endl;
            cin >> xuser;
            if (xuser < x)
            {
                cout << "Sorry, your guess is too low, try again." << endl;
            }
            else if (xuser > x)
            {
                cout << "Sorry, your guess is too high, try again." << endl;
            }
            else
            {
                cout << "Congrats, you guessed the correct number, " << x << "." << endl;
                cout << "Would you like to (p)lay or watch the (c)omputer play or (q)uit?" << endl;
                cin >> gametype;
            }
        }

        else if (gametype == 'c' || gametype == 'C')
        {
            cout << "The computer's guess is " << xcomp << endl;

            if (xcomp < x)
            {
                cout << "Sorry, your guess is too low, try again." << endl;
            }
            else if (xcomp > x)
            {
                cout << "Sorry, your guess is too high, try again." << endl;
            }
            else
            {
                cout << "Congrats, you guessed the correct number, " << x << "." << endl;
                cout << "Would you like to (p)lay or watch the (c)omputer play or (q)uit?" << endl;
            }
            cout << "Would you like to (p)lay or watch the (c)omputer play or (q)uit?" << endl;
        }

        else
        {
            cout << "Invalid value. Try again." << endl;
        }

    }
    while (gametype != 'q' || gametype != 'Q');

    return 0;
}
