#include <stdio.h>
#include <stdlib.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0; // Not prime
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

// Function to calculate the sum of prime elements in an array
int sumOfPrimes(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        if (isPrime(arr[i])) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int)); // Allocate memory for the array
    printf("Enter the elements:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    int primeSum = sumOfPrimes(arr, n);
    printf("Sum of prime elements: %d\n", primeSum);

    free(arr); // Deallocate memory

    return 0;
}