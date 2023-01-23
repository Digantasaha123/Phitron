#include<bits/stdc++.h>
using namespace std;
void printArray(int array[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int array[50];
    int size;
    cin>>size;
    for(int i=0; i<size; i++)

    {
        cin>>array[i];
    }
    printArray(array, size);

    // size - 1 ----> pos

int pos,value;
// cout<<"Position of the Insertion: ";
cout<<"Position of the Deletion: ";
    cin>>pos;
    // cout<<"Value of the Insertion: ";
   
    // cin>>value;
    // 
      if(pos<0 || pos>size-1){
        cout<<"Invalid index";
         
    }
    else {
        // INSERTION
        // size -1 ----> pos
        // for(int i=size-1; i>=pos; i--){
        //     array[i+1] = array[i];
        // }
        

        //size ----> pos (যে element টা desired index এ আছে তাকে 
        //last index এ দিয়ে desired value ওই index  এ ইনপুট নিবো)
        // array[size] = array[pos];
        // array[pos]=value;

        //DELETION
        if(pos==size-1) size--;
        else {
            for(int i=pos+1; i<size; i++){
                array[i-1]=array[i];
                
            }
            size--;
        }


    }
    // cout<<" Array after Insertion: ";
    cout<<" Array after Deletion: ";
    // 
    printArray(array, size);
        return 0;
}