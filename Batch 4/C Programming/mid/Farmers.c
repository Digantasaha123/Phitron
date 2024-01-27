#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int a,b,d;
    scanf("%d %d %d",&a,&b,&d);
    printf("%d\n", d -(a*d)/((a+b)));
    }
    
    
    return 0;
}