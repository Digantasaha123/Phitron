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
    myStack st2;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        st2.push(x);
    }
    bool flag = true;
    if (n != t)
    {
        flag =  false;
    }
    else
    {
        while (!st.empty() && !st2.empty())
        {
            if (st.top() != st2.top())
            {
                flag = false;
                break;
            }
            st.pop();
            st2.pop();
                
        }
    }

    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}