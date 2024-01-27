#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int dp[N];
int h[N];
int stone(int n)
{
    // base case: first stone
    if (n == 1)
        return 0;

    // case 2: already calculated
    if (dp[n] != -1)
        return dp[n];

    // need to calculate
    if (n > 1)
        return dp[n] = min(stone(n - 1) + abs(h[n] - h[n - 1]), stone(n - 2) + abs(h[n] - h[n - 2]));
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> h[i];
    memset(dp, -1, sizeof(dp));
    cout << stone(n - 1) << endl;
    return 0;
}
