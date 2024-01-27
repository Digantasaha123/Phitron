#include <bits/stdc++.h>
using namespace std;
template <typename N>
class NodeQueue
{
public:
    N value;
    NodeQueue *next;

public:
    NodeQueue(N val)
    {
        value = val;
        next = NULL;
    }
};
template <typename Q>
class Queue
{
public:
    NodeQueue<Q> *front;
    NodeQueue<Q> *rear;

public:
    Queue()
    {
        front = NULL;
        rear = NULL;
    }

    // Enqueue------> push()
    void push(Q val)
    {
        NodeQueue<Q> *newNode = new NodeQueue<Q>(val);
        if (front == NULL)
        {
            front = newNode;
            rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = rear->next;
    }
    // Dequeue------> pop()
    Q pop()
    {
        Q chk ;
        if (rear == NULL)
        {
            cout << "Queue underflow || There is no value in the Queue" << endl;
            return chk;
        }
        NodeQueue<Q> *delNode;

        delNode = front;
        chk = front->value;
        front = front->next;
        if (front == NULL)
            rear = NULL;
        delete delNode;
        return chk;
    }
    // peek   ------> front() back()
    Q Front()
    {
        Q chk;
        chk = front->value;
        return chk;
    }

    Q Back()
    {
        Q chk = rear->value;
        return chk;
    }
    // empty  ------> empty()
    bool empty()
    {
        if (front == NULL && rear == NULL)
            return true;
        else
            return false;
    }
};