// INSERT INTHE BEGINNING OF THE SINGLY LINKEED LIST 

#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next;
};
struct Node*head=NULL;
struct Node*InsertBegin(int value)
{
    struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=value;
    temp->next=head;
    return temp;
}
struct Node*Creatre_List(int value)
{
    struct Node*temp;
    if(head==NULL)
    {
        head=(struct Node*)malloc(sizeof(struct Node));
        head->data=value;
        head->next=NULL;
        temp=head;
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
void Traversal(struct Node*curr)
{
    while (curr!=NULL)
    {
        printf("%d ",curr->data);
        curr=curr->next;
    }
    printf("\n");
    
}
int main()
{
    int node;
    printf("Enter the numbers of nodes :\n");
    scanf("%d",&node);
    printf("Enter linked list elements :\n");
    for(int i=0;i<node;i++)
    {
        int x;
        scanf("%d",&x);
        head=Creatre_List(x);
    }
    printf("Displaying your list before Inserting at the first :\n");
    Traversal(head);
    int value;
    printf("Enter the value which you want to insert at the beginning :\n");
    scanf("%d",&value);
    head=InsertBegin(value);
    printf("Displaying your Linked List after inserting at the begnning :\n");
    Traversal(head);
}