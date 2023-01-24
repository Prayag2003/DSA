// INSERTION AT BEGINNING

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

// passing the reference of head and newnode's data to create new node
void insertAtBeginning(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void printLL(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

int main()
{
    Node *head = NULL;
    Node *n1 = new Node(10);

    // pointing the NULL Head towards the n1
    head = n1;
    printLL(head);

    // inserting New Node at beginning
    insertAtBeginning(head, 20);
    printLL(head);

    insertAtBeginning(head, 222);
    printLL(head);
}
