#include<stdio.h>
#include<string.h>
int main(){
    char c[1000];
    scanf("%s",&c);
    int sz = strlen(c);
    int flag = 0;
    for(int i=0; i<sz/2; i++)
    {
        if(c[i]!=c[sz-i-1]) flag = 1;
    }
    
    if(flag ==0) printf("YES\n");
    else printf("NO\n");
    return 0;
}