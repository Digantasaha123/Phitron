#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> mp;
    //manual insert
    // mp.insert({"Diganta",69});
    // mp.insert({"Nafian",60});
    // mp.insert({"Mostakem",64});
    // mp.insert({"Chayon",62});
    // mp.insert({"Momo",57});

mp["Diganta"] = 69;
mp["Nafian"] = 61;
mp["Mostakem"] = 62;
mp["Momo"] = 63;
mp["Chayon"] = 64;
mp["Ishika"] = 65;

//  for(auto it = mp.begin(); it!=mp.end(); it++)
//  {
//     cout<<it->first<<" "<<it->second<<endl;
//  }
// cout<<mp["Diganta Saha"];
if(mp.count("Diganta")) cout<<"Present"<<endl;
else cout<<"Not available"<<endl;
    return 0;
}