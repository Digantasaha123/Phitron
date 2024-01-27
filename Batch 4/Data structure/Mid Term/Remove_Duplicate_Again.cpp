#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1) break;
        myList.push_back(val);
    }
    myList.sort();
    myList.unique();
    for(auto i=myList.begin(); i!=myList.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    return 0;
}