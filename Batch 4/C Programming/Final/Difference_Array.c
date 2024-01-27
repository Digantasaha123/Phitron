#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int ar[n];
        int arr[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &ar[i]);
        for (int i = 0; i < n; i++)
        {
            arr[i] = ar[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (ar[j] > ar[j + 1])
                {
                    int temp = ar[j];
                    ar[j] = ar[j + 1];
                    ar[j + 1] = temp;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            ar[i] = abs(arr[i] - ar[i]);
        }
        for (int i = 0; i < n; i++)
            printf("%d ", ar[i]);
        printf("\n");
    }
    return 0;
}