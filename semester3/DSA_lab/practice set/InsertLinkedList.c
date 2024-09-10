#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next;
    struct Node*prev;
};
struct Node*Create_List(struct Node*head,int x)
{
    struct Node*curr=(struct Node*)malloc(sizeof(struct Node));
    curr->data=x;
    curr->next=NULL;
    curr->prev=NULL;
    if(head==NULL)
    {
        head=curr;
        return head;
    }
    else
    {
        struct Node*ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=curr;
        curr->prev=ptr;
        return head;
    }
}
void Display(struct Node*head)
{
    while(head!=NULL)
    {
        printf("%d<-> ",head->data);
        head=head->next;
    }
    printf("NULL\n");
}
int main()
{
    struct Node*head=NULL;
    int node;
    printf("Enter the numbers of nodes you want to enter \n");
    scanf("%d",&node);
    printf("Enter the data of each node \n");
    for(int i=0;i<node;i++)
    {
        int x;
        scanf("%d",&x);
        head=Create_List(head,x);
    }
    printf("Displaying your data \n");
    Display(head);
    return 0;
}