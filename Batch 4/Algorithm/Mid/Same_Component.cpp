// complexity = o(n*m)
#include <bits/stdc++.h>
using namespace std;
const int N = 1001;
char a[N][N];
bool vis[N][N];
int n, m;
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m || a[i][j] == '-')
        return false;
    return true;
}


void dfs(int si, int sj)
{
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) && !vis[ci][cj])
        {
            dfs(ci, cj);
        }
    }
}
int main()
{

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }
  
    int si, sj;
    cin >> si >> sj;
    memset(vis, false, sizeof(vis));
    dfs(si, sj);
    int di,dj;
    cin>>di>>dj;
    if(vis[di][dj]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}