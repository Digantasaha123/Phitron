#include<bits/stdc++.h>
using namespace std;
int main()
{
    list <int> mylist(10,5);
    // cout<<mylist.size()<<endl;
    // cout<<*mylist.begin()<<endl;
    for(auto it = mylist.begin(); it!=mylist.end(); it++)
    {
        cout<<*it<<" ";
    }

    return 0;
}