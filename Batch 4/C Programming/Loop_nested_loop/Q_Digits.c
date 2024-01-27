#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int x;
        scanf("%d", &x);
        do
        {
            printf("%d ", x % 10);
            x /= 10;
        } while (x != 0);
        printf("\n");
    }

    return 0;
}