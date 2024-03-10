#include <bits/stdc++.h>
using namespace std;
const int N = 10005;
char a[N][N];
bool vis[N][N];
pair<int, int> par[N][N];
int n, m;
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool valid(int i, int j)
{   
    return i>=0 && i<n && j>=0 && j<m && a[i][j]!='#' && !vis[i][j];
}
void bfs(int i, int j)
{
    queue<pair<int,int>> q;
    q.push({i,j});
    vis[i][j] = true;
    while(!q.empty())
    {
        int si = q.front().first;
        int sj = q.front().second;
        q.pop();
        for(int i =0; i<4; i++)
        {
            int ci = si + d[i].first;
            int cj = sj + d[i].second;
            if(valid(ci,cj))
            {
                vis[ci][cj] = true;
                q.push({ci,cj});
                par[ci][cj] = {si,sj};
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
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 'A')
                src = {i, j};
            else if (a[i][j] == 'B')
                des = {i, j};
        }
    }
    memset(vis, false, sizeof(vis));
    bfs(src.first, src.second);
    if(!vis[des.first][des.second]) cout<<"NO"<<endl;
    else 
    {
        cout<<"YES"<<endl;
        string ans ;
        vector<pair<int,int>> path;
        for(auto i = des; i!=src; i = par[i.first][i.second])
        {
            path.push_back(i);
        }
        path.push_back(src);
        reverse(path.begin(),path.end());
       for(int i=1; i<path.size(); i++)
       {
        int dx = path[i-1].first - path[i].first;
        int dy = path[i-1].second - path[i].second;
        if(dy==1) ans+='L';
        if(dy==-1) ans+='R';
        if(dx==1) ans+='U';
        if(dx==-1) ans+='D';
       }
       cout<<ans.size()<<endl;
       cout<<ans<<endl;
    }
    return 0;
}