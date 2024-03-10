#include <bits/stdc++.h>
using namespace std;
const int N = 1000;
char a[N][N];
bool vis[N][N];
int n, m;
pair<int, int> parent[N][N];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool valid(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < m && a[i][j] != '#' && !vis[i][j];
}
void bfs(int i, int j)
{
    queue<pair<int, int>> q;
    q.push({i, j});
    vis[i][j] = true;
    while (!q.empty())
    {
        int si = q.front().first;
        int sj = q.front().second;
        q.pop();
        for (auto dir : d)
        {
            int ci = si + dir.first;
            int cj = sj + dir.second;
            if (valid(ci, cj))
            {
                parent[ci][cj] = {si, sj};
                vis[ci][cj] = true;
                q.push({ci, cj});
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    pair<int, int> start, end;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 'A')
                start = {i, j};
            if (a[i][j] == 'B')
                end = {i, j};
        }
    }

    memset(vis, false, sizeof(vis));
    bfs(start.first, start.second);

    if (!vis[end.first][end.second])
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        vector<pair<int, int>> path;
        string ans;
        for (auto i = end; i != start; i = parent[i.first][i.second])
        {
            path.push_back(i);
        }
        path.push_back(start);
        reverse(path.begin(), path.end());

        for (int i = 1; i < path.size(); i++)
        {
            int dy = path[i].second - path[i - 1].second;
            int dx = path[i].first - path[i - 1].first;
            if (dx == 1)
                ans += 'D';
            if (dx == -1)
                ans += 'U';
            if (dy == 1)
                ans += 'R';
            if (dy == -1)
                ans += 'L';
        }

        cout << ans.size() << endl;
        cout << ans << endl;
    }
    return 0;
}
