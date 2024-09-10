#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next;
    struct Node*prev;
};
typedef struct Node node;
node*head=NULL;
node*Create_List(int val)
{
    node*temp=(node*)malloc(sizeof(node));
    if(temp==NULL)
    {
        printf("Memory Allocation failed :\n");
        exit(1);
    }
    temp->data=val;
    temp->next=NULL;
    temp->prev=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        node*curr=head;
        while(curr->next!=NULL)
        {
            curr=curr->next;
        }
        curr->next=temp;
        temp->prev=curr;
    }
    return head;
}
node*InsertBegin(int val)
{
    node*temp=(node*)malloc(sizeof(node));
    if(temp==NULL)
    {
        printf("Memory Allocation failed :\n");
        exit(1);
    }
    temp->data=val;
    temp->next=NULL;
    temp->prev=NULL;
    if(head==NULL)
    {
    
    }
}
void display()
{
    node*curr=head;
    while(curr->next!=NULL)
    {
        printf("%d->",curr->data);
        curr=curr->next;
    }
    printf("%d->NULL\n",curr->data);
    printf("Displaying it reverse :\n");
    while(curr!=NULL)
    {
        printf("%d->",curr->data);
        curr=curr->prev;
    }
    printf("NULL\n");
}
int main()
{
    int node;
    printf("Enter the number of nodes :\n");
    scanf("%d",&node);
    printf("Enter the eazchn node data :\n");
    for(int i=0;i<node;i++)
    {
        int x;
        scanf("%d",&x);
        head=Create_List(x);
    }
    printf("Displaying your linked list data :\n");
    display();
    return 0;
}