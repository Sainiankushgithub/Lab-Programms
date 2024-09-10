#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next;
};
struct Node*createNode(int value)
{
    struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
    if(temp==NULL)
    {
        printf("Memory allocation failed \n");
        exit(1);
    }
    temp->data=value;
    temp->next=NULL;
    return temp;
}
struct Node* CreatingList(struct Node*head,int value)
{
    if(head==NULL)
    {
        head=createNode(value);
    }
    else
    {
        struct Node*curr=head;
        while(curr->next!=NULL)
        {
            curr=curr->next;
        }
        curr->next=createNode(value);
    }
    return head;
}
int main()
{
    struct Node*head=(struct Node*)malloc(sizeof(struct Node));
    head=NULL;
    int n;
    printf("Enter the size of your list : \n");
    scanf("%d",&n);
    pritnf("Enter your linked list elemnts :\n");
    for(int i=0;i<n;i++)
    {
        int value;
        scanf("%d",&value);
        InsertFun(head,value);
    }
}