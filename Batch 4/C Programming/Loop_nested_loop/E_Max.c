#include<stdio.h>

int main(){
    int n;
    int t,x=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&t);
        if(x<t) x=t;

    }   
    printf("%d\n",x);
    return 0;
}