#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> q;
    int t;
    cin>>t;
    while(t--)
    {
        int choice;
        string str;
        cin>>choice;
        if(choice == 0)
        {
                cin>>str;
            q.push(str);
        }
        if(choice == 1)
        {
            if(q.empty()) cout<<"Invalid"<<endl;
            else{
                cout<<q.front()<<endl;
                q.pop();
            }

        }

    }
    return 0;
}