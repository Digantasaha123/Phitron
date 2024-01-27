#include <bits/stdc++.h>
using namespace std;
class doublyNode
{
public:
    int val;
    doublyNode *prev;
    doublyNode *next;

    doublyNode(int val)
    {
        this->val = val;
        prev = NULL;
        next = NULL;
    }
};

void insertionAtHead(doublyNode *&head, int val)
{
    doublyNode *newNode = new doublyNode(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}
void insertionAtTail(doublyNode *&head, int val)
{
    doublyNode *newNode = new doublyNode(val);

    if (head == NULL)
    {
        head = newNode;
        return;
    }
    doublyNode *temp = head;
    while (temp->next != NULL)
    {

        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}
void display(doublyNode *temp)
{
    if (temp == NULL)
    {
        cout << "The Linked List is empty! " << endl;
        return;
    }
    while (temp != NULL)
    {
        cout << temp->val;
        if (temp->next != NULL)
        {
            cout << "-->";
        }
        temp = temp->next;
    }
    cout << endl
         << endl;
}
void displayReverse(doublyNode *temp)
{
    if (temp == NULL)
    {
        cout << "The Linked List is empty! " << endl;
        return;
    }
    // temp->next is used beacause we dont want to execute the code inside the loop when it reaches the tail
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    while (temp != NULL)
    {
        cout << temp->val;
        if (temp->prev != NULL)
        {
            cout << "-->";
        }
        temp = temp->prev;
    }
    cout << endl
         << endl;
}

int countLength(doublyNode *temp)
{
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}


int main()
{
    doublyNode *head = NULL;
    int value, position, choice;

    cout << "Choice 1 : Insertion at Head" << endl;
    cout << "Choice 2 : Insertion at Tail" << endl;
    cout << "Choice 3 : Display (Reverse)" << endl;
    cout << "Choice 0 : Exit" << endl
         << endl;

    cout << "Enter your choice : ";
    cin >> choice;

    while (choice != 0)
    {
        switch (choice)
        {
        case 1:
            cout << "Enter the value to insert at head : ";
            cin >> value;
            insertionAtHead(head, value);
            display(head);
            break;
        case 2:
            cout << "Enter the value to insert at Tail : ";
            cin >> value;
            insertionAtTail(head, value);
            display(head);
            break;
        case 3:
            displayReverse(head);
            break;
        default:
            break;
        }

        cout << endl
             << "Next Choice : ";
        cin >> choice;
    }
    cout << "Final Linked List : ";
    display(head);
    cout<< "Length of the Linked list is : " << countLength(head);

    return 0;
}