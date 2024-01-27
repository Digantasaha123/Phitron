#include<bits/stdc++.h>
using namespace std;
int print(int array[], int size){
    int sum = 0;
    for(int i=size -1; i>=0; i--){

        cout << array[i]<<" ";
    }
    return sum;
}
int main(){
    int size;
    cout<<"Enter Your Array size";
    cin>>size;
    

    int array[size];
    for(int i=0; i<size; i++){
        cin>>array[i];
    }

    print(array, size);
    
}