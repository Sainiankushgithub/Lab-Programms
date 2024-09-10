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
        printf("Memory Allocation failed exit \n");
        exit(1);
    }
    temp->data=value;
    if(head==NULL)
    {
        head=temp;
        head->next=NULL;
    }
    else
    {
        struct Node*curr=head;
        while(curr->next!=NULL)
        {
            curr=curr->next;
        }
        curr->next=temp;
        curr=curr->next;
        curr->next=NULL;
    }
    return head;
}
struct Node*DelGivenNode(int pos)
{
     if(pos==1)
     {
        struct Node*temp=head->next;
        free(head);
        return temp;
     }
     struct Node*curr=head;
     for(int i=1;i<=pos-2&&curr!=NULL;i++)
     {
        curr=curr->next;
     }
     if(curr==NULL)
     {
        printf("Invalid Index \n");
        return head;
     }
     struct Node*temp=curr->next;
     curr->next=curr->next->next;
     free(temp);
     return head;
}
void Traversal()
{
    struct Node*curr=head;
    while(curr!=NULL)
    {
        printf("%d->",curr->data);
        curr=curr->next;
    }
    printf("NULL\n");
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
    printf("Displaying your linked list data :\n");
    Traversal();
    int pos;
    printf("Enter the position from where you want to delete :\n");
    scanf("%d",&pos);
    head=DelGivenNode(pos);
    printf("Displaying thelinked list after deleting the first Node :\n");
    Traversal();
    return 0;
}