#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *Next;
    Node *prev;
    Node(int val)
    {
        value = val;
        Next = NULL;
        prev = NULL;
    }
};

void display(Node *head);
int countLength(Node *head);
void insertionAtHead(Node *&head, int val);
void insertionAtTail(Node *&head, int val);
void insertionAtSpecificposition(Node *&head, int pos, int val);
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value;
        if (temp->Next != NULL)
        {
            cout << "<-->";
        }
        temp = temp->Next;
    }
    cout << endl;
}
void insertionAtHead(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    head->prev = newNode;
    newNode->Next = head;
    head = newNode;
}
void insertionAtTail(Node *&head, int val)
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
    newNode->prev = temp;
}
void insertionAtSpecificposition(Node *&head, int pos, int val)
{
    if (pos > countLength(head) + 1)
    {
        cout << "Invalid Position" << endl;
        return;
    }

    if (pos == 1 || head == NULL)
    {
        insertionAtHead(head, val);
        return;
    }
    else if (pos == countLength(head) + 1)
    {
        insertionAtTail(head, val);
        return;
    }

    int i = 0;
    Node *temp = head;
    while (i < pos - 2)
    {
        temp = temp->Next;
        i++;
    }
    Node *newNode = new Node(val);
    Node *save = temp->Next;

    newNode->Next = save;
    temp->Next = newNode;
    newNode->prev = temp;
    save->prev = newNode;
}
int countLength(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->Next;
        count++;
    }
    return count;
}
int searchByValueUnique(Node *&head, int key)
{
    // case 1;
    if (head == NULL)
    {
        return -1;
    }
    int count = 1;
    Node *temp = head;
    while (temp->value != key)
    {
        if (temp->Next == NULL)
        {
            return -2;
        }
        temp = temp->Next;
        count++;
    }
    return count;
}
int main()
{

    Node *head = NULL;
    int choice, value, position;

    cout << "Choice 1:  Count the size " << endl;
    cout << "Choice 2:  Display List " << endl;
    cout << "Choice 3:  Insertion at Head " << endl;
    cout << "Choice 4:  Insertion at Tail" << endl;
    cout << "Choice 5:  Insertion at Specific Position " << endl;
    cout << "Choice 6:  Search a value (Unique List) " << endl;
    // cout << "Choice 7:  Search a value (Duplication enabled List)" << endl;
    // cout << "Choice 8:  Insertion after a specific value (Unique List)" << endl;
    // cout << "Choice 9:  Insertion after a specific value (Duplication enabled List)" << endl;
    // cout << "Choice 10: Deletion at Head" << endl;
    // cout << "Choice 11: Deletion at Tail" << endl;
    // cout << "Choice 12: Deletion at a Specific Position" << endl;
    // cout << "Choice 13: Deletion by Value (Unique List)" << endl;
    // cout << "Choice 14: Deletion by Value(Duplication enabled List)" << endl;

    cout << "Enter Yor choice : ";
    cin >> choice;
    while (choice != 0)
    {
        switch (choice)
        {
        case 1:
            cout << "Length of the Linked List : " << countLength(head) << endl;
            break;
        case 2:
            display(head);

        case 3:
            cout << "Enter the value to enter at Head : ";
            cin >> value;
            insertionAtHead(head, value);

            break;
        case 4:
            cout << "Enter the value to enter at Tail : ";
            cin >> value;
            insertionAtTail(head, value);
            break;
        case 5:
            cout << "Enter the value : ";
            cin >> value;
            cout << "Enter the position : ";
            cin >> position;
            insertionAtSpecificposition(head, position, value);
        case 6:
            cout << "Enter the value to search (unique list) : ";
            cin >> value;
            position = searchByUniqueValue(head, value);
            if (position == -1)
                cout << "The linked list is empty ! " << endl;
            else if (position == -2)
                cout << "The value was not found in the Linked list ! " << endl;
            else
                cout << "The value was found at position : " << position << endl;
            break;
           
        default:
            break;
        }
        display(head);
        // cout << endl
        //      << "Length of Linked List : " << countLength(head) << endl;
        cout << "Next choice : ";
        cin >> choice;
    }

    return 0;
}