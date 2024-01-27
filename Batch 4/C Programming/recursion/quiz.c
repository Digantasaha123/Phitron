#include<stdio.h>
int count(int n)
{
   if (n == 0)
   {
      return 0;
   }
   else
   {
      return 1 + count(n / 10);
   }
}

int main(){
    int a;
    scanf("%d",&a);
    while(a--)
    printf("%d \n",count(a));
    return 0;
}