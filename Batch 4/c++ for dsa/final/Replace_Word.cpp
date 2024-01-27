#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        while (a.find(b) != -1)
        {
            int index = a.find(b);
            a.replace(index, b.size(), "#");
        }
        cout << a << endl;
    }
    return 0;
}