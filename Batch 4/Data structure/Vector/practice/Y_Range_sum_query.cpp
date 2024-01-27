#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, q;
    cin >> n >> q;
    long long int ar[n];
    long long int sum[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    sum[0] = ar[0];
    for (int i = 1; i < n; i++)
        sum[i] = sum[i - 1] + ar[i];

    while (q--)
    {
        long long int i, j;
        cin >> i >> j;
        i--;
        j--;
        long long int ans;
        if (i == 0)
           cout << sum[j] << endl;

        else
            cout << sum[j] - sum[i - 1] << endl;

    }
    return 0;
}
