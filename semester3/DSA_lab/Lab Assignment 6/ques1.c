#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5
struct Stack {
    int arr[MAX_SIZE];
    int top;
};
void initializeStack(struct Stack *s) {
    s->top = -1;
}
int isEmpty(struct Stack *s) {
    return (s->top == -1);
}
int isFull(struct Stack *s) {
    return (s->top == MAX_SIZE - 1);
}
void push(struct Stack *s, int data) {
    if (isFull(s)) {
        printf("Stack overflow. Cannot push %d onto the stack.\n", data);
        return;
    }
    s->arr[++s->top] = data;
    printf("%d pushed onto the stack.\n", data);
}
void pop(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack underflow. Cannot pop from an empty stack.\n");
        return;
    }
    printf("%d popped from the stack.\n", s->arr[s->top--]);
}
void displayStack(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = 0; i <= s->top; i++) {
        printf("%d ", s->arr[i]);
    }
    printf("\n");
}
void displayMenu() {
    printf("\nMenu:\n");
    printf("a. Push\n");
    printf("b. Pop\n");
    printf("c. Check if the stack is empty\n");
    printf("d. Check if the stack is full\n");
    printf("e. Display stack elements\n");
    printf("f. Exit\n");
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
                if (isFull(&stack)) {
                    printf("Stack is full.\n");
                } else {
                    printf("Stack is not full.\n");
                }
                break;
            case 'e':
                displayStack(&stack);
                break;
            case 'f':
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 'f');

    return 0;
}
