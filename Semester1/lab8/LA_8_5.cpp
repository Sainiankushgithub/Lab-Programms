// WAP to sort an array using Pointer.
#include<bits/stdc++.h>
using namespace std;
void sortarray(int *arr,int size);
void display(int *arr,int size);
int main()
{
    int size;
    printf("Enter the size of an array\n");
    scanf("%d",&size);
    int *arr;
    // arr=(int*)malloc(size*sizeof(int));
    printf("Enter the numbers of an elements\n");
    for(int i=0;i<size;i++)
    {                                                        // I CAN ALSO WRITE THIS WAY
        scanf("%d",arr+i);                                  // scanf("%d",&arr[i]);
    }
    printf("Displaying the array elements before sorting\n");
    display(arr,size);
    printf("Sorting the array in ascending order\n");
    sortarray(arr,size);
    display(arr,size);
return 0;
}
void sortarray(int *arr,int size)
{
    int sorted=0;
    for(int i=0;i<size;i++)
    {
        printf("Number of pass %d\n",i+1);
        for(int j=0;j<size-i-1;j++)
        {
            sorted=1;
            if(*(arr+j)>*(arr+j+1))
            {
                int temp=*(arr+j);
                *(arr+j)=*(arr+j+1);
                *(arr+j+1)=temp;
                sorted=0;
            }
        }
        if(sorted)
        {
            return;
        }
    }
}
void display(int *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\n",*(arr+i));
    }
}