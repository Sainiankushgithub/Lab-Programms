/*Wap to implement binary search using recursion*/
#include<stdio.h>
 void bubblesort(int arr[],int size);
void binarysearch(int arr[],int low,int high,int key);
int main()
{
    int arr[100];
    int size;
    printf("Enbter the size\n");
    scanf("%d",&size);
    printf("Enter the number s of an elements\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    bubblesort(arr,size);
    int key;
    printf("Enter the element to be search\n");
    scanf("%d",&key);
    binarysearch(arr,0,size,key);
    return 0;
}
void bubblesort(int arr[],int size)
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
void binarysearch(int arr[],int low,int high,int key)
{
    int mid;
    mid=(low+high)/2;
    if(low>high)
    {
        printf("Key not found\n");
        return;
    }
    if(arr[mid]==key)
    {
        printf("Key found\n");
    }
    else if(arr[mid]>key)
    {
        binarysearch(arr,low,mid-1,key);
    }
    else if(arr[mid]<key)
    {
        binarysearch(arr,mid+1,high,key);
    }
}

