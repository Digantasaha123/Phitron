#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int array[n];
       for(int i=0; i<n; i++) scanf("%d",&array[i]);
        int x,flag =0;
        scanf("%d",&x);

        for(int i=0; i<n; i++) {
            if(array[i]==x){
                flag = 1;
                
            }
        }
        if(flag == 0) printf("NO\n");
        else printf("YES\n");
        
    }
    return 0;
}