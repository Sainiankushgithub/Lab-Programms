// WAP TO SORT THREE ELEMENT SORTED IN AN ARRAY WITHOUT USING ANY SORTING ALGORITHM
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100];
    int size;
    int temp;
    printf("Enter the size of an array\n");
    scanf("%d",&size);
    printf("Enter the number of an elements\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Your entered elements are\n");
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
        printf("\n");
    }
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
        if(arr[i]>arr[j])
        {
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
    }
    printf("Sorting array\n");
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
        printf("\n");
    }
return 0;}