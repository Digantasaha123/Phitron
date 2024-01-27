// Q3  Write down a program that will take n number of input from the users
// and create a Linear Linked List of n size.
//  Replace all the even numbers in the list by -1 and display the List.

// Sample Input
// Sample Output
// 5
// 1 3 4 5 6
// 1-> 3 -> -1 -> 5 -> -1
// 6
// 2 2 2 1 2 3
// -1 -> -1->-1-> 1 -> -1 -> 3

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

void InsertTail(Node *&head, int val)
{
    Node *temp = head;
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->value % 2 == 0)
        {
            cout << "-1";
        }
        else
        {
            cout << temp->value;
        }
        if (temp->next != NULL)
        {
            cout << "->";
        }
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    int t;
    cin >> t;
    int x = t;
    while (t--)
    {
        int val;
        cin >> val;
        InsertTail(head, val);
    }
    display(head);
    return 0;
}