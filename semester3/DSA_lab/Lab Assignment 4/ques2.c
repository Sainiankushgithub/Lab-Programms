/*In addition to 4.1,perform following operations using function on the single linked list:
i. search an element in the list
ii. sort the list in ascending order
iii. reverse the list*/
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
void search()
{
    struct node *ptr;
    int ele;
    printf("enter the element to search:");
    scanf("%d",&ele);
    int pos=1;
    ptr=head;
    while(ptr!=NULL)
    {
        if(ptr->info==ele)
        {
            printf("%d is present at position %d",ele,pos);
            return;
        }
        ptr=ptr->next;
        pos++;
    }
}
void sort()
{
    struct node *ptr, *newnode, *prev;
    ptr=head;
    while(ptr->next!=NULL)
    {
        prev=ptr->next;
        while(prev!=NULL)
        {
            if(ptr->info>prev->info)
            {
                int temp=ptr->info;
                ptr->info=prev->info;
                prev->info=temp;
            }
           prev=prev->next;
        }
        ptr=ptr->next;
    }
}
void reverse()
{
    struct node *p1, *p2, *p3;
    p1=head;
    p2=p1->next;
    p3=p2->next;
    p1->next=NULL;
    while(p2!=NULL)
    {
        p2->next=p1;
        p1=p2;
        p2=p3;
        if(p3!=NULL)
        {
            p3=p3->next;
        }
    }
    head=p1;
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
    printf("5.search an element in the list\n");
    printf("6.sort the list in ascending order\n");
    printf("7.reverse the list\n");
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
        case 5:
        search();
        break;
        case 6:
        printf("original list is:\n");
        traverse();
        sort();
        printf("\nthe list after sorting in ascending order:\n");
        traverse();
        break;
        case 7:
        //printf("original list is:\n");
        //traverse();
        reverse();
        printf("the list after reversing is:\n");
        traverse();
        break;
        default:
        printf("invalid input");
    }
    printf("\nenter 1 to continue:\n");
    scanf("%d",&ch);
    }while(ch==1);
}