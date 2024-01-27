//  Take a singly linked list as input and print the middle element. If there are multiple values in the middle print both.
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, int val)
{

    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data;
        if (temp->next != NULL)
            cout << " -> ";
        temp = temp->next;
    }
    cout << endl;
}
void insert_at_position(Node *&head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
int count_Nodes(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next, count++;
    }
    return count;
}
void print_Mid(Node *head)
{
    int count = count_Nodes(head);
    Node *temp = head;
    int i = 0;
    if (count % 2 != 0)
    {
        while (i < count / 2)
        {
            temp = temp->next;
            i++;
        }
        cout << temp->data << endl;
    }
    else {
        while (i <(count / 2)-1)
        {
            temp = temp->next;
            i++;
        }
        cout << temp->data << " "<<temp->next->data<<endl;
    }
}
int main()
{
    int val;
    Node *head = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, val);
    }

    print_Mid(head);
    return 0;
}