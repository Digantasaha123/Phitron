#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int s;
    cin >> s;
    bool dp[n + 1][s + 1];
    for (int i = 1; i <= n; i++)
        dp[0][i] = false;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i - 1] <= j)

                dp[i][j] = dp[i - 1][j - a[i - 1]] || dp[i - 1][j];
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    if (dp[n][s])
        cout << "Yes" << endl;
    else
        cout << "NO" << endl;
    return 0;
}