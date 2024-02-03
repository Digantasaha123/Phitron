#include <bits/stdc++.h>
using namespace std;
char a[20][20];
bool vis[20][20];
int dis[20][20];
int n, m;
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}
void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        for(int i=0; i<4; i++)
        {
            int ci = par.first + d[i].first;
            int cj = par.second + d[i].second;
            if(valid(ci,cj) && !vis[ci][cj])
            {
                q.push({ci,cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[par.first][par.second]+1;
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));
    int si, sj;
    cin >> si >> sj;
    bfs(si, sj);
    cout<<dis[0][3];
    return 0;
}