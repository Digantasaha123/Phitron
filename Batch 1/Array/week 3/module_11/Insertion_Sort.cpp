#include<bits/stdc++.h>
using namespace std;

void printarray(int array[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    cin >> size;

    int array[size];
    for (int i = 0; i < size; i++)    // array input
    {
        cin >> array[i];
    }

    cout << "Before Sorting: ";
    printarray(array, size);
    cout << endl<<endl ;

    // Insertion Sort Implementation
    for (int i = 1; i < size; i++)
    {
        int key = array[i];
        int j = i - 1;
        while (array[j] > key && j >= 0)
        {
            array[j + 1] = array[j];
            printarray(array, size);

            j--;
        }
        array[j + 1] = key;
        
    }
    printarray(array, size);
    return 0;
}   