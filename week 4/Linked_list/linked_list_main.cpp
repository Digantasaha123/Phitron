#include <bits/stdc++.h>
using namespace std;
class Node
// class declaration

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

void insertAtTail(Node *&head, int val);
void insertAtHead(Node *&head, int val);
void display(Node *value);
int countLength(Node *&head);
void insertAtSpecificPosition(Node* &head, int pos, int val)
void insertAtTail(Node *&head, int val) // update?
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

void insertAtHead(Node *&head, int val)
{
    // Step 1--> new node creation
    Node *newNode = new Node(val);

    // Step 2--> Update newNode-> Next
    newNode->Next = head;
    // Step 3--> Update head
    head = newNode;
}

void display(Node *value)
{
    while (value != NULL)
    {
        cout << value->value;
        if (value->Next != NULL)
        {
            cout << " -> ";
        }
        value = value->Next;
    }
    cout << endl
         << endl;
}

int countLength(Node *&head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->Next;
    }
    return count;
}

int main()
{

    Node *head = NULL;
    int value;
 
 cout << "choice 0: EXIT" << endl;
         
    cout << "choice 1  insertion at head " << endl;
    cout << "choice 2  Insertion at tail " << endl;
    cout << "choice 3  Insertion at Specific posotion :       " << endl;
   
    cout << "Enter Your choice : ";
    int choice;
    cin >> choice;
    while (choice != 0)

    {
        cout << "Enter the value: ";
        cin >> value;
        switch (choice)
        {
        case 1:
        {
            insertAtHead(head, value);
            break;
        }
        case 2:
        {
            insertAtTail(head, value);
            break;
        }
        default:
            break;
        }
        cout << "choice 1  insertion at head " << endl;
        cout << "choice 2  Insertion at tail " << endl;
        cout << "choice 0: EXIT" << endl
             << endl;

        cout << "Next choice : ";
        cin >> choice;
        cout << endl
             << endl;
    }
    cout << "Linked list :" << endl;
    display(head);
    cout << "Length of the Linked List: " << countLength(head);
    // int value;
    // cout<<"Enter the value : ";

    // insertAtTail(head, 1);
    // insertAtTail(head, 5);
    // insertAtTail(head, 8);
    // insertAtTail(head, 9);
    //     display(head);
}