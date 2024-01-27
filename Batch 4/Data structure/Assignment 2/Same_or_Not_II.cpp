#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
    }
    void pop()
    {
        if (sz <= 0)
            return;
        sz--;
        Node *delNode = head;
        head = head->next;
        delete delNode;
        if (head == NULL)
        {
            tail = NULL;
        }
        else head->prev = NULL;
    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};
class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            sz++;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
        sz++;
    }
    void pop()
    {
        Node *delNode = tail;
        tail = tail->prev;
        if (tail == NULL)
        {
            head = NULL;
        }
        else
            tail->next = NULL;

        delete delNode;
        sz--;
    }
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myStack st;
    myQueue q;
    int flag = 0;
    int a, b;
    cin >> a >> b;
    if (a != b)
    {
        cout << "NO" << endl;
    }
    else
    {
       for(int i=0; i<a; i++)
        {
            int x;
            cin >> x;
            st.push(x);
        }

       for(int i=0; i<b; i++)
        {
            int x;
            cin >> x;
            q.push(x);
        }

        for(int i=0; i<a; i++)
        {
            if(st.top()!=q.front())
            {
                flag = 1;
                break;
            }
            st.pop();
            q.pop();
        }

        if(flag == 0) cout<<"YES"<<endl;
        else cout << "NO" << endl;
    }

    return 0;
}