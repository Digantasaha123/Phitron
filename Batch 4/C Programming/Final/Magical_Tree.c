#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int line = (n+1)/2 + 5;
    int star = 1;
    int space = line -1;
    for (int i = 0; i < line; i++)
    {
        for(int j =space-1; j>=0; j--) printf(" "); 
        space--;
        for (int  j = 0; j<star ; j++) printf("*"); 
        star+=2;
        printf("\n");
    }
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++) printf(" ");
        for(int j=0; j<n; j++) printf("*");
        printf("\n");

    }


    return 0;
}