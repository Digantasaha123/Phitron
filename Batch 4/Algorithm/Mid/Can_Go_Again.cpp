#include <bits/stdc++.h>
using namespace std;
class Edge
{
public:
    long long u, v, c;
    Edge(long long u, long long v, long long c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};
const int N = 1e5 + 5;
long long dis[N];
bool cycle = false;
int main()
{
    long long n, e;
    cin >> n >> e;
    vector<Edge> Edgelist;
    for (int i = 0; i <= n; i++)
    {
        dis[i] = 1e18;
    }
    while (e--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        Edgelist.push_back(Edge(a, b, c));
    }
    long long src;
    cin >> src;
    dis[src] = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        for (auto ed : Edgelist)
        {
            long long u, v, c;
            u = ed.u;
            v = ed.v;
            c = ed.c;

            if (dis[u] < 1e18 && dis[u] + c < dis[v])
                dis[v] = dis[u] + c;
        }
    }
    for (auto ed : Edgelist)
    {
        long long u, v, c;
        u = ed.u;
        v = ed.v;
        c = ed.c;

        if (dis[u] < 1e18 && dis[u] + c < dis[v])

        {
            cycle = true;
            break;
        }
    }
    long long des, t;
    cin >> t;
    if (cycle)
    {
        cout << "Negative Cycle Detected" << endl;
    }
    else
    {
        while (t--)
        {
            cin >> des;
            if (dis[des] == 1e18)
                cout << "Not Possible" << endl;
            else
                cout << dis[des] << endl;
        }
    }

    return 0;
}