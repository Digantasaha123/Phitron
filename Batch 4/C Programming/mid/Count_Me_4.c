#include <stdio.h>

int main()
{
    char str[10001];
    scanf("%s", str);

    int f[26];
    for (int i = 0; i < 26; i++)
    {
        f[i] = 0;
    }

    for (int i = 0; str[i] != '\0'; i++)
    {
        f[str[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (f[i] > 0)
        {
            printf("%c - %d\n", i + 'a', f[i]);
        }
    }

    return 0;
}