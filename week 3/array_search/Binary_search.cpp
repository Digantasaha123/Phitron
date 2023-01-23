#include <bits/stdc++.h>
using namespace std;

int binarySearch(int array[], int x, int lb, int ub)
{
    if (lb <= ub)
    {
        int mid = (lb + ub) / 2;

        // mid == x
        if (x == array[mid])
            return mid;

        // x < mid
        else if (x < array[mid])
            binarySearch(array, x, lb, mid - 1);

        // x > mid
        else if (x > array[mid])
            binarySearch(array, x, mid + 1, ub);
    }
    else
        return -1;
}

int main()
{
    int size;
    cin>>size;

    int array[size];

    for(int i=0; i<size; i++){
        cin>>array[i];

    }
    int checkvalue ;
    cout<<"Enter The Value You Want to Search: ";
    cin>>checkvalue;


    int index = binarySearch(array, checkvalue, 0, size-1);
    if(index != -1){
        cout<<"Index: "<<index<<" Postion: "<< index + 1<<endl;
    }
    else cout<<"Value Not Found"<<endl;
}