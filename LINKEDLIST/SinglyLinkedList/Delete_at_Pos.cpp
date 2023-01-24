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

void insertAtEnd(Node *&tail, int data)
{
    Node *temp = tail;
    Node *last = new Node(data);
    tail->next = last;
    tail = last;
}

void deleteAtPos(Node *&head, int pos)
{
    // 1->2->3->4
    // 1->2->4
    Node *temp = head;
    int cnt = 1;
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }
    temp->next = temp->next->next;
    
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
    Node *tail = NULL;
    Node *first = new Node(10);

    head = first;
    tail = first;
    insertAtEnd(tail, 20);
    insertAtEnd(tail, 30);
    insertAtEnd(tail, 40);

    printLL(head);
    deleteAtPos(head, 4);
    printLL(head);
}