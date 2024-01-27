#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int pos,val;
    scanf("%d %d",&pos,&val);
    arr[pos]=val;
    for(int i=n-1; i>=0; i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}