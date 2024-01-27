#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int count = 0;
    cin >> n;
    vector<int> v(n + 1);
    // vector<int> counter(1000, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        auto it = find(v.begin(), v.end(), v[i] + 1);
        if (*it==v[i]+1)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}