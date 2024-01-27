#include<stdio.h>

int main(){
    char C;
    scanf("%c",&C);
    if(C=='z') printf("a\n");
    else if (C=='Z') printf("A\n");
    else 
    {   C++;
         printf("%c",C);
    }
    return 0;
}