#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    str.assign("XYZKNDNBJ"); //instead of str = "CXUNJNFE";
    cout<<str<<endl;


    string s1 = "abc";
    string s2 = " def";
    s1.append(s2); // adds one string after another one s2 after s1;
    cout<<s1<<endl;

    s2.push_back('X'); // adds a character at the end of the string 
    cout<<s2<<endl;


    s2.pop_back(); // Deletes the last character in a string
     cout<<s2<<endl;



     string s3; 
     s3.assign("abc");
     s3.insert(1,"xyz");//adds a string inside  a string  in a specific location
     cout<<s3<<endl;




     string s4;
     s4.assign("abcdefghij"); //deletes characters (কোন পজিশন, কয়টা ক্যারেক্টার)
     s4.erase(4,2);
     cout<<s4<<endl;
 
 


 string Boro; Boro.assign("Diganta"); //swaps two strings
 string Choto; Choto.assign("Ekanto");
    swap(Choto, Boro);
    cout<<Choto<<"\t"<<Boro<<endl;



    return 0;
}