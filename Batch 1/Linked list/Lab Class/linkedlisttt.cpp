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
struct Test
{
    int position[1000];
};
void insertHead(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->Next = head;
    head = newNode;
}
void insertTail(Node *&head, int val)
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
int count(Node *temp)
{
    int i = 0;
    while (temp != NULL)
    {
        temp = temp->Next;
        i++;
    }
    return i;
}
void display(Node *x)
{
    while (x != NULL)
    {
        cout << x->value;
        if (x->Next != NULL)
        {
            cout << " -> ";
        }
        x = x->Next;
    }
    cout << endl;
}
void insertionAtSpecificPosition(Node *&head, int value, int position)
{
    Node *temp = head;
    Node *newNode = new Node(value);
    // sorted out if the specific position is head
    if (head == NULL)
    {
        insertHead(head, value);
        return;
    }
    int i = 0;
    while (i < position - 2)
    {
        temp = temp->Next;
        i++;
    }

    newNode->Next = temp->Next;
    temp->Next = newNode;
    cout << "Done! " << endl
         << "Updated Linked List : ";
    display(head);
}
int searchByUniqueValue(Node *&head, int val)
{

    if (head == NULL)
    {
        return -1;
    }
    Node *temp = head;
    int pos = 1;
    while (temp->value != val)
    {
        if (temp->Next == NULL)
        {
            return -2;
        }
        temp = temp->Next;
        pos++;
    }
    return pos;
}
Test searchByDuplicatedValue(Node *&head, int key)
{
    Test T;
    int pos = 1, k = 1;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->value == key)
        {
            T.position[k] = pos;
            k++;
        }
        pos++;
        temp = temp->Next;
    }
    T.position[0] = k;
    return T;
}
void insertionAfterValueUnique(Node *&head, int searchValue, int value)
{
    Node *temp = head;

    int pos = searchByUniqueValue(head, searchValue);
    insertionAtSpecificPosition(head, value, pos + 1);
}
void deletionHead(Node *&head)
{
    if (head == NULL)
    {
        cout << "The linked list is empty! " << endl;
        return;
    }

    Node *temp = head;
    head = temp->Next;
    delete temp;
}
void deletionTail(Node *&head)
{   
    Node *temp = head;
    if (temp->Next == NULL)
    {
        deletionHead(head);
        return;
    }
    while (temp->Next->Next != NULL)
    {
        temp = temp->Next;
    }
    temp->Next = NULL;
    delete temp->Next;
}
void deletionaAtaSpecificPosition(Node *&head, int position)
{
    Node *temp = head;
    int i = 1;
    if (temp != NULL && position <= count(head))
    {
        if (position == 1)
            deletionHead(head);
        else if (position == count(head))
            deletionTail(head);
        else
        {
            while (i < position - 1)
            {
                temp = temp->Next;
                i++;
            }
            Node *delNode = temp->Next;
            temp->Next = delNode->Next;
            delete delNode;
        }
    }
    else
    {
        if (temp == NULL)
        {
            cout << "There is no value in the Linked List" << endl;
        }
        else if (position > count(head))
            cout << "Position out of bound" << endl;
    }
}
void deletionaByValueUnique(Node *&head, int value)
{
    int position = searchByUniqueValue(head, value);
    {
        if (position == -1)
        {
            cout << "There is no value in the Linked List!" << endl;
        }
        else if (position == -2)
        {
            cout << "The value doesn't exist in the linked list! " << endl;
        }

        else
        {
            deletionaAtaSpecificPosition(head, position);
        }
    }
}
Node *reverseNonRecursive(Node *&head)
{
    Node *prev = NULL;
    Node *current = head;
    if (head == NULL)
    {
        cout << "There is no value in the Linked List" << endl;
        return head;
    }

    Node *next = head->Next;

    while (true)
    {
        current->Next = prev;
        prev = current;
        current = next;
        if (current == NULL)
        {
            break;
        }
        next = next->Next;
    }
    return prev;
}
Node *reverseRecursive(Node *&head)
{
    //base call
    if (head == NULL|| head->Next == NULL )
    {
        if (head == NULL)
        {
            cout << "The Linked list is empty" << endl;
        }

        return head;    
    }
    // RECURSIVE CALL
    Node *newHead = reverseRecursive(head->Next);
    head->Next->Next = head;
    head->Next = NULL;
    return newHead;
}
int main()
{
    Node *head = NULL;
    int choice, value, position;
    int searchValue;
    cout << "Choice 1 : Count the size" << endl;
    cout << "Choice 2 : Display List" << endl;
    cout << "Choice 3 : Insertion at Head" << endl;
    cout << "Choice 4 : Insertion at Tail" << endl;
    cout << "Choice 5 : Insertion at Specific Position" << endl;
    cout << "Choice 6 : Search a value (Unique List)" << endl;
    cout << "Choice 7 : Search a value (Duplication List)" << endl;
    cout << "Choice 8 : Insertion after a specific value (Unique List)" << endl;
    cout << "Choice 9 : Insertion after a specific value (Duplication enabled List)" << endl;
    cout << "Choice 10 : Deletion at Head" << endl;
    cout << "Choice 11 : Deletion at Tail" << endl;
    cout << "Choice 12 : Deletion at a Specific Position " << endl;
    cout << "Choice 13 : Deletion by Value (Unique List)" << endl;
    // cout << "Choice 14 : Count theDeletion by Value (Unique List) size" << endl;
    cout << "Choice 15 : Reverse the Linked List (Non recursive method)" << endl;
    cout << "Choice 16 : Reverse the Linked List (Recursive method)" << endl;
    cout << "Enter your choice : ";
    cin >> choice;

    while (choice != 0)
    {
        switch (choice)
        {
        case 1:
            display(head);
            cout << "Length of the linked list is : " << count(head) << endl;

            break;
        case 2:
            display(head);
            break;
        case 3:
            cout << "Enter the value of the head : ";
            cin >> value;
            insertHead(head, value);
            cout << "Done! " << endl
                 << "Updated Linked List : ";
            display(head);
            break;
        case 4:
            cout << "Enter the value of the Tail : ";
            cin >> value;
            insertTail(head, value);
            cout << "Done! " << endl
                 << "Updated Linked List : ";
            display(head);
            break;
        case 5:
            cout << "Enter the position : ";
            cin >> position;
            cout << "Enter the value : ";
            cin >> value;
            insertionAtSpecificPosition(head, value, position);
            break;
        case 6:
            cout << "Enter the value (Unique) : ";
            cin >> value;
            position = searchByUniqueValue(head, value);
            if (position == -1)
                cout << "The linked list is empty ! " << endl;
            else if (position == -2)
                cout << "The value was not found in the Linked list ! " << endl;
            else
                cout << "The value was found at position : " << position << endl;
            break;
        case 7:
            cout << "Enter the value to search (Duplicated) : ";
            cin >> value;
            Test T;
            T = searchByDuplicatedValue(head, value);
            if (T.position[0] == 1)
            {
                cout << "The value is not yet in the list! ";
            }
            else
            {
                cout << "The value is found at position : ";
                for (int i = 1; i < T.position[0]; i++)
                {
                    cout << T.position[i];
                    if (i != T.position[0] - 1)
                    {
                        cout << ",";
                    }
                }
            }
            cout << endl;
            break;
        case 8:

            if (head == NULL)
            {
                cout << "The linked list is empty ! " << endl;
                break;
            }
            cout << "Enter the value to search (Unique List) : ";
            cin >> searchValue;
            cout << "Enter the value to insert (Unique List) : ";
            cin >> value;
            insertionAfterValueUnique(head, searchValue, value);

            break;
        case 9:

            if (head == NULL)
            {
                cout << "The linked list is empty ! " << endl;
                break;
            }
            cout << "Enter the value to search (Unique List) : ";
            cin >> searchValue;
            cout << "Enter the value to insert (Unique List) : ";
            cin >> value;
            insertionAfterValueUnique(head, searchValue, value);
            break;
        case 10:
            deletionHead(head);

        case 11:
            if (head == NULL)
            {
                cout << "The Linked List in empty! " << endl;
                break;
            }
            deletionTail(head);
            cout << "Done! " << endl
                 << "Updated Linked List : ";
            display(head);
            break;

        case 12:
            cout << "Enter the positon to delete : ";
            cin >> position;
            deletionaAtaSpecificPosition(head, position);
            cout << "Done! " << endl
                 << "Updated Linked List : ";
            display(head);
            break;

        case 13:
            cout << "Enter the value : ";
            cin >> value;
            deletionaByValueUnique(head, value);
            cout << "Updated Linked List : ";
            display(head);
            break;

        case 15:
            head = reverseNonRecursive(head);
            cout << "Updated Linked List : ";
            display(head);
            break;
        case 16:
            head = reverseRecursive(head);
            display(head);
            break;
        default:
            break;
        }
        cout << endl
             << "Next Choice : ";
        cin >> choice;
    }
    return 0;
}
