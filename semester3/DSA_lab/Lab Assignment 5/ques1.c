// 5.1 Write a program to create a double linked list and perform the following menu based operations on it:
// i. insert an element at specific position 
// ii. delete an element from specific position
// iii. Traverse the list

#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next,*prev;
};
struct Node*head=NULL;
struct Node*Create_Doubly_list(int val)
{
    struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
    if(temp==NULL)
    {
        printf("Memory Allocation Failed :\n");
        exit(1);
    }
    temp->data=val;
    if(head==NULL)
    {
        head=temp;
        head->next=NULL;
        head->prev=NULL;
    }
    else
    {
        struct Node*curr=head;
        while(curr->next!=NULL)
        {
            curr=curr->next;
        }
        curr->next=temp;
        curr->next->prev=curr;
        curr->next->next=NULL;
        curr->next->next->prev=curr->next;
    }
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
    printf("Enter the doubly linked list elements :\n");
    for(int i=0;i<node;i++)
    {
        int x;
        scanf("%d",&x);
        head=Create_Doubly_list(x);
    }
    printf("Displaying your doubly linked list :\n");
    Traversal();
}