#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string data;
    Node *next;
    Node *prev;
    Node(string val)
    {
        this->data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, string val)
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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    string s;
    while (true)
    {
        cin >> s;
        if (s == "end")
            break;
        insert_at_tail(head, tail, s);
    }

    int t;
    cin >> t;
    Node *temp = head;
    Node *curr = head;
    while (t--)
    {
        string choice;
        cin >> choice;

        if (choice == "visit")
        {
            temp = head;
            string val;
            cin >> val;
            int flag = 0;
            while (temp != NULL)
            {

                if (temp->data == val)
                {
                    curr = temp;
                    flag = 1;
                    break;
                }
                temp = temp->next;
            }
            if (flag == 0)
            {
                temp = head;
                cout << "Not Available" << endl;
            }
            else
                cout << temp->data << endl;
        }
        else if (choice == "prev")
        {
            if (curr->prev != NULL)
            {
                curr = curr->prev;
                cout << curr->data << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (choice == "next")
        {
            if (curr->next != NULL)
            {
                curr = curr->next;
                cout << curr->data << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }
    return 0;
}
