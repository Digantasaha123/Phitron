#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    int x = 0, y = 0;
    for (int  i = 0; i < n; i++)
    {
       if(ar[i]%2==0) x++;
       else if(ar[i]%3==0) y++;
    }

    printf("%d %d\n",x,y);
    

    return 0;
}