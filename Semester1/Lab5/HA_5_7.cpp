// WAP TO FIND OUT 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,column;
    int count=1;
    printf("Enter the order of the matrix\n");
    scanf("%d %d",&row,&column);
    int mat1[row][column];
    int mat2[row][column];
    int sum=0;
    if(row=column)
    {
        int count1=0;
        printf("Enter the number of an elements for first row of the first matrix\n");
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                scanf("%d",&mat1[i][j]);
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
                printf("%d",mat1[i][j]);
                printf("\t");
            }
            printf("\n");
        }
    printf("Here rows and columns are changed\n");
            for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                printf("%d",mat1[j][i]);
                printf("\t");
            }
            printf("\n");
        }
         for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                mat2[i][j]=mat1[j][i];
            }
        }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                if(mat1[i][j]!=mat2[i][j])
                {
                    count++;
                    break;
                }
            }
        }
        if(count==1)
        {
            printf("Entered matrix mat1[%d][%d] is a symmetric matrix\n",row,column);
        }
        else
        {
            printf("Entered matrix mat1[%d][%d] is not a symmetric matrix\n",row,column);
        }
        }
    else 
    {
        printf("Make sure you have to entered number of rows equal to number of columns\ni.e row=column\n");
    }
    return 0;
}