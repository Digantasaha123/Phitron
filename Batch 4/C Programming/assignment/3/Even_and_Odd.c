#include<stdio.h>
void odd_even()
{
      int n;
    scanf("%d",&n);
    int arr[n];
    int ev =0, od =0;
   
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    } 
   
    for(int i=0; i<n; i++)
    {
        
        if(arr[i]%2==0) ev++;
        else od++;
    }
    printf("%d %d\n",ev,od);
} 
int main(){
  
    odd_even();
    
    return 0;
}