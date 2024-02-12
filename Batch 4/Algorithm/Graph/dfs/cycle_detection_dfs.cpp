#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> adj[N];
bool vis[N];
int parent[N];
bool ans;
void dfs(int par)
{
    vis[par] = true;
    // cout<<src<<endl;

    for(int child : adj[par])
    {   
        if(vis[child] && parent[par]!=child) ans = true;
        if(!vis[child])
        {
             dfs(child);
             parent[child] = par;
        }
       
    }

}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));
    ans = false;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
            dfs(i);
    }
    if(ans) cout<<"Cycle detected"<<endl;
    else cout<<"Cycle Not detected"<<endl;
    return 0;
}