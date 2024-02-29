#include <bits/stdc++.h>
using namespace std;
class Edge
{
public:
    int u, v, c;
    Edge(int u, int v, int c)
    {
        this->c = c;
        this->v = v;
        this->u = u;
    }
};
const int N = 1e5 + 5;
int dis[N];
bool cycle = false;
vector<Edge> Edgelist;
int main()
{
    int n, e;
    cin >> n >> e;
    for (int i = 0; i < n; i++)
    {
        int u, v, c;
        cin >> u >> v >> c;
        Edgelist.push_back(Edge(u, v, c));
        //FOR UNDIRECTED GRAPHS
         Edgelist.push_back(Edge(v, u, c));
    }
    for (int i = 0; i < n; i++)
        dis[i] = INT_MAX;

    dis[0] = 0;
    for (int i = 0; i < n; i++)
    {
        for (Edge ed : Edgelist)
        {
            if (dis[ed.u] < INT_MAX && dis[ed.u] + ed.c < dis[ed.v])
                dis[ed.v] = dis[ed.u] + ed.c;
        }
    }

    for (auto ed : Edgelist)
    {
        if (dis[ed.u] < INT_MAX && dis[ed.u] + ed.c < dis[ed.v])
         {
              cycle = true;
              break;
         } 
    }

    if (cycle)
    {
        cout << " Cycle Detected, No Valid answer found" << endl;
    }
        
    else
    {
        for (int i = 0; i < n; i++)
            cout << i << " -> " << dis[i] << endl;
    }

    return 0;
}