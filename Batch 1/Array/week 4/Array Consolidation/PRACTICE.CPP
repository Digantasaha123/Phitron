#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;

    int array[size];

    for(int i=0; i<size; i++)
    {
        cin>>array[i];
    }


  // finding the max value
    int max= INT_MIN;
    for (int  i = 0; i < size; i++)
    {
        if (array[i]>max);
        max = array[i];
    }
    

    // count array intialization
    int count[max+1];
    
        for(int i =0; i<size; i++)
        {
            array[i] = 0;
        }


    //frequency calculation 
        for(int i=0; i<size; i++)
        {
            count[array[i]]++;
        }

        
    return 0;
}