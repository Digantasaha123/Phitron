#include<bits/stdc++.h>
#include "MYSTACK.h"
using namespace std;
int main()
{
    Stack<char> st;
    st.push('a');
    st.push('t');
    st.push('n');
    st.push('a');
    st.push('g');
    st.push('i');
    st.push('D');
    while(!st.empty())
    {
        cout<<st.Top();
        st.pop();
    }
    return 0;
}