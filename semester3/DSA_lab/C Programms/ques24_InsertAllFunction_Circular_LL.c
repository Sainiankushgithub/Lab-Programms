
// THIS CODE INCLUDE THE ALL OPERATION OF CIRCULAR DOUBLY LINKED LIST ONLY INSERTION (PART -1)

#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
struct Node *head = NULL;
struct Node *create_list(int val)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    if (temp == NULL)
    {
        printf("Memory Allocation failed :\n");
        exit(1);
    }
    temp->data = val;
    if (head == NULL)
    {
        head = temp;
        head->next = head;
        head->prev = head;
        return head;
    }
    else
    {
        struct Node *curr = head;
        while (curr->next != head)
        {
            curr = curr->next;
        }
        curr->next = temp;
        temp->prev = curr;
        temp->next = head;
        head->prev = temp;
    }
    return head;
}
struct Node *InsertAtBegin(int val)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = val;
    if (head == NULL)
    {
        head = temp;
        head->next = head;
        head->prev = head;
        return head;
    }
    else
    {
        temp->next = head->next;
        head->next = temp;
        int tempo = temp->data;
        temp->data = head->data;
        head->data = tempo;
        return head;
    }
}
struct Node *InsertAtEnd(int val)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = val;
    struct Node *curr = head;
    while (curr->next != head)
    {
        curr = curr->next;
    }
    curr->next = temp;
    temp->prev = curr;
    temp->next = head;
    head->prev = temp;
    return head;
}
struct Node*InsertAtGiven(int pos,int ele)
{
    struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=ele;
    if(pos==1)
    {
        head=InsertAtBegin(ele);
        return head;
    }
    else
    {
        struct Node*curr=head;
        for(int i=1;i<=pos-2&&curr->next!=head;i++)
        {
            curr=curr->next;
        }
        if(curr->next==head)
        {
            printf("Invalid Index :\n");
            return head;
        }
        temp->next=curr->next;
        curr->next->prev=temp;
        curr->next=temp;
        temp->prev=curr;
        return head;
    }
}
void Reverse_List()
{
    struct Node*curr=head;
    do
    {
        printf("%d->",curr->prev->data);
        curr=curr->prev;
    } while (curr!=head);
    printf("head\n");
}
void Traversal()
{
    struct Node *curr = head;
    do
    {
        printf("%d->", curr->data);
        curr = curr->next;
    } while (curr != head);
    printf("head\n");
}
int main()
{
    int nodes;
    printf("Enter the number of nodes :\n");
    scanf("%d", &nodes);
    printf("Enter each node data \n");
    for (int i = 0; i < nodes; i++)
    {
        int x;
        scanf("%d", &x);
        head = create_list(x);
    }
    printf("Displaying your each node data\n");
    Traversal();
    printf("Which operation you want to do in this linked list \n");
    printf("Enter 0 for exit \n");
    printf("Enter 1 for Insert at the begining \n");
    printf("Enter 2 for Insert at the end \n");
    printf("Enter 3 for Insert at any poistion \n");
    printf("Enter 4 for Reverse your linked list :\n");
    printf("Enter 5 for Displying your linked list :\n");
    int choice;
    do
    {
        printf("Enter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            int val;
            printf("Enter the which you want to insert at the begining \n");
            scanf("%d", &val);
            head = InsertAtBegin(val);
            break;
        }
        case 2:
        {
            int val;
            printf("Enter the which you want to insert at the End \n");
            scanf("%d", &val);
            head = InsertAtEnd(val);
            break;
        }
        case 3:
        {
            int pos,ele;
            printf("Enter the position where you want to insert :\n");
            scanf("%d",&pos);
            printf("Enter the element to be inserted at that poistion :\n");
            scanf("%d",&ele);
            head=InsertAtGiven(pos,ele);
            break;
        }
        case 4:
        {
            printf("Printing your List in reverse order :\n");
            Reverse_List();
            break;
        }
        case 5:
        {
            printf("Displaying your linked list :\n");
            Traversal();
            break;
        }
        default:
        {
            printf("Invalid entry:\n");
            break;
        }
        }
    } while (choice != 0);

    return 0;
}