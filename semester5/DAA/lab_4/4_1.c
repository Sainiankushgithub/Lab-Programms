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
void readData(struct person **students, int *n) {
  
}
void heapify(struct person *students, int n, int i, int mode) {
}

void createMinHeap(struct person *students, int n) {
    for (int i = n / 2 - 1; i >= 0; i--){
        heapify(students, n, i, 0);
    }
}

void createMaxHeap(struct person *students, int n) {
    for (int i = n / 2 - 1; i >= 0; i--){
        heapify(students, n, i, 1);
    }
}
void displayWeightOfYoungest(struct person *students, int n) {
    
    if (n > 0) {
        printf("Weight of youngest student: %.2f kg\n", students[0].weight * 0.453592); 
    }
}
void insertPerson(struct person **students, int *n){
}
void deleteOldest(struct person *students, int *n){
}
int main() {
    struct person *students = NULL;
    int n = 0, option;

    while (1) {
        printf("MAIN MENU (HEAP)\n");
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
                break;
            case 3:
                createMaxHeap(students, n);
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
                free(students);
                return 0;
            default:
                printf("Invalid option. Try again.\n");
        }
    }

    return 0;
}
