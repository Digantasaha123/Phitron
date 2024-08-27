#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    int a,b,c;
    while(t--)
    {
        cin>>a>>b>>c;
       int  max_val = max(max(a,b), c);
        if (max_val <= (a+b+c - max_val))
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}