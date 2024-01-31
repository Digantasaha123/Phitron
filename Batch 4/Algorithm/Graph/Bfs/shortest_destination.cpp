#include <bits/stdc++.h>
using namespace std;

vector<int> v[1005];
bool vis[1005];
vector<int> res;
int parent[1005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
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
                parent[child] = par;
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
    int t;
    cin >> t;
    while (t--)
    {
        int src, des;
        cin >> src >> des;
        memset(vis, false, sizeof(vis));
        memset(parent, -1, sizeof(parent));
        bfs(src);
        int c = 0;
        int x = des;
        if (!vis[des])
            cout << -1 << endl;
        else
        {
            while (x != -1)
            {

                x = parent[x];
                c++;
            }
            if (c != -1)
                cout << c - 1 << endl;
        }
    }
    return 0;
}
