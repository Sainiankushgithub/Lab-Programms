#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int expo;
    int coff;
    struct Node*next;
};
struct Node*Insert(struct Node*head1,int ex,int cof)
{
    struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
    temp->coff=cof;
    temp->expo=ex;
    temp->next=NULL;
    if(head1==NULL||ex>head1->expo)
    {
        head1=temp;
        return head1;
    }
    else
    {
        struct Node*curr=head1;
        while(curr->next!=NULL&&ex<curr->expo)
        {
            curr=curr->next;
        }
        curr->next=temp;
        return head1;
    }
}
void display(struct Node*head)
{
    struct Node*curr=head;
    while(curr!=NULL)
    {
        printf("%dx^%d->",curr->coff,curr->expo);
        curr=curr->next;
    }
    printf("NULL\n");
}
struct Node*AddTwo(struct Node*head1,struct Node*head2)
{
    struct Node*result=NULL;
    while(head1!=NULL&&head2!=NULL)
    {
        if(head1->expo==head2->expo)
        {
            result=Insert(result,head1->expo,head1->coff+head2->coff);
            head1=head1->next;
            head2=head2->next;
        }
        else if(head1->expo>head2->expo)
        {
            result=Insert(result,head1->expo,head1->coff);
            head1=head1->next;
        }
        else
        {
            result=Insert(result,head2->expo,head2->coff);
            head2=head2->next;
        }
    }
    while(head1!=NULL)
    {
        result=Insert(result,head1->expo,head1->coff);
        head1=head1->next;
    }
    while(head2!=NULL)
    {
        result=Insert(result,head2->expo,head2->coff);
        head2=head2->next;
    }
    return result;
}
int main()
{
    struct Node*head1=NULL;
    struct Node*head2=NULL;
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
    head1=Insert(head1,ex,coff);
    }
    int n1;
    printf("Enter the numbers of nodes:\n");
    scanf("%d",&n);
    int ex1,coff1;
    for(int i=0;i<n;i++)
    {
    printf("Enter the data for coff :\n");
    scanf("%d",&coff1);
    printf("Enter the data for expo  :\n");
    scanf("%d",&ex1);
    head2=Insert(head2,ex1,coff1);
    }
    display(head1);
    display(head2);
    printf("result\n");
    struct Node*result=AddTwo(head1,head2);
    display(result);
    return 0;
}