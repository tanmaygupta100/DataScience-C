// Read a number, bit-stuff it and then bit-unstuff it

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

// Template:
template <typename Iterator> // This is the iterator template that can be called to traverse the lists
void listTraverser (Iterator first, Iterator last)
{
    while (first != last) // Until the list hasn't ended,
    {
        cout << *first++; // Keep going through list
    }
}


int main()
{
    int userInputs = 0; // inputted binary numbers
    int orderCounter = 0; // order of values in list
    vector<int> listValues; // list of original values
    cout << "Insert values 0 and 1, which are separated by a space or newline, another value to stop input...\n";

    do
    {
        cin >> userInputs;
        listValues.push_back(userInputs);
    }
    while (userInputs == 1 || userInputs == 0);

    listValues.pop_back(); // deletes the non-binary digit

    
// BIT-STUFFING
    vector<int> bitStuffer(listValues); // list of bit-stuffed values

    vector<int>::iterator first = bitStuffer.begin();
    vector<int>::iterator last = bitStuffer.end();
        // Above are the vector operators

        // Checking for 5 consecutive 1's
        while (first != last)
        {
            // Checks when to start counting, based on first number.
            if (*first == 0)
            {
                orderCounter = 0; // if the first value is 0, it restarts the order counter
            }
            // Starts counting 1's, based on first number.
            else if (*first == 1)
            {
                orderCounter++; // count by 1's and save that value.
            }

            first++; // move to the next first list value to group them

            // What happens when it does count to 5.
            if (orderCounter == 5)
            {
                // Insert a 0 after group of 5 consecutive 1's
                bitStuffer.insert(first, 0); // Inserts a zero after the grouping
                orderCounter = 0; // This resets the counter
            }
        }

// Printing original sequence
    cout << "Original bit sequence:\n";
    listTraverser(listValues.begin(), listValues.end()); // lists the list from beginning to end using template.
    cout << endl;

// Printing bit-stuffed sequence
    cout << "Bit-stuffed bit sequence:\n";
    listTraverser(bitStuffer.begin(), bitStuffer.end()); // lists the list from beginning to end using template.
    cout << endl;


// Relative expansion
    double relativeExp;
        double a = bitStuffer.size();
        double b = listValues.size();
    relativeExp = ((a - b) / ((a + b) / 2)) * 100; // formula for Percent Difference
    cout << "Relative expansion: " << setprecision(3) << relativeExp << "%\n"; // print the value with only 2 decimal spaces

// Absolute expansion
    double absoluteExp = a - b; // sets the value of Absolute expansion by difference of sizes of sequences
    cout << "Absolute expansion: " << absoluteExp << " bit\n";


// Compare sequences
    cout << "After bit-unstuffing: ";
        //bitStuffer.pop_back();
        if (listValues == bitStuffer)
        {
            cout << "sequences are equal\n";
        }
        else
        {
            cout << "sequences aren't equal\n";
        }

    return 0;
}

/*
SAMPLE INPUT:
_____________________
111000111111101111103
_____________________

SAMPLE OUTPUT:
____________________________________________
Original bit sequence:
11100011111110111110
Bit-stuffed bit sequence:
0111000111110110111110
Relative expansion: 9.52%
Absolute expansion: 2 bit
After bit-unstuffing: sequences aren't equal
____________________________________________
*/
