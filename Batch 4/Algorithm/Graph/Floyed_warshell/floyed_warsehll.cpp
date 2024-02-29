#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n, e;
    cin >> n >> e;
    ll adj[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            adj[i][j] = INT_MAX;
            if (i == j)
                adj[i][j] = 0;
        }
    }
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a][b] = c;
    }
    cout << "আগের গ্রাফ" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (adj[i][j] == INT_MAX)
                cout << "INF ";
            else
                cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    cout << "পরের গ্রাফ" << endl;
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (adj[i][j] > adj[i][k] + adj[k][j])
                    adj[i][j] = adj[i][k] + adj[k][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (adj[i][i] < 0)
        {
            cout << "Cycle Detected" << endl;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (adj[i][j] == INT_MAX)
                cout << "INF ";
            else
                cout << adj[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}