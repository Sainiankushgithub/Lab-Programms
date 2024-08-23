/*Wap to multiply 2 matrices and give r*/
#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the order of matrix\n");
    scanf("%d%d",&r,&c);
    int mat1[r][c];
    printf("Enter the numbers of an elements\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Displaying the matrix\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of a matrix\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",mat1[j][i]);
        }
        printf("\n");
    }
    return 0;
}