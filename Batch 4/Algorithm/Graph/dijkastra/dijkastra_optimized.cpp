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
void dijkastra(int src)
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
        for (pair<int, int> child : adj[node])
        {
            int childNode = child.first;
            int childCost = child.second;
            if (cost + childCost < dis[childNode])
            {
                dis[childNode] = cost + childCost;
                pq.push({childNode, dis[childNode]});
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
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
    }
    dijkastra(0);
    for (int i = 0; i < n; i++)
        cout << i << " -> " << dis[i] << endl;
    return 0;
}