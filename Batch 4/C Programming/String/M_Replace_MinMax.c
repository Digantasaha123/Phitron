#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);1view
    int max = 0;
    int min = 0;
    //  int mini, maxi;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] < ar[min]) min = i;
        else if(ar[i]>ar[max]) max = i;
    }
   int temp = ar[max];
   ar[max] = ar[min];
   ar[min] = temp;
   for (int i = 0; i < n; i++)
   {
    printf("%d ",ar[i]);
   }
   }
    
    return 0;


}