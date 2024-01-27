

#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;

    Node(int val)
    {
        value = val;
        next = NULL;
    }
};
Node *reverseRecursive_kth(Node *&head, int pos)
{
    int count = 1;
    if (head == NULL || head->next == NULL || count == pos)
    {
        return head;
    }
    Node *newHead = reverseRecursive_kth(head->next, pos);
    head->next->next= head;
    head ->next = NULL;
    count++;
}

int findMid(Node *&head)
{

    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow->value;
}

void InsertTail(Node *&head, int val)
{
    Node *temp = head;
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        // if (temp->value % 2 == 0)
        // {
        //     cout << "-1";
        // }
        // else
        // {
        cout << temp->value;
        // }
        if (temp->next != NULL)
        {
            cout << "->";
        }
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    int t;
    cin >> t;
    int x = t;
    while (t--)
    {
        int val;
        cin >> val;
        InsertTail(head, val);
    }

    display(head);
    cout << endl
         << "value of the mid node ->>" << findMid(head)<<endl;

         int pos;
         cout<<"Enter the position ";
         cin>>pos;
         reverseRecursive_kth(head, pos);
         display(head);
    return 0;
}