#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int value;
    Node *Next;

    Node(int val){
        value = val;
        Next = NULL;
    }
};
struct Test{
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
void deletionAtHead(Node *&head);
void insertionAtTail(Node *&head, int val){
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
void insertionAtHead(Node *&head, int val){
    Node *newNode = new Node(val);
    newNode->Next = head;
    head = newNode;
}

void insertionAtSpecificposition(Node *&head, int pos, int val){
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
void display(Node *n){
    while (n != NULL)
    { cout << n->value;
        if (n->Next != NULL)
            cout << " -> ";
        n = n->Next;
    } cout << endl;
   
}
int countLength(Node *&head){
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->Next;
        count++;
    }
    return count;}

int searchByValueUnique(Node *&head, int key){
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
    Test T;
    int k = 1;
    int count = 1;
    while (temp != NULL)
    {
        if (temp->value == key)
        {
            T.position[k] = count;
            k++;
        }
        count++;
        temp = temp->Next;
    }
    T.position[0] = k;
    return T;
}

void searchByValueUnique(Node *&head, int searchValue, int value)
{
    // Step 1 search the postion of the search Value
    int position = searchByValueUnique(head, searchValue);

    // Insertion at position + 1
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
    {
        cout << "There is no value in the linked list " << endl;
    }
}
int main()
{
    Node *head = NULL;
    int value, position;

    cout << "choice 0 : Exit " << endl;
    cout << "choice 1 : Insertion at head" << endl;
    cout << "choice 2 : Insertion at Tail" << endl;
    cout << "choice 3 : Insertion at a specific position" << endl;
    cout << "choice 4 : Search a Value (Unique List)" << endl;
    cout << "choice 5 : Search a Value (Duplication Enabled List)" << endl;
    cout << "choice 6 : Insertion After a Specific Value (Unique List)" << endl
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
            cout << "Enter the Value to search  : ";
            cin >> value;
            // searchByValueDuplicate(head, value);
            Test T;
            T = searchByValueDuplicateReturn(head, value);
            if (T.position[0] == 1)
            {
                cout << "The value is not yet in the list" << endl;
            }
            else
            {
                int size = T.position[0];
                cout << "The value is found at position : ";
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
            cout << "Enter the value to search: ";
            int searchValue;
            cin >> searchValue;
            cout << "Enter the value to insert: ";
            cin >> value;
            searchByValueUnique(head, searchValue, value);
            break;
        case 7:
            deletionAtHead(head);
        default:
            break;
        }
        cout << "Next choice : ";
        cin >> choice;
    }

    cout << "Linked List : ";
    display(head);
    cout << "Length of the linked list : " << countLength(head) << endl
         << endl;
}