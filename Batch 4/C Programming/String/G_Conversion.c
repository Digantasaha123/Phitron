#include <stdio.h>
#include <string.h>
int main()
{
    char string[100000];
    gets(string);

    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == ',')
            string[i] = ' ';
        if (string[i] >= 'a' && string[i] <= 'z')
        {
            string[i] -= 'a' - 'A';
        }
        else if (string[i] >= 'A' && string[i] <= 'Z')
        {
            string[i] += 'a' - 'A';
        }
    }

    printf("%s", string);
    return 0;
}
