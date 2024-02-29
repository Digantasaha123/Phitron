#include <bits\stdc++.h>
using namespace std;
const int N = 100;
vector<pair<int, int>> adj[N];
int dis[N];
bool visited[N];

void dijkstra(int s){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, s});
    dis[s] = 0;
    while (!pq.empty())
    {
        int par = pq.top().second;
        pq.pop();
        visited[par] = true;
        for (auto p : adj[par])
        {
            int v = p.first;
            int w = p.second;
            if (!visited[v] && dis[par] + w < dis[v])
            {
                dis[v] = dis[par] + w;
                pq.push({dis[v], v});
            }
        }
    }
}

int main()
{
    int n, s, f;
    cin >> n >> s >> f;
    s--;
    f--;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int w;
            cin >> w;
            if (w != -1)
            {
                adj[i].push_back({j, w});
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }
    dijkstra(s);
    if (dis[f] == INT_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << dis[f] << endl;
    }
    return 0;
}
