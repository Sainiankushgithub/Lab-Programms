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
struct Node*Insert_given_pos(int pos,int ele)
{
    struct Node*curr=head;
    struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=ele;
    if(pos==1)
    {
        temp->next=head;
        return temp;
    }
    for(int i=1;i<=pos-2&&curr!=NULL;i++)
    {
        curr=curr->next;
    }
    if(curr==NULL)
    {
        printf("Invalid position \n");
        return head;
    }
    temp->next=curr->next;
    curr->next=temp;
    return head;
}
void Traversal()
{
    struct Node*curr=head;
    while(curr!=NULL)
    {
        printf("%d ",curr->data);
        curr=curr->next;
    }
    printf("\n");
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
    int pos,ele;
    printf("Enter the position where you want to insert :\n");
    scanf("%d",&pos);
    printf("Enter the element to be inserted : \n");
    scanf("%d",&ele);
    head=Insert_given_pos(pos,ele);
    printf("Displaying your linked list data after inserting at the given position :\n");
    Traversal();
    return 0;
}