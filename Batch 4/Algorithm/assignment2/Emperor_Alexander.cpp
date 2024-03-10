#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int par[N];
int group_size[N];
void dsu_initialize(int n)
{
    for (int i = 1; i <= n; i++)
    {
        par[i] = -1;
        group_size[i] = 1;
    }
}
int dsu_find(int node)
{
    if (par[node] == -1)
        return node;
    return par[node] = dsu_find(par[node]);
}
void dsu_union(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    par[leaderA] = leaderB;
}
void dsu_union_by_size(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if (group_size[leaderA] > group_size[leaderB])
    {
        par[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    }
    else
    {
        par[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
}
class Edge
{
public:
    long long u, v, w;
    Edge(long long u, long long v, long long w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};
bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}
int main()
{
    int n, e;
    cin >> n >> e;long long
    int y = e;
    dsu_initialize(n);
    vector<Edge> edgelist;
    while (e--)
    {
        long long u, v, w;
        cin >> u >> v >> w;
        edgelist.push_back(Edge(u, v, w));
    }
    sort(edgelist.begin(), edgelist.end(), cmp);
    long long totalCost = 0,x = 0;
    for (auto ed : edgelist)
    {
        int leaderU = dsu_find(ed.u);
        int leaderV = dsu_find(ed.v);
        if (leaderU == leaderV)
            continue;
        else
        {
            dsu_union_by_size(ed.u, ed.v);
            totalCost += ed.w;
            x++;
        }
    }
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (par[i] == -1)
            count++;
    }

    if (count > 1) {
        cout << "Not Possible" << endl;
    } else {
        cout <<  y - x << " " << totalCost << endl;
    }


    return 0;
}