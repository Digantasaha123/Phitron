#include<bits/stdc++.h>
using namespace std;
int knapsack(int n, int weight[], int value[], int w)
{
    if(n<0 || w==0) return 0;
    if(weight[n]<=w)
    return max(knapsack(n-1, weight,value,w-weight[n]), knapsack(n-1, weight, value,w));
    else 
    {
        return knapsack(n-1, weight, value,w);
    }
}
int main()
{
    int n,w;
    cin>>n>>w;
    int weight[n+1], value[n+1];
    for(int i=0; i<n; i++)
        cin>>weight[i]>>value[i];
    int ans = knapsack(n-1,weight,value,w);
    cout<<ans<<endl;
    return 0;
}