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
void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
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
void reverse(Node *&head, Node *&tail)
{
    Node *i = head;
    Node *j = tail;
    while (i != j && i->prev != j)
    {
        swap(i->data, j->data);
        i = i->next;
        j = j->prev;
    }
    swap(i->data, j->data);
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
void compare(Node *first, Node *second)
{
    if (count_Node(first) != count_Node(second))
    {
        cout << "NO" << endl;
        return;
    }
    while (first != NULL)
    {
        if (first->data != second->data)
        {
            cout << "NO" << endl;
            return;
        }
        first = first->next;
        second = second->next;
    }
    cout << "YES" << endl;
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
void insert_at_position(Node *&head, Node *&tail, int pos, int val)
{
    if (pos < 0 || pos > count_Node(head))
    {
        cout << "Invalid" << endl;
        return;
    }

    if (pos == 0)
    {
        insert_at_head(head, tail, val);
    }
    else if (pos == count_Node(head))
    {
        insert_at_tail(head, tail, val);
    }
    else
    {
        Node *temp = head;
        Node *newNode = new Node(val);

        for (int i = 1; i <= pos; i++)
        {
            temp = temp->next;
        }

        newNode->next = temp;
        newNode->prev = temp->prev;
        temp->prev->next = newNode;
        temp->prev = newNode;
    }

    printList(head);
    print_Reverse(tail);
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
        insert_at_tail(head, tail, val);
    }
    printList(head);
    sort_ascending(head);
    printList(head);
    sort_decending(head);
    printList(head);
    // Node *head2 = NULL;
    // Node *tail2 = NULL;
    // int val2;
    // while (true)
    // {
    //     cin >> val2;
    //     if (val2 == -1)
    //         break;
    //     insert_at_tail(head2, tail2, val2);
    // }
    // compare(head,head2);
    // check_palindrome(head,tail);

    // Node *head = NULL;
    // Node *tail = NULL;
    // int q;
    // cin >> q;
    // while (q--)
    // {
    //     int pos, val;
    //     cin >> pos >> val;
    //     insert_at_position(head, tail, pos, val);
    // }
    return 0;
}