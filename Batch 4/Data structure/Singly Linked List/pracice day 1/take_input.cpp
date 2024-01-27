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

int main()
{
    Node *head = NULL;
    int count = 0;
    int val;

    while (1)
    {

        cin >> val;
        if(val==-1) break;
        insert_at_tail(head, val);
        count++;
        
    }
    cout << count << endl;
    return 0;
}