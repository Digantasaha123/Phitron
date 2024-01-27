#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;
    cin>>name;
    cout<<name<<" "<<name.size()<<endl;
    name.resize(11);
    cout<<name<<" "<<name.size()<<endl;
    name.clear();
    cout<<name<<" "<<name.size()<<endl;
     if(name.empty()) cout<<"Empty"<<endl;
    else cout<<"Not Empty"<<endl;
    return 0;
}