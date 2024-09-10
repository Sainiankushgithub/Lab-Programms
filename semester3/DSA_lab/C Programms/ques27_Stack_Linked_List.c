
//  STACK IMPLEMENTATION USING LINKED LIST 

#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next;
};
struct Node*top=NULL;
struct Node*Create_List(int val)
{
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    if(newNode==NULL)
    {
        printf("Memory Allocation failed :\n");
        exit(1);
    }
    newNode->data=val;
    newNode->next=top;
    top=newNode;
    return top;
}
void Traversal()
{
    struct Node*curr=top;
    while(curr!=NULL)
    {
        printf("%d->",curr->data);
        curr=curr->next;
    }
    printf("NULL\n");
}
int main()
{
    int nodes;
    printf("Enter the number of nodes :\n");
    scanf("%d",&nodes);
    printf("Enter the values of your linked list using stack :\n");
    for(int i=0;i<nodes;i++)
    {
        int x;
        scanf("%d",&x);
        top=Create_List(x);
    }
    printf("Traversal of Stack linked list :\n");
    Traversal();
    printf("Top value of stack is : %d\n",top->data);
    return 0;
}