// Tanmay Gupta
// HW 9 Assignment

#include <iostream>
#include <list>
#include <vector>
using namespace std;

template <class InputIterator>
void copy2cout (InputIterator first, InputIterator last)
{
    while (first != last)
    {
        cout << *first++;
    }
    cout << endl;
}

void func1(void)
{
    list<int> bitSeq; // list of ints
    int input = 0; // values read from cin
    int count1 = 0; // counter for number of 1

    cout << "Input 0 and 1 values (one at a time), enter another value to stop input..." << endl;

    while (cin >> input)
    {
        if (!(input == 0 || input == 1))
            break;
        bitSeq.push_back(input);
    }

    // output loop
    cout << "Original bit sequence: " << endl;
    copy2cout(bitSeq.begin(), bitSeq.end());

    // create a new list for bit_stuffing
    list<int> bitStuff(bitSeq);

    // define loop iterators
    list<int>::iterator first = bitStuff.begin();
    list<int>::iterator last = bitStuff.end();


    // bit stuff loop
    while (first != last)
    {
        if (*first == 0)
        {
            count1 = 0; // reset 1's-counter
        }
        else if (*first == 1)
        {
            count1++; // increment number of consecutive 1's
        }

        first++; // go to the next list element
        if (count1 == 5)
        {
            // insert a 0 after the 5th consecutive 1
            bitStuff.insert(first, 0);
            count1 = 0; // reset counter
        }
    }


    // output loop
    cout << "But-stuffed bit sequence: " << endl;
    copy2cout(bitStuff.begin(), bitStuff.end());

    double relExp; // relative expansion
    relExp = (double)bitStuff.size() / bitSeq.size();
    relExp = (relExp - 1)*100;
    cout.precision(4);

    cout << "Relative expansion: " << relExp << "%" << endl;
    cout << "Absolute expansion: " << (bitStuff.size() - bitSeq.size());
    cout << "bit" << endl;


    // bit unstuff loop
    first = bitStuff.begin();
    last = bitStuff.end();
    list<int>::iterator erase_it;

    count1 = 0;

    while (first != last)
    {
        if (*first == 0)
        {
            count1 = 0;
        }
        else
        {
            count1++;
        }

        if(count1 == 5)
        {
            erase_it = first;

        

            if(*(++erase_it)!=0)
            {
                cout << "not a valid bit-stuffed sequence!" << endl;
                exit(0);
            }
            bitStuff.erase(erase_it);
            count1 = 0;
        }
    ++first;
    }

    cout << "After bit-unstuffing: ";

    // check if valid
    if (bitStuff == bitSeq)
    {
        cout << "sequences are equal";
    }
    else
    {
        cout << "sequences are not equal";
    }
    cout << endl;

}

void func2(void)
{
    vector<int> a;
    vector<int> b;

    for (int i = 0; i < 4; i++)
    {
        a.push_back(i);
        b.push_back(i);
    }

    vector<int> c(4); // allocate memory for 4 int values!!

    // use the alo "transform" and the function object "plus"
    // transform takes the elements of vectors a and b, adds them using
    // plus and writes the results to c

    transform(a.begin(), a.end(), b.begin(), c.begin(), plus<int>());

    copy(c.begin(), c.end(), ostream_iterator<int> (cout, " "));
    cout << endl;
}



template <class value_type>
class gen
{
    value_type start, step;
    public:
        gen(): start(0), step(1) {}
        gen(value_type sta, value_type ste) : start(sta), step(ste) {}

        value_type operator() (void)
        {
            value_type tmp = start;
            start += step;
            return tmp;
        }
};

void func3(void)
{
    vector<int> v(10);

    generate(v.begin(), v.end(), gen<vector<int>::value_type>(1,2));
    copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
}

int main(void)
{
    func1();
    func2();
    func3();
    return 0;
}


/*
Sample Input & Output:
__________________________________________________________________________
Input 0 and 1 values (one at a time), enter another value to stop input...
1
1
1
0
0
0
1
1
1
1
1
1
1
0
1
1
1
1
1
0
3
Original bit sequence: 
11100011111110111110
But-stuffed bit sequence: 
1110001111101101111100
Relative expansion: 10%
Absolute expansion: 2 bit
After bit-unstuffing: sequences are equal
0 2 4 6 
1 3 5 7 9 11 13 15 17 19 
__________________________________________________________________________
*/
