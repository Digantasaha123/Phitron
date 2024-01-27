#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
   while(t!=0)
   {
    for (int i=t; i>0; i--) printf("*");
    printf("\n");
    t--;
   }
    
    return 0;
}