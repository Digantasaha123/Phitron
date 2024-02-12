#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> adj[N];
vector<bool> vis(N, false);
vector<bool> pathVisit(N,false);
bool ans= false;
void dfs(int src)
{
    vis[src] = true;
    pathVisit[src] = true;
    for(int child : adj[src])
    {
        if(pathVisit[child])
        {
            ans = true;
        }
        if(!vis[child])
        dfs(child);
    }
    pathVisit[src] = false;

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
    }
    for(int i=0; i<n; i++)
    {
        if(!vis[i])
        dfs(i);
    }
    if(ans) cout<<"Cycle detected"<<endl;
    else cout<<"Cycle not detected"<<endl;
    return 0;
}