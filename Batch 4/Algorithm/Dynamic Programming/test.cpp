#include <bits/stdc++.h>
using namespace std;
int knapsack(int n, int weight[], int value[], int W)
{
    if (n < 0 || W == 0)
        return 0;
    if (weight[n] <= W)
        return  max(knapsack(n - 1, weight, value, W - weight[n]) + value[n], knapsack(n - 1, weight, value, W));
    else
        return knapsack(n - 1, weight, value, W);
}
int main()
{
    int n,W;
    cin >> n>>W;
    int weight[n], value[n];
    for (int i = 0; i <n; i++)
        cin >> value[i] >>weight[i];
    cout << knapsack(n, weight, value, W) << endl;
    return 0;
}