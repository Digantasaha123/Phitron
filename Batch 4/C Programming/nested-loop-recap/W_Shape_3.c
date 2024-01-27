#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int s = n - 1;
    int x = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s; j++)
            printf(" ");
        for (int k = 0; k < x; k++)
            printf("*");
        printf("\n");
        s--;
        x += 2;
    }
    s++;
    x -= 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = s; j > 0; j--)
            printf(" ");
        for (int k = x; k > 0; k--)
            printf("*");
        printf("\n");
        s++;
        x -= 2;
    }
    return 0;
}