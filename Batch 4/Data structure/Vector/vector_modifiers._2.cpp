#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1,2,2,7,8,8,9,0,2,4,6,6,3,4,5};

    replace(v.begin(), v.end(),2,69 );
    for(int a:v)
    {
        cout<<a<<" ";
    }
    return 0;
}