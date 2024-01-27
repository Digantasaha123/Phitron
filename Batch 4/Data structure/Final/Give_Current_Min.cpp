#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<long long int, vector<long long int>, greater<int>> pq;
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        pq.push(x);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int choice;
        cin >> choice;
        if (choice == 0)
        {
           long long int x;
            cin >> x;
            pq.push(x);
            cout << pq.top() << endl;
        }
        else if (choice == 1)
        {
            if (pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top() << endl;
        }
        else if (choice == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
                if (!pq.empty())
                    cout << pq.top() << endl;
                    else  cout << "Empty" << endl;
            }
            else
                cout << "Empty" << endl;
        }
    }
    return 0;
}