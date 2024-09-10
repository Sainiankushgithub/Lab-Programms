#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

struct Node* Create_list(int x) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;

    if (head == NULL) {
        head = temp;
    } else {
        struct Node* curr = head;
        while (curr->next != NULL) {
            curr = curr->next;
        }
        curr->next = temp;
    }

    return head;
}

void countFrequency() {
    struct Node* current = head;

    while (current != NULL) {
        if (current->data != -1) {
            int count = 1;
            struct Node* head1 = current->next;
            while (head1 != NULL) {
                if (head1->data == current->data) {
                    count++;
                    head1->data = -1;
                }
                head1 = head1->next;
            }
            printf("Element %d occurs %d times.\n", current->data, count);
        }
        current = current->next;
    }
}

void display() {
    struct Node* current = head;

    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    int node;
    printf("Enter the number of nodes:\n");
    scanf("%d", &node);
    printf("Enter the data for each node:\n");

    for (int i = 0; i < node; i++) {
        int x;
        scanf("%d", &x);
        head = Create_list(x);
    }

    printf("Displaying your data:\n");
    display();

    printf("Counting occurrences:\n");
    countFrequency();
   
return 0;
}