#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

void createFile(const char* file1, int n) {
    FILE* file = fopen(file1, "w");
    if (file == NULL) {
        printf("Error! Could not open the file to write\n");
        exit(1);
    }

    srand(time(0)); 

    for (int i = 0; i < n; i++) {
        int randomNumber = rand() % 100; 
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

void findSecondSmallestAndLargest(const int* arr, int n, int* secondSmallest, int* secondLargest) {
    if (n < 2) {
        *secondSmallest = *secondLargest = INT_MIN;
        return;
    }

    int smallest = INT_MAX, largest = INT_MIN;
    *secondSmallest = *secondLargest = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            *secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < *secondSmallest && arr[i] != smallest) {
            *secondSmallest = arr[i];
        }

        if (arr[i] > largest) {
            *secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > *secondLargest && arr[i] != largest) {
            *secondLargest = arr[i];
        }
    }

    if (*secondSmallest == INT_MAX) *secondSmallest = INT_MIN;
    if (*secondLargest == INT_MAX) *secondLargest = INT_MIN;
}

int main() {
    const char* filename = "numbers.txt";
    int n = 10; 
    createFile(filename, n);

    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    readFile(filename, arr, n);

    int secondSmallest, secondLargest;
    findSecondSmallestAndLargest(arr, n, &secondSmallest, &secondLargest);

    if (secondSmallest == INT_MIN) {
        printf("Second smallest element does not exist.\n");
    } else {
        printf("Second smallest element: %d\n", secondSmallest);
    }

    if (secondLargest == INT_MIN) {
        printf("Second largest element does not exist.\n");
    } else {
        printf("Second largest element: %d\n", secondLargest);
    }

    free(arr);
    return 0;
}
