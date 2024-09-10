#include <stdio.h>

#define MAX_TERMS 100

typedef struct {
    int row;
    int col;
    int value;
} Element;

void transposeSparseMatrix(Element matrix[], int numTerms, Element transposedMatrix[]) {
    int numRows, numCols, numValues;

    // Determine the dimensions of the original matrix
    numRows = matrix[0].row;
    numCols = matrix[0].col;
    numValues = matrix[0].value;

    transposedMatrix[0].row = numCols;
    transposedMatrix[0].col = numRows;
    transposedMatrix[0].value = numValues;

    if (numValues > 0) {
        int rowTerms[numCols];
        int startingPos[numCols];

        for (int i = 0; i < numCols; i++) {
            rowTerms[i] = 0;
        }

        for (int i = 1; i <= numValues; i++) {
            rowTerms[matrix[i].col]++;
        }

        startingPos[0] = 1;

        for (int i = 1; i < numCols; i++) {
            startingPos[i] = startingPos[i - 1] + rowTerms[i - 1];
        }

        for (int i = 1; i <= numValues; i++) {
            int j = startingPos[matrix[i].col]++;
            transposedMatrix[j].row = matrix[i].col;
            transposedMatrix[j].col = matrix[i].row;
            transposedMatrix[j].value = matrix[i].value;
        }
    }
}

int main() {
    int numRows, numCols;

    printf("Enter the number of rows: ");
    scanf("%d", &numRows);

    printf("Enter the number of columns: ");
    scanf("%d", &numCols);

    int numTerms;

    printf("Enter the number of non-zero terms: ");
    scanf("%d", &numTerms);

    Element matrix[MAX_TERMS];
    printf("Enter the non-zero elements of the matrix in 3-tuple format (row column value):\n");
    for (int i = 1; i <= numTerms; i++) {
        scanf("%d %d %d", &matrix[i].row, &matrix[i].col, &matrix[i].value);
    }

    Element transposedMatrix[MAX_TERMS];
    transposeSparseMatrix(matrix, numTerms, transposedMatrix);

    printf("Transposed sparse matrix in 3-tuple format:\n");
    for (int i = 0; i <= numTerms; i++) {
        printf("%d %d %d\n", transposedMatrix[i].row, transposedMatrix[i].col, transposedMatrix[i].value);
    }

    return 0;
}





