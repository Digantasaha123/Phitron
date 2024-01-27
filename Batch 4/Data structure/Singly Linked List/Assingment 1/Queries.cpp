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

void insert_at_head(Node *&head,  int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
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
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void delete_at_position(Node *&head, int pos)
{

    if (head == NULL)
    {
        return;
    }
    if (pos == 0)
    {
        Node *delNode = head;
        head = head->next;
        delete delNode;
        return;
    }
    if (pos > count_Nodes(head) - 1)
        return;

    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        // if (temp->next == NULL)
        // {
        //     return;
        // }
        temp = temp->next;
    }

    Node *delNode = temp->next;
    temp->next = temp->next->next;
    delete delNode;
}

int main()
{
    Node *head = NULL;
    int t;
    cin >> t;
    while (t--)
    {

        int choice, val;
        cin >> choice >> val;
        if (choice == 0)
        {
            insert_at_head(head, val);
            print_linked_list(head);
        }
        else if (choice == 1)
        {
            insert_at_tail(head,  val);
            print_linked_list(head);
        }
        else if (choice == 2)
        {
            delete_at_position(head, val);
            print_linked_list(head);
        }
    }
    return 0;
}