#include<bits/stdc++.h>
using namespace std;
int main()
{
    int SIZE;
    cin>>SIZE;

    int ARRAY[SIZE];

    for(int i=0; i<size; i++){
        cin>>ARRAY[i]; 
    }



    int size;
    cin>>size;

    int array[size];

    for(int i=0; i<size; i++){
        cin>>array[i]; 
    }

for(int i=0; i<SIZE; i++){

    for(int j=0; j<size; j++){
        if (ARRAY[i]==array[j]) cout<<array[j]<<" ";
    }
}


    return 0;
}