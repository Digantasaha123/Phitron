#include<bits/stdc++.h>
using namespace std;
template<typename T>  T maxx(T a, T b)
{
    return (a>b)? a:b;
}
int main()
{
    cout<<maxx<int>(10,20)<<endl;
    cout<<maxx<float>(1.6,2.0005)<<endl;
    cout<<maxx<char>('a','x')<<endl;
    return 0;
}