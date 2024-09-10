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
    if(head==NULL)
    {
        head=(struct Node*)malloc(sizeof(struct Node));
        head->data=value;
        head->next=NULL;
        temp=NULL;
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=(struct Node*)malloc(sizeof(struct Node));
        temp=temp->next;
        temp->data=value;
        temp->next=NULL;
    }
    return head;
}
struct Node*DelLastNode()
{
    if(head->next==NULL)
    {
        free(head);
        return NULL;
    }
    struct Node*curr=head;
    while(curr->next->next!=NULL)
    {
        curr=curr->next;
    }
    free(curr->next);
    curr->next=NULL;
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
    printf("Displaying thelinked list after deleting the first Node :\n");
    head=DelLastNode();
    Traversal();
    return 0;
}