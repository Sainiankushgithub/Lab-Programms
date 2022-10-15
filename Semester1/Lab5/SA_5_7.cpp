// WAP TO PRINT THE TRCES(SUM  OF THE DIAGNOL OF THE MATRIX)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,column;
    printf("Enter the order of the matrix\n");
    scanf("%d %d",&row,&column);
    int mat[row][column];
    int sum=0;
    int sum1=0;
    if(row=column)
    {
        int count1=0;
        printf("Enter the number of an elements for first row of the first matrix\n");
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                scanf("%d",&mat[i][j]);
            }
            if(count1<row)
            {
                printf("Enter the number of an elements for second row\n");
            }
        }
        printf("Your matrix\n");
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                printf("%d",mat[i][j]);
                printf("\n");
            }
        }
        for(int i=0;i<row;i++)
        {
                sum=sum+mat[i][i];
                sum1=sum1+mat[i][row-i-1];
        }
        printf("The sum of the main diagnol matrix is %d",sum);
        printf("\nThe sum of the off diagnol matrix is %d",sum1);
    }
    else 
    {
        printf("Make sure you have to entered number of rows equal to number of columns\ni.e row=column\n");
    }
return 0;
}