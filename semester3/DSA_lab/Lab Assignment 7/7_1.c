#include<stdio.h>
#include<stdlib.h>
#define cap 5

struct Queue
{
    int front;
    int rear;
    int que[cap];
} q;

void Enqueue(int x)
{
    if (q.rear == cap - 1)
    {
        printf("Queue is full. Cannot enqueue.\n");
    }
    else
    {
        if (q.front == -1)
            q.front = 0;

        q.rear++;
        q.que[q.rear] = x;
        printf("Enqueued %d to the queue.\n", x);
    }
}

void Dequeue()
{
    if (q.front == -1)
    {
        printf("Queue is empty. Cannot dequeue.\n");
    }
    else
    {
        int removed_item = q.que[q.front];
        printf("Dequeued %d from the queue.\n", removed_item);

        if (q.front == q.rear)
        {
            q.front = q.rear = -1;
        }
        else
        {
            q.front++;
        }
    }
}

void Traverse()
{
    if (q.front == -1)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("Queue elements:");
        for (int i = q.front; i <= q.rear; i++)
        {
            printf(" %d", q.que[i]);
        }
        printf("\n");
    }
}

int IsEmpty()
{
    return (q.front == -1);
}

int IsFull()
{
    return (q.rear == cap - 1);
}

int main()
{
    q.front = -1;
    q.rear = -1;

    int choice, item;

    do
    {
        printf("\nMenu:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Traverse\n");
        printf("4. IsEmpty\n");
        printf("5. IsFull\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element to enqueue: ");
            scanf("%d", &item);
            Enqueue(item);
            break;

        case 2:
            Dequeue();
            break;

        case 3:
            Traverse();
            break;

        case 4:
            if (IsEmpty())
            {
                printf("Queue is empty.\n");
            }
            else
            {
                printf("Queue is not empty.\n");
            }
            break;

        case 5:
            if (IsFull())
            {
                printf("Queue is full.\n");
            }
            else
            {
                printf("Queue is not full.\n");
            }
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
