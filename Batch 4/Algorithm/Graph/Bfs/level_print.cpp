#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
int level[1005];
bool vis[1005];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for (int child : v[par])
        {
            if (!vis[child])
            {
                vis[child] = true;
                q.push(child);
                level[child] = level[par] + 1;
            }
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
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    bfs(0);
    int x;
    cin >> x;
    for (int i = n; i >= 0; i--)
    {
        if (level[i] == x)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}