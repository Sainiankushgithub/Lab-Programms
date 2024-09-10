#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int n;
void Insertion(int *arr,int pos,int ele)
{
    for(int i=n-1;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=ele;
    n++;
}
void deletion(int *arr,int pos)
{
    for(int i=pos-1;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
}
bool search(int *arr,int ele)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==ele)
        {
            return true;
        }
    }
    return false;
}
void display(int *arr)
{
    printf("Displaying  your array elements :  ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main()
{
    int *arr;
    printf("Enter the size of your array \n");
    scanf("%d",&n);
    printf("Enter the array elements : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter + for insertion \nEnter - for deletion \nEnter = for searching \nEnter d for display \n Enter c for clear screen \nEnter ! for exit \n");
    char choice;
    do
    {
        printf("Enter the choice : \n");
        scanf(" %c",&choice);
        switch (choice)
        {
            case '+':
            {
                int pos,ele;
                printf("Enter the position where you want to insert : ");
                scanf("%d",&pos);
                printf("Enter the element ot be inserted : ");
                scanf("%d",&ele);
                Insertion(arr,pos,ele);
                break;
            }
            case 'd':
            case 'D':
            {
                display(arr);
                break;
            }
            case '-':
            {
                int pos;
                printf("Enter the position where you want to delete the element : ");
                scanf("%d",&pos);
                deletion(arr,pos);
                break;
            }
            case '=':
            {
                int ele;
                printf("Enter the element to be searched : ");
                scanf("%d",&ele);
                if(search(arr,ele))
                {
                    printf("Entered element %d found !!! \n",ele);
                }
                else{
                    printf("Entered element %d not found !!! \n",ele);
                }
                break;
            }
            case 'c':
            case 'C':
            {
                system("cls");
                break;
            }
            default:
            printf("Invalid entry : \n");
            break;
        }
    } while (choice!='!');
    
    return 0;
}