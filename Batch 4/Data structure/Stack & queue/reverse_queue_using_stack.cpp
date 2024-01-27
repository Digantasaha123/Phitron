#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    stack<int> st;
    queue<int> q;
    queue<int> q2;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    while(!q.empty())
    {
        st.push(q.front());
        q.pop();
    }
     while(!st.empty())
    {
        q2.push(st.top());
        st.pop();
    }
      while(!q2.empty())
    {
        cout<<q2.front()<<" ";
        q2.pop();
    }
    return 0;
}