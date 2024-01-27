#include<stdio.h>
#include<string.h>
int is_palindrome(char s[])
{
        int n = strlen(s)-1;
        for(int i=0; i<strlen(s)/2; i++)
        {
            if(s[i]!=s[n]) return 0;
            n--;
        }
        return 1;
} 
int main(){
    char s[1000];
    scanf("%s",s);
   if(is_palindrome(s)) printf("Palindrome\n");
   else printf("Not Palindrome\n");
    return 0;
}