#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist;
    int t;
    cin >> t;
    while (t--)
    {
        int choice, val;
        cin >> choice >> val;
        if (choice == 0)
        {
            mylist.push_front(val);
            cout << "L -> ";
            for (auto i = mylist.begin(); i != mylist.end(); i++)
            {
                cout << *i << " ";
            }
            cout << endl;
            mylist.reverse();
            cout << "R -> ";
            for (auto i = mylist.begin(); i != mylist.end(); i++)
            {
                cout << *i << " ";
            }
            mylist.reverse();
            cout << endl;
        }
        else if (choice == 1)
        {

            mylist.push_back(val);
            cout << "L -> ";
            for (int i : mylist)
            {
                cout << i << " ";
            }
            cout << endl;
            mylist.reverse();
            cout << "R -> ";
            for (int i : mylist)
            {
                cout << i << " ";
            }
            mylist.reverse();
            cout << endl;
        }
        else if (choice == 2)
        {
            if (val >= 0 && val < mylist.size())
            {
                mylist.erase(next(mylist.begin(),val));
               
            }
             cout << "L -> ";
                for (auto i = mylist.begin(); i != mylist.end(); i++)
                {
                    cout << *i << " ";
                }
                cout << endl;
                mylist.reverse();
                cout << "R -> ";
                for (auto i = mylist.begin(); i != mylist.end(); i++)
                {
                    cout << *i << " ";
                }
                mylist.reverse();
                cout << endl;
        }
    }
    return 0;
}