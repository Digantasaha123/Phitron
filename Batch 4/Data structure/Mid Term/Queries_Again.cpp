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
        this->prev = NULL;
        this->next = NULL;
    }
};
int count_Node(Node *head)
{
    int c = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        c++;
        temp = temp->next;
    }
    return c;
}
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void insert_at_position(Node *&head, Node *&tail, int pos, int val)
{
    Node *temp = head;
    Node *newNode = new Node(val);
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        cout << "Invalid" << endl;
        return;
    }

    newNode->next = temp->next;
    newNode->prev = temp;
    if (temp->next != NULL)
    {
        temp->next->prev = newNode;
    }
    temp->next = newNode;
}

void print_normal(Node *head)
{
    cout << "L -> ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void print_reverse(Node *tail)
{
    cout << "R -> ";
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int t;
    cin >> t;
    while (t--)
    {
        int pos, val;
        cin >> pos >> val;
        if (pos == 0)
        {
            insert_at_head(head, tail, val);
            print_normal(head);
            print_reverse(tail);
        }
        else if (pos < 0 || pos > count_Node(head))
        {
            cout << "Invalid" << endl;
        }
            
        else if (pos == count_Node(head))
        {
            insert_at_tail(head, tail, val);
            print_normal(head);
            print_reverse(tail);
        }
        else
        {
            insert_at_position(head, tail, pos, val);
            print_normal(head);
            print_reverse(tail);
        }
    }

    return 0;
}