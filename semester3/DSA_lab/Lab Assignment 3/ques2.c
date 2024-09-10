#include <stdio.h>

#define MAX_TERMS 100

typedef struct {
    int row;
    int col;
    int value;
} Element;

void addSparseMatrices(Element matrix1[], int numTerms1, Element matrix2[], int numTerms2, Element result[]) {
    int i = 0, j = 0, k = 0;
    
    while (i < numTerms1 && j < numTerms2) {
        if (matrix1[i].row < matrix2[j].row || (matrix1[i].row == matrix2[j].row && matrix1[i].col < matrix2[j].col)) {
            result[k] = matrix1[i];
            i++;
        } else if (matrix1[i].row > matrix2[j].row || (matrix1[i].row == matrix2[j].row && matrix1[i].col > matrix2[j].col)) {
            result[k] = matrix2[j];
            j++;
        } else {
            result[k] = matrix1[i];
            result[k].value += matrix2[j].value;
            i++;
            j++;
        }
        k++;
    }
    
    while (i < numTerms1) {
        result[k] = matrix1[i];
        i++;
        k++;
    }
    
    while (j < numTerms2) {
        result[k] = matrix2[j];
        j++;
        k++;
    }
}

int main() {
    int numRows, numCols;
    
    printf("Enter the number of rows: ");
    scanf("%d", &numRows);
    
    printf("Enter the number of columns: ");
    scanf("%d", &numCols);
    
    int numTerms1, numTerms2;
    
    printf("Enter the number of non-zero terms in matrix 1: ");
    scanf("%d", &numTerms1);
    
    Element matrix1[MAX_TERMS];
    printf("Enter the non-zero elements of matrix 1 in 3-tuple format (row column value):\n");
    for (int i = 0; i < numTerms1; i++) {
        scanf("%d %d %d", &matrix1[i].row, &matrix1[i].col, &matrix1[i].value);
    }
    
    printf("Enter the number of non-zero terms in matrix 2: ");
    scanf("%d", &numTerms2);
    
    Element matrix2[MAX_TERMS];
    printf("Enter the non-zero elements of matrix 2 in 3-tuple format (row column value):\n");
    for (int i = 0; i < numTerms2; i++) {
        scanf("%d %d %d", &matrix2[i].row, &matrix2[i].col, &matrix2[i].value);
    }
    
    Element result[MAX_TERMS];
    addSparseMatrices(matrix1, numTerms1, matrix2, numTerms2, result);
    
    printf("Resultant sparse matrix in 3-tuple format:\n");
    for (int i = 0; i < numTerms1 + numTerms2; i++) {
        printf("%d %d %d\n", result[i].row, result[i].col, result[i].value);
    }
    
    return 0;
}


