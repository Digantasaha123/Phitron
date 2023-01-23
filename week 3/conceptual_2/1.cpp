#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    while (t--)
    {
        int sum=0;
        int n;
        cin>>n;
        int x= n/2;
        if (n%4!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {   
            cout<<"YES"<<endl;
            for(int i=1; i<=x; i++)
            {
                cout<<2*i<<" ";
                sum+=i*2;
            }

            for(int i=1; i<x; i++ )
            {
                cout<<2*i-1<<" ";
                sum-=2*i-1;
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}