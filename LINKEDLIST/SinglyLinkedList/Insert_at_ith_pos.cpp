#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtBeginning(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtEnd(Node *&tail, int data)
{

    Node *last = new Node(data);
    // we use a variable called tail to reach to the pointer of the last element so as to insert new element into the LL

    tail->next = last;
    tail = tail->next;
}

void insert_at_ith_position(Node *&head, Node *&tail, int pos, int data)
{

    // adding to 1st position will not work , however just write if condition
    if (pos == 1)
    {
        insertAtBeginning(head, data);
        return;
    }

    Node *temp = head;
    // we are already standing on the starting node
    // hence temp = 1;

    int cnt = 1;
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        insertAtEnd(tail, data);
        return;
    }

    Node *newNode = new Node(data);

    newNode->next = temp->next;
    temp->next = newNode;
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
    Node *first = new Node(10);
    Node *tail = NULL;

    head = first;
    tail = first;
    printLL(head);

    insert_at_ith_position(head, tail, 1, 30);
    printLL(head);
    insert_at_ith_position(head, tail, 1, 40);
    printLL(head);
    insert_at_ith_position(head, tail, 3, 50);
    printLL(head);

    cout << "Head is " << head->data << " Tail is " << tail->data << "\n";
    
}