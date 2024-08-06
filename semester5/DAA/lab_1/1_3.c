#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void createFile(const char* filename, int n);
void readFile(const char* filename, int* arr, int n);
int countDuplicates(int* arr, int n);
int findMostRepeating(int* arr, int n);

int main() {
    const char* filename = "numbers.txt";
    int n;

    // Input the size of the array
    printf("Enter how many numbers you want to read from the file: ");
    scanf("%d", &n);

    // Create file with n integers
    createFile(filename, n);

    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Read integers from the file
    readFile(filename, arr, n);

    // Display the content of the array
    printf("The content of the array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Perform operations
    int totalDuplicates = countDuplicates(arr, n);
    int mostRepeating = findMostRepeating(arr, n);

    // Output the results
    printf("Total number of duplicate values = %d\n", totalDuplicates);
    printf("The most repeating element in the array = %d\n", mostRepeating);

    // Free allocated memory
    free(arr);

    return 0;
}

void createFile(const char* filename, int n) {
    FILE* file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error! Could not open the file to write\n");
        exit(1);
    }

    srand(time(0)); // Seed the random number generator

    for (int i = 0; i < n; i++) {
        int randomNumber = rand() % 50; // Generate a random number between 0 and 49
        fprintf(file, "%d ", randomNumber);
    }

    fclose(file);
}

void readFile(const char* filename, int* arr, int n) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error! Could not open the file to read\n");
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        fscanf(file, "%d", &arr[i]);
    }

    fclose(file);
}

int countDuplicates(int* arr, int n) {
    int count = 0;
    int* freq = (int*)calloc(50, sizeof(int)); // Assume numbers are between 0 and 49

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    for (int i = 0; i < 50; i++) {
        if (freq[i] > 1) {
            count++;
        }
    }

    free(freq);
    return count;
}

int findMostRepeating(int* arr, int n) {
    int maxCount = 0;
    int mostRepeating = arr[0];
    int* freq = (int*)calloc(50, sizeof(int)); // Assume numbers are between 0 and 49

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    for (int i = 0; i < 50; i++) {
        if (freq[i] > maxCount) {
            maxCount = freq[i];
            mostRepeating = i;
        }
    }

    free(freq);
    return mostRepeating;
}
