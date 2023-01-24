#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};


void insertAtEnd(Node *&tail, int data)
{
    
    Node *last = new Node(data);
    // we use a variable called tail to reach to the pointer of the last element so as to insert new element into the LL

    tail->next = last;
    tail = tail->next;
}

void printLL(Node *&head)
{
    Node *travel = head;
    while (travel != NULL)
    {
        cout << travel->data << " ";
        travel = travel->next;
    }
    cout << "\n";
}

int main()
{
    Node *head = NULL;
    Node *first = new Node(10);
    head = first;

    // since at the time of a single node , head and tail will be same

    Node *tail = first;
    printLL(head);

    insertAtEnd(tail, 20);
    printLL(head);

    insertAtEnd(tail, 30);
    printLL(head);
}