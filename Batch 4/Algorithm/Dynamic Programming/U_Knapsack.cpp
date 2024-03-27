#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
int dp[N][N];

int knapsack(int n, int weight[], int value[], int w) {
    if (n == 0 || w == 0)
        return 0;
    if (dp[n][w] != -1)
        return dp[n][w];
    if (weight[n-1] <= w)
        return dp[n][w] = max(value[n-1] + knapsack(n - 1, weight, value, w - weight[n-1]), 
                               knapsack(n - 1, weight, value, w));
    else
        return dp[n][w] = knapsack(n - 1, weight, value, w);
}

int main() {
    int n, w;
    cin >> n >> w;
    memset(dp, -1, sizeof(dp));
    int weight[n], value[n];
    for (int i = 0; i < n; i++)
        cin >> weight[i] >> value[i];
    int ans = knapsack(n, weight, value, w);
    cout << ans << endl;
    return 0;
}
