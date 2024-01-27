#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int flag = 0;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for(int i=0; i<n-2; i++)
        {
            for(int j= i+1; j<n-1; j++)
            {
                for(int k=j+1; k<n; k++)
                {
                     if (arr[i] + arr[j] + arr[k] == x)
                     {
                        flag = 1;
                     }
                    
                }
            }
        }
        if (flag == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    
    }
    return 0;
}