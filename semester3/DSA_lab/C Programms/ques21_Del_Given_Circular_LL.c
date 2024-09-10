#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

struct Node *Create_List(int value)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    if (temp == NULL)
    {
        printf("Memory Allocation failed ;\n");
        exit(1);
    }
    temp->data = value;
    if (head == NULL)
    {
        head = temp;
        temp->next = head;
    }
    else
    {
        struct Node *curr = head;
        while (curr->next != head)
        {
            curr = curr->next;
        }
        curr->next = temp;
        temp->next = head;
    }
    return head;
}

struct Node *Del_Given(int pos)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return NULL;
    }

    if (pos == 1)
    {
        struct Node *temp = head;
        struct Node *curr = head;

        while (curr->next != head)
        {
            curr = curr->next;
        }

        if (curr == head) // If there is only one node
        {
            free(head);
            head = NULL;
        }
        else
        {
            head = head->next;
            curr->next = head;
            free(temp);
        }
    }
    else
    {
        struct Node *curr = head;
        struct Node *prev = NULL;
        int count = 1;

        while (count < pos && curr->next != head)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }

        if (count < pos)
        {
            printf("Position is out of bounds\n");
            return head;
        }

        prev->next = curr->next;
        free(curr);
    }

    return head;
}

void Traversal()
{
    struct Node *curr = head;
    if (head != NULL)
    {
        do
        {
            printf("%d->", curr->data);
            curr = curr->next;
        } while (curr != head);
    }
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
        head = Create_List(x);
    }
    printf("Displaying your Circular linked list data :\n");
    Traversal();
    int pos;
    printf("Enter the position from where you want to delete :\n");
    scanf("%d", &pos);
    head = Del_Given(pos);
    printf("Displaying after deleting the node from the given position Node :\n");
    Traversal();
    return 0;
}
