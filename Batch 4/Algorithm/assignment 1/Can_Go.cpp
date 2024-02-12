#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
bool vis[N][N];
int mat[N][N];
int n, m;
vector<pair<int,int>> d = {{0,1},{0,-1},{1,0},{-1,0}};
bool valid(int i, int j)
{
    return i<n && i>=0 && j>=0 && j<m && !vis[i][j] && mat[i][j]!=-1;
}
void dfs(pair<int, int> src)
{
    queue<pair<int, int>> q;
    q.push(src);
    vis[src.first][src.second] = true;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int x = par.first;
        int y= par.second;
        for(int i=0; i<4; i++)
        {
            int xx = x + d[i].first;
            int yy = y + d[i].second;
            if(valid(xx,yy))
            {
                q.push({xx,yy});
                 vis[xx][yy] = true;
            }

        }

    }
}
int main()
{

    cin >> n >> m;
    pair<int, int> src, des;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        for (int j = 0; j < m; j++)
        {
            if (str[j] == '#')
                mat[i][j] = -1;
            if (str[j] == 'A')
                src = {i, j};
            if (str[j] == 'B')
                des = {i, j};
        }
    }
    dfs(src);
    if(vis[des.first][des.second]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}