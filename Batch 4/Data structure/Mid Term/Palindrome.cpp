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
void check_palindrome(Node *&head, Node *&tail)
{
    Node *i = head;
    Node *j = tail;
    bool flag = true;
    while (i != j && i != j)
    {
        if (i->data != j->data)
        {
            flag = false;
            break;
        }
        i = i->next;
        j = j->prev;
    }
    if (flag == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
            insert_at_tail(head, tail , val);
    }
    check_palindrome(head,tail);
    return 0;
}