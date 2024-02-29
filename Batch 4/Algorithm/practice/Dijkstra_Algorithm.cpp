#include <bits/stdc++.h>
using namespace std;
const int N = 100;
vector<pair<int, int>> adj[N];
vector<int> dis(N, INT_MAX);
class cmp
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        return a.second > b.second;
    }
};

void dijkstra(int src)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
    pq.push({src, 0});
    dis[src] = 0;
    while (!pq.empty())
    {
        pair<int, int> par = pq.top();
        pq.pop();
        int node = par.first;
        int cost = par.second;
        for (auto child : adj[node])
        {
            int childNode = child.first;
            int childcost = child.second;
            if(cost + childcost<dis[childNode] )
            {
                dis[childNode] = cost + childcost;
                 pq.push({childNode, dis[childNode]});
            }
           
        }
    }
}
int main()
{
    int n, s, f;
    std ::cin >> n >> s >> f;
    s--;
    f--;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int w;
            std ::cin >> w;
            if (w != -1)
            {
                adj[i].push_back({j, w});
            }
        }
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