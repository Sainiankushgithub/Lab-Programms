#include<stdio.h>
#include<stdlib.h>
#define cap 6
int top=-1;
int arr[cap];
void push(int ele)
{
    if(top==cap-1)
    {
        printf("Overflow\n");
        return ;
    }
    top++;
    arr[top]=ele;
}
void pop()
{
    if(top==-1)
    {
        printf("underflow \n");
        return ;
    }
    printf("Item poped : %d\n",arr[top]);
    top--;
}
void display()
{
    for(int i=0;i<=top;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main()
{
    int choice;
    do
    {
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                int ele;
                scanf("%d",&ele);
                push(ele);
                display();
                break;
            }
            case 2:
            {
                pop();
                display();
            }
            default :
            {
                break;
            }
        }
    } while (choice!=0);
    
    return 0;
}