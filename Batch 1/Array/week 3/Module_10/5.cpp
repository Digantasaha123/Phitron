#include<bits/stdc++.h>
using namespace std;
int search(int array[], int size, int x )
{  
    
}
int main()
{
    int size;
    cin>>size;

    int array[size];

    for(int i=0; i<size; i++){
        cin>>array[i];
    }

int val;
cin>>val;

    int flag = 0;
    for (int i=0; i<size; i++){
    if (i==0) {cout<<"FOUND at index position: ";}
        if(array[i] == val) 
        {
            if (flag==0) cout<<i;
            
           else cout<<", "<<i;
            flag = 1;
        }
    }
    if (flag == 0) cout<<"NOT FOUND";
        


    return 0;
}