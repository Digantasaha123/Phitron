#include <bits/stdc++.h>
using namespace std;
intmaxx(int array[], int size)
{
    int max = array[0];
    int index;

    for (int i = 0; i < size; i++)
    {

        if (array[i] > max)
        {
            max = array[i];
            index = i;
        }
    }
    cout << "Max: " << max << ", Index: " << index << endl;
}

int minn(int array[], int size)
{

    int min = array[0];
    int indexx = 0;
    for (int i = 0; i < size; i++)
    {

        if (array[i] < min)
        {
            min = array[i];
            indexx = i; 
        }
    }
    cout << "Min: " << min << ", Index: " << indexx << endl;
}
int main()
{
    int size;
    cin >> size;

    int array[size];

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    maxx(array, size);
    minn(array, size);

        return 0;
}