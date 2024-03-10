#include <bits\stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int par[N];
int group_size[N];
int level[N];
void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
          par[i] = -1;
          group_size[i] = 1;
          level[i] = 0;
    }
}
// O(logn)
int dsu_find(int node)
{
    if (par[node] == -1)
        return node;
    return par[node] = dsu_find(par[node]);
}
void dsu_union(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    // leaderA sacrifices
    par[leaderA] = leaderB;
}
void dsu_union_by_level(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if(level[leaderA]>level[leaderB])
    {
        par[leaderB] = leaderA;
    }
    else if(level[leaderB]>level[leaderA])
    {
        par[leaderA] = leaderB;
    }
    else 
    {
        par[leaderA] = leaderB;
        level[leaderB]++;
    }
    
}
void dsu_union_by_size(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if(group_size[leaderA]>group_size[leaderB])
    {
        par[leaderB] = leaderA;
        group_size[leaderA]+= group_size[leaderB];
    }
    else 
    {
        par[leaderA] = leaderB;
        group_size[leaderB]+= group_size[leaderA];
    }
}
int main()
{
    dsu_initialize(7);
    dsu_union_by_level(1,2);
    dsu_union_by_level(2,3);
    dsu_union_by_level(4,5);
    dsu_union_by_level(5,6);
    dsu_union_by_level(1,4);
    // dsu_union_by_size(1,4);
    // for(int i =1; i<=7; i++)
    // {
    //     cout<<i<<"->"<<par[i]<<endl;
    // }
    // cout<<endl<<endl;
    // dsu_union(1,5);
     cout<<dsu_find(1)<<std::endl;
     cout<<dsu_find(4)<<std::endl;
    return 0;
}