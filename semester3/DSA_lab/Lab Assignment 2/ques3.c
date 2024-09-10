#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

typedef struct {
    int row;
    int col;
    int value;
} Element;

void convertToSparse(Element matrix[MAX_ROWS][MAX_COLS], int numRows, int numCols, Element sparseMatrix[], int *numTerms) {
    *numTerms = 0;

    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            if (matrix[i][j].value != 0) {
                (*numTerms)++;
                sparseMatrix[*numTerms].row = i;
                sparseMatrix[*numTerms].col = j;
                sparseMatrix[*numTerms].value = matrix[i][j].value;
            }
        }
    }

    sparseMatrix[0].row = numRows;
    sparseMatrix[0].col = numCols;
    sparseMatrix[0].value = *numTerms;
}

int main() {
    int numRows, numCols;

    printf("Enter the number of rows: ");
    scanf("%d", &numRows);

    printf("Enter the number of columns: ");
    scanf("%d", &numCols);

    Element matrix[MAX_ROWS][MAX_COLS];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            scanf("%d", &matrix[i][j].value);
        }
    }

    Element sparseMatrix[MAX_ROWS * MAX_COLS];
    int numTerms;
    convertToSparse(matrix, numRows, numCols, sparseMatrix, &numTerms);

    printf("Sparse matrix in 3-tuple format:\n");
    for (int i = 0; i <= numTerms; i++) {
        printf("%d %d %d\n", sparseMatrix[i].row, sparseMatrix[i].col, sparseMatrix[i].value);
    }

    return 0;
}




