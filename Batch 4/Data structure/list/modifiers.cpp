#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist={10,20,30};
    mylist.insert(next(mylist.begin(),2),69);
    for(int val : mylist)
    {
        cout<<val<<" ";
    }
    return 0;
}