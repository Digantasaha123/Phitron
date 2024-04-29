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
        long long  a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long area = INT_MIN, si, sj;
        long long  l = 0, r = n - 1;
        while (l < r)
        {
            if (area < a[l] * a[r] - min(a[l], a[r]))
            {
                area = max(area, a[l] * a[r] - min(a[l], a[r]));
                si = l;
                sj = r;
            }
            if (a[l] < a[r])
                l++;
            else
                r--;
        }
        cout << si << " "<<sj<<endl;
    }
    return 0;
}