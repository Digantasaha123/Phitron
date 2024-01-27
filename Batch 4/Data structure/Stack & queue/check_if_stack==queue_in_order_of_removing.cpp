#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    stack<int> st;
    queue<int> q;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
       bool flag = true;
    if (n != t)
    {
        flag =  false;
    }
    else
    {
        while (!st.empty() && !q.empty())
        {
            if (st.top() != q.front())
            {
                flag = false;
                break;
            }
            st.pop();
            q.pop();
                
        }
    }

    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
    return 0;
}