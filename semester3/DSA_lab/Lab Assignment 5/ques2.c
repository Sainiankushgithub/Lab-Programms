#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
struct Node *insertAtBeginning(struct Node *last, int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = last->next;
    last->next = newNode;
    return last;
}

void displayList(struct Node *last) {
    if (last == NULL) {
        printf("Circular linked list is empty.\n");
        return;
    }

    struct Node *temp = last->next; 

    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != last->next);
    printf("\n");
}

int main() {
    struct Node *last = NULL; 
    int n, data;

    printf("Enter the number of elements in the circular linked list: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &data);

        if (last == NULL) {
            last = (struct Node *)malloc(sizeof(struct Node));
            last->data = data;
            last->next = last;
        } else {
            last = insertAtBeginning(last, data);
        }
    }
    printf("Circular linked list elements: ");
    displayList(last);

    return 0;
}
