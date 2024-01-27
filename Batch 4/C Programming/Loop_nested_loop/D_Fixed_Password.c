#include<stdio.h>

int main(){
    int t;
    while (scanf("%d",&t)!=1999)
    {
        if(t==1999)
        {
            printf("Correct\n");
            return 0;
        } 
        else printf("Wrong\n");
    }
    
    return 0;
}