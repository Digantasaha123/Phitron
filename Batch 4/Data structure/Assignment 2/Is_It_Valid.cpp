#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        stack<char> st;
        string s;
        cin>>s;
        for(char x : s)
        {
            if(st.empty()) st.push(x);
            else if(st.top()=='0' && x == '1') st.pop();
            else if(st.top()=='1' && x == '0') st.pop();
            else st.push(x);
               
        }

        if(st.empty())
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}