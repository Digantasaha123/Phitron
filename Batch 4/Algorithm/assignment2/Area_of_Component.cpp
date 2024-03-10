// complexity = o(n*m)
#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
char a[N][N];
bool vis[N][N];
int n, m;
int counter;
int ans = INT_MAX;
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}
void dfs(int si, int sj)
{
    vis[si][sj] = true;
    counter++;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) && !vis[ci][cj] && a[ci][cj]=='.')
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
   for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!vis[i][j] && a[i][j] == '.') {
                counter = 0;
                dfs(i, j);
                ans = min(ans, counter);
            }
        }
    }

    if(ans==INT_MAX) cout<<-1<<endl;
    else cout<<ans<<endl;
    return 0;
}