//  Take a singly linked list as input and check if the linked list contains any duplicate value. You can assume that the maximum value will be 100.
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
int freq[101] = {0};
void insert_at_tail(Node *&head, int val)
{

    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    freq[val]++;
}
int main()
{
    int val;
    Node *head = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, val);
    }
    int dup = 0;
    for (int i = 0; i <= 100; i++)
    {
        if (freq[i] > 1)
        {
            dup = 1;
            break;
        }
    }
    if (dup == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}