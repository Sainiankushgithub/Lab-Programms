#include <stdio.h>
#include <stdlib.h>
int main()
{
    int row, column, nonzero = 0, zero = 0;
    printf("Enter the matrix dimenion :\n");
    scanf("%d%d", &row, &column);
    int mat[row][column];
    printf("Enter the Matrix elements :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Dispalying your Matrix :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d\t", mat[i][j]);
            if (mat[i][j] == 0)
            {
                zero++;
            }
            else
            {
                nonzero++;
            }
        }
        printf("\n");
    }
    if (nonzero > zero)
    {
        printf("Matrix is not a sparse Matrix :\n");
    }
    else
    {
        int sparse[nonzero][3], k = 0;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                if (mat[i][j] != 0)
                {
                    sparse[k][0] = i;
                    sparse[k][1] = j;
                    sparse[k][2] = mat[i][j];
                    k++;
                }
            }
        }
        printf("Displaying your Sparse Matrix :\n");
        for (int i = 0; i < nonzero; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("%d\t", sparse[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}