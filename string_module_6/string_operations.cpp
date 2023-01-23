#include<bits/stdc++.h>
using namespace std;
int main(){
    string st = "aaaabbbaaazzz";
    cout<<st.find('b')<<endl;       //finds the first occurance of a character 
    cout<<st.find_first_of('b')<<endl;  // same as above
    cout<<st.find_last_of('b')<<endl; // first occurance from the last(prints long num if char not found) cout<<st.find_last_of('b')<<endl;
    cout<<st.find_last_of('k')<<endl; 
    cout<<st.find_first_not_of('a')<<endl; //starts from index 0 till the char is not found
    cout<<st.find_last_not_of('z')<<endl;//starts from  last index  till the char is not found
    cout<<st.substr(4,3)<<endl;  //(index,char count)
    return 0;
}