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
void insert_at_tail(Node *&head, int val);
void print_linked_list(Node *head);
int count_Nodes(Node *head);
void print_Mid(Node *head);
void print_recusive_reverse(Node *head);
void print_recusive(Node *head);
void sort_ascending(Node *&head);
void sort_decending(Node *&head);
void insert_at_tail(Node *&head, Node *&tail, int val);
int find_max(Node *&head);
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
    tail = newNode;
}
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
        temp = temp->next;
    }
    cout << endl;
}
void insert_at_position(Node *&head, int pos, int val)
{
    Node *newNode = new Node(val);
    if (pos == 0)
    {
        newNode->next = head;
        head = newNode;
        print_linked_list(head);
        return;
    }
    if (pos > count_Nodes(head))
    {
        cout << "Invalid" << endl;
        return;
    }
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    print_linked_list(head);
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
    else
    {
        while (i < (count / 2) - 1)
        {
            temp = temp->next;
            i++;
        }
        cout << temp->data << " " << temp->next->data << endl;
    }
}
void print_recusive_reverse(Node *head)
{
    if (head == NULL)
        return;
    print_recusive_reverse(head->next);
    cout << head->data << " ";
}
void print_recusive(Node *head)
{
    if (head == NULL)
        return;

    cout << head->data << " ";
    print_recusive(head->next);
}
void sort_ascending(Node *&head)
{
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->data > j->data)
                swap(i->data, j->data);
        }
    }
}
void sort_decending(Node *&head)
{
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->data < j->data)
                swap(i->data, j->data);
        }
    }
}
int find_max(Node *&head)
{

    int ans = 0;
    for (Node *i = head; i!= NULL; i = i->next)
    {

        if (i->data > ans)
            ans = i->data;
    }
    return ans;
}
int find_min(Node *&head)
{

    int ans = INT_MAX;
    for (Node *i = head; i!= NULL; i = i->next)
    {

        if (i->data < ans)
            ans = i->data;
    }
    return ans;
}
