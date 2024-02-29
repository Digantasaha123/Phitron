#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<pair<int,int>> adj[N];
vector<bool> vis(N,false);
int main()
{
    int n, e;
   cin >> n >> e;
   while(e--)
   {
    int a,b,c;
    cin>>a>>b>>c;
    adj[a].push_back({b, c});
    
   }

    return 0;
}