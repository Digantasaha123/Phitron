#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int dp[N];
int n;
bool check(int x)
{
    if(x>n) return false;
    if(x==n) return true;
    if(dp[x]!=-1) return dp[x];
    return dp[x] = check(x+3) || check(x*2);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        memset(dp,-1,sizeof(dp));
        if(check(1)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}