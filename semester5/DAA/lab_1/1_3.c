#include <stdio.h>
#include <stdlib.h>

// Function to count the number of duplicates
int countDuplicates(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                break; // To avoid counting multiple duplicates of the same value multiple times
            }
        }
    }
    return count;
}

// Function to find the most repeating element
int findMostRepeating(int arr[], int n) {
    int maxCount = 0;
    int mostRepeating = arr[0];
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            mostRepeating = arr[i];
        }
    }
    return mostRepeating;
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
    printf("Enter how many numbers you want to read from file: ");
    scanf("%d", &n);

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

    printf("The content of the array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int duplicateCount = countDuplicates(arr, n);
    int mostRepeatingElement = findMostRepeating(arr, n);

    printf("Total number of duplicate values = %d\n", duplicateCount);
    printf("The most repeating element in the array = %d\n", mostRepeatingElement);

    free(arr);
    return 0;
}
