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
void print_recusive(Node *head);
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
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }
    int ans = find_max(head);
    cout<<find_max(head)-find_min(head)<<endl;
    return 0;
}