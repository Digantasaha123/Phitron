#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a = n - 1;
    int b = 1;
    while(n--)
    {
        for(int i=0; i<a; i++) printf(" ");
        for(int j=b; j>=1; j--) printf("%d",j);
        printf("\n");
        a--;
        b++;


    }
    return 0;
}