#include <bits/stdc++.h>
using namespace std;
// adjacency list(array that has a vector in each index)
vector<int> v[1005];
// array to keep track of the visited nodes
bool vis[1005];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    int l = 1;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        cout << par;
        while(l--) cout<<"->";
        cout<<" ";
        for (int child : v[par])
        {
            // cout << child << endl;
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
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

    // source to start traversing
    int src;
    cin >> src;
    memset(vis, false, sizeof(vis));
    bfs(src);
    return 0;
}