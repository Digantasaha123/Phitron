#include<stdio.h>
#include<string.h>
int main(){

    char first[10];
    char second[10];
    gets(first);
     gets(second);
    printf("%d %d\n",strlen(first), strlen(second));
    printf("%s%s\n",first,second);
    char temp = first[0];
    first[0] = second[0];
    second[0]= temp;
    printf("%s %s\n",first,second);
    return 0;
}