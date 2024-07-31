#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Recursive function to build binary representation
void convertBinary(int num, char *str, int index) {
    if (num < 2) {
        str[index] = '0' + num;
        return;
    }
    convertBinary(num / 2, str, index - 1);
    str[index] = '0' + (num % 2);
}

// Function to initialize the string and call convertBinary
void getBinaryString(int num, char *str, int bitSize) {
    // Initialize the string with '0'
    memset(str, '0', bitSize);
    str[bitSize] = '\0'; // Null-terminate the string

    // Call recursive function
    convertBinary(num, str, bitSize - 1);
}

int main() {
    const int bitSize = 16; // 16-bit representation
    char str[bitSize + 1]; // +1 for null terminator

    int num;
    printf("Enter the number to convert it to binary: ");
    scanf("%d", &num);

    // Convert number to a 16-bit binary representation
    getBinaryString(num, str, bitSize);

    // Convert binary string to integer (correct usage)
    int result = (int)strtol(str, NULL, 2);

    printf("Binary representation (16-bit): %s\n", str);
    printf("Binary as integer: %d\n", result);

    return 0;
}
