#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    while(getline(cin,str))
    {
        int n = strlen(str);
        string str2 ;
        for(int i=0; i<; i++)
        {
            if(str[i]!=' ')
            {
                str2+=str[i];
            } 
        }       
         
        sort(str2.begin(), str2.end());
            cout<<str2<<endl;

    }

    return 0;
}