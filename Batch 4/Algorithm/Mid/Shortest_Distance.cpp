#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n, e;
    cin >> n >> e;
    ll adj[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            adj[i][j] = 1e18;
            if (i == j)
                adj[i][j] = 0;
        }
    }
    while (e--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        a--;
        b--;
        adj[a][b] = min(adj[a][b], c);
    }
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (adj[i][j] > adj[i][k] + adj[k][j])
                    adj[i][j] = adj[i][k] + adj[k][j];
            }
        }
    }
    ll q,x,y;
    cin>>q;
    while(q--)
    {
        cin>>x>>y;
        x--;
        y--;
        if(adj[x][y]>=1e18) cout<<-1<<endl;
        else cout<<adj[x][y]<<endl;
    }
    return 0;
}