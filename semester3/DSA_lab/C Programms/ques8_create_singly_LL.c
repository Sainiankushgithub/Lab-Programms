#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next;
};
struct Node* Cerate_Singly_linkedList(struct Node*head,int value)
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
void traversal(struct Node*curr)
{
    while(curr!=NULL)
    {
        printf("%d ",curr->data);
        curr=curr->next;
    }
    printf("\n");
}
int main()
{
    struct Node*head=NULL;
    int node;
    printf("Enter the number of nodes you want to enter \n");
    scanf("%d",&node);
    printf("Enter the value of each node \n");
    for(int i=0;i<node;i++)
    {
        int x;
        scanf("%d",&x);
        head=Cerate_Singly_linkedList(head,x);
    }
    printf("Displaying your data :\n");
    traversal(head);
    return 0;
}