#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int par[N];
int ans = 0;
int group_size[N];
void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
          par[i] = -1;
          group_size[i] = 1;
          level[i] = 0;
    }
}
int dsu_find(int node)
{
    if (par[node] == -1)
        return node;
    return par[node] = dsu_find(par[node]);
}
void dsu_union_by_size(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if(leaderA==leaderB) 
    {
        ans++;
        return;
    }
    if(group_size[leaderA]>group_size[leaderB])
    {
        par[leaderB] = leaderA;
        group_size[leaderA]+= group_size[leaderB];
    }
    else 
    {
        par[leaderA] = leaderB;
        group_size[leaderB]+= group_size[leaderA];
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    dsu_initialize(n);
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        dsu_union_by_size(a,b);
        
    }
    cout<<ans<<endl;
    return 0;
}