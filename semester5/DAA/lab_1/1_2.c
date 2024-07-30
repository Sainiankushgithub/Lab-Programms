#include <stdio.h>
#include <stdlib.h>

void calculatePrefixSum(int arr[], int prefixSum[], int n) {
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <source_file>\n", argv[0]);
        return 1;
    }

    char *sourceFileName = argv[1];
    FILE *sourceFile = fopen(sourceFileName, "r");
    if (!sourceFile) {
        perror("Error opening source file");
        return 1;
    }

    int n;
    fscanf(sourceFile, "%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    int *prefixSum = (int *)malloc(n * sizeof(int));
    if (!arr || !prefixSum) {
        perror("Memory allocation failed");
        fclose(sourceFile);
        return 1;
    }

    for (int i = 0; i < n; i++) {
        fscanf(sourceFile, "%d", &arr[i]);
    }
    fclose(sourceFile);

    calculatePrefixSum(arr, prefixSum, n);

    printf("Input Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Prefix Sum Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", prefixSum[i]);
    }
    printf("\n");

    free(arr);
    free(prefixSum);
    return 0;
}
