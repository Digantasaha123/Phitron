#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<pair<long long, long long >> adj[N];
vector<bool> vis(N, false);
vector<int> dis(N, x);
class cmp
{
public:
    bool operator()(pair<long long, long long> a, pair<long long, long long> b)
    {
        return a.second > b.second;
    }
};
void dijkstra(int src)
{
    priority_queue<pair<long long , long long >, vector<pair<long long , long long >>, cmp> pq;
    pq.push({src,0});
    dis[src] = 0;
    while(!pq.empty())
    {
        pair<long long int,long long int> par = pq.top();
        pq.pop();
        long long node = par.first;
        long long cost = par.second;
        for(auto  child : adj[node])
        {
            long long childNode = child.first;
            long long  childCost = child.second;
            if(dis[childNode] > cost + childCost)
            {
                dis[childNode] = cost + childCost;
                pq.push({childNode,dis[childNode]});
            }
        }
    }
}
int main()
{
    long long int n, e;
    cin >> n >> e;
    while (e--)
    {
        long long  a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
    }
    long long  src;
    cin >> src;
    dijkstra(src);
    long long int t;
    cin>>t;
    while(t--)
    {
        long long  a,b;
        cin>>a>>b;
        if(dis[a]<=b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}