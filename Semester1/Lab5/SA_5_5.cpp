// WAP TO ADD TWO MATRICES AND DISPLAY IT
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count1=0;
    int count2=0;
    int row,column;
    printf("Must remeber that rows and columns remain same for both matrix\n");
    printf("Enter the number of rows\n");
    scanf("%d",&row);
    printf("Enter the number of column\n");
    scanf("%d",&column);
    int mat1[row][column];
    int mat2[row][column];
    int add[row][column];
    printf("Enter the number of elements for first row of the first matrix\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
         count1++;
        if(count1<row)
        {
            printf("Enter the next row elements\n");
        }
    }
    printf("Enter the number of elements for first row of the second matrix\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
         count2++;
        if(count2<row)
        {
            printf("Enter the next row elements\n");
        }
    }
     printf("Displaying the sum of the two matrix\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            add[i][j]=mat1[i][j]+mat2[i][j];
            printf("%d",add[i][j]);
            printf("\t");
        }
        printf("\n");
    }
return 0;
}