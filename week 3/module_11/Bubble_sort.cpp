#include<bits/stdc++.h>
using namespace std;

void printarray(int array[], int size){
    for(int i=0; i<size; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    
}
int main()
{
    int size;
    cin>>size;

    int array[size];
    for(int i=0; i<size; i++){
        cin>>array[i];
    }
    cout<<"Array Before Sort: ";
    printarray(array, size);

    //Bubble Sort implementation
    for(int i=0; i<size-1; i++){
        int flag = 0;
        cout<<"Iteration No "<<i+1<<endl;
        for(int j=0; j<size - i; j++)
        {
            if (array[j]>array[j+1]){
                int temp =  array[j];
                array[j]= array[j+1];
                array[j+1] = temp;
                flag  = 1;
            }
            printarray(array, size);
        }
        cout<<endl;
        if (flag == 0) break;
    }

cout<<"Array After Sorting: ";
printarray(array, size);

    return 0;
}
