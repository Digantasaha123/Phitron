#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            int even = 0, odd = 0;
            int ar[n];
            for (int i = 0; i < n; i++)
                cin >> ar[i];
            for (int i = 0; i < n; i++)
            {
                if (ar[i] % 2 == 0)
                    even++;
                else
                    odd++;
            }
            cout << abs(odd - even) / 2 << endl;
        }

        else
            cout << -1 << endl;
    }
    return 0;
}