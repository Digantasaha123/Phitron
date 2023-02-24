#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;

    Node(int val)
    {
        value = val;
        next = NULL;
    }
};


void insertAtTail   (Node* &head, int val)
{
    Node * newNode=  new Node(val);
    if(head == NULL)
    {
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next!=NULL)
    {
        temp =  temp->next;
    }
    temp->next = newNode;
}


void insertAtHead(int val)
{
Node* newNode = new Node(val);
newNode -> next = head;
head = newNode;
}
int main()
{

    return 0;
}