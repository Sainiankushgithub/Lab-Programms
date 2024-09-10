#include <stdio.h>

// Structure to represent a complex number
struct ComplexNumber {
    float real;
    float imaginary;
};

// Function to add two complex numbers (call by value)
struct ComplexNumber addComplexNumbers(struct ComplexNumber num1, struct ComplexNumber num2) {
    struct ComplexNumber result;
    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;
    return result;
}

// Function to multiply two complex numbers (call by address)
void multiplyComplexNumbers(struct ComplexNumber *num1, struct ComplexNumber *num2, struct ComplexNumber *result) {
    result->real = num1->real * num2->real - num1->imaginary * num2->imaginary;
    result->imaginary = num1->real * num2->imaginary + num1->imaginary * num2->real;
}

int main() {
    struct ComplexNumber num1, num2, result;
    
    printf("Enter complex number 1: ");
    scanf("%f %f", &num1.real, &num1.imaginary);
    
    printf("Enter complex number 2: ");
    scanf("%f %f", &num2.real, &num2.imaginary);
    
    int choice;
    do {
        printf("\nMENU\n");
        printf("1. Addition\n");
        printf("2. Multiplication\n");
        printf("3. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                result = addComplexNumbers(num1, num2);
                printf("Sum=%.1f+%.1fi\n", result.real, result.imaginary);
                break;
            case 2:
                multiplyComplexNumbers(&num1, &num2, &result);
                printf("Product=%.1f+%.1fi\n", result.real, result.imaginary);
                break;
            case 3:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    } while (choice != 3);

    return 0;
}