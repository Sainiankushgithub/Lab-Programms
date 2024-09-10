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
        printf("Memory Allocation failed : \n");
        exit(1);
    }
    temp->data=value;
    if(head==NULL)
    {
        head=temp;
        head->next=head;
        return head;
    }
    else
    {
        struct Node*curr=head;
        while(curr->next!=head)
        {
            curr=curr->next;
        }
        curr->next=temp;
        temp->next=head;
    }
    return head;
}
// struct Node*Insert_Given(int pos,int val)
// {
//     struct Node*curr=head;
//     struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
//     if(temp==NULL)
//     {
//         printf("Memory Allocation faield :\n");
//         exit(1);
//     }
//     temp->data=val;
//     if(pos==1)
//     {
//         while(curr->next!=head)
//         {
//             curr=curr->next;
//         }
//         curr->next=temp;
//         temp->next=head;
//         return temp;
//     }
//     for(int i=1;i<=pos-2&&curr!=head;i++)
//     {
//         curr=curr->next;
//     }
//         temp->next=curr->next;
//         curr->next=temp;
//     return head;
// }
struct Node*Insert_given(int pos,int ele)
{
    struct Node*curr=head;
    struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=ele;
    if(pos==1)
    {
        temp->next=head->next;
        head->next=temp;
        int t=head->data;
        head->data=temp->data;
        temp->data=t;
        return head;
    }
    for(int i=1;i<=pos-2&&curr!=NULL;i++)
    {
        curr=curr->next;
    }
    if(curr==head)
    {
        printf("Invalid Index :\n");
        return head;
    }
    temp->next=curr->next;
    curr->next=temp;
    return head;
}
void Traversal()
{
    struct Node*curr=head;
    do
    {
        printf("%d->",curr->data);
        curr=curr->next;
    } while (curr!=head);
    printf("head\n");
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
    printf("Displaying your Circular linked list data :\n");
    Traversal();
    int pos,value;
    printf("Enter the position :\n");
    scanf("%d",&pos);
    printf("Enter the value where you want to insert :\n");
    scanf("%d",&value);
    head=Insert_given(pos,value);
    printf("Updated Circular linked list :\n");
    Traversal();
    return 0;
}