// WAP TO PERFORM ALL THE OPERATION OF STACK USING LINKED LIST 
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next;
};
struct Node*top=NULL;
void Pushelement(int x)
{
    struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=x;
    temp->next=top;
    top=temp;

}
int main()
{
    printf("\t\t***************** Stack operations using linked list ****************** \n");
    printf("Press 1 for push an element in linked list \n");
    printf("Press 2 for pop an element in linked list \n");
    printf("Pres 3 for Displaying your linked list data \n");
    int choice;
    do
    {
        printf("Enter your choice : \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                printf("Enter the element you want to insert \n");
                int x;
                scanf("%d",&x);
                Pushelement(x);
                break;
            }
        }
    } while (choice!=4);
    
    return 0;
}