#include<bits/stdc++.h>
using namespace std;
const int N = 100;
vector<pair<int,int>> adj[N];
vector<int>  dis(N, INT_MAX);
void dijkastra(int src)
{
    queue<pair<int,int>> q;
    q.push({src,0});
    dis[src] = 0;
    while(!q.empty())
    {
        pair<int,int> par = q.front();
        q.pop();
        int node = par.first;
        int cost = par.second;
        for(pair<int,int>  child : adj[node])
        {
            int childNode = child.first;
            int childCost = child.second;
            if(cost+childCost<dis[childNode])
            {
                dis[childNode] = cost + childCost;
                q.push({childNode,dis[childNode]});
            } 
        }
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        adj[a].push_back({b,c});
        adj[b].push_back({a,c});
    }
    
    dijkastra(0);

    for(int i =0; i<n; i++)
    {
        cout<<i<<" -> "<<dis[i]<<endl;
    }
        return 0;
}