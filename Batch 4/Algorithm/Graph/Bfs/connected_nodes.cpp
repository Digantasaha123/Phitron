#include<bits/stdc++.h>
using namespace std;
vector<int> v[1005];
vector<bool> vis(1005,false);
void bfs(int src)
{   
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while(!q.empty())
    {
        int par = q.front();
        q.pop();
        for(int child : v[par])
        {
            if(!vis[child])
            {
                vis[child] = true;
                q.push(child);
            }
        }
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
        v[a].push_back(b);
        v[b].push_back(a);
    }
    bfs(0);
    int x;
    cin>>x;
    int ans = 0;
    for(int c : v[x])
    {
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}