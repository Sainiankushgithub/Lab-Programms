// WAP TO IMPLEMENT BUBBLE SORT USING FUNCTION
#include<stdio.h>
#define s 100
void bubble_sort(int arr[],int size);
void display(int arr[], int size);
int main()
{
    int arr[s];
    int size;
    printf("Enter the size of an array\n");
    scanf("%d",&size);
    printf("Enter the numbers of an elements\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Displaying your array\n");
    display(arr,size);
    bubble_sort(arr,size);
    printf("Displaying the elements in ascending order\n");
    display(arr,size);
}
void bubble_sort(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void display(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
        printf("\n");
    }
}