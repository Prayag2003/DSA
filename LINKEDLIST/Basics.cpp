// LINKED LIST is a Linear DS which is collection of Nodes

// Each Node contains Data and Address of the next Node

// *******  Need for LL ?  *******

// 1) Dynamic size ( vector takes extra time in copying and doubling the size) , can be shrinked or extended at Run Time
// 2) No Memory Wastage in LL
// 3) Insertion and Deletion is easy since no shift is needed
// 4) Random Allocation in Heap Memory ( no need for contiguos memory )

// Types

//  1 ) Singly Linked List
//  2 ) Doubly Linked List
//  3 ) Circular Linked List
//  4 ) Circular Doubly Linked List

// NODE is a Class having Data and Address Pointer

#include <iostream>
using namespace std;

class Node
{

public:

    int data;
    Node* next;

    // constructor 
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

};

int main()
{
    Node* head = new Node(10);
    cout << head->data << "\n";
    cout << head->next << "\n";

}

