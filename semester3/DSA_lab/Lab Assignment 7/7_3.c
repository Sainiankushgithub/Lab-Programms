#include <stdio.h>
#define MAX_SIZE 5
struct CircularQueue {
    int front, rear;
    int array[MAX_SIZE];
};
void initializeQueue(struct CircularQueue *cq) {
    cq->front = cq->rear = -1;
}
int isEmpty(struct CircularQueue *cq) {
    return (cq->front == -1);
}
int isFull(struct CircularQueue *cq) {
    return ((cq->rear + 1) % MAX_SIZE == cq->front);
}
void enqueue(struct CircularQueue *cq, int data) {
    if (isFull(cq)) {
        printf("Queue is full. Cannot enqueue.\n");
        return;
    }
    if (isEmpty(cq)) {
        cq->front = cq->rear = 0;
    } else {
        cq->rear = (cq->rear + 1) % MAX_SIZE;
    }
    cq->array[cq->rear] = data;
    printf("%d enqueued to the queue.\n", data);
}
void dequeue(struct CircularQueue *cq) {
    if (isEmpty(cq)) {
        printf("Queue is empty. Cannot dequeue.\n");
        return;
    }
    if (cq->front == cq->rear) {
        cq->front = cq->rear = -1;
    } else {
        cq->front = (cq->front + 1) % MAX_SIZE;
    }
}
void traverse(struct CircularQueue *cq) {
    if (isEmpty(cq)) {
        printf("Queue is empty.\n");
        return;
    }
    int i = cq->front;
    printf("Queue elements: ");
    do {
        printf("%d ", cq->array[i]);
        i = (i + 1) % MAX_SIZE;
    } while (i != (cq->rear + 1) % MAX_SIZE);
    printf("\n");
}
void displayMenu() {
    printf("\nMenu:\n");
    printf("1. Enqueue\n");
    printf("2. Dequeue\n");
    printf("3. IsEmpty\n");
    printf("4. IsFull\n");
    printf("5. Traverse\n");
    printf("6. Exit\n");
}

int main() {
    struct CircularQueue cq;
    initializeQueue(&cq);

    int choice, data;

    do {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the data to enqueue: ");
                scanf("%d", &data);
                enqueue(&cq, data);
                break;
            case 2:
                dequeue(&cq);
                break;
            case 3:
                if (isEmpty(&cq)) {
                    printf("Queue is empty.\n");
                } else {
                    printf("Queue is not empty.\n");
                }
                break;
            case 4:
                if (isFull(&cq)) {
                    printf("Queue is full.\n");
                } else {
                    printf("Queue is not full.\n");
                }
                break;
            case 5:
                traverse(&cq);
                break;
            case 6:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 6);

    return 0;
}
