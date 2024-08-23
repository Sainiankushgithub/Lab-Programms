//  WAP TO MULTIPLLY TWO MATRIX
#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the order of the matrix\n");
    scanf("%d%d",&r,&c);
    int mat1[r][c];
    int mat2[r][c];
    int mat3[r][c];
    printf("Enter the number of an elements for first matrix\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter the number of an elements for second matrix\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            int sum=0;
            for(int k=0;k<r;k++)
            {
                sum+=mat1[i][k]*mat2[k][j];
                mat3[i][j]=sum;
            }
        }
    }
    printf("Displaying your matrix\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",mat3[i][j]);
        }
        printf("\n");
    }
}