#include <bits/stdc++.h>
using namespace std;
long long int fib_opt(int n)
{
    long long int ar[1000];
    if (n <= 2)
        return 1;
    if (ar[n] != 0)
        return ar[n];
    ar[n] = fib_opt(n - 1) + fib_opt(n - 2);
    return ar[n];
}
int fib_norm(int n)
{
    if (n <= 2)
        return 1;
    return fib_norm(n - 1) + fib_norm(n - 2);
}
int main()
{
   
    cout << fib_opt(50);
//  cout<<fib_norm(50)<<endl;
    return 0;
}
