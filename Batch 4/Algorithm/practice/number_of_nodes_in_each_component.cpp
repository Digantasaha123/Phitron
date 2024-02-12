#include <bits/stdc++.h>
using namespace std;
const int N = 1e4;
bool vis[N];
vector<int> res;
vector<int> adj[10005];
int temp = 0;
int c = 0;
void dfs(int src)
{
    vis[src] = true;
    temp++;
    for (int child : adj[src])
    {
        if (!vis[child])
        {
            dfs(child);
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
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
            res.push_back(temp);
            temp = 0;
        }
    }
    sort(res.begin(), res.end());
    for (int x : res)
        cout << x << " ";
    return 0;
}