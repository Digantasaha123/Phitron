#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    string s="ab ab cd cd xy xy";
    stringstream stream(s); //আলাদা ওয়ার্ড গুলোকে আলাদা স্ট্রিং অথবা আলাদা গ্রুপ হিসেবে চিন্তা করবে
    // আগের লাইন ছাড়া stream<<s; ইউস করা যায়, স্ট্রিম এর মধ্যে স্ট্রিং প্রবেশ করানোর জন্য
    string w;
     while (stream>>w)

     {
        cout<<w<<endl;
     }

    return 0;
}
//কত গুলা স্পেস দিলাম সেটা matter করে না, স্পেস ignore করবে  