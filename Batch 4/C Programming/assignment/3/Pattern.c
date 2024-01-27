#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int s = n - 1;
    int x = 1;
    int ss = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s; j++)
            printf(" ");
        if (ss % 2 == 0)
        {
            for (int k = 0; k < x; k++)
                printf("#");
            ss++;
        }
        else
        {
            for (int k = 0; k < x; k++)
                printf("-");
            ss++;
        }
        printf("\n");
        s--;
        x += 2;
    }
    s+=2;
    x -= 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = s; j > 0; j--)
            printf(" ");
        if (ss % 2 == 0)
        {
            for (int k = x; k > 0; k--)
                printf("#");
            ss++;
        }
        else
        {

            for (int k = x; k > 0; k--)
                printf("-");
            ss++;
        }

        printf("\n");
        s++;
        x -= 2;
    }
    return 0;
}