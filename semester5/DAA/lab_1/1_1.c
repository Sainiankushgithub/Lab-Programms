#include <stdio.h>
#include <stdlib.h>

void findSecondSmallestAndLargest(int arr[], int n, int *secondSmallest, int *secondLargest) {
    int firstSmallest, firstLargest;
    firstSmallest = firstLargest = arr[0];
    *secondSmallest = *secondLargest = arr[1];

    // Traverse the array to find the first and second smallest and largest elements
    for (int i = 1; i < n; i++) {
        if (arr[i] < firstSmallest) {
            *secondSmallest = firstSmallest;
            firstSmallest = arr[i];
        } else if (arr[i] < *secondSmallest && arr[i] != firstSmallest) {
            *secondSmallest = arr[i];
        }

        if (arr[i] > firstLargest) {
            *secondLargest = firstLargest;
            firstLargest = arr[i];
        } else if (arr[i] > *secondLargest && arr[i] != firstLargest) {
            *secondLargest = arr[i];
        }
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
    if (!arr) {
        perror("Memory allocation failed");
        fclose(sourceFile);
        return 1;
    }

    for (int i = 0; i < n; i++) {
        fscanf(sourceFile, "%d", &arr[i]);
    }
    fclose(sourceFile);

    if (n < 2) {
        printf("Array should have at least two elements\n");
        free(arr);
        return 1;
    }

    int secondSmallest, secondLargest;
    findSecondSmallestAndLargest(arr, n, &secondSmallest, &secondLargest);

    printf("Second smallest element: %d\n", secondSmallest);
    printf("Second largest element: %d\n", secondLargest);

    free(arr);
    return 0;
}
