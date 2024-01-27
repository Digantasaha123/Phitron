#include <bits/stdc++.h>
#include "linked_list.h"
using namespace std;

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head,tail, val);
    }
   print_recusive_reverse(head);
    return 0;
}