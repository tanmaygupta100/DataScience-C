// Adapted from tutorial on https://www.geeksforgeeks.org/linked-list-set-1-introduction/
// A simple CPP program to introduce a linked list

// Example from canvas in M6.1
// T: My personal notes on will look like this -> (T:)

#include <iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node* next;
        // T: both of these applies to every variable/integer.
            // "data" is for assigning values to the variables
            // "next" is for pointing to a new thing.
};


// Program to create a simple linked list w/ 3 nodes
int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
        // T: I think this points the variables at the NULL initial value. So, they become pointers.

    // allocate 3 nodes in the heap
    head = new Node();
    second = new Node();
    third = new Node();
        // T: I think this allocates space for these nodes

    /* Three blocks have been allocated dynamically.
    We have pointers to these 3 blocks as head, second, and third.
    
       head           second           third
        |                |               |
        |                |               |
    +---+-----+     +----+----+     +----+----+
    | # |  #  |     | #  | #  |     |  # |  # |
    +---+-----+     +----+----+     +----+----+

    "#" represents any random value.
    Data is  random because we haven't asssigned anything yet. */
        // T: The first box is the actual value being set, the second box is a pointer.
            // T: Basically linked lists are like a train, so the second box is the link to the second train.


    head->data = 1;         // Assign data in first node
    head->next = second;    // Link first node with the second node
        // T: These two use the 

    /* Data has been assigned to the data part of first block (block pointed by the head).
    And next pointer of the first block points to second.
    So, they both are linked.

       head          second           third
        |              |                |
        |              |                |
    +---+---+     +----+----+     +-----+----+
    | 1 |  o----->| #  | #  |     |  #  | #  |
    +---+---+     +----+----+     +-----+----+
    */


   // Assign data to second node
   second->data = 2;


   // Link second node with the third node
   second->next = third;

   /* Data has been assigned to the data part of the second block (block pointed by second).
   And next pointer of the second block points to the third block.
   So, all 3 blocks are linked.

       head         second         third
        |             |             |
        |             |             |
    +---+---+     +---+---+     +----+----+
    | 1  | o----->| 2 | o------>|  # |  # |
    +---+---+     +---+---+     +----+----+
    */


   // Assign data to third node
   third->data = 3;

   third->next = NULL;


   /* Data has been assigned to the data part of the third block (block pointed by third).
   And next pointer of the third block is made NULL to indicate that the linked list is terminated here.


   We have the linked list ready.

       head
        |
        |
    +---+---+     +---+---+     +----+------+
    | 1 |  o----->| 2 |  o----->|  3 | NULL |
    +---+---+     +---+---+     +----+------+

    Note that only the head is sifficient to represent the whole list.
    We can traverse the complete list by following the next pointers. */

    return 0;
}
