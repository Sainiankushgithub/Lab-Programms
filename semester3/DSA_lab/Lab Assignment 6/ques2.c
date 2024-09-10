#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
struct Stack {
    struct Node *top;
};
void initializeStack(struct Stack *s) {
    s->top = NULL;
}
int isEmpty(struct Stack *s) {
    return (s->top == NULL);
}
void push(struct Stack *s, int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = s->top;
    s->top = newNode; 
    printf("%d pushed onto the stack.\n", data);
}
void pop(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack underflow. Cannot pop from an empty stack.\n");
        return;
    }
    struct Node *temp = s->top;
    s->top = s->top->next;
    printf("%d popped from the stack.\n", temp->data);
    free(temp);
}
void displayStack(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty.\n");
        return;
    }
    struct Node *current = s->top;
    printf("Stack elements: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}
void displayMenu() {
    printf("\nMenu:\n");
    printf("a. Push\n");
    printf("b. Pop\n");
    printf("c. Check if the stack is empty\n");
    printf("d. Display stack elements\n");
    printf("e. Exit\n");
}

int main() {
    struct Stack stack;
    initializeStack(&stack);

    char choice;
    int data;

    do {
        displayMenu();
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch (choice) {
            case 'a':
                printf("Enter the data to push: ");
                scanf("%d", &data);
                push(&stack, data);
                break;
            case 'b':
                pop(&stack);
                break;
            case 'c':
                if (isEmpty(&stack)) {
                    printf("Stack is empty.\n");
                } else {
                    printf("Stack is not empty.\n");
                }
                break;
            case 'd':
                displayStack(&stack);
                break;
            case 'e':
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 'e');

    return 0;
}
