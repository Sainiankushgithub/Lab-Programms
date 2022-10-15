// WAP TO FIND OUT THE SUM OF ELEMENTS STIRED IN THE MATRIX
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,column;
    int sum=0;
    int count=0;
    printf("Enter the order of the matrix\n");
    scanf("%d %d",&row,&column);
    int mat[row][column];
    printf("Enter number of elements for first row\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d",&mat[i][j]);
        }
        if(count<row)
        {
            printf("Enter the number of elements for the next row\n");
        }
    }
    printf("Displaying your matrix\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("%d",mat[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            sum+=mat[i][j];
        }
    }
    printf("\nSum is %d",sum);
return 0;
}