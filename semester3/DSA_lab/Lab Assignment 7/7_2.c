// Write a menu driven program in c language to implement linear queue operations such as Enqueue, Dequeue,  IsEmpty, Traverse using single linked list.
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next;
};
struct Queue
{
    struct Node*front;
    struct Node*Rear;
};
void enqueue(struct Queue *q, int data)
{
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (q->Rear == NULL)
    {
        q->front = q->Rear = newNode;
    }
    else
    {
        q->Rear->next = newNode;
        q->Rear = newNode;
    }

    printf("Enqueued element: %d\n", data);
}

int dequeue(struct Queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty. Cannot dequeue.\n");
        return -1;
    }

    struct Node *temp = q->front;
    int data = temp->data;

    q->front = q->front->next;

    if (q->front == NULL)
        q->Rear = NULL;

    free(temp);

    return data;
}

int isEmpty(struct Queue *q)
{
    return (q->front == NULL);
}

void traverse(struct Queue *q)
{
    struct Node *temp = q->front;

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
int main()
{
    struct Queue q;
    q.front=NULL;
    q.Rear=NULL;
    int choice, data;

    do
    {
        printf("\nQueue Operations Menu:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. IsEmpty\n");
        printf("4. Traverse\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter the data to enqueue: ");
                scanf("%d", &data);
                enqueue(&q, data);
                break;

            case 2:
                if (!isEmpty(&q))
                    printf("Dequeued element: %d\n", dequeue(&q));
                else
                    printf("Queue is empty.\n");
                break;

            case 3:
                if (isEmpty(&q))
                    printf("Queue is empty.\n");
                else
                    printf("Queue is not empty.\n");
                break;

            case 4:
                printf("Queue elements: ");
                traverse(&q);
                printf("\n");
                break;

            case 0:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 0);

    return 0;
}