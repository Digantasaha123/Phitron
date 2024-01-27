#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int> s;
    while(n--)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    // reverse(s.begin(), s.end()); not possible
    // but vector e push kore reverse kora jabe
    for(auto it = s.begin(); it!=s.end(); it++)
    {
        cout<<*it<<endl;
    }
    return 0;
}