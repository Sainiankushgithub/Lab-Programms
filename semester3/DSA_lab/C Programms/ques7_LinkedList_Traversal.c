
// LINKED LIST TRAVERSAL IN C PROGRAMMING 

#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next;
};
void Traversal(struct Node*curr)
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
    struct Node*head=(struct Node*)malloc(sizeof(struct Node));
    if(head==NULL)
    {
        printf("Memory Allocation failed \n");
        return 1;
    }
    head->data=10;
    head->next=(struct Node*)malloc(sizeof(struct Node));
    if(head->next==NULL)
    {
        printf("Memory Allocation failed \n");
        return 1;
    }
    head->next->data=20;
    head->next->next=(struct Node*)malloc(sizeof(struct Node));
    head->next->next->data=30;
    head->next->next->next=NULL;
    Traversal(head);
    free(head);
    return 0;
}