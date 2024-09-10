#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next;
};
struct Node*head=NULL;
struct Node*Create_List(int value)
{
    struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
    if(temp==NULL)
    {
        printf("Memory Allocation failed \n");
        exit(1);
    }
    temp->data=value;
    if(head==NULL)
    {
        head=temp;
        head->next=head;
    }
    else
    {
    struct Node*curr=head;
    while(curr->next!=head)
    {
        curr=curr->next;
    }
    curr->next=temp;
    curr=curr->next;
    curr->next=head;
    }
    return head;
}
struct Node*Insert_End(int value)
{
    struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=value;
    struct Node*curr=head;
    while(curr->next!=head)
    {
        curr=curr->next;
    }
    curr->next=temp;
    temp->next=head;
    return head;
}
void Traversal()
{
    struct Node*curr=head;
    do
    {
        printf("%d->",curr->data);
        curr=curr->next;
    }while(curr!=head);
    printf("head\n");
}
int main()
{
    int node;
    printf("Enter the number of nodes :\n");
    scanf("%d",&node);
    printf("Enter the linked list elements ;\n");
    for(int i=0;i<node;i++)
    {
        int x;
        scanf("%d",&x);
        head=Create_List(x);
    }
    printf("Displaying your Circular linked list data :\n");
    Traversal();
    int val;
    printf("Enter the value which you want to insert at the End :\n");
    scanf("%d",&val);
    head=Insert_End(val);
    printf("Displaying your data after inserting at the End :\n");
    Traversal();
    free(head);
    return 0;
}