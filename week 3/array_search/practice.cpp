#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout << "Enter the Size of Your Array: ";
    cin >> size;
    cout << endl;
    int array[size];
    cout << "Enter the Elements of Your Array: " << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    char c;
    cout << "Do you want to search ? (Y/N) ";
    cin >> c;

    while (toupper(c) == 'Y')
    {

        int check_value;
        cout << "Enter The Value You Want To Search: ";
        cin >> check_value;

        int flag = 0;

        for (int i = 0; i < size; i++)
        {
            if (array[i] == check_value)
            {
                flag = 1;
                cout << "Index: " << i << "  Position: " << i + 1 << endl;
            }
        }
        if (flag == 0)
            cout << "Desired Value was not found in the Query" << endl;

        cout << "Do you want to search ? (Y/N) ";
        cin >> c;
    }
}
