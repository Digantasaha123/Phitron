#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> adj[N];
vector<int> vis(N, false);
void dfs(int src)
{
    vis[src] = true;
    cout<<src<<endl;
    for(int child : adj[src])
    {
        if(!vis[child])
        dfs(child);
    }

}
int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(0);
    return 0;
}