#include <stdio.h>
#include <stdlib.h>
#define Max 6
struct Que
{
    int Front;
    int Rear;
    int queue[Max];
} q;

void Enqueue(int ele)
{
    if (q.Front == -1)
    {
        q.Front = q.Front + 1;
        q.Rear = q.Rear + 1;
    }
    else if (q.Rear >= Max - 1)
    {
        printf("Stack overflow condition :\n");
        return;
    }
    else
    {
        q.Rear = q.Rear + 1;
    }
    q.queue[q.Rear] = ele;
}
int Dequeue()
{
    if (q.Front == -1)
    {
        printf("Queue underflow Condition :\n");
        return -1;
    }
    else if (q.Front == q.Rear)
    {
        int val = q.queue[q.Front];
        q.Front = -1;
        return val;
    }
    else
    {
        int val = q.queue[q.Front];
        q.Front = q.Front + 1;
        return val;
    }
}
int FrontItem()
{
    if (q.Front == -1)
    {
        return -1;
    }
    else
    {
        return q.queue[q.Front];
    }
}
int size()
{
    if (q.Front == -1)
    {
        return -1;
    }
    else
    {
        return q.Rear - q.Front + 1;
    }
}
void Traversal()
{
    if (q.Front == -1)
    {
        printf("Queue Underflow condition :\n");
        return;
    }
    else
    {
        printf("Displaying your Queue :\n");
        for (int i = q.Front; i <= q.Rear; i++)
        {
            printf("%d ", q.queue[i]);
        }
        printf("\n");
    }
}
int main()
{
    q.Front = -1;
    q.Rear = -1;
    printf("Enter 1 for Enqueue :\n");
    printf("Enter 2 for Dequeue :\n");
    printf("Enter 3 for Size of queue :\n");
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
            printf("Deleted Item is :%d\n", Dequeue());
            break;
        }
        case 3:
        {
            int Size = size();
            if (Size == -1)
            {
                printf("Queue underflow :\n");
            }
            else
            {
                printf("Size of youe Queue is : %d\n", Size);
            }
            break;
        }
        case 4:
        {
            int item = FrontItem();
            if (item == -1)
            {
                printf("Queue underflow :\n");
            }
            else
            {
                printf("Front item of your Queue is :%d\n", item);
            }
            break;
        }
        case 5:
        {
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