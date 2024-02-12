#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
bool vis[N][N];
int mat[N][N];
int n, m;
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
bool valid(int i, int j)
{
    return i < n && i >= 0 && j >= 0 && j < m && !vis[i][j] && mat[i][j] != -1;
}
void dfs(pair<int, int> src)
{
    vis[src.first][src.second] = true;
    for (int i = 0; i < 4; i++)
    {
        int xx = src.first + d[i].first;
        int yy = src.second + d[i].second;
        if (valid(xx, yy))
        {
            dfs({xx, yy});
        }
    }
}
int main()
{

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        for (int j = 0; j < m; j++)
        {
            if (str[j] == '#')
                mat[i][j] = -1;
            else if (str[j] == '.')
                mat[i][j] = 1;
        }
    }

    int c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && mat[i][j]!=-1)
            {
                dfs({i, j});
                c++;
            }
        }
    }
    cout << c << endl;
    return 0;
}