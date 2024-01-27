#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<char> st;
    string xa;
    cin >> xa;

    for (char cc : xa)
    {
        if (cc == '(' || cc == '{' || cc == '[')
        {
            st.push(cc);
        }
        else if ((cc == ')' && st.top() == '(') || (cc == '}' && st.top() == '{') || (cc == ']' && st.top() == '['))

        {
            if (!st.empty())
                st.pop();
            else
                st.push(cc);
        }
    }
    if (st.empty())
        cout << "YES";
    else
        cout << "NO";
    return 0;
}