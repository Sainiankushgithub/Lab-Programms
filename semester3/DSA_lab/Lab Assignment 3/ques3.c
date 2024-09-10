#include <stdio.h>

#define MAX_DEGREE 100

// Function to add two polynomials
void addPolynomials(int poly1[], int poly2[], int result[], int degree1, int degree2) {
    int maxDegree = (degree1 > degree2) ? degree1 : degree2;
    
    for (int i = 0; i <= maxDegree; i++) {
        result[i] = poly1[i] + poly2[i];
    }
}

// Function to display a polynomial
void displayPolynomial(int poly[], int degree) {
    for (int i = degree; i >= 0; i--) {
        if (poly[i] != 0) {
            printf("%dx^%d ", poly[i], i);
            if (i != 0) {
                printf("+ ");
            }
        }
    }
    printf("\n");
}

int main() {
    int degree1, degree2;
    int poly1[MAX_DEGREE + 1] = {0}; // Initialize arrays with zeros
    int poly2[MAX_DEGREE + 1] = {0};
    int result[MAX_DEGREE + 1] = {0};
    
    printf("Enter the degree of polynomial 1: ");
    scanf("%d", &degree1);
    printf("Enter the coefficients of polynomial 1:\n");
    for (int i = degree1; i >= 0; i--) {
        scanf("%d", &poly1[i]);
    }
    
    printf("Enter the degree of polynomial 2: ");
    scanf("%d", &degree2);
    printf("Enter the coefficients of polynomial 2:\n");
    for (int i = degree2; i >= 0; i--) {
        scanf("%d", &poly2[i]);
    }
    
    addPolynomials(poly1, poly2, result, degree1, degree2);
    
    printf("Polynomial 1: ");
    displayPolynomial(poly1, degree1);
    
    printf("Polynomial 2: ");
    displayPolynomial(poly2, degree2);
    
    printf("Sum of the two polynomials: ");
    displayPolynomial(result, (degree1 > degree2) ? degree1 : degree2);
    
    return 0;
}




