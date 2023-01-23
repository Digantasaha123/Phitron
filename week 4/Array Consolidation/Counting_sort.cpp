#include<bits/stdc++.h>
using namespace std;
void printarray(int array[], int size){
    for(int i=0; i<size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int size;
    cin>>size;

    //step 0 ---->array input 
    int array[size];
    for(int i=0; i<size; i++)
    {
        cin>>array[i];
    }

    //step 1 ----->max element of the array 
    int max = INT_MIN;
    for(int i=0; i<size; i++){
        if(array[i]>max)
        {
            max = array[i];
        }
    }



    // step 2---->counter array initialization
    int count[max+1];
    for(int i=0; i<size; i++){
        count[i]=0;
    }


    //step 3---->Frequency calculation 
    for(int i=0; i<size; i++)
    {
        count[array[i]]++;
    }


    //step 4 ------> Cumulative sum calculation
    for(int i=1; i<=max; i++){
        count[i] += count[i-1];
    }


    //Step 5 Backward traversal of Basic array
    int final[size];
    for(int i=size-1; i>0; i--)
    {
        count[array[i]]--;
        int k = count[array[i]];
        final[k] = array[i];
        
    }

    printarray(final,size);

    return 0;
}