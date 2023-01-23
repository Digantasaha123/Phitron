#include<bits/stdc++.h>
using namespace std;
int sum(int array[], int size){
    int sum = 0;
    for(int i=0; i<size; i++){

        sum += array[i];

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


    cout << sum(array, size)<<endl;
}