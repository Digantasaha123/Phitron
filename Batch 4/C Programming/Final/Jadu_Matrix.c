#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    if (r != c){
         printf("NO\n");
         return 0;
    }
       
    int mat[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    int flag = 1;
    for (int i = 0; i < r; i++)
    {
        if(flag==0) break;
        for (int j = 0; j < c; j++)
        {
            if(i==j){
                if(mat[i][j]!=1) {
                    flag = 0;
                    break;
                }
            }
            else if(i+j == r -1)
            {
                if(mat[i][j]!=1) {
                    flag = 0;
                    break;
                }
            }
            else if(mat[i][j]!=0) {
                    flag = 0;
                    break;
                }
        }
    }
    if(flag) printf("YES\n");
    else printf("NO\n");
    return 0;
}