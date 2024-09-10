#include <stdio.h>

// Function to compare two numbers using call by address
void compareNumbers(int *num1, int *num2) {
    if (*num1 < *num2) {
        printf("%d is smaller than %d\n", *num1, *num2);
    } else if (*num1 > *num2) {
        printf("%d is smaller than %d\n", *num2, *num1);
    } else {
        printf("Both numbers are equal\n");
    }
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    compareNumbers(&num1, &num2);

    return 0;
}