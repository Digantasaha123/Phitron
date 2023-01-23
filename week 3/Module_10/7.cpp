#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;

    int array[size];

    for(int i=0; i<size; i++){
        cin>>array[i];
    }


    for(int i=0; i<size; i++){
        if(array[i]%3==0) array [i] = -1;
    }

     for(int i=0; i<size; i++){
        cout<<array[i]<<" ";
    }
    return 0;
}