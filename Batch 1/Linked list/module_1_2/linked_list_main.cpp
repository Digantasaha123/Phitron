#include <bits/stdc++.h>
using namespace std;
class Node
{
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

struct Test
{
    int position[1000];
};

void insertionAtHead(Node *&head, int val);
void insertionAtTail(Node *&head, int val);
void insertionAtSpecificposition(Node *&head, int pos, int val);
void display(Node *n);
int countLength(Node *&head);
int searchByValueUnique(Node *&head, int key);
void searchByValueDuplicate(Node *&head, int key);
Test searchByValueDuplicateReturn(Node *&head, int key);
void insertionByValueUnique(Node *&head, int searchValue, int value);
void deletionAtTail(Node *&head);
void deletionAtSpecificPosition(Node *&head, int position);
void deletionByValueUnique(Node *&head, int value);

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
}

void insertionAtHead(Node *&head, int val)
{
    // New Node Creation
    Node *newNode = new Node(val);
    // Update newNode->Next;
    newNode->Next = head;
    head = newNode;
}

void insertionAtSpecificposition(Node *&head, int pos, int val)
{
    int i = 0;
    Node *temp = head;
    while (i < pos - 2)
    {
        temp = temp->Next;
        i++;
    }
    Node *newNode = new Node(val);
    newNode->Next = temp->Next;
    temp->Next = newNode;
}

void display(Node *n)
{
    while (n != NULL)
    {
        cout << n->value;
        if (n->Next != NULL)
            cout << " -> ";
        n = n->Next;
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
            return -1;
        }
        temp = temp->Next;
        count++;
    }
    return count;
}

void searchByValueDuplicate(Node *&head, int key)
{
    Node *temp = head;
    int count = 0, k = 1, flag = 0;
    int position[countLength(head) + 1];
    while (temp != NULL)
    {
        if (temp->value == key)
        {
            flag = 1;
            position[k] = count;
            k++;
        }
        temp = temp->Next;
        count++;
    }
    if (flag == 0)
    {
        cout << "The value is not yet in the list !  " << endl;
    }
    else
    {
        position[0] = k;
        cout << "The value is found at position : ";
        for (int i = 1; i < position[0]; i++)
        {
            cout << position[i];
            if (i < position[0] - 1)
                cout << ",";
        }
        cout << endl;
    }
}

Test searchByValueDuplicateReturn(Node *&head, int key)
{
    Node *temp = head;
    int count = 1, k = 1;
    Test T;
    while (temp != NULL)
    {
        if (temp->value == key)
        {

            T.position[k] = count;
            k++;
        }
        temp = temp->Next;
        count++;
    }
    T.position[0] = k;
    return T;
}

void insertionByValueUnique(Node *&head, int searchValue, int value)
{

    int position = searchByValueUnique(head, searchValue);
    if (position == -1)
    {
        cout << "The Linked list is empty" << endl;
    }

    insertionAtSpecificposition(head, position + 1, value);
}

void deletionAtHead(Node *&head)
{
    Node *temp = head;
    if (temp != NULL)
    {
        head = temp->Next;
        delete temp;
    }
    else
        cout << "There is no value in the linked list" << endl;
}

