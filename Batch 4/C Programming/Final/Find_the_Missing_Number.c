#include <stdio.h>

int main()
{
   long long int mul, a, b, c;
    int t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%lld %lld %lld %lld", &mul, &a, &b, &c);
        long long int ans = ((mul / a) / b) / c;
        if (mul % (a * b * c )== 0)
            printf("%lld\n", ans);
        else
            printf("-1\n");
    }
    return 0;
}