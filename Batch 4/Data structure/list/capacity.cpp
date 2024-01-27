#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 30, 40};
    cout << myList.max_size() << endl;
    cout << myList.size() << endl;
    for (int val : myList)
    {
        cout << val << " ";
    }
    myList.clear();
    for (int val : myList)
    {
        cout << val << " ";
    }
    cout<<endl;
    cout << myList.size() << endl;
    return 0;
}