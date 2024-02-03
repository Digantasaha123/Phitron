#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> v[N];
vector<int> vis(N, false);
void dfs(int src)
{
    vis[src] = true;
    cout << src << endl;
    for (int child : v[src])
    {
        if (!vis[child])
            dfs(child);
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int c(0);
   
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {

            dfs(i);
            c++;
        }
    }
    cout << "components ---> " << c << endl;
    return 0;
}