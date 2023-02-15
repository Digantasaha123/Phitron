#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *Next;

    Node(int val)
    {
        value = val;
        Next = NULL;
    }
};

void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->Next != NULL)
    {
        temp = temp->Next;
    }
    temp->Next = newNode;
}

void display(Node *n)
{
    while (n != NULL)
    {
        cout << n->value << endl;
        n = n->Next;
    }
}
int main()
{
    Node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 1);
    insertAtTail(head, 1);
    insertAtTail(head, 1);
    display(head);
    return 0;
}