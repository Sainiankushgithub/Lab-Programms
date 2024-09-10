// DYNAMIC MEMORY ALLOCATION 
/*
 1.MALLOC()
 2.CALLOC()
 3.REALLOC()
 4.FREE()
*/

// MALLOC DONE 

#include<stdio.h>
#include<stdlib.h>
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
    int *arr;
    printf("Enter the size of an array :\n");
    scanf("%d",&n);
    arr=(int *)calloc(n,sizeof(int));
    printf("Enter the array elements : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Displaying your array elements :\n");
    display(arr,n);
    printf("Enter the new size of an array :\n");
    scanf("%d",&n);
    arr=(int*)realloc(arr,n*sizeof(int));
    printf("Enter the new elements of an array :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Dispalying your new array elements : \n");
    display(arr,n);
    free(arr);
    return 0;
}