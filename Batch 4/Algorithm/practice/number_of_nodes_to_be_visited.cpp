#include<bits/stdc++.h>
using namespace std;
const int N = 1e4;
bool vis[N];
vector<int> adj[10005];
int c = 0;
void dfs(int src)
{   
    vis[src] = true;
    for(int child : adj[src])
    {
        if(!vis[child])
        {
            c++;
            dfs(child);
        }
    }

}
int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a ,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int src;
    cin>>src;
    dfs(src);
    cout<<c+1<<endl;
    return 0;
}