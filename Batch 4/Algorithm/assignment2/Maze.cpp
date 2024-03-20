#include <bits/stdc++.h>
using namespace std;
const int N = 20;
char a[N][N];
bool vis[N][N];
int dis[N][N];
int n, m;
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
map<pair<int, int>, pair<int, int>> parent;
bool valid(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < m && a[i][j] != '#';
}
void bfs(int si, int sj, int di, int dj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    parent[{si, sj}] = {-1, -1};
    while (!q.empty())
    {
        auto par = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ci = par.first + d[i].first;
            int cj = par.second + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                parent[{ci, cj}] = par;
            }
        }
    }
}
int main()
{
    int si, sj, di, dj;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 'R')
            {
                si = i;
                sj = j;
            }
            else if (a[i][j] == 'D')
            {
                di = i;
                dj = j;
            }
        }
    }
    bfs(si, sj, di, dj);
    if (vis[di][dj])
    {
        pair<int, int> x = {di, dj};
        if (parent[{di, dj}] != make_pair(-1, -1))
        {
            while (x != make_pair(-1, -1))
            {
                if (x == make_pair(si, sj))
                    break;
                a[x.first][x.second] = 'X';
                x = parent[x];
            }
            a[si][sj] = 'R';
            a[di][dj] = 'D';
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }

    return 0;
}