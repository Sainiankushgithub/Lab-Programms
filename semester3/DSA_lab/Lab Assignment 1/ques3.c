#include <stdio.h>
#include <string.h>

// Define the structure for employee information
struct Employee {
    int empId;
    char name[50];
    char designation[50];
    float basicSalary;
    float hraPercentage;
    float daPercentage;
};

// Function to calculate the gross salary
float calculateGrossSalary(struct Employee *emp) {
    float hraAmount = (emp->hraPercentage / 100) * emp->basicSalary;
    float daAmount = (emp->daPercentage / 100) * emp->basicSalary;
    return emp->basicSalary + hraAmount + daAmount;
}

int main() {
    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n]; // Array of structures

    // Input employee information
    for (int i = 0; i < n; ++i) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Emp-id: ");
        scanf("%d", &employees[i].empId);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Designation: ");
        scanf("%s", employees[i].designation);
        printf("Basic Salary: ");
        scanf("%f", &employees[i].basicSalary);
        printf("HRA Percentage: ");
        scanf("%f", &employees[i].hraPercentage);
        printf("DA Percentage: ");
        scanf("%f", &employees[i].daPercentage);
    }

    // Display employee information with gross salary
    printf("\nEmployee Information with Gross Salary:\n");
    for (int i = 0; i < n; ++i) {
        printf("Employee %d\n", i + 1);
        printf("Emp-id: %d\n", employees[i].empId);
        printf("Name: %s\n", employees[i].name);
        printf("Designation: %s\n", employees[i].designation);
        printf("Gross Salary: %.2f\n", calculateGrossSalary(&employees[i]));
        printf("\n");
    }

    return 0;
}