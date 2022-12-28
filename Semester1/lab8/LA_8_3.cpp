// WAP to display values in reverse order from an integer array using pointer.
#include<bits/stdc++.h>
using namespace std;
 void reversearray(int *arr,int size);
int main()
{
    int size;
    printf("Enter the size of an array\n");
    scanf("%d",&size);
    int *arr;
    arr=(int *)malloc(size*sizeof(int));
    printf("Enter the numbers of an elements \n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",arr+i);
    }
    reversearray(arr,size);
return 0;
}
void reversearray(int *arr,int size)
{
    printf("Displaying the array in revese order\n");
    for(int i=size-1;i>=0;i--)
    {
        printf("%d\n",*(arr+i));
    }
}