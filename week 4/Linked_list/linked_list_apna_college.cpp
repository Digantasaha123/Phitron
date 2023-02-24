#include <bits/stdc++.h>
using namespace std;
// 1. node class declaration
class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

// 2. value insertion
void insertAtTail(Node *&head, int val){
    Node* n = new Node(val); //object creation
    Node* temp = head ;//temporary variable declaration

    //traversal
    if(head == NULL) //Node is empty, so  we will make the parameter val as head
    {
        head = n; //put the value into the node(after just created)
        return;
    }
    while(temp -> next != NULL)
    {
        temp = temp -> next;
    }
    temp -> next = n;
}


//3. printing the linked list 
void display(Node* head)
{
    Node* temp = head;
     while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp = temp->next;
     }
     cout<<endl;

}
int main()
{
    Node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 10);
    insertAtTail(head, 100);
    insertAtTail(head, 1000);


    display(head);
    return 0;
}