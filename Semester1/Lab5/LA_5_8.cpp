// WAP TO FIND THE TRANSPOSE OF A GIVEN MATRIX
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,column;
    int count=0;
    printf("Enter the order of the matrix\n");
    scanf("%d %d",&row,&column);
    int mat[row][column];
    if(row==column)
    {
    printf("Enter the elements of the first row of given order matrix\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d",&mat[i][j]);
        }
        count++;
        if(count<row)
        {
            printf("Enter the elements for next row\n");
        }
    }
    printf("This is your entered matrix\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("%d",mat[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    printf("\nThis is your transpose of the given matrix order %d %d \n",row,column);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("%d",mat[j][i]);
            printf("\t");
        }
        printf("\n");
    }
    }
    else{
        printf("For transpose of the matirx \n Number of rows must be equal to the number of columns\nMake sure to enter equal number of rows and column\n");
    }
return 0;
}