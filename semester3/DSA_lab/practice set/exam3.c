
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
    struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=val;
    temp->next=top;
    top=temp;
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
struct Node*pop()
{
    if(top==NULL)
    {
        printf("Cannot pop item\n");
    }
    struct Node*temp=top;
    printf("poped item is : %d\n",top->data);
    top=top->next;
    free(temp);
    return top;
}
void push(int val)
{
    top=Create_List(val);
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
    top=pop();
    Traversal();
    push(5);
    Traversal();
    printf("Top value of stack is : %d\n",top->data);
    return 0;
}