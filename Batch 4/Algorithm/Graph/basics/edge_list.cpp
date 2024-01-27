#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin>>n>>e;
    vector<pair<int , int>> v;
    for(int i=0; i<e; i++)
    {
        int a,b;
        cin>>a>>b;
        // v.push_back(make_pair(a,b));
        v.push_back({a,b});
    }
    sort(v.begin(),v.end());
    for(pair<int,int> x : v)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}