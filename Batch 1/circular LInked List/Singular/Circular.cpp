#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int value;
    Node *Next;

    // Constructor creation
    Node(int val)
    {
        value = val;
        Next = NULL;
    }
};

void insertAtHead(Node *&head, int val);
void insertAtTail(Node *&head, int val);
void insertionAtSpecificposition(Node *&head, int pos, int val);
void deletionAtHead(Node *&head);
void deletionAtTail(Node *&head);
void deletionAtSpecificPosition(Node *&head, int position);
void deletionByValueUnique(Node *&head, int value);
void display(Node *n);
int countLength(Node *&head);

void insertAtHead(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        head->Next = head;
        return;
    }
    newNode->Next = head;
    Node *temp = head;
    while (temp->Next != head)
    {
        temp = temp->Next;
    }
    temp->Next = newNode;
    head = newNode;
}
void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        head->Next = head;
        return;
    }
    Node *temp = head;
    while (temp->Next != head)
    {
        temp = temp->Next;
    }
    newNode->Next = head;
    temp->Next = newNode;
}
void display(Node *head)
{
    if (head == NULL)
    {
        cout << "The Linked List is empty" << endl;
        return;
    }
    Node *temp = head;
    do
    {
        cout << temp->value;
        temp = temp->Next;
        if (temp != head)
            cout << " -> ";
    } while (temp != head);
    cout << endl;
}
int countLength(Node *&head)
{
    int count = 0;
    Node *temp = head;
    do
    {
        count++;
        temp = temp->Next;
    } while (temp != head);
    return count;
}
void deletionAtHead(Node *&head)
{
    Node *temp = head;
    if (temp != NULL)
    {
        Node *delNode = temp;
        while (temp->Next != head)
        {
            temp = temp->Next;
        }
        temp->Next = delNode->Next;
        head = delNode->Next;
        delete delNode;
    }
    else
    {
        cout << "There is no value in the Linked List" << endl;
    }
}
void deletionAtTail(Node *&head)
{
    Node *temp = head;
    if(temp!=NULL && temp->Next!=head)
    {
        while(temp->Next->Next!=head)
        {
            temp = temp->Next;
        }
        Node *delNode = temp->Next;
        temp->Next=delNode->Next;
        delete delNode;
    }
    else{
        if(head==NULL) cout<<"The linked list is empty"<<endl;
        else deletionAtHead(head);
    }

}
int main()
{
    Node *head = NULL;
    int value, position;

    cout << "choice  1  : Insertion at head" << endl;
    cout << "choice  2  : Insertion at Tail" << endl;
    cout << "choice  3  : Insertion at a specific position" << endl;
    cout << "choice  4  : Deletion at Head" << endl;
    cout << "choice  5  : Deletion at Tail" << endl;
    cout << "choice  6  : Deletion at a Specific position" << endl;
    cout << "choice  0  : Exit " << endl
         << endl;
    cout << "Your  choice : ";
    int choice;
    cin >> choice;

    while (choice != 0)
    {

        switch (choice)
        {

        case 1:
            cout << "Enter the value to add in head :";
            cin >> value;
            insertAtHead(head, value);
        case 2:
            cout << "Enter the value to add in Tail :";
            cin >> value;
            insertAtTail(head, value);
            break;
        case 4:
            deletionAtHead(head);
            break;
        case 5:
            deletionAtTail(head);
        default:
            break;
        }
        cout << endl
             << "Next choice : ";

        cin >> choice;
    }

    cout << "Linked List : ";
    display(head);
    cout << "Length of the linked list : " << countLength(head) << endl
         << endl;
}