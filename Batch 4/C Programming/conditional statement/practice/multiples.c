#include <stdio.h>

int main()
{
    char des;
    scanf("%c",&des); 
    if(des>='a' && des<='z')
    {
        des = des-32;
    }
 else if(des>='A' && des<='Z')
    {
        des = des+32;
    }

    printf("%c",des);
    return 0;
}