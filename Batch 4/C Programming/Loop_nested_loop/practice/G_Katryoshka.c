#include <stdio.h>
int main()
{
    int a, b, c, min, count = 0;
    scanf("%d %d %d", &a, &b, &c);
    a -= b;
    count += b;
    c -= b;
    b = 0;

    if (a<=c)
        printf("%d\n", count + (a / 2));
        
    return 0;
}