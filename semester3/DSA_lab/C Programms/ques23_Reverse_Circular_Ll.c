#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next, *prev;
};
struct Node *head = NULL;
struct Node *Ceate_Cir_Doubly(int value)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    if (temp == NULL)
    {
        printf("Memory Allocatioin failed :\n");
        exit(1);
    }
    temp->data = value;
    if (head == NULL)
    {
        head = temp;
        head->next = head;
        head->prev = head;
    }
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
struct Node *reverse_List()
{
    struct Node *curr = head;
    do
    {
        printf("%d ", curr->prev->data);
        curr = curr->prev;
    } while (curr != head);
}
void Traversal()
{
    struct Node *curr = head;
    do
    {
        printf("%d <-> ", curr->data);
        curr = curr->next;
    } while (curr != head);
    printf("head\n");
}
int main()
{
    int node;
    printf("Enter the number of nodes :\n");
    scanf("%d", &node);
    printf("Enter the linked list elements ;\n");
    for (int i = 0; i < node; i++)
    {
        int x;
        scanf("%d", &x);
        head = Ceate_Cir_Doubly(x);
    }
    printf("Displaying your Circular linked list data :\n");
    Traversal();
    printf("Displaying your Circular linked list data in reverse :\n");
    reverse_List();
}