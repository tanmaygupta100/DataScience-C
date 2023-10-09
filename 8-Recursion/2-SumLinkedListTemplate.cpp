// Sum a linked list
// Extra example at the bottom for reversing order

#include <iostream>
using namespace std;

class Node
{
    public:
        int data; // DataType data;
        Node *next;
};

int listSum(Node* first)
{
    if (first == 0) // "if (first == NULL)"
        return 0; // base cases: empty list has sum 0
    else // recursive cases
        return first->data + listSum(first->next);
}

// Printing linked list in Reverse Order
void RPrint(Node* first)
{
    //base case
    if (first == 0) // "if (first == NULL)"
        return;
    //recursive case
    else
    {
        RPrint(first->next);
        cout << endl << first->data;
    }
}
