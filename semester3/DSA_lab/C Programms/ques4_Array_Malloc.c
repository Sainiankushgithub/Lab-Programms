#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int Insertion(int *arr,int n,int pos ,int ele)
{
    if(pos<0||pos>n)
    {
        return -1;
    }
    for(int i=n-1;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=ele;
    return ++n;
}
int Deletion(int *arr,int n,int pos)
{
    if(pos<0||pos>n)
    {
        return -1;
    }
    for(int i=pos-1;i<n;i++)
    {
        arr[i]=arr[i+1];
    }

    // n--;
    // return n;

    return --n;
}
bool search(int *arr,int n,int ele)
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
void display(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main()
{
    int n;
    printf("Enter the size of your array :\n");
    scanf("%d",&n);
    int *arr;
    arr=(int *)malloc(n*sizeof(int));
    printf("Enter the array elements : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter + for insertion \nEnter - for deletion \nEnter = for searching \nEnter d for display \n Enter c for clear screen \nEnter ! for exit \n");
    char choice;
    do
    {
        printf("Enter the choice : " );
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
                int size=Insertion(arr,n,pos,ele);
                if(size==-1)
                {
                    printf(" Invalid index input : \n");
                }
                else
                {
                    printf("Element Inserted successfully :\n");
                    n=size;
                }
                break;
            }
            case '-':
            {
                int pos;
                printf("Enter the position where you want to delete the element : ");
                scanf("%d",&pos);
                int size=Deletion(arr,n,pos);
                if(size==-1)
                {
                    printf(" Invalid index input : \n");
                }
                else
                {
                    printf("Element Deleterd successfully :\n");
                    n=size;
                }
                break;
            }
            case 'd':
            case 'D':
            {
                display(arr,n);
                break;
            }
            case '=':
            {
                int ele;
                printf("Enter the element to be searched : ");
                scanf("%d",&ele);
                if(search(arr,n,ele))
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
            case '!':
            break;
            default :
            {
                printf("Invalid entry : \n");
                break;
            }
        }
    } while (choice!='!');
    free(arr);
    return 0;
}