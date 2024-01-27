#include<stdio.h>

int main(){
    int c;
    scanf("%d",&c);
    c/=10;
    c/=10;
    c/=10;
   if(c%2==0) printf("EVEN\n");
   else printf("ODD\n");
    return 0;
}