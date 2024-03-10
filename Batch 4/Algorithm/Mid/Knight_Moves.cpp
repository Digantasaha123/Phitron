#include<bits/stdc++.h>
using namespace std;
int n,m;
int dis[100][100];
bool vis[100][100];
vector<pair<int,int>> d = {{-2,1},{-1,2},{1,2},{2,1},{-2,-1},{-1,-2},{1,-2},{2,-1}};
bool isvalid(int i, int j)
{
     if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}
void bfs(int si, int sj)
{
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;
    while(!q.empty())
    {
        pair<int,int> par = q.front();
        q.pop();
        for(int i=0; i<8; i++)
        {
            int ci = par.first + d[i].first;
            int cj = par.second + d[i].second;
            if(isvalid(ci,cj)&&!vis[ci][cj])
            {
                q.push({ci,cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[par.first][par.second] + 1;
            }
        }
    }
}
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
        cin>>n>>m;
        int si,sj,di,dj;
        cin>>si>>sj>>di>>dj;
        memset(vis,false,sizeof(vis));
        memset(dis,-1,sizeof(dis));
        bfs(si,sj);
        if(!vis[di][dj])
            cout<<-1<<endl;
        else cout<<dis[di][dj]<<endl;
     }
    return 0;
}