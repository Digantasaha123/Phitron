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
const int N = 1e5+5;
int dis[N];
int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> Edgelist;
    while (e--)
    {
        int u, v, c;
        cin >> u >> v >> c;
        //ekta edge banaya push kortesi
        Edgelist.push_back(Edge(u, v, c));
    }
    // for(Edge ed : Edgelist)
    // {
    //     cout<<ed.u<<" "<<ed.v<<" "<<ed.c<<endl;
    // }
    for(int i =0; i<n; i++)
    {
        dis[i] = INT_MAX;
    }
    dis[0] = 0;
    for(int i=0; i<n; i++)
    {
        for(Edge ed : Edgelist)
    {
        int u,v,c;
         u = ed.u;
         v = ed.v;
         c = ed.c;
         if(dis[u]<INT_MAX && dis[u] + c < dis[v])
         {
                dis[v] = dis[u] + c;
         }
    }
    }
    for(int i=0; i<n; i++)
    cout<<i<<" -> "<<dis[i]<<endl;
    //   for(Edge ed : Edgelist)
    // {
    //     cout<<ed.u<<" "<<ed.v<<" "<<dis[ed.v]<<endl;
    // }
    return 0;
}