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
struct Node*InsertAtAnypoint(struct Node*head,int x,int pos)
{
    struct Node*curr=(struct Node*)malloc(sizeof(struct Node));
    curr->data=x;
    curr->next=NULL;
    curr->prev=NULL;
    //  CASE 1 :
    if(head==NULL)
    {
        head=curr;
        return head;
    }
    // CASE 2:
    if(pos==1)
    {
        curr->next=head;
        head->prev=curr;
        return curr;
    }
    // CASE 3 :
    else
    {
        struct Node*ptr=head;
        for(int i=1;i<=pos-2&&ptr!=NULL;i++)
        {
            ptr=ptr->next;
        }
        if(ptr==NULL)
        {
            return NULL;
        }
        curr->next=ptr->next;
        ptr->next=curr;
        ptr->next->prev=curr;
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
    int pos,x;
    printf("Enter the positin where you want to insert the Element \n");
    scanf("%d",&pos);
    printf("Enter the element you want to insert at that position \n");
    scanf("%d",&x);
    head=InsertAtAnypoint(head,x,pos);
    printf("Displaying the linked list after insertion \n");
    Display(head);
    return 0;
}