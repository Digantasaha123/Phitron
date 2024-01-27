#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void Print_Normal(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void print_Reverse(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *delNode = head;
    head = head->next;
    if (head == NULL)
    {
        tail = NULL;
        return;
    }
    delete delNode;
    head->prev = NULL;
}
void insert_at_position(Node *&head, int pos, int val)
{
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *delNode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete delNode;
}
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *delNode = tail;
    tail = tail->prev;
    delete delNode;
    if (tail == NULL)
    {
        head = NULL;
        return;
    }
    tail->next = NULL;
}
int size(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *tail = b;
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    int pos, val;
    cin >> pos >> val;
    if (pos >= size(head))
        cout << "Invalid Index" << endl;

    else if (pos == 0)
        insert_at_head(head, tail, val);
    else if (pos == size(head) - 1)
        insert_at_tail(head, tail, val);
    else
        insert_at_position(head, pos, val);
    Print_Normal(head);
    return 0;
}