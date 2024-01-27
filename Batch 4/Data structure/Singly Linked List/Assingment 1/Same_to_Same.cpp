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
int count_Nodes(Node *head);
void insert_at_tail(Node *&head, Node *&tail, int val);

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
int count_Nodes(Node *head)
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
void are_they_same(Node *head1, Node *head2)
{
    if (count_Nodes(head1) != count_Nodes(head2))
    {
        cout << "NO" << endl;
        return;
    }
    Node *first = head1;
    Node *second = head2;
    int flag = 0;
    while (first != NULL)
    {
        if (first->data != second->data)
            flag = 1;
        first = first->next;
        second = second->next;
    }

    if (flag == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head1, tail1, val);
    }
    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head2, tail2, val);
    }
    are_they_same(head1, head2);
    return 0;
}