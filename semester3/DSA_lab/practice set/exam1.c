// INSERT AT ANY POSITION AND DELETE AT ANY POISTION OF DOUBLY LINKED LIST
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next;
    struct Node*prev;
};
struct Node*head=NULL;
void display()
{
    struct Node*curr=head;
    while(curr!=NULL)
    {
        printf("%d->",curr->data);
        curr=curr->next;
    }
    printf("NULL\n");
}
struct Node*Insert(int ele,int pos)
{
    struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
    if(temp==NULL)
    {
        exit(1);
    }
    temp->data=ele;
    if(head==NULL)
    {
        head=temp;
        head->prev=NULL;
        head->next=NULL;
        return head;
    }
    else if(pos==1)
    {
        temp->next=head;
        head->prev=temp;
        temp->prev=NULL;
        return temp;
    }
    else
    {
        struct Node*curr=head;
        for(int i=1;i<=pos-2&&curr!=NULL;i++)
        {
            curr=curr->next;
        }
        if(curr==NULL)
        {
            return NULL;
        }
        temp->next=curr->next;
        curr->next->prev=temp;
        curr->next=temp;
        temp->prev=curr;
    }
    return head;
}
struct Node*Delete(int pos)
{
    if(head==NULL)
    {
        return NULL;
    }
    if(pos==1)
    {
        struct Node*temp=head->next;
        temp->prev=NULL;
        free(head);
        head=temp;
        return head;
    }
    else
    {
        struct Node*curr=head;
        for(int i=1;i<=pos-2&&curr->next!=NULL;i++)
        {
            curr=curr->next;
        }
        if(curr==NULL)
        {
            return head;
        }
        struct Node*temp=curr->next;
        curr->next=curr->next->next;
        if (curr->next != NULL)
        {
            curr->next->prev = curr;
        }
        free(temp);
        return head;
    }
}
int main()
{
    head=(struct Node*)malloc(sizeof(struct Node));
    head->data=10;
    head->prev=NULL;
    head->next=(struct Node*)malloc(sizeof(struct Node));
    head->next->data=20;
    head->next->prev=head;
    head->next->next=(struct Node*)malloc(sizeof(struct Node));
    head->next->next->data=30;
    head->next->next->prev=head->next;
    head->next->next->next=NULL;
    display();
    // int ele,pos;
    // printf("Enter ele and pos :\n");
    // scanf("%d%d",&ele,&pos);
    // head=Insert(ele,pos);
    // display();
    int p;
    printf("enter pos to be deleted;\n");
    scanf("%d",&p);
    head=Delete(p);
    display();
    return 0;
}