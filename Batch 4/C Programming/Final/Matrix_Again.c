#include<stdio.h>

int main(){
    int r,c;
    scanf("%d %d",&r, &c);
    int mat[r][c];
     for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    for(int i=0; i<c; i++) printf("%d ",mat[r-1][i]);
    printf("\n");
    for(int i=0; i<r; i++) printf("%d ",mat[i][c-1]);
    return 0;
}