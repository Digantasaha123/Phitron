#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int b = a % 10;
    a /= 10;
    if (b != 0 && a % b == 0)
        printf("YES\n");
    else if (a != 0 && b % a == 0)
        printf("YES\n");

    else
        printf("NO\n");
    return 0;
}