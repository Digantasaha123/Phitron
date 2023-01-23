#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
   
    while (t--){
        string s;
        cin>>s; 
        int count_of_1=0; 
        int syntax=0;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='1')
            {
                count_of_1++;
            }
        }
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='1' && s[i+1]=='1')
            {
                syntax++;
            }
        }
        if(count_of_1 == syntax+1){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}