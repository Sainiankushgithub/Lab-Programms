#include <stdio.h>


void insertElement(int arr[], int *n, int element, int position) {
    if (*n >= position) {
        for (int i = *n; i >= position; i--) {
            arr[i] = arr[i - 1];
        }
        arr[position - 1] = element;
        (*n)++;
        printf("Element %d inserted at position %d.\n", element, position);
    } else {
        printf("Invalid position for insertion.\n");
    }
}


void deleteElement(int arr[], int *n, int position) {
    if (*n > 0 && position >= 1 && position <= *n) {
        for (int i = position - 1; i < *n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        (*n)--;
        printf("Element at position %d deleted.\n", position);
    } else {
        printf("Invalid position for deletion.\n");
    }
}


int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i + 1; 
        }
    }
    return -1; 
}


void traverseArray(int arr[], int n) {
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, choice, element, position, target, result;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert element\n");
        printf("2. Delete element\n");
        printf("3. Linear search\n");
        printf("4. Traverse array\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter element to insert: ");
                scanf("%d", &element);
                printf("Enter position to insert: ");
                scanf("%d", &position);
                insertElement(arr, &n, element, position);
                break;
            case 2:
                printf("Enter position to delete: ");
                scanf("%d", &position);
                deleteElement(arr, &n, position);
                break;
            case 3:
                printf("Enter element to search: ");
                scanf("%d", &target);
                result = linearSearch(arr, n, target);
                if (result != -1) {
                    printf("Element found at position %d.\n", result);
                } else {
                    printf("Element not found in the array.\n");
                }
                break;
            case 4:
                traverseArray(arr, n);
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    
    return 0;
}
