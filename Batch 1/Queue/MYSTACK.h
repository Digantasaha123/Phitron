#include <bits/stdc++.h>
using namespace std;

template <typename N>
class Node
{
public:
    N value;
    Node *next;
    Node *prev;
    Node(N val)
    {
        value = val;
        next = NULL;
        prev = NULL;
    }
};
template <typename S> class Stack
{

    Node<S> *head;
    Node<S> *top;
    int count = 0;

public:
    Stack()
    {
        head = NULL;
        top = NULL;
    }
    // Push operation
    void push(S val)
    {
        Node<S> *newNode = new Node<S>(val);
        if (head == NULL)
        {
            head = top = newNode;
            count++;
            return;
        }
        top->next = newNode;
        newNode->prev = top;
        top = newNode;
        count++;
    }
    // pop operation
    S pop()
    {
        Node<S> *delNode = top;
        S check;
        // empty Stack
        if (head == NULL)
        {
            cout << "Stack underflow" << endl;
          
        }

        // Stack with only one element
        if (head == top)
        {
            top = head = NULL;
        }

        // The Stack has more than one element
        else
        {
            top = delNode->prev;
            top->next = NULL;
        }

        check = delNode->value;
        delete delNode;
        count--;
        return check;
    }
    // Empty
    bool empty()
    {
        if (head == NULL)
            return true;
        else
            return false;
    }
    // Top operation
    S Top()
    {
        S chk;
        if (head == NULL)
        {
            cout << "Stack underflow | There is no value in the Stack";

        }
        else
        {
            chk = top->value;
        }
        return chk;
    }
    // Size
    int size()
    {
        return count;
    }
};
