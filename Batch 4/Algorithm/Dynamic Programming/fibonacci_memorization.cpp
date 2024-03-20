#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e6 + 5;
ll dp[N];
ll fib(ll n)
{
    if (n == 0 || n == 1)
        return n;
    if (dp[n] != -1)
        return dp[n];
   
    return  dp[n] = fib(n - 1) + fib(n - 2);
}
int main()
{
    memset(dp,-1, sizeof(dp));
    ll n;
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}