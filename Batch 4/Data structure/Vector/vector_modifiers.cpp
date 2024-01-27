#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> x = {10, 20, 30, 40};
    vector<int> v = {1, 2, 3, 4};
    x.insert(x.end(), v.begin(), v.end());

    for (int w : x)
        cout << w << " ";
    cout << endl;
    x.erase(x.begin() , x.begin()+4);
     for (int w : x)
        cout << w << " ";

    return 0;
}