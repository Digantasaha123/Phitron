#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        int tiger = 0, pathan = 0;
        scanf("%d", &n);
        char s[n];
        scanf("%s",s);
        for (int i=0; i<n; i++)
        {
            if(s[i]=='P') pathan++;
            else tiger++;
        }

        if(tiger==pathan) printf("Draw\n");
        else if(tiger>pathan) printf("Tiger\n");
        else printf("Pathaan\n");
    }

    return 0;
}