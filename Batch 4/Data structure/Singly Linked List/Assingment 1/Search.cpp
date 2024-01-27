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
void searchNode(Node *head, int searchValue);
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
void searchNode(Node *head, int searchValue)
{
    if (head == NULL)
    {
        cout << -1 << endl;
        return;
    }
    int count = 0;
    Node *temp = head;
    while (temp->data != searchValue)
    {
        if (temp->next == NULL)
        {
            cout << -1 << endl;
            return;
        }
        temp = temp->next;
        count++;
    }

    cout << count << endl;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
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
        int searchValue;
        cin >> searchValue;
        searchNode(head, searchValue);
    }
    return 0;
}
