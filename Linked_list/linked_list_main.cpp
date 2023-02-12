#include <bits/stdc++.h>
using namespace std;
class Node
//class declaration
 
{
public:
    int value;
    Node *Next;

    // constructor creation
    Node(int val)
    {
        value = val;
        Next = NULL;
    }
};



void insertAtTail(Node* &head, int val) //update?
{
    Node *newNode = new Node(val);
    if (head == NULL){
        head = newNode;
        return;
    }
    Node *temp = head;
    while(temp->Next != NULL)
    {
        temp = temp->Next;

    }
     temp->Next = newNode;
}



void display(Node *n)
{
    while (n != NULL)
    {
        cout << n->value;
        if (n->Next != NULL)
        {
            cout << " -> ";
        }
        n = n->Next;
    }
    cout << endl
         << endl;
}

int main()
{
Node *head = NULL;

insertAtTail(head, 1);
insertAtTail(head, 5);
insertAtTail(head, 8);
insertAtTail(head, 9);
    display(head);

}