// Write a program to represent the polynomial equation of single 
// variable using single linked list and perform the addition of two polynomial equations.
#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *next;
    int coeff;
    int expo;
};
struct node *head=NULL;
struct node *head1=NULL;
struct node *head2=NULL;
struct node *head3=NULL;
struct node* create_list(int n,struct node *head)
{
    struct node *newnode, *ptr;
    ptr=head;
    for(int i=n;i>=0;i--)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("enter coefficient of power %d:",i);
        scanf("%d",&newnode->coeff);
        newnode->expo=i;
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            ptr=newnode;
        }
        else
        {
            ptr->next=newnode;
            ptr=newnode;
        }
    }
    return head;
}
struct node* sum()
{
    struct node *newnode,*ptr3=head3, *ptr1=head1, *ptr2=head2;
    while(ptr1!=NULL && ptr2!=NULL)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->next = NULL;
        if(ptr1->expo>ptr2->expo)
        {
            newnode->coeff=ptr1->coeff;
            newnode->expo=ptr1->expo;
            ptr1=ptr1->next;
        }
        else if(ptr1->expo<ptr2->expo)
        {
            newnode->coeff=ptr2->coeff;
            newnode->expo=ptr2->expo;
            ptr2=ptr2->next;
        }
        else
        {
            newnode->coeff=ptr1->coeff + ptr2->coeff;
            newnode->expo=ptr1->expo;
            ptr2=ptr2->next;
            ptr1=ptr1->next;
        }
        if(head3==NULL)
        {
            head3=newnode;
            ptr3=newnode;
        }
        else
        {
            ptr3->next=newnode;
            ptr3=newnode;
        }
    }
    while(ptr1!=NULL)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->next=NULL;
        newnode->coeff=ptr1->coeff;
        newnode->expo=ptr1->expo;
        ptr1=ptr1->next;
        if(head3==NULL)
        {
            head3=newnode;
            ptr3=newnode;
        }
        else
        {
            ptr3->next=newnode;
            ptr3=newnode;
        }
    }
    while(ptr2!=NULL)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->next=NULL;
        newnode->coeff=ptr2->coeff;
        newnode->expo=ptr2->expo;
        ptr2=ptr2->next;
        if(head3==NULL)
        {
            head3=newnode;
            ptr3=newnode;
        }
        else
        {
            ptr3->next=newnode;
            ptr3=newnode;
        }
    }
    return head3;
}
void polynomial_traverse(struct node *head)
{
    struct node *ptr=head;
    while(ptr->next!=NULL)
    {
        printf("%dx^%d + ",ptr->coeff,ptr->expo);
        ptr=ptr->next;
    }
    printf("%dx^%d\n ",ptr->coeff,ptr->expo);
}
int main()
{
    int n1,n2;
    printf("enter the degree of first polynomial:");
    scanf("%d",&n1);
    head1=create_list(n1,head1);
    printf("the first polynomial is:\n");
    polynomial_traverse(head1);
    printf("enter the degree of second polynomial:");
    scanf("%d",&n2);
    head2=create_list(n2,head2);
    printf("\nthe second polynomial is:\n");
    polynomial_traverse(head2);
    head3=sum();
    printf("\nsum:\n");
    polynomial_traverse(head3);
}