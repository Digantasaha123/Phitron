#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    queue<int> q;
    int flag = 0;
    int a, b;
    cin >> a >> b;
    if (a != b)
    {
        cout << "NO" << endl;
    }
    else
    {
       for(int i=0; i<a; i++)
        {
            int x;
            cin >> x;
            st.push(x);
        }

       for(int i=0; i<b; i++)
        {
            int x;
            cin >> x;
            q.push(x);
        }

        for(int i=0; i<a; i++)
        {
            if(st.top()!=q.front())
            {
                flag = 1;
                break;
            }
            st.pop();
            q.pop();
        }

        if(flag == 0) cout<<"YES"<<endl;
        else cout << "NO" << endl;
    }

    return 0;
}