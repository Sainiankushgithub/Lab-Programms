// REPRESENT A POLYNOMIAL USING LINKED LIST 
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int expo;
    int coff;
    struct Node*next;
};
struct Node*head=NULL;
struct Node*Insert(int ex,int cof)
{
    struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
    temp->coff=cof;
    temp->expo=ex;
    temp->next=NULL;
    if(head==NULL||ex>head->expo)
    {
        head=temp;
        return head;
    }
    else
    {
        struct Node*curr=head;
        while(curr->next!=NULL&&ex<curr->expo)
        {
            curr=curr->next;
        }
        curr->next=temp;
        return head;
    }
}
void display()
{
    struct Node*curr=head;
    while(curr!=NULL)
    {
        printf("%dx^%d->",curr->coff,curr->expo);
        curr=curr->next;
    }
    printf("NULL\n");
}
int main()
{
    int n;
    printf("Enter the numbers of nodes:\n");
    scanf("%d",&n);
    int ex,coff;
    for(int i=0;i<n;i++)
    {
    printf("Enter the data for coff :\n");
    scanf("%d",&coff);
    printf("Enter the data for expo  :\n");
    scanf("%d",&ex);
    head=Insert(ex,coff);
    }
    display();
    return 0;
}