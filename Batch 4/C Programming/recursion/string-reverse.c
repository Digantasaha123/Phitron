#include<stdio.h>
int str_length(char str[], int i)
{
    if(str[i]=='\0') return 0;
    int l = str_length(str, i+1);
    return l + 1;

}
int main(){
    char str[100];
    scanf("%s",str);
    printf("%d\n",str_length(str, 0));
    return 0;
} 