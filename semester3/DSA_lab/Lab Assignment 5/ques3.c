#include <stdio.h>
#include <stdlib.h>
struct Node {
    int row, col, value;
    struct Node* next;
};
struct Node* createNode(int row, int col, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->row = row;
    newNode->col = col;
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}
void displaySparseMatrix(struct Node* matrix[], int rows, int cols) {
    printf("Sparse Matrix:\n");
    
    for (int i = 0; i < rows; i++) {
        struct Node* current = matrix[i]->next;
        
        for (int j = 0; j < cols; j++) {
            if (current != NULL && current->col == j) {
                printf("%d ", current->value);
                current = current->next;
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows in the sparse matrix: ");
    scanf("%d", &rows);
    printf("Enter the number of columns in the sparse matrix: ");
    scanf("%d", &cols);
    struct Node* matrix[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = createNode(i, -1, -1); 
    }
    int value;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter the element at position (%d, %d): ", i, j);
            scanf("%d", &value);

            if (value != 0) {
                struct Node* newNode = createNode(i, j, value);
                newNode->next = matrix[i]->next;
                matrix[i]->next = newNode;
            }
        }
    }
    displaySparseMatrix(matrix, rows, cols);

    return 0;
}
