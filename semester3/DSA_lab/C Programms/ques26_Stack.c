#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct Stak
{
    int top;
    int *arr;
    int capacity;
}s;
void push(int value)
{
    if(s.top==s.capacity-1)
    {
        printf("Element cannot be pushed :\n");
        printf("\tStack Overflow :\n");
    }
    else
    {
        s.top++;
        s.arr[s.top]=value;
    }
}
int pop()
{
    if(s.top==-1)
    {
        printf("Element cannot be poped :\n");
        printf("\tStack underflow :\n");
        return -1;
    }
    else
    {
        int value=s.arr[s.top];
        s.top--;
        return value;
    }
}
int peek()
{
    return s.arr[s.top];
}
int size()
{
    return s.top+1;
}
void display()
{
    for(int i=0;i<=s.top;i++)
    {
        printf("%d ",s.arr[i]);
    }
    printf("\n");
}
int main()
{
    int n;
    s.top=-1;
    printf("Enter the capacity of your stack :\n");
    scanf("%d",&s.capacity);
    s.arr=(int *)malloc(s.capacity*sizeof(int));
    printf("Enter 0 for exit \nEnter the 1 for push \nEnter 2 for pop \nEnter 3 for peek \nEnter 4 for size \n Enter 5 for display\n");
    int choice;
    do
    {
        printf("Enter your choice :\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 0:
            {
                break;
            }
            case 1:
            {
                int ele;
                printf("Enter the element to be pushed :\n");
                scanf("%d",&ele);
                push(ele);
                break;
            }
            case 2:
            {
                int popval=pop();
                if(popval==-1)
                {
                    printf("Item cannot be poped :\n");
                    printf("Stack underflow :\n");
                }
                else
                {
                    printf("poped element is : %d \n",popval);
                }
                break;
            }
            case 3:
            {
                printf("Top item of the stack is : %d \n",peek());
                break;
            }
            case 4:
            {
                printf("Size of stack : %d \n",size());
                break;
            }
            case 5:
            {
                printf("Displaying your data :\n");
                display();
                break;
            }
            default :
            {
                printf("Invalid entry :\n");
                break;
            }
        }
    } while (choice!=0);
    
    return 0;
}