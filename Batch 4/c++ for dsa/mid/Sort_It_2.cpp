#include <bits/stdc++.h>
using namespace std;
int *sort_it(int n)
{
    int *array = new int[n];
    for (int i = 0; i < n; i++)
        cin >> array[i];
    sort(array, array + n, greater<int>());
    return array;
}
int main()
{
    int n;
    cin >> n;

    int *array = sort_it(n);
    for (int i = 0; i < n; i++)
        cout << array[i] << " ";
    return 0;
}