void deletionAtTail(Node *&head)
{
    Node *temp = head;
    if (temp != NULL && temp->Next != NULL)
    {
        while (temp->Next->Next != NULL)
        {
            temp = temp->Next;
        }
        Node *delNode = temp->Next;
        temp->Next = NULL;
        delete delNode;
    }

    else
    { // Head is NULL
        if (temp == NULL)
        {
            cout << "There is no value in the linked list" << endl;
        }
        else if (temp->Next == NULL)
        {
            deletionAtHead(head);
        }
    }
}
int get(int index, Node*head)
{
    int i = 1;
    Node *temp = head;
    while (i != index)
    {
        temp = temp->Next;
        i++;
        if (temp == NULL)
            break;
    }
    if (temp == NULL)
        return -1;
    else
        return temp->value;
}
void deletionAtSpecificPosition(Node *&head, int position)
{
    Node *temp = head;
    int i = 1;

    // valid position ( the linked list is not empty && the postion between head and tail and not an invalid position)
    if (temp != NULL && position <= countLength(head))
    {
        // The position is at head
        if (position == 1)
        {
            deletionAtHead(head);
        }
        // The position is at Tail
        else if (position == countLength(head))
        {
            deletionAtTail(head);
        }
        // position in between
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
        // case : 1 Linked list is empty
        // if (temp == NULL)
        // {
        //     cout << "There is no value in the Linked List" << endl;
        // }

        // case : 2 positon is out of range
        if (position > countLength(head))
        {
            cout << "Position is out of Bound " << endl;
        }
    }
}

void deletionByValueUnique(Node *&head, int value)
{
    int position = searchByValueUnique(head, value);
    if (position == -1)
    {
        cout << "Value not found in the Linked List" << endl;
    }
    else
    {
        deletionAtSpecificPosition(head, position);
    }
}

int main()
{
    Node *head = NULL;
    int value, position;

    cout << "choice  1  : Insertion at head" << endl;
    cout << "choice  2  : Insertion at Tail" << endl;
    cout << "choice  3  : Insertion at a specific position" << endl;
    cout << "choice  4  : Search a Value (Unique List)" << endl;
    cout << "choice  5  : Search a Value (Duplication Enabled List)" << endl;
    cout << "choice  6  : Insertion after  a specific Value (Unique List)" << endl;
    cout << "choice  7  : Deletion at Head" << endl;
    cout << "choice  8  : Deletion at Tail" << endl;
    cout << "choice  9  : Deletion at a Specific position" << endl;
    cout << "choice 10  : Deletion By a value (Unique List)" << endl;
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
            cout << "Enter the value: ";
            cin >> value;
            insertionAtHead(head, value);
            break;

        case 2:

            cout << "Enter the value: ";
            cin >> value;
            insertionAtTail(head, value);
            break;

        case 3:

            cout << "Enter the Desired position : ";
            cin >> position;
            cout << "Enter the Value : ";
            cin >> value;
            insertionAtSpecificposition(head, position, value);
            break;

        case 4:
            cout << "Enter the Value to search  : ";
            cin >> value;
            position = searchByValueUnique(head, value);
            if (position != -1)
            {
                cout << "The number is at position " << position << endl;
            }
            else
                cout << "The number is not yet in the list " << endl;
            break;

        case 5:
            cout << "Enter the ValueE to search  : ";
            cin >> value;
            Test T;
            T = searchByValueDuplicateReturn(head, value);
            if (T.position[0] == 1)
            {
                cout << "The Searched value is not yet in the list " << endl;
            }

            else
            {
                int size = T.position[0];
                cout << "The value is found at Position : ";
                for (int i = 1; i < size; i++)
                {
                    cout << T.position[i];
                    if (i < size - 1)
                    {
                        cout << ",";
                    }
                }
                cout << endl;
            }
            break;
        case 6:
            int searchValue;
            cout << "Enter the value to search : ";
            cin >> searchValue;

            cout << "Enter the value to insert : ";
            cin >> value;
            insertionByValueUnique(head, searchValue, value);

            display(head);
            break;
        case 7:
            deletionAtHead(head);
            break;
        case 8:
            deletionAtTail(head);
            break;

        case 9:
            if (head == NULL)

            {
                cout << "There is no value in the Linked List" << endl;
                break;
            }
            cout << "Enter the desired positon:";
            cin >> position;

            deletionAtSpecificPosition(head, position);
            cout << endl;
            display(head);
            break;

        case 10:
            int delValue;
            cout << "Enter the value to delete : ";
            cin >> delValue;
            deletionByValueUnique(head, delValue);
            break;
        case 11:
            cout<<"\n ------->"<<get(3,head)<<"<-----------"<<endl;
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
