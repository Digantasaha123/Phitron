#include <bits/stdc++.h>
using namespace std;
int n, e;
const int N = 2 * (1e5 + 5);
vector<int> adj[N];
vector<bool> vis(N, false);
vector<int> parent(N, -1);
void bfs(int src)
{
    vis[src] = true;
    queue<int> q;
    q.push(src);
    while (!q.empty())
    {
        int par = q.front();
        vis[par] = true;
        q.pop();
        for (int child : adj[par])
        {
            
            if (!vis[child])
            {
                vis[child] = true;
                q.push(child);
                parent[child] = par;
            }
        }
    }
}
int main()
{

    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    bfs(1);
    if (!vis[n])
        cout << "IMPOSSIBLE" << endl;
    else
    {
        vector<int> path;
        for (auto i = n; i != -1; i = parent[i])
            path.push_back(i);
        reverse(path.begin(), path.end());
        cout << path.size() << endl;
        for(int v : path) {
            cout << v << ' '; 
        }
    }
    return 0;
}