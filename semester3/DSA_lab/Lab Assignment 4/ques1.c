#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int info;
    struct node *next;
};
struct node *head=NULL;
void create_list(int n)
{
    struct node *newnode, *ptr;
    ptr=head;
    for(int i=1;i<=n;i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        if(newnode->next==NULL)
        {
            printf("overflow!");
        }
        else
        {
            printf("enter info of newnode:");
            scanf("%d",&newnode->info);
            newnode->next=NULL;
            if(head==NULL)
            {
                head=newnode;
                ptr=newnode;
            }
            else
            {
                ptr->next=newnode;
                ptr=newnode;
            }
        }
    }
}
void insert_spec()
{
    struct node *newnode, *ptr;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("enter the info of newnode:");
    scanf("%d",&newnode->info);
    ptr=head;
    int pos;
    printf("enter the position:");
    scanf("%d",&pos);
    for(int i=1;i<pos-1 && ptr!=NULL;i++)
    {
        ptr=ptr->next;
    }
    newnode->next=ptr->next;
    ptr->next=newnode;
}
void delete_spec()
{
    struct node *prev, *ptr;
    int pos;
    printf("enter the position of node to delete:");
    scanf("%d",&pos);
    ptr=head;
    for(int i=1;i<pos-1 && ptr!=NULL;i++)
    {
        //prev=ptr->next;
        ptr=ptr->next;
    }
    prev=ptr->next;
    ptr->next=prev->next;
    free(prev);
}
int count()
{
    struct node *ptr;
    ptr=head;
    int c=0;
    while(ptr!=NULL)
    {
        ptr=ptr->next;
        c++;
    }
    return c;
}
void traverse()
{
    struct node *ptr;
    ptr=head;
    while(ptr->next!=NULL)
    {
        printf("%d->",ptr->info);
        ptr=ptr->next;
    }
    printf("%d",ptr->info);
}
int main()
{
    int n;
    printf("enter the number of nodes:");
    scanf("%d",&n);
    create_list(n);
    int ch,choice;
    do
    {
    printf("MENU:\n");
    printf("1.insert the node at specific position\n");
    printf("2.Deletion of an element from specific position\n");
    printf("3.Count nodes\n");
    printf("4.traverse the list\n");
    printf("enter the option:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("original list is:\n");
        traverse();
        insert_spec();
        printf("list after insertion:\n");
        traverse();
        break;
        case 2:
        printf("original list is:\n");
        traverse();
        delete_spec();
        printf("list after deletion:\n");
        traverse();
        break;
        case 3:
        int ans=count();
        printf("no of nodes is %d.",ans);
        break;
        case 4:
        printf("traversing the list:\n");
        traverse();
        break;
        default:
        printf("invalid input");
        
    }
    printf("\nenter 1 to continue:\n");
    scanf("%d",&ch);
    }while(ch==1);
}