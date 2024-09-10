#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person {
    int id;
    char *name;
    int age;
    int height;
    int weight;
};

void readData(struct person **students, int *n);
void createMinHeap(struct person *students, int n);
void createMaxHeap(struct person *students, int n);
void displayWeightOfYoungest(struct person *students, int n);
void insertPerson(struct person **students, int *n);
void deleteOldest(struct person *students, int *n);
void heapify(struct person *students, int n, int i, int mode);

void readData(struct person **students, int *n) {
    printf("Enter the number of students: ");
    scanf("%d", n);
    *students = (struct person*)malloc(*n * sizeof(struct person));

    for (int i = 0; i < *n; i++) {
        (*students)[i].name = (char*)malloc(50 * sizeof(char));
        printf("Enter details for student %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &(*students)[i].id);
        printf("Name: ");
        scanf("%s", (*students)[i].name);
        printf("Age: ");
        scanf("%d", &(*students)[i].age);
        printf("Height (cm): ");
        scanf("%d", &(*students)[i].height);
        printf("Weight (lbs): ");
        scanf("%d", &(*students)[i].weight);
    }
}

void heapify(struct person *students, int n, int i, int mode) {
    int largestOrSmallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (mode == 0) {  // Min-heap based on age
        if (left < n && students[left].age < students[largestOrSmallest].age) {
            largestOrSmallest = left;
        }
        if (right < n && students[right].age < students[largestOrSmallest].age) {
            largestOrSmallest = right;
        }
    } else {  // Max-heap based on weight
        if (left < n && students[left].weight > students[largestOrSmallest].weight) {
            largestOrSmallest = left;
        }
        if (right < n && students[right].weight > students[largestOrSmallest].weight) {
            largestOrSmallest = right;
        }
    }

    if (largestOrSmallest != i) {
        struct person temp = students[i];
        students[i] = students[largestOrSmallest];
        students[largestOrSmallest] = temp;
        heapify(students, n, largestOrSmallest, mode);
    }
}

void createMinHeap(struct person *students, int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(students, n, i, 0);  // Min-heap based on age
    }
}

void createMaxHeap(struct person *students, int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(students, n, i, 1);  // Max-heap based on weight
    }
}

void displayWeightOfYoungest(struct person *students, int n) {
    if (n > 0) {
        printf("Weight of the youngest student: %.2f kg\n", students[0].weight * 0.453592);  // Convert lbs to kg
    }
}

void insertPerson(struct person **students, int *n) {
    (*n)++;
    *students = (struct person*)realloc(*students, (*n) * sizeof(struct person));
    (*students)[*n - 1].name = (char*)malloc(50 * sizeof(char));

    printf("Enter details for the new person:\n");
    printf("ID: ");
    scanf("%d", &(*students)[*n - 1].id);
    printf("Name: ");
    scanf("%s", (*students)[*n - 1].name);
    printf("Age: ");
    scanf("%d", &(*students)[*n - 1].age);
    printf("Height (cm): ");
    scanf("%d", &(*students)[*n - 1].height);
    printf("Weight (lbs): ");
    scanf("%d", &(*students)[*n - 1].weight);

    createMinHeap(*students, *n);  // Re-create the min-heap after inserting
}

void deleteOldest(struct person *students, int *n) {
    if (*n == 0) {
        printf("Heap is empty.\n");
        return;
    }

    // Find the oldest person
    int oldestIndex = 0;
    for (int i = 1; i < *n; i++) {
        if (students[i].age > students[oldestIndex].age) {
            oldestIndex = i;
        }
    }

    printf("Deleting oldest person: %s (Age: %d)\n", students[oldestIndex].name, students[oldestIndex].age);

    // Replace the oldest with the last person and reduce the heap size
    students[oldestIndex] = students[*n - 1];
    (*n)--;

    createMinHeap(students, *n);  // Re-create the min-heap after deleting
}

int main() {
    struct person *students = NULL;
    int n = 0, option;

    while (1) {
        printf("\nMAIN MENU (HEAP)\n");
        printf("1. Read Data\n");
        printf("2. Create a Min-heap based on the age\n");
        printf("3. Create a Max-heap based on the weight\n");
        printf("4. Display weight of the youngest person\n");
        printf("5. Insert a new person into the Min-heap\n");
        printf("6. Delete the oldest person\n");
        printf("7. Exit\n");
        printf("Enter option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                readData(&students, &n);
                break;
            case 2:
                createMinHeap(students, n);
                printf("Min-heap created based on age.\n");
                break;
            case 3:
                createMaxHeap(students, n);
                printf("Max-heap created based on weight.\n");
                break;
            case 4:
                displayWeightOfYoungest(students, n);
                break;
            case 5:
                insertPerson(&students, &n);
                break;
            case 6:
                deleteOldest(students, &n);
                break;
            case 7:
                for (int i = 0; i < n; i++) {
                    free(students[i].name);
                }
                free(students);
                return 0;
            default:
                printf("Invalid option. Try again.\n");
        }
    }

    return 0;
}
