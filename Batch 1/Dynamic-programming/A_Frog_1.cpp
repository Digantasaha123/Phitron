#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int dp[N];
int h[N];
int stone(int n)
{
   //if first stone 
   if(n==1) return 0;

   // case 2: already calculated
   if(dp[n]!=-1) return dp[n];

    // need to calcluate

    int ans1 = stone(n-1) + abs(h[n-1]-h[n]);
    if(n==2){
      return dp[n] = ans1;
    }
    int ans2 = stone(n-2) + abs(h[n-2]-h[n]);
   return dp[n] = min(ans1, ans2);

}
int main()
{
   int n;
   cin >> n;
   for (int i = 1; i <= n; i++)
      cin >> h[i];
      // memset(dp, -1, sizeof(dp));
      for(int i=1; i<=n; i++) dp[i] = -1;
      cout<<stone(n)<<endl;

   return 0;
}