#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin>>m;
    int n = sqrt(m);
    int array[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>array[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}