#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Stack {
    int top;
    unsigned capacity;
    char *array;
};
struct Stack *createStack(unsigned capacity) {
    struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
    stack->top = -1;
    stack->capacity = capacity;
    stack->array = (char *)malloc(stack->capacity * sizeof(char));
    return stack;
}
int isFull(struct Stack *stack) {
    return stack->top == stack->capacity - 1;
}
int isEmpty(struct Stack *stack) {
    return stack->top == -1;
}
void push(struct Stack *stack, char op) {
    if (isFull(stack)) {
        printf("Stack overflow. Cannot push %c onto the stack.\n", op);
        return;
    }
    stack->array[++stack->top] = op;
}
char pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow. Cannot pop from an empty stack.\n");
        return '\0';
    }
    return stack->array[stack->top--];
}
int getPrecedence(char op) {
    if (op == '^')
        return 3;
    else if (op == '*' || op == '/')
        return 2;
    else if (op == '+' || op == '-')
        return 1;
    else
        return -1;
}
void infixToPostfix(char *infix) {
    struct Stack *stack = createStack(strlen(infix));
    int i, j;
    char postfix[strlen(infix)];

    for (i = 0, j = -1; infix[i]; ++i) {
        if ((infix[i] >= 'a' && infix[i] <= 'z') || (infix[i] >= 'A' && infix[i] <= 'Z')) {
            postfix[++j] = infix[i];
        } else if (infix[i] == '(') {
            push(stack, infix[i]);
        } else if (infix[i] == ')') {
            while (!isEmpty(stack) && stack->array[stack->top] != '(') {
                postfix[++j] = pop(stack);
            }
            if (!isEmpty(stack) && stack->array[stack->top] == '(') {
                pop(stack);
            }
        } else {
            while (!isEmpty(stack) && getPrecedence(infix[i]) <= getPrecedence(stack->array[stack->top])) {
                postfix[++j] = pop(stack);
            }
            push(stack, infix[i]);
        }
    }
    while (!isEmpty(stack)) {
        postfix[++j] = pop(stack);
    }

    postfix[++j] = '\0';
    printf("Postfix expression: %s\n", postfix);
    free(stack->array);
    free(stack);
}

int main() {
    char infix[100];

    printf("Enter infix expression: ");
    scanf("%[^\n]s", infix);

    infixToPostfix(infix);

    return 0;
}
