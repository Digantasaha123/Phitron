#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str[10000];
        scanf("%s",str);
        int a=0,b=0,c=0;
        for(int i=0; i<strlen(str); i++)
        {
            if(str[i]>='a' && str[i]<='z') b++;
            else if(str[i]>='A' && str[i]<='Z') a++;
            else c++;
        }
        printf("%d %d %d\n",a,b,c);
    }
    return 0;
}