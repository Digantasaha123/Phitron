#include<stdio.h>
#include<string.h>
int main(){
 unsigned long x;
    scanf("%lu",&x);
      char str[6000];
    for (int i=1; i<=x; i++)

    {
    scanf("%s",str);
    if (strlen(str)>10)
    {
        printf("%c%d%c\n",str[0],strlen(str)-2,str[strlen(str)-1]);

    }
    else
    {
        printf("%s\n",str);
    }

    }

    return 0;
}
