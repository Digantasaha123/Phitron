#include<bits/stdc++.h>
#include "linked_list.h"
using namespace std;
int main()
{   Node *first = NULL, *second = NULL;
    int val1;
    while(true)
    {
        cin>>val1;
        if(val1==-1) break;
        insert_at_tail(first,val1);
    }
    int count1 = count_Nodes(first);
    int val2;
    while(true)
    {
        cin>>val2;
        if(val2==-1) break;
        insert_at_tail(second,val2);
    }
    int count2 = count_Nodes(second);
    if(count1==count2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl; 
    return 0;
}