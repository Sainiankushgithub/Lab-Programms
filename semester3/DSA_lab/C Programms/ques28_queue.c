// IMPLEMENT QUEUE USING ARRAY

#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int *queue;
int Front = -1;
int Rear = -1;
void Enqueue(int ele)
{
    if (Rear >= MAX - 1)
    {
        printf("Queue Overflow condition :\n");
        return;
    }
    else if (Front == -1)
    {
        Front = Front + 1;
        Rear = Rear + 1;
    }
    else
    {
        Rear = Rear + 1;
    }
    queue[Rear] = ele;
}
int Dequeue()
{
    if (Front == -1)
    {
        return -1;
    }
    else if (Front == Rear)
    {
        int val = queue[Front];
        Rear = -1;
        Front = -1;
        return val;
    }
    else
    {
        int val = queue[Front];
        Front = Front + 1;
        return val;
    }
}
int size()
{
    return Rear - Front + 1;
}
int FrontItem()
{
    return queue[Front];
}
void Traversal()
{
    if (Front == -1)
    {
        printf("Queue is empty :\n");
        return;
    }
    else
    {
        for (int i = Front; i <= Rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}
int main()
{
    queue = (int *)malloc(MAX * sizeof(int));
    printf("Enter 1 for Enqueue :\n");
    printf("Enter 2 for Dequeue :\n");
    printf("Enter 3for Size of queue :\n");
    printf("Enter 4 for Front Item :\n");
    printf("Enter 5 for Traversal :'\n");
    int choice;
    do
    {
        printf("Enter  your choice:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            int ele;
            printf("Enter the element to be inserted :\n");
            scanf("%d", &ele);
            Enqueue(ele);
            break;
        }
        case 2:
        {
            int dequeue = Dequeue();
            if (dequeue == -1)
            {
                printf("Queue underflow :\n");
            }
            else
            {
                printf("Deleted Item is :%d\n", dequeue);
            }
            break;
        }
        case 3:
        {
            printf("Size of your queue is :%d\n", size());
            break;
        }
        case 4:
        {
            printf("Front Element is :%d\n", FrontItem());
            break;
        }
        case 5:
        {
            printf("Displaying your queue :\n");
            Traversal();
            break;
        }
        default:
        {
            printf("Invalid choice :\n");
            break;
        }
        }
    } while (choice != 0);

    return 0;
}