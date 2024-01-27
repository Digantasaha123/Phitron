#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin>>n>>e;
    vector<int> mat[n];
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        mat[a].push_back(b);
        // graph directed holey [b][a] line ta thakbe na
        mat[b].push_back(a);
    }
    // for(int i=0; i<mat[3].size(); i++)
    // {
    //     cout<<mat[3][i]<<" ";
    // }

    for(int i =0; i<n; i++)
    {
        cout<<i<<"-->";
        for(int x : mat[i]) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}