#include <bits/stdc++.h>
#include "MYQUEUE.h"
using namespace std;
typedef pair<char, int> mytype;
int main()
{
    Queue<mytype> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int  y;
        char x;
        cin >> x >> y;
        q.push(make_pair(x, y));
    }
    // while (!q.empty())
    // {
    //     mytype chk;
    //     chk = q.pop();
    //     cout << chk.first << " | " << chk.second << endl;
    // }
    if (!q.empty())
    {
        mytype chk;
        chk = q.Front();
        cout << chk.first << " | " << chk.second << endl;
    }
    if (!q.empty())
    {
        mytype chk;
        chk = q.Back();
        cout << chk.first << " | " << chk.second << endl;
    }
    return 0;
}