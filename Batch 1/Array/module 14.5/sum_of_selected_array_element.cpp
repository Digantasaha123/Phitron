#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r;
    cin>>r;
    int ar[r][r];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<r; j++)
        {
            cin>>ar[i][j];
        }
    }
    cout<<endl<<endl;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<r; j++)
        {
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